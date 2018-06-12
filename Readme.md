*Disclaimer: This project is intended for users that understand basic electronics and wiring. No warranty is included, use at your own risk.*

# Wifi-Irrigation Introduction

Wifi-Irrigation allows for the control of up to four sprinkler valves using [SmartThings](https://smartthings.com) and a [Particle Photon](https://www.particle.io/). The build guide and parts list below are based on my build containing two sprinkler valves, but could be easily extended to support up to 4 valves/zones. Additional information, including a complete build guide is available at https://mike-greene.com/wifi-irrigation.

# Build Guide
## Table of Contents
- [Parts List](https://github.com/webdes03/wifi-irrigation#parts-listparts-list)
- [Assembly](https://github.com/webdes03/wifi-irrigation#parts-list#assembly)
    - [Manifold](https://github.com/webdes03/wifi-irrigation#manifold-1)
    - [Controller](https://github.com/webdes03/wifi-irrigation#controller-1)

## Parts List
### Controller
- [1x IP66 Rated Enclosure](https://amzn.to/2JEnlpK)
- [1x 3-Outlet Grounded Adapter](https://amzn.to/2Jrt92P)
- [1x U.FL Mini PCI to RP-SMA Antenna Pigtail](https://amzn.to/2JzkVZx)
- [1x 7dBi RP-SMA Wifi Antenna](https://amzn.to/2sQhzqG)
- [1x 7-Pin Waterproof Connector](https://amzn.to/2sNkyAn)
- [1x Orbit 24VAC Transformer](https://www.amazon.com/gp/product/B000VRYVYS/ref=oh_aui_detailpage_o00_s00?ie=UTF8&psc=1)
- [1x Particle Relay Shield](https://amzn.to/2kX4yZ2)
- [1x Particle Photon](https://amzn.to/2M9oNz7)
- [1x 12VDC, 2A Power Adapter](https://amzn.to/2Lxrr0i)
- [1x 20' Outdoor Extension Cord](https://amzn.to/2JkcsKH)
- [1x PG9 Waterproof Cable Connector](https://amzn.to/2JB4mwp)
- [3x P3 Wire Nuts](https://amzn.to/2MatAQO)
- [2x Pipe Strap](https://amzn.to/2Jy9y0S)

### Manifold
- [1x Garden Reel Leader Hose)](https://amzn.to/2JB5eRH)
- [2x 3/4" Sprinkler Valve](https://amzn.to/2Jnc51C)
- [2x Rain Bird Drip Irrigation 4-Port Manifold](https://amzn.to/2sPvNrY)
- [1x 3/4" Garden Hose to 1/2" PVC Adapter](https://www.pvcfittingsonline.com/3-4-x-1-2-pvc-garden-hose-adapter-male-mht-x-slip-mht101.html)
- [2x 90° Elbow Connector, 1/2" Schedule 40 PVC Fitting](https://www.pvcfittingsonline.com/406-005-1-2-schedule-40-pvc-90-ell.html)
- [1x Tee Connector, 1/2" Schedule 40 PVC Fitting](https://www.pvcfittingsonline.com/1-2-schedule-40-pvc-tee-socket-x-socket-x-socket-401-005.html)
- [2x 3/4" MIPT to PVC Adapter](https://www.pvcfittingsonline.com/436-007-3-4-schedule-40-pvc-male-adapter.html)
- [2x 3/4" to 1/2" Reducer Bushing](https://www.pvcfittingsonline.com/437-101-3-4-x-1-2-schedule-40-pvc-reducer-bushing-flush-style.html)
- [2x 3/4" to 1/2" Threaded Reducer Bushing](https://www.pvcfittingsonline.com/439-101-3-4-x-1-2-schedule-40-pvc-reducer-bushing-flush-style.html)
- [2x 1/2" x 1-1/2" Nipple](https://www.pvcfittingsonline.com/1-2-1-1-2-galvanized-malleable-nipple-mnpt-gsn12112.html)
- [5x 1/2" PVC Pipe cut to 2" in length](https://www.pvcfittingsonline.com/4004-005ab-1-2-schedule-40-pvc-pipe-5-ft-section.html)
- [PVC Primer & Cement](https://www.pvcfittingsonline.com/oatey-pvc-cement-primer-handy-pack-1-4-pints.html)
- [Teflon/PTFE Tape](https://amzn.to/2JwpgJF)

### Irrigation Components
- [1/4" Rain Bird Distribution Tubing](https://amzn.to/2kSmjsi)
- Assorted Drip Irrigation Emitters

## Assembly
### Manifold

![Assembly Animation](https://github.com/webdes03/wifi-irrigation/blob/master/Assembly%20Animation.gif)

1.	Using one of your pieces of 2” PVC, connect the garden hose adapter to one end, and the tee connector to the other.
2.	With another piece of 2” PVC, connect an elbow connector to one side, and insert the other side into one of the 3/4" to 1/2" reducers (this is the reducer without any threads). Then insert the end with the reducer into one of the 3/4" to MIPT threaded adapters (which will later screw into one of the valves). Repeat this step so we have a second one for the second valve.
3.	Take one of the 1/2" x 1-1/2” nipples, and screw one side into one of the 3/4" to 1/2” threaded reducer bushing. Screw one of the 4-port drip irrigation manifolds onto the other side of the nipple. Repeat this step so we have a second one for the second valve.
4.	With one of the valves, connect one of the elbow subassemblies to the source side of the valve (as noted by the direction of the arrow). Connect one of the 4-port manifold subassemblies to the output side of the valve. Repeat this step with the second valve.
5.	Lastly, using the two remaining 2” pieces of PVC, connect the elbow ends of the valve subassemblies to each side of the tee connector.

![Assembly Complete](https://github.com/webdes03/wifi-irrigation/blob/master/Assembly%20Complete.png)

### Controller

1.  Start by drilling all of the holes in the waterproof enclosure. You'll need to drill a hole for the PG9 connector, one for the RP-SMA antenna connector, one for the 7-pin waterproof connector, and 4 holes for the pipe straps to mount the manifold to the enclosure.
2.  Mount the PG9 connector, RP-SMA antenna connector, and 7-pin waterproof connector.
3.  Using 4 machine screws with lock washers, mount the manifold to the top of the controller box using two pipe straps, being sure to place silicon sealant around the inside of the bolts to help ensure the waterproofing of the box.
4.  Cut your extension cord, approximately 2 feet from the female end, and thread the male end through the PG9 connector. Clamp down the outside of the connector, then strip and reconnect the two ends of the extension cord. Cap the wires with wire nuts. Connect the 3-outlet grounded adapter to the female end of the extension cord inside the enclosure. Connect the 24VAC transformer and 12VDC transformer to the 3-outlet adapter.
5.  Solder the valve wires to the male end of the 7-pin waterproof connector. I used pins 1/2 for valve 1 and 3/4 for valve 2. Also solder 4 wires to the matching pins of the female side of the 7-pin connector, and wire them (along with the 24VAC transformer) as shown in the schematic below. We'll use the "MAIN" (center) terminal on the relay and the "NO" (normally open) side of the relay to control the valves.
6.  Connect the 12VDC transformer's barrel jack to the connector on the relay shield, and insert the Particle Photon into its place on the relay shield.
7.  Connect the pigtail from the u.Fl to RP-SMA antenna connector to the u.Fl connector on the Particle Photon, and screw the external wifi antenna to the lid of the enclosure.
8.  Lastly, use a piece of double-sided tape to mount the relay shield to the underside of the enclosure's lid.

![Schematic](https://github.com/webdes03/wifi-irrigation/blob/master/Controller.png)

## Software & Automation

### Particle Setup
1.  Create a new Particle App
2.  Paste the contents of the [Particle Photon sketch](https://github.com/webdes03/wifi-irrigation/blob/master/wifi-irrigation.ino) into the IDE's code window, and save the app as "wifi-irrigation".
3.  Click the "Libraries" icon at the bottom left of the screen, and include the "RelayShield" library in the project by selecting it, then clicking the blue "Include in Project" button, then select the "wifi-irrigation" app. Click the blue "Confirm" button to continue.
4.  Save the app, and click the checkmark icon to verify the sketch.
5.  Assuming no errors are discovered, click the devices icon at the lower left of the screen, click the star icon next to the Photon you wish to flash the code to, then click the lightening bolt at the top left corner to flash the code to the Photon.

### SmartThings Setup

#### Device Handler
Follow the steps below to manually import the wifi-irrigation device handler, or connect your SmartThings IDE to my SmartThings repo to install this device handler, or device handlers from other projects.

1.  Login to your SmartThings IDE by going to https://graph.api.smartthings.com.
2.  From the top navigation bar, select "My Device Handlers", then click "Create New Device Handler".
3.  Select the "From Code" tab, and paste the contents of the [wifi-irrigation SmartThings Device Type](https://github.com/webdes03/SmartThingsPublic/tree/master/devicetypes/webdes03/wifi-irrigation.src) into the box, then click the "Create" button.
4.  Click the "Publish" button at the top right.

#### Devices
1.  From the top navigation of the SmartThings IDE, select "My Devices".
2.  Click the "New Device" button.
3.  Enter a name for your valve (ie: Front Flower Beds), a device network id (this must be unique, so use something like "wifi-irrigation-1" where 1 is the number of the valve), and select "wifi-irrigation" at the bottom of the type list, then click the "Create" button.
4.  Select the device that you just created (ie: Front Flower Beds), and click the "edit" link in the preferences section.
5.  Enter the Device ID and Authorization Token that we noted when we setup the Photon, and the number of the valve/relay that this device is connected to, then click "Save".
6.  With the device created, and configured, you should now see it listed in the SmartThings app.

#### Automation

For a complete overview of the automation approach for this project, review the build guide at https://mike-greene.com/wifi-irrigation.

![Flower Beds](https://github.com/webdes03/wifi-irrigation/blob/master/webcore-piston-flowerbeds.png)
![Vegetable Garden](https://github.com/webdes03/wifi-irrigation/blob/master/webcore-piston-vegetablegarden.png)
![Timers](https://github.com/webdes03/wifi-irrigation/blob/master/webcore-piston-timers.png)