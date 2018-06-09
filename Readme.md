*Disclaimer: This project is intended for users that understand basic electronics and wiring. No warranty is included, use at your own risk.*

# Wifi-Irrigation Introduction

Wifi-Irrigation allows for the control of up to four sprinkler valves using [SmartThings](https://smartthings.com) and a [Particle Photon](https://www.particle.io/). The build guide and parts list below are based on my build containing two sprinkler valves, but could be easily extended to support up to 4 valves/zones. Additional information, including a complete build guide is available at https://mike-greene.com/wifi-irrigation.

# Build Guide
## Table of Contents
- [Parts List](https://github.com/webdes03/wifi-irrigation#parts-listparts-list)
- [Assembly](https://github.com/webdes03/wifi-irrigation#parts-list#assembly)
    - [Manifold](https://github.com/webdes03/wifi-irrigation#manifold-1)

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
- [1x 20' Outdoor Exetension Cord](https://amzn.to/2JkcsKH)
- [1x PG9 Waterproof Cable Connector](https://amzn.to/2JB4mwp)
- [3x P3 Wire Nuts](https://amzn.to/2MatAQO)

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

![Assembly Animation](https://github.com/webdes03/wifi-irrigation/blob/master/Assembly%20Complete.png)

### Controller

## Software & Automation
- [Particle Photon Sketch](https://github.com/webdes03/wifi-irrigation/blob/master/wifi-irrigation.ino)
- [SmartThings Device Type](https://github.com/webdes03/SmartThingsPublic/tree/master/devicetypes/webdes03/wifi-irrigation.src)

