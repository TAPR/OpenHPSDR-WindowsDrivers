# OpenHPSDR-WindowsDrivers
Contains older and very new windows drivers for PowerSDR, KISS, et al.  A Signed Win10 driver for libusb0 is here

This represents the version of LibUSB0 that was used by PowerSDR and KISS Konsole to speak with the Ozy and Magister boards.
The source for LibUSB0 versions relevant to the OpenHPSDR project are also found here.

Beginning with Windows 10, in about 2016, you needed to have signed, countersigned-by-Microsoft drivers to load a 64 bit driver.
At that time, a collection of donations was taken from among the OpenHPSDR community.  We got enough money to have a 3 year signing key,
really a physical token (a USB Stick), that must be in the machine where the signing is taking place.

So that is the personal developer machine of George Byrkit, K9TRV, TAPR Board of Directors member, erstwhile KISS Konsole software
developer, man-about-town.  I (george) produced the signed driver package, submitted it to Microsoft, got it approved and countersigned,
and it IS the driver to use on Windows 10 64 bit, since Summer of 2016.

All that work is here.  The final product (release) is a zip file that contains the driver.  It is located in OpenHPSDR-WindowsDrivers/LibUSB0-signed-for-Windows-10/libusb/Driver/SignedPackageFromMicrosoft
as file LibUSB-HPSDR_driver_win10_x86_x64.zip
