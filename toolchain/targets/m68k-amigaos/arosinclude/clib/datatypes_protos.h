#ifndef CLIB_DATATYPES_PROTOS_H
#define CLIB_DATATYPES_PROTOS_H

/*
    *** Automatically generated from 'datatypes.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>
#include <intuition/classes.h>
#include <intuition/intuition.h>
#include <intuition/gadgetclass.h>

#include <datatypes/datatypes.h>
#include <datatypes/datatypesclass.h>

ULONG GetDTAttrs (Object * o, Tag tag1, ...) __stackparm;
ULONG SetDTAttrs (Object * o, struct Window * win, struct Requester *req, Tag tag1, ...) __stackparm;
Object * NewDTObject (APTR name, Tag tag1, ...) __stackparm;
void RefreshDTObject (Object * o, struct Window * win, struct Requester *req, Tag tag1, ...) __stackparm;
void RefreshDTObjects (Object * o, struct Window * win, struct Requester *req, Tag tag1, ...) __stackparm;
IPTR DoDTMethod (Object *, struct Window * win, struct Requester * req, ULONG MethodID, ...) __stackparm;

AROS_LP3(struct DataType *, ObtainDataTypeA,
        AROS_LPA(ULONG, type, D0),
        AROS_LPA(APTR, handle, A0),
        AROS_LPA(struct TagItem *, attrs, A1),
        struct Library *, DataTypesBase, 6, DataTypes)

AROS_LP1(void, ReleaseDataType,
        AROS_LPA(struct DataType *, dt, A0),
        struct Library *, DataTypesBase, 7, DataTypes)

AROS_LP2(Object *, NewDTObjectA,
        AROS_LPA(APTR, name, D0),
        AROS_LPA(struct TagItem *, attrs, A0),
        struct Library *, DataTypesBase, 8, DataTypes)

AROS_LP1(void, DisposeDTObject,
        AROS_LPA(Object *, o, A0),
        struct Library *, DataTypesBase, 9, DataTypes)

AROS_LP4(ULONG, SetDTAttrsA,
        AROS_LPA(Object *, o, A0),
        AROS_LPA(struct Window *, win, A1),
        AROS_LPA(struct Requester *, req, A2),
        AROS_LPA(struct TagItem *, attrs, A3),
        struct Library *, DataTypesBase, 10, DataTypes)

AROS_LP2(ULONG, GetDTAttrsA,
        AROS_LPA(Object *, o, A0),
        AROS_LPA(struct TagItem *, attrs, A2),
        struct Library *, DataTypesBase, 11, DataTypes)

AROS_LP4(LONG, AddDTObject,
        AROS_LPA(struct Window *, win, A0),
        AROS_LPA(struct Requester *, req, A1),
        AROS_LPA(Object *, obj, A2),
        AROS_LPA(LONG, pos, D0),
        struct Library *, DataTypesBase, 12, DataTypes)

AROS_LP4(void, RefreshDTObjectA,
        AROS_LPA(Object *, object, A0),
        AROS_LPA(struct Window *, window, A1),
        AROS_LPA(struct Requester *, req, A2),
        AROS_LPA(struct TagItem *, attrs, A3),
        struct Library *, DataTypesBase, 13, DataTypes)

AROS_LP2(ULONG, DoAsyncLayout,
        AROS_LPA(Object *, object, A0),
        AROS_LPA(struct gpLayout *, gpl, A1),
        struct Library *, DataTypesBase, 14, DataTypes)

AROS_LP4(IPTR, DoDTMethodA,
        AROS_LPA(Object *, o, A0),
        AROS_LPA(struct Window *, win, A1),
        AROS_LPA(struct Requester *, req, A2),
        AROS_LPA(Msg, msg, A3),
        struct Library *, DataTypesBase, 15, DataTypes)

AROS_LP2(LONG, RemoveDTObject,
        AROS_LPA(struct Window *, window, A0),
        AROS_LPA(Object *, object, A1),
        struct Library *, DataTypesBase, 16, DataTypes)

AROS_LP1(ULONG *, GetDTMethods,
        AROS_LPA(Object *, object, A0),
        struct Library *, DataTypesBase, 17, DataTypes)

AROS_LP1(struct DTMethods *, GetDTTriggerMethods,
        AROS_LPA(Object *, object, A0),
        struct Library *, DataTypesBase, 18, DataTypes)

AROS_LP4(ULONG, PrintDTObjectA,
        AROS_LPA(Object *, object, A0),
        AROS_LPA(struct Window *, window, A1),
        AROS_LPA(struct Requester *, requester, A2),
        AROS_LPA(struct dtPrint *, msg, A3),
        struct Library *, DataTypesBase, 19, DataTypes)

AROS_LP2(APTR, ObtainDTDrawInfoA,
        AROS_LPA(Object *, o, A0),
        AROS_LPA(struct TagItem *, attrs, A1),
        struct Library *, DataTypesBase, 20, DataTypes)

AROS_LP9(LONG, DrawDTObjectA,
        AROS_LPA(struct RastPort *, rp, A0),
        AROS_LPA(Object *, o, A1),
        AROS_LPA(LONG, x, D0),
        AROS_LPA(LONG, y, D1),
        AROS_LPA(LONG, w, D2),
        AROS_LPA(LONG, h, D3),
        AROS_LPA(LONG, th, D4),
        AROS_LPA(LONG, tv, D5),
        AROS_LPA(struct TagItem *, attrs, A2),
        struct Library *, DataTypesBase, 21, DataTypes)

AROS_LP2(void, ReleaseDTDrawInfo,
        AROS_LPA(Object *, o, A0),
        AROS_LPA(APTR, handle, A1),
        struct Library *, DataTypesBase, 22, DataTypes)

AROS_LP1(STRPTR, GetDTString,
        AROS_LPA(ULONG, id, D0),
        struct Library *, DataTypesBase, 23, DataTypes)

AROS_LP1(void, LockDataType,
        AROS_LPA(struct DataType *, dt, A0),
        struct Library *, DataTypesBase, 40, DataTypes)

AROS_LP2(struct ToolNode *, FindToolNodeA,
        AROS_LPA(struct List *, toollist, A0),
        AROS_LPA(struct TagItem *, attrs, A1),
        struct Library *, DataTypesBase, 41, DataTypes)

AROS_LP3(ULONG, LaunchToolA,
        AROS_LPA(struct Tool *, tool, A0),
        AROS_LPA(STRPTR, project, A1),
        AROS_LPA(struct TagItem *, attrs, A2),
        struct Library *, DataTypesBase, 42, DataTypes)

AROS_LP2(ULONG *, FindMethod,
        AROS_LPA(ULONG *, methods, A0),
        AROS_LPA(ULONG, searchmethodid, A1),
        struct Library *, DataTypesBase, 43, DataTypes)

AROS_LP3(struct DTMethod *, FindTriggerMethod,
        AROS_LPA(struct DTMethod *, methods, A0),
        AROS_LPA(STRPTR, command, A1),
        AROS_LPA(ULONG, method, D0),
        struct Library *, DataTypesBase, 44, DataTypes)

AROS_LP3(ULONG *, CopyDTMethods,
        AROS_LPA(ULONG *, methods, A0),
        AROS_LPA(ULONG *, include, A1),
        AROS_LPA(ULONG *, exclude, A2),
        struct Library *, DataTypesBase, 45, DataTypes)

AROS_LP3(struct DTMethod *, CopyDTTriggerMethods,
        AROS_LPA(struct DTMethod *, methods, A0),
        AROS_LPA(struct DTMethod *, include, A1),
        AROS_LPA(struct DTMethod *, exclude, A2),
        struct Library *, DataTypesBase, 46, DataTypes)

AROS_LP1(void, FreeDTMethods,
        AROS_LPA(APTR, methods, A0),
        struct Library *, DataTypesBase, 47, DataTypes)

AROS_LP1(ULONG, GetDTTriggerMethodDataFlags,
        AROS_LPA(ULONG, method, A0),
        struct Library *, DataTypesBase, 48, DataTypes)

AROS_LP7(ULONG, SaveDTObjectA,
        AROS_LPA(Object *, o, A0),
        AROS_LPA(struct Window *, win, A1),
        AROS_LPA(struct Requester *, req, A2),
        AROS_LPA(STRPTR, file, A3),
        AROS_LPA(ULONG, mode, D0),
        AROS_LPA(BOOL, saveicon, D1),
        AROS_LPA(struct TagItem *, attrs, A4),
        struct Library *, DataTypesBase, 49, DataTypes)

AROS_LP1(ULONG, StartDragSelect,
        AROS_LPA(Object *, o, A0),
        struct Library *, DataTypesBase, 50, DataTypes)

AROS_LP7(ULONG, DoDTDomainA,
        AROS_LPA(Object *, o, A0),
        AROS_LPA(struct Window *, win, A1),
        AROS_LPA(struct Requester *, req, A2),
        AROS_LPA(struct RastPort *, rport, A3),
        AROS_LPA(ULONG, which, D0),
        AROS_LPA(struct IBox *, domain, A4),
        AROS_LPA(struct TagItem *, attrs, A5),
        struct Library *, DataTypesBase, 51, DataTypes)

#endif /* CLIB_DATATYPES_PROTOS_H */
