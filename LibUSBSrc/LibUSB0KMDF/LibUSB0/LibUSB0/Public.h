/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_LibUSB0,
    0xf6d99582,0xab83,0x4532,0x8a,0x76,0xd6,0xce,0x7b,0xc3,0x30,0x52);
// {f6d99582-ab83-4532-8a76-d6ce7bc33052}
