# Inter-Module Protocol (IMP)


The software of automated vehicles typically consists of a guidance, navigation and control (GNC) system.
This GNC system can be implemented in one or more applications on one or more hardware devices.
The intermodule protocol only defines a set of messages intended to exchange basic data between modules of a GNC system.
Only generic messages are defined, which are independent of the application and therefore independent of the vehicle type.


## Overview
The following messages are defined by the Inter-Module Protocol.

| Message ID | Name                         | Description                                    |
| :--------- | :--------------------------- | :--------------------------------------------- |
| 0x00       | Info Request Message         | Request information from a module.             |
| 0x01       | Info Response Message        | Response to an information request message.    |
| 0x47       | Guidance Message             | Provide a guidance state.                      |
| 0x4C       | Log Message                  | Provide a text log.                            |
| 0x4E       | Navigation Message           | Provide a navigation state.                    |
| 0x50       | Convex Polygon Message       | Provide a set of convex polygons.              |
| 0x54       | Guidance Trajectory Message  | Provide a state trajectory or waypoint list.   |

More information about the message format can be found in the browser-based [documentation](doc/).


## Getting Started (C++)
If you want to use the IMP, simply add the [source](source/) directory to the sources of your C++ project.
Include the header `InterModuleProtocol.hpp` and use the classes defined in the `IMP` namespace to encode or decode messages.
Take a look at the [C++ examples](examples/cpp/).


## Getting Started (MATLAB/Simulink)
If you want to use the IMP for MATLAB/Simulink (at least R2018b), first make sure that you have set up a compiler.
Simply call the script `install.m` to install the Simulink library.
This compiles the driver blocks.
The library path is added to the MATLAB path and then saved.
To remove the path, you can call the script `uninstall.m`.
The Inter-Module Protocol library now appears in the Simulink library browser.
Take a look at the [Simulink examples](examples/simulink/).
