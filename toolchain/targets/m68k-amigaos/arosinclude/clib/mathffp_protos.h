#ifndef CLIB_MATHFFP_PROTOS_H
#define CLIB_MATHFFP_PROTOS_H

/*
    *** Automatically generated from 'mathffp.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

AROS_LP1(LONG, SPFix,
        AROS_LPA(LONG, fnum, D0),
        struct Library *, MathBase, 5, Mathffp)

AROS_LP1(LONG, SPFlt,
        AROS_LPA(LONG, inum, D0),
        struct Library *, MathBase, 6, Mathffp)

AROS_LP2(LONG, SPCmp,
        AROS_LPA(LONG, fnum1, D0),
        AROS_LPA(LONG, fnum2, D1),
        struct Library *, MathBase, 7, Mathffp)

AROS_LP1(LONG, SPTst,
        AROS_LPA(LONG, fnum, D1),
        struct Library *, MathBase, 8, Mathffp)

AROS_LP1(LONG, SPAbs,
        AROS_LPA(LONG, fnum1, D0),
        struct Library *, MathBase, 9, Mathffp)

AROS_LP1(LONG, SPNeg,
        AROS_LPA(LONG, fnum1, D0),
        struct Library *, MathBase, 10, Mathffp)

AROS_LP2(LONG, SPAdd,
        AROS_LPA(LONG, fnum1, D1),
        AROS_LPA(LONG, fnum2, D0),
        struct Library *, MathBase, 11, Mathffp)

AROS_LP2(LONG, SPSub,
        AROS_LPA(LONG, fnum1, D0),
        AROS_LPA(LONG, fnum2, D1),
        struct Library *, MathBase, 12, Mathffp)

AROS_LP2(LONG, SPMul,
        AROS_LPA(LONG, fnum1, D1),
        AROS_LPA(LONG, fnum2, D0),
        struct Library *, MathBase, 13, Mathffp)

AROS_LP2(LONG, SPDiv,
        AROS_LPA(LONG, fnum1, D1),
        AROS_LPA(LONG, fnum2, D0),
        struct Library *, MathBase, 14, Mathffp)

AROS_LP1(LONG, SPFloor,
        AROS_LPA(LONG, y, D0),
        struct Library *, MathBase, 15, Mathffp)

AROS_LP1(LONG, SPCeil,
        AROS_LPA(LONG, y, D0),
        struct Library *, MathBase, 16, Mathffp)

#endif /* CLIB_MATHFFP_PROTOS_H */
