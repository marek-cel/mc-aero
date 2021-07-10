# MC-Aero

Aerodynamic characteristics (drag coefficient and lift coefficient) approximation tool for the full range of angle of attack, based on [NASA TM-102267](https://ntrs.nasa.gov/citations/19910009728).

## Installation

### Linux

Linux [dpkg package](https://github.com/marek-cel/mc-aero/releases/download/0.2/mc-aero_0.2_focal_amd64.deb) is provided for Ubuntu 20.04 LTS / LinuxMint 20.x.

### Windows

Windows [zip package](https://github.com/marek-cel/mc-aero/releases/download/0.2/mc-aero_0.2_win64.zip) is provided. It does not require installation.

## Building from source

### Dependencies

MC-Aero requires Qt and Qt Widgets for Technical Applications.

* [Qt5](https://www.qt.io/)
* [Qwt](https://qwt.sourceforge.io/)

#### Linux

On Ubuntu based Linux distributions those dependencies can be installed with the following command:

```apt install libqt5svg5-dev libqwt-qt5-dev qtbase5-dev```

#### Windows

On Windows those dependencies have to be installed manually.

### Building using qmake

MC-Aero can be built with ```qmake``` tool. Run qmake on ```mc-aero.pro``` file and then use appropriate building system. You can also use Qt Creator.

![Screenshot](mc-aero_01.jpg)

