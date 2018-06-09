/*

wifi-irrigation project for Particle Photon
Copyright 2018 Michael Greene
https://mike-greene.com/wifi-irrigation

Licensed under the Apache License, Version 2.0 (the "License"); you may not use this 
file except in compliance with the License. You may obtain a copy of the License at:
ttp://www.apache.org/licenses/LICENSE-2.0
        
Unless required by applicable law or agreed to in writing, software distributed under 
the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF 
ANY KIND, either express or implied. See the License for the specific language governing 
permissions and limitations under the License.

*/

// This #include statement was automatically added by the Particle IDE.
#include "RelayShield.h"

// Create an instance of the RelayShield library, so we have something to talk to
RelayShield myRelays;
int relayOn(String command);
int relayOff(String command);

int relayState[] = {0, 0, 0, 0, 0};

STARTUP(WiFi.selectAntenna(ANT_EXTERNAL)); // selects the u.FL antenna


void setup() {
    //.begin() sets up a couple of things and is necessary to use the rest of the functions
    myRelays.begin();
    Particle.function("relayOn", relayOn);
    Particle.function("relayOff", relayOff);

    Particle.variable("valve1", &relayState[1], INT);
    Particle.variable("valve2", &relayState[2], INT);
    Particle.variable("valve3", &relayState[3], INT);
    Particle.variable("valve4", &relayState[4], INT);
}

void loop() {
    // Nothing needed here, functions will run when called
}

int relayOn(String command){
    Particle.publish("Sprinkler Valve On", command);
    // Ritual incantation to convert String into Int
    char inputStr[64];
    command.toCharArray(inputStr,64);
    int i = atoi(inputStr);

    // Turn the desired relay on
    myRelays.on(i);
    relayState[i] = 1;

    // Respond
    return 1;
}

int relayOff(String command){
    Particle.publish("Sprinkler Valve Off", command);
    // Ritual incantation to convert String into Int
    char inputStr[64];
    command.toCharArray(inputStr,64);
    int i = atoi(inputStr);

    // Turn the desired relay off
    myRelays.off(i);
    relayState[i] = 0;

    // Respond
    return 1;
}