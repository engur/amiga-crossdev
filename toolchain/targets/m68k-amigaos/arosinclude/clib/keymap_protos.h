#ifndef CLIB_KEYMAP_PROTOS_H
#define CLIB_KEYMAP_PROTOS_H

/*
    *** Automatically generated from 'keymap.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

AROS_LP1(void, SetKeyMapDefault,
        AROS_LPA(struct KeyMap *, keyMap, A0),
        struct Library *, KeymapBase, 5, Keymap)

AROS_LP0(struct KeyMap *, AskKeyMapDefault,
        struct Library *, KeymapBase, 6, Keymap)

AROS_LP4(WORD, MapRawKey,
        AROS_LPA(struct InputEvent *, event, A0),
        AROS_LPA(STRPTR, buffer, A1),
        AROS_LPA(LONG, length, D1),
        AROS_LPA(struct KeyMap *, keyMap, A2),
        struct Library *, KeymapBase, 7, Keymap)

AROS_LP5(LONG, MapANSI,
        AROS_LPA(STRPTR, string, A0),
        AROS_LPA(LONG, count, D0),
        AROS_LPA(STRPTR, buffer, A1),
        AROS_LPA(LONG, length, D1),
        AROS_LPA(struct KeyMap *, keyMap, A2),
        struct Library *, KeymapBase, 8, Keymap)

#endif /* CLIB_KEYMAP_PROTOS_H */
