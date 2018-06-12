/*
wifi-irrigation project for Particle Photon
Copyright 2018 Michael Greene
https://mike-greene.com/wifi-irrigation

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this 
file except in compliance with the License. You may obtain a copy of the License at:
http://www.apache.org/licenses/LICENSE-2.0
        
Unless required by applicable law or agreed to in writing, software distributed under 
the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF 
ANY KIND, either express or implied. See the License for the specific language governing 
permissions and limitations under the License.
*/

// This #include statement was automatically added by the Particle IDE.
#include "RelayShield.h"

// create an instance of the RelayShield library for the valves
RelayShield valveRelays;

// create function methods and an array to track relay state
int relayOn(String command);
int relayOff(String command);
int relayState[] = {0, 0, 0, 0, 0};

// select the u.FL antenna
STARTUP(WiFi.selectAntenna(ANT_EXTERNAL));

void setup() {
    valveRelays.begin();
    Particle.function("relayOn", relayOn);
    Particle.function("relayOff", relayOff);

    Particle.variable("valve1", &relayState[1], INT);
    Particle.variable("valve2", &relayState[2], INT);
    Particle.variable("valve3", &relayState[3], INT);
    Particle.variable("valve4", &relayState[4], INT);
}

void loop() {
    // nothing needed here, functions will run when called via the API
}

// define relayOn method
int relayOn(String command){
    Particle.publish("Valve On", command);
    
    // convert char command to valve integer
    char inputStr[64];
    command.toCharArray(inputStr,64);
    int i = atoi(inputStr);

    // turn the desired relay on
    valveRelays.on(i);
    relayState[i] = 1;

    // respond when successful
    return 1;
}

// define relayOff method
int relayOff(String command){
    Particle.publish("Valve Off", command);
    
    // convert char command to valve integer
    char inputStr[64];
    command.toCharArray(inputStr,64);
    int i = atoi(inputStr);

    // turn the desired relay off
    valveRelays.off(i);
    relayState[i] = 0;

    // respond when successful
    return 1;
}