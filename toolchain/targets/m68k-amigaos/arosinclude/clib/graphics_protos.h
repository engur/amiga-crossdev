#ifndef CLIB_GRAPHICS_PROTOS_H
#define CLIB_GRAPHICS_PROTOS_H

/*
    *** Automatically generated from 'graphics.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>
#include <graphics/gfx.h>
#include <graphics/displayinfo.h>
#include <graphics/gels.h>
#include <graphics/rastport.h>
#include <graphics/view.h>
#include <graphics/copper.h>
#include <graphics/clip.h>
#include <graphics/regions.h>
#include <graphics/sprite.h>
#include <graphics/text.h>
#include <hardware/blit.h>

#include <utility/tagitem.h>
ULONG BestModeID(Tag, ...);

AROS_LP11(LONG, BltBitMap,
        AROS_LPA(struct BitMap *, srcBitMap, A0),
        AROS_LPA(LONG, xSrc, D0),
        AROS_LPA(LONG, ySrc, D1),
        AROS_LPA(struct BitMap *, destBitMap, A1),
        AROS_LPA(LONG, xDest, D2),
        AROS_LPA(LONG, yDest, D3),
        AROS_LPA(LONG, xSize, D4),
        AROS_LPA(LONG, ySize, D5),
        AROS_LPA(ULONG, minterm, D6),
        AROS_LPA(ULONG, mask, D7),
        AROS_LPA(PLANEPTR, tempA, A2),
        struct GfxBase *, GfxBase, 5, Graphics)

AROS_LP8(void, BltTemplate,
        AROS_LPA(PLANEPTR, source, A0),
        AROS_LPA(LONG, xSrc, D0),
        AROS_LPA(LONG, srcMod, D1),
        AROS_LPA(struct RastPort *, destRP, A1),
        AROS_LPA(LONG, xDest, D2),
        AROS_LPA(LONG, yDest, D3),
        AROS_LPA(LONG, xSize, D4),
        AROS_LPA(LONG, ySize, D5),
        struct GfxBase *, GfxBase, 6, Graphics)

AROS_LP1(void, ClearEOL,
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 7, Graphics)

AROS_LP1(void, ClearScreen,
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 8, Graphics)

AROS_LP3(WORD, TextLength,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(CONST_STRPTR, string, A0),
        AROS_LPA(ULONG, count, D0),
        struct GfxBase *, GfxBase, 9, Graphics)

AROS_LP3(void, Text,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(CONST_STRPTR, string, A0),
        AROS_LPA(ULONG, count, D0),
        struct GfxBase *, GfxBase, 10, Graphics)

AROS_LP2(void, SetFont,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(struct TextFont *, textFont, A0),
        struct GfxBase *, GfxBase, 11, Graphics)

AROS_LP1(struct TextFont *, OpenFont,
        AROS_LPA(struct TextAttr *, textAttr, A0),
        struct GfxBase *, GfxBase, 12, Graphics)

AROS_LP1(void, CloseFont,
        AROS_LPA(struct TextFont *, textFont, A1),
        struct GfxBase *, GfxBase, 13, Graphics)

AROS_LP1(ULONG, AskSoftStyle,
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 14, Graphics)

AROS_LP3(ULONG, SetSoftStyle,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(ULONG, style, D0),
        AROS_LPA(ULONG, enable, D1),
        struct GfxBase *, GfxBase, 15, Graphics)

AROS_LP2(void, AddBob,
        AROS_LPA(struct Bob *, bob, A0),
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 16, Graphics)

AROS_LP2(void, AddVSprite,
        AROS_LPA(struct VSprite *, vs, A0),
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 17, Graphics)

AROS_LP1(void, DoCollision,
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 18, Graphics)

AROS_LP2(void, DrawGList,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(struct ViewPort *, vp, A0),
        struct GfxBase *, GfxBase, 19, Graphics)

AROS_LP3(void, InitGels,
        AROS_LPA(struct VSprite *, head, A0),
        AROS_LPA(struct VSprite *, tail, A1),
        AROS_LPA(struct GelsInfo *, GInfo, A2),
        struct GfxBase *, GfxBase, 20, Graphics)

AROS_LP1(void, InitMasks,
        AROS_LPA(struct VSprite *, vs, A0),
        struct GfxBase *, GfxBase, 21, Graphics)

AROS_LP3(void, RemIBob,
        AROS_LPA(struct Bob *, bob, A0),
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(struct ViewPort *, vp, A2),
        struct GfxBase *, GfxBase, 22, Graphics)

AROS_LP1(void, RemVSprite,
        AROS_LPA(struct VSprite *, vs, A0),
        struct GfxBase *, GfxBase, 23, Graphics)

AROS_LP3(void, SetCollision,
        AROS_LPA(ULONG, num, D0),
        AROS_LPA(VOID_FUNC, routine, A0),
        AROS_LPA(struct GelsInfo *, GInfo, A1),
        struct GfxBase *, GfxBase, 24, Graphics)

AROS_LP1(void, SortGList,
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 25, Graphics)

AROS_LP3(void, AddAnimOb,
        AROS_LPA(struct AnimOb *, anOb, A0),
        AROS_LPA(struct AnimOb **, anKey, A1),
        AROS_LPA(struct RastPort *, rp, A2),
        struct GfxBase *, GfxBase, 26, Graphics)

AROS_LP2(void, Animate,
        AROS_LPA(struct AnimOb **, anKey, A0),
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 27, Graphics)

AROS_LP3(BOOL, GetGBuffers,
        AROS_LPA(struct AnimOb *, anOb, A0),
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(BOOL, db, D0),
        struct GfxBase *, GfxBase, 28, Graphics)

AROS_LP1(void, InitGMasks,
        AROS_LPA(struct AnimOb *, anOb, A0),
        struct GfxBase *, GfxBase, 29, Graphics)

AROS_LP5(void, DrawEllipse,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(LONG, xCenter, D0),
        AROS_LPA(LONG, yCenter, D1),
        AROS_LPA(LONG, a, D2),
        AROS_LPA(LONG, b, D3),
        struct GfxBase *, GfxBase, 30, Graphics)

AROS_LP5(ULONG, AreaEllipse,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(WORD, cx, D0),
        AROS_LPA(WORD, cy, D1),
        AROS_LPA(WORD, a, D2),
        AROS_LPA(WORD, b, D3),
        struct GfxBase *, GfxBase, 31, Graphics)

AROS_LP3(void, LoadRGB4,
        AROS_LPA(struct ViewPort *, vp, A0),
        AROS_LPA(UWORD *, colors, A1),
        AROS_LPA(LONG, count, D0),
        struct GfxBase *, GfxBase, 32, Graphics)

AROS_LP1(BOOL, InitRastPort,
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 33, Graphics)

AROS_LP1(void, InitVPort,
        AROS_LPA(struct ViewPort *, vp, A0),
        struct GfxBase *, GfxBase, 34, Graphics)

AROS_LP1(ULONG, MrgCop,
        AROS_LPA(struct View *, view, A1),
        struct GfxBase *, GfxBase, 35, Graphics)

AROS_LP2(ULONG, MakeVPort,
        AROS_LPA(struct View *, view, A0),
        AROS_LPA(struct ViewPort *, viewport, A1),
        struct GfxBase *, GfxBase, 36, Graphics)

AROS_LP1(void, LoadView,
        AROS_LPA(struct View *, view, A1),
        struct GfxBase *, GfxBase, 37, Graphics)

AROS_LP0(void, WaitBlit,
        struct GfxBase *, GfxBase, 38, Graphics)

AROS_LP2(void, SetRast,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(ULONG, pen, D0),
        struct GfxBase *, GfxBase, 39, Graphics)

AROS_LP3(void, Move,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(WORD, x, D0),
        AROS_LPA(WORD, y, D1),
        struct GfxBase *, GfxBase, 40, Graphics)

AROS_LP3(void, Draw,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(LONG, x, D0),
        AROS_LPA(LONG, y, D1),
        struct GfxBase *, GfxBase, 41, Graphics)

AROS_LP3(ULONG, AreaMove,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(WORD, x, D0),
        AROS_LPA(WORD, y, D1),
        struct GfxBase *, GfxBase, 42, Graphics)

AROS_LP3(ULONG, AreaDraw,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(WORD, x, D0),
        AROS_LPA(WORD, y, D1),
        struct GfxBase *, GfxBase, 43, Graphics)

AROS_LP1(LONG, AreaEnd,
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 44, Graphics)

AROS_LP0(void, WaitTOF,
        struct GfxBase *, GfxBase, 45, Graphics)

AROS_LP1(void, QBlit,
        AROS_LPA(struct bltnode *, bn, A1),
        struct GfxBase *, GfxBase, 46, Graphics)

AROS_LP3(void, InitArea,
        AROS_LPA(struct AreaInfo *, areainfo, A0),
        AROS_LPA(void *, buffer, A1),
        AROS_LPA(WORD, maxvectors, D0),
        struct GfxBase *, GfxBase, 47, Graphics)

AROS_LP5(void, SetRGB4,
        AROS_LPA(struct ViewPort *, vp, A0),
        AROS_LPA(ULONG, n, D0),
        AROS_LPA(ULONG, r, D1),
        AROS_LPA(ULONG, g, D2),
        AROS_LPA(ULONG, b, D3),
        struct GfxBase *, GfxBase, 48, Graphics)

AROS_LP1(void, QBSBlit,
        AROS_LPA(struct bltnode *, bn, A1),
        struct GfxBase *, GfxBase, 49, Graphics)

AROS_LP3(void, BltClear,
        AROS_LPA(void *, memBlock, A1),
        AROS_LPA(ULONG, bytecount, D0),
        AROS_LPA(ULONG, flags, D1),
        struct GfxBase *, GfxBase, 50, Graphics)

AROS_LP5(void, RectFill,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(LONG, xMin, D0),
        AROS_LPA(LONG, yMin, D1),
        AROS_LPA(LONG, xMax, D2),
        AROS_LPA(LONG, yMax, D3),
        struct GfxBase *, GfxBase, 51, Graphics)

AROS_LP7(void, BltPattern,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(PLANEPTR, mask, A0),
        AROS_LPA(LONG, xMin, D0),
        AROS_LPA(LONG, yMin, D1),
        AROS_LPA(LONG, xMax, D2),
        AROS_LPA(LONG, yMax, D3),
        AROS_LPA(ULONG, byteCnt, D4),
        struct GfxBase *, GfxBase, 52, Graphics)

AROS_LP3(LONG, ReadPixel,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(LONG, x, D0),
        AROS_LPA(LONG, y, D1),
        struct GfxBase *, GfxBase, 53, Graphics)

AROS_LP3(LONG, WritePixel,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(LONG, x, D0),
        AROS_LPA(LONG, y, D1),
        struct GfxBase *, GfxBase, 54, Graphics)

AROS_LP4(BOOL, Flood,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(ULONG, mode, D2),
        AROS_LPA(LONG, x, D0),
        AROS_LPA(LONG, y, D1),
        struct GfxBase *, GfxBase, 55, Graphics)

AROS_LP3(void, PolyDraw,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(LONG, count, D0),
        AROS_LPA(WORD *, polyTable, A0),
        struct GfxBase *, GfxBase, 56, Graphics)

AROS_LP2(void, SetAPen,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(ULONG, pen, D0),
        struct GfxBase *, GfxBase, 57, Graphics)

AROS_LP2(void, SetBPen,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(ULONG, pen, D0),
        struct GfxBase *, GfxBase, 58, Graphics)

AROS_LP2(void, SetDrMd,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(ULONG, drawMode, D0),
        struct GfxBase *, GfxBase, 59, Graphics)

AROS_LP1(void, InitView,
        AROS_LPA(struct View *, view, A1),
        struct GfxBase *, GfxBase, 60, Graphics)

AROS_LP1(void, CBump,
        AROS_LPA(struct UCopList *, ucl, A1),
        struct GfxBase *, GfxBase, 61, Graphics)

AROS_LP3(void, CMove,
        AROS_LPA(struct UCopList *, ucl, A1),
        AROS_LPA(void *, reg, D0),
        AROS_LPA(WORD, value, D1),
        struct GfxBase *, GfxBase, 62, Graphics)

AROS_LP3(void, CWait,
        AROS_LPA(struct UCopList *, ucl, A1),
        AROS_LPA(WORD, v, D0),
        AROS_LPA(WORD, h, D1),
        struct GfxBase *, GfxBase, 63, Graphics)

AROS_LP0(LONG, VBeamPos,
        struct GfxBase *, GfxBase, 64, Graphics)

AROS_LP4(void, InitBitMap,
        AROS_LPA(struct BitMap *, bm, A0),
        AROS_LPA(BYTE, depth, A1),
        AROS_LPA(UWORD, width, D0),
        AROS_LPA(UWORD, height, D1),
        struct GfxBase *, GfxBase, 65, Graphics)

AROS_LP7(void, ScrollRaster,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(LONG, dx, D0),
        AROS_LPA(LONG, dy, D1),
        AROS_LPA(LONG, xMin, D2),
        AROS_LPA(LONG, yMin, D3),
        AROS_LPA(LONG, xMax, D4),
        AROS_LPA(LONG, yMax, D5),
        struct GfxBase *, GfxBase, 66, Graphics)

AROS_LP1(void, WaitBOVP,
        AROS_LPA(struct ViewPort *, vp, A0),
        struct GfxBase *, GfxBase, 67, Graphics)

AROS_LP2(WORD, GetSprite,
        AROS_LPA(struct SimpleSprite *, sprite, A0),
        AROS_LPA(WORD, pick, D0),
        struct GfxBase *, GfxBase, 68, Graphics)

AROS_LP1(void, FreeSprite,
        AROS_LPA(WORD, pick, D0),
        struct GfxBase *, GfxBase, 69, Graphics)

AROS_LP3(void, ChangeSprite,
        AROS_LPA(struct ViewPort *, vp, A0),
        AROS_LPA(struct SimpleSprite *, s, A1),
        AROS_LPA(void *, newdata, A2),
        struct GfxBase *, GfxBase, 70, Graphics)

AROS_LP4(void, MoveSprite,
        AROS_LPA(struct ViewPort *, vp, A0),
        AROS_LPA(struct SimpleSprite *, sprite, A1),
        AROS_LPA(WORD, x, D0),
        AROS_LPA(WORD, y, D1),
        struct GfxBase *, GfxBase, 71, Graphics)

AROS_LP1(void, LockLayerRom,
        AROS_LPA(struct Layer *, l, A5),
        struct GfxBase *, GfxBase, 72, Graphics)

AROS_LP1(void, UnlockLayerRom,
        AROS_LPA(struct Layer *, l, A5),
        struct GfxBase *, GfxBase, 73, Graphics)

AROS_LP1(void, SyncSBitMap,
        AROS_LPA(struct Layer *, l, A0),
        struct GfxBase *, GfxBase, 74, Graphics)

AROS_LP1(void, CopySBitMap,
        AROS_LPA(struct Layer *, l, A0),
        struct GfxBase *, GfxBase, 75, Graphics)

AROS_LP0(void, OwnBlitter,
        struct GfxBase *, GfxBase, 76, Graphics)

AROS_LP0(void, DisownBlitter,
        struct GfxBase *, GfxBase, 77, Graphics)

AROS_LP3(void, InitTmpRas,
        AROS_LPA(struct TmpRas *, tmpras, A0),
        AROS_LPA(void *, buffer, A1),
        AROS_LPA(ULONG, size, D0),
        struct GfxBase *, GfxBase, 78, Graphics)

AROS_LP2(void, AskFont,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(struct TextAttr *, textAttr, A0),
        struct GfxBase *, GfxBase, 79, Graphics)

AROS_LP1(void, AddFont,
        AROS_LPA(struct TextFont *, textFont, A1),
        struct GfxBase *, GfxBase, 80, Graphics)

AROS_LP1(void, RemFont,
        AROS_LPA(struct TextFont *, textFont, A1),
        struct GfxBase *, GfxBase, 81, Graphics)

AROS_LP2(PLANEPTR, AllocRaster,
        AROS_LPA(ULONG, width, D0),
        AROS_LPA(ULONG, height, D1),
        struct GfxBase *, GfxBase, 82, Graphics)

AROS_LP3(void, FreeRaster,
        AROS_LPA(PLANEPTR, p, A0),
        AROS_LPA(ULONG, width, D0),
        AROS_LPA(ULONG, height, D1),
        struct GfxBase *, GfxBase, 83, Graphics)

AROS_LP2(void, AndRectRegion,
        AROS_LPA(struct Region *, Reg, A0),
        AROS_LPA(struct Rectangle *, Rect, A1),
        struct GfxBase *, GfxBase, 84, Graphics)

AROS_LP2(BOOL, OrRectRegion,
        AROS_LPA(struct Region *, Reg, A0),
        AROS_LPA(struct Rectangle *, Rect, A1),
        struct GfxBase *, GfxBase, 85, Graphics)

AROS_LP0(struct Region *, NewRegion,
        struct GfxBase *, GfxBase, 86, Graphics)

AROS_LP2(BOOL, ClearRectRegion,
        AROS_LPA(struct Region *, Reg, A0),
        AROS_LPA(struct Rectangle *, Rect, A1),
        struct GfxBase *, GfxBase, 87, Graphics)

AROS_LP1(void, ClearRegion,
        AROS_LPA(struct Region *, region, A0),
        struct GfxBase *, GfxBase, 88, Graphics)

AROS_LP1(void, DisposeRegion,
        AROS_LPA(struct Region *, region, A0),
        struct GfxBase *, GfxBase, 89, Graphics)

AROS_LP1(void, FreeVPortCopLists,
        AROS_LPA(struct ViewPort *, vp, A0),
        struct GfxBase *, GfxBase, 90, Graphics)

AROS_LP1(void, FreeCopList,
        AROS_LPA(struct CopList *, coplist, A0),
        struct GfxBase *, GfxBase, 91, Graphics)

AROS_LP9(void, ClipBlit,
        AROS_LPA(struct RastPort *, srcRP, A0),
        AROS_LPA(LONG, xSrc, D0),
        AROS_LPA(LONG, ySrc, D1),
        AROS_LPA(struct RastPort *, destRP, A1),
        AROS_LPA(LONG, xDest, D2),
        AROS_LPA(LONG, yDest, D3),
        AROS_LPA(LONG, xSize, D4),
        AROS_LPA(LONG, ySize, D5),
        AROS_LPA(UBYTE, minterm, D6),
        struct GfxBase *, GfxBase, 92, Graphics)

AROS_LP2(BOOL, XorRectRegion,
        AROS_LPA(struct Region *, Reg, A0),
        AROS_LPA(struct Rectangle *, Rect, A1),
        struct GfxBase *, GfxBase, 93, Graphics)

AROS_LP1(void, FreeCprList,
        AROS_LPA(struct cprlist *, cprList, A0),
        struct GfxBase *, GfxBase, 94, Graphics)

AROS_LP1(struct ColorMap *, GetColorMap,
        AROS_LPA(ULONG, entries, D0),
        struct GfxBase *, GfxBase, 95, Graphics)

AROS_LP1(void, FreeColorMap,
        AROS_LPA(struct ColorMap *, colormap, A0),
        struct GfxBase *, GfxBase, 96, Graphics)

AROS_LP2(ULONG, GetRGB4,
        AROS_LPA(struct ColorMap *, colormap, A0),
        AROS_LPA(LONG, entry, D0),
        struct GfxBase *, GfxBase, 97, Graphics)

AROS_LP1(void, ScrollVPort,
        AROS_LPA(struct ViewPort *, vp, A0),
        struct GfxBase *, GfxBase, 98, Graphics)

AROS_LP2(struct CopList *, UCopperListInit,
        AROS_LPA(struct UCopList *, ucl, A0),
        AROS_LPA(WORD, n, D0),
        struct GfxBase *, GfxBase, 99, Graphics)

AROS_LP3(void, FreeGBuffers,
        AROS_LPA(struct AnimOb *, anOb, A0),
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(BOOL, db, D0),
        struct GfxBase *, GfxBase, 100, Graphics)

AROS_LP9(void, BltBitMapRastPort,
        AROS_LPA(struct BitMap *, srcBitMap, A0),
        AROS_LPA(LONG, xSrc, D0),
        AROS_LPA(LONG, ySrc, D1),
        AROS_LPA(struct RastPort *, destRP, A1),
        AROS_LPA(LONG, xDest, D2),
        AROS_LPA(LONG, yDest, D3),
        AROS_LPA(LONG, xSize, D4),
        AROS_LPA(LONG, ySize, D5),
        AROS_LPA(ULONG, minterm, D6),
        struct GfxBase *, GfxBase, 101, Graphics)

AROS_LP2(BOOL, OrRegionRegion,
        AROS_LPA(struct Region *, R1, A0),
        AROS_LPA(struct Region *, R2, A1),
        struct GfxBase *, GfxBase, 102, Graphics)

AROS_LP2(BOOL, XorRegionRegion,
        AROS_LPA(struct Region *, R1, A0),
        AROS_LPA(struct Region *, R2, A1),
        struct GfxBase *, GfxBase, 103, Graphics)

AROS_LP2(BOOL, AndRegionRegion,
        AROS_LPA(struct Region *, R1, A0),
        AROS_LPA(struct Region *, R2, A1),
        struct GfxBase *, GfxBase, 104, Graphics)

AROS_LP5(void, SetRGB4CM,
        AROS_LPA(struct ColorMap *, cm, A0),
        AROS_LPA(WORD, n, D0),
        AROS_LPA(UBYTE, r, D1),
        AROS_LPA(UBYTE, g, D2),
        AROS_LPA(UBYTE, b, D3),
        struct GfxBase *, GfxBase, 105, Graphics)

AROS_LP10(void, BltMaskBitMapRastPort,
        AROS_LPA(struct BitMap *, srcBitMap, A0),
        AROS_LPA(LONG, xSrc, D0),
        AROS_LPA(LONG, ySrc, D1),
        AROS_LPA(struct RastPort *, destRP, A1),
        AROS_LPA(LONG, xDest, D2),
        AROS_LPA(LONG, yDest, D3),
        AROS_LPA(LONG, xSize, D4),
        AROS_LPA(LONG, ySize, D5),
        AROS_LPA(ULONG, minterm, D6),
        AROS_LPA(PLANEPTR, bltMask, A2),
        struct GfxBase *, GfxBase, 106, Graphics)

AROS_LP2(struct Region *, AndRectRegionND,
        AROS_LPA(struct Region *, Reg, A0),
        AROS_LPA(struct Rectangle *, Rect, A1),
        struct GfxBase *, GfxBase, 107, Graphics)

AROS_LP2(struct Region *, AndRegionRegionND,
        AROS_LPA(struct Region *, R1, A0),
        AROS_LPA(struct Region *, R2, A1),
        struct GfxBase *, GfxBase, 108, Graphics)

AROS_LP1(BOOL, AttemptLockLayerRom,
        AROS_LPA(struct Layer *, l, A5),
        struct GfxBase *, GfxBase, 109, Graphics)

AROS_LP1(struct ExtendedNode *, GfxNew,
        AROS_LPA(ULONG, node_type, D0),
        struct GfxBase *, GfxBase, 110, Graphics)

AROS_LP1(void, GfxFree,
        AROS_LPA(struct ExtendedNode *, node, A0),
        struct GfxBase *, GfxBase, 111, Graphics)

AROS_LP2(void, GfxAssociate,
        AROS_LPA(void *, pointer, A0),
        AROS_LPA(struct ExtendedNode *, node, A1),
        struct GfxBase *, GfxBase, 112, Graphics)

AROS_LP1(void, BitMapScale,
        AROS_LPA(struct BitScaleArgs *, bitScaleArgs, A0),
        struct GfxBase *, GfxBase, 113, Graphics)

AROS_LP3(UWORD, ScalerDiv,
        AROS_LPA(UWORD, factor, D0),
        AROS_LPA(UWORD, numerator, D1),
        AROS_LPA(UWORD, denominator, D2),
        struct GfxBase *, GfxBase, 114, Graphics)

AROS_LP4(void, TextExtent,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(CONST_STRPTR, string, A0),
        AROS_LPA(ULONG, count, D0),
        AROS_LPA(struct TextExtent *, textExtent, A2),
        struct GfxBase *, GfxBase, 115, Graphics)

AROS_LP8(ULONG, TextFit,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(CONST_STRPTR, string, A0),
        AROS_LPA(ULONG, strLen, D0),
        AROS_LPA(struct TextExtent *, textExtent, A2),
        AROS_LPA(struct TextExtent *, constrainingExtent, A3),
        AROS_LPA(LONG, strDirection, D1),
        AROS_LPA(ULONG, constrainingBitWidth, D2),
        AROS_LPA(ULONG, constrainingBitHeight, D3),
        struct GfxBase *, GfxBase, 116, Graphics)

AROS_LP1(struct ExtendedNode *, GfxLookUp,
        AROS_LPA(void *, pointer, A0),
        struct GfxBase *, GfxBase, 117, Graphics)

AROS_LP2(ULONG, VideoControl,
        AROS_LPA(struct ColorMap *, cm, A0),
        AROS_LPA(struct TagItem *, tags, A1),
        struct GfxBase *, GfxBase, 118, Graphics)

AROS_LP2(struct MonitorSpec *, OpenMonitor,
        AROS_LPA(STRPTR, monitor_name, A1),
        AROS_LPA(ULONG, display_id, D0),
        struct GfxBase *, GfxBase, 119, Graphics)

AROS_LP1(LONG, CloseMonitor,
        AROS_LPA(struct MonitorSpec *, monitor_spec, A0),
        struct GfxBase *, GfxBase, 120, Graphics)

AROS_LP1(DisplayInfoHandle, FindDisplayInfo,
        AROS_LPA(ULONG, ID, D0),
        struct GfxBase *, GfxBase, 121, Graphics)

AROS_LP1(ULONG, NextDisplayInfo,
        AROS_LPA(ULONG, last_ID, D0),
        struct GfxBase *, GfxBase, 122, Graphics)

AROS_LP2(struct Region *, OrRectRegionND,
        AROS_LPA(struct Region *, Reg, A0),
        AROS_LPA(struct Rectangle *, Rect, A1),
        struct GfxBase *, GfxBase, 123, Graphics)

AROS_LP2(struct Region *, ClearRectRegionND,
        AROS_LPA(struct Region *, Reg, A0),
        AROS_LPA(struct Rectangle *, Rect, A1),
        struct GfxBase *, GfxBase, 124, Graphics)

AROS_LP2(struct Region *, OrRegionRegionND,
        AROS_LPA(struct Region *, R1, A0),
        AROS_LPA(struct Region *, R2, A1),
        struct GfxBase *, GfxBase, 125, Graphics)

AROS_LP5(ULONG, GetDisplayInfoData,
        AROS_LPA(DisplayInfoHandle, handle, A0),
        AROS_LPA(UBYTE *, buf, A1),
        AROS_LPA(ULONG, size, D0),
        AROS_LPA(ULONG, tagID, D1),
        AROS_LPA(ULONG, ID, D2),
        struct GfxBase *, GfxBase, 126, Graphics)

AROS_LP2(void, FontExtent,
        AROS_LPA(struct TextFont *, font, A0),
        AROS_LPA(struct TextExtent *, fontExtent, A1),
        struct GfxBase *, GfxBase, 127, Graphics)

AROS_LP6(LONG, ReadPixelLine8,
        AROS_LPA(struct RastPort *, rp, A0),
        AROS_LPA(LONG, xstart, D0),
        AROS_LPA(LONG, ystart, D1),
        AROS_LPA(ULONG, width, D2),
        AROS_LPA(UBYTE *, array, A2),
        AROS_LPA(struct RastPort *, tempRP, A1),
        struct GfxBase *, GfxBase, 128, Graphics)

AROS_LP6(LONG, WritePixelLine8,
        AROS_LPA(struct RastPort *, rp, A0),
        AROS_LPA(LONG, xstart, D0),
        AROS_LPA(LONG, ystart, D1),
        AROS_LPA(ULONG, width, D2),
        AROS_LPA(UBYTE *, array, A2),
        AROS_LPA(struct RastPort *, tempRP, A1),
        struct GfxBase *, GfxBase, 129, Graphics)

AROS_LP7(LONG, ReadPixelArray8,
        AROS_LPA(struct RastPort *, rp, A0),
        AROS_LPA(LONG, xstart, D0),
        AROS_LPA(LONG, ystart, D1),
        AROS_LPA(LONG, xstop, D2),
        AROS_LPA(LONG, ystop, D3),
        AROS_LPA(UBYTE *, array, A2),
        AROS_LPA(struct RastPort *, temprp, A1),
        struct GfxBase *, GfxBase, 130, Graphics)

AROS_LP7(LONG, WritePixelArray8,
        AROS_LPA(struct RastPort *, rp, A0),
        AROS_LPA(ULONG, xstart, D0),
        AROS_LPA(ULONG, ystart, D1),
        AROS_LPA(ULONG, xstop, D2),
        AROS_LPA(ULONG, ystop, D3),
        AROS_LPA(UBYTE *, array, A2),
        AROS_LPA(struct RastPort *, temprp, A1),
        struct GfxBase *, GfxBase, 131, Graphics)

AROS_LP1(ULONG, GetVPModeID,
        AROS_LPA(struct ViewPort *, vp, A0),
        struct GfxBase *, GfxBase, 132, Graphics)

AROS_LP1(ULONG, ModeNotAvailable,
        AROS_LPA(ULONG, modeID, D0),
        struct GfxBase *, GfxBase, 133, Graphics)

AROS_LP3(WORD, WeighTAMatch,
        AROS_LPA(struct TextAttr *, reqTextAttr, A0),
        AROS_LPA(struct TextAttr *, targetTextAttr, A1),
        AROS_LPA(struct TagItem *, targetTags, A2),
        struct GfxBase *, GfxBase, 134, Graphics)

AROS_LP5(void, EraseRect,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(LONG, xMin, D0),
        AROS_LPA(LONG, yMin, D1),
        AROS_LPA(LONG, xMax, D2),
        AROS_LPA(LONG, yMax, D3),
        struct GfxBase *, GfxBase, 135, Graphics)

AROS_LP2(ULONG, ExtendFont,
        AROS_LPA(struct TextFont *, font, A0),
        AROS_LPA(struct TagItem *, fontTags, A1),
        struct GfxBase *, GfxBase, 136, Graphics)

AROS_LP1(void, StripFont,
        AROS_LPA(struct TextFont *, font, A0),
        struct GfxBase *, GfxBase, 137, Graphics)

AROS_LP2(UWORD, CalcIVG,
        AROS_LPA(struct View *, View, A0),
        AROS_LPA(struct ViewPort *, ViewPort, A1),
        struct GfxBase *, GfxBase, 138, Graphics)

AROS_LP2(LONG, AttachPalExtra,
        AROS_LPA(struct ColorMap *, cm, A0),
        AROS_LPA(struct ViewPort *, vp, A1),
        struct GfxBase *, GfxBase, 139, Graphics)

AROS_LP5(LONG, ObtainBestPenA,
        AROS_LPA(struct ColorMap *, cm, A0),
        AROS_LPA(ULONG, r, D1),
        AROS_LPA(ULONG, g, D2),
        AROS_LPA(ULONG, b, D3),
        AROS_LPA(struct TagItem *, tags, A1),
        struct GfxBase *, GfxBase, 140, Graphics)

AROS_LP2(struct Region *, ClearRegionRegionND,
        AROS_LPA(struct Region *, R1, A0),
        AROS_LPA(struct Region *, R2, A1),
        struct GfxBase *, GfxBase, 141, Graphics)

AROS_LP5(void, SetRGB32,
        AROS_LPA(struct ViewPort *, vp, A0),
        AROS_LPA(ULONG, n, D0),
        AROS_LPA(ULONG, r, D1),
        AROS_LPA(ULONG, g, D2),
        AROS_LPA(ULONG, b, D3),
        struct GfxBase *, GfxBase, 142, Graphics)

AROS_LP1(ULONG, GetAPen,
        AROS_LPA(struct RastPort *, rp, A0),
        struct GfxBase *, GfxBase, 143, Graphics)

AROS_LP1(ULONG, GetBPen,
        AROS_LPA(struct RastPort *, rp, A0),
        struct GfxBase *, GfxBase, 144, Graphics)

AROS_LP1(ULONG, GetDrMd,
        AROS_LPA(struct RastPort *, rp, A0),
        struct GfxBase *, GfxBase, 145, Graphics)

AROS_LP1(ULONG, GetOutlinePen,
        AROS_LPA(struct RastPort *, rp, A0),
        struct GfxBase *, GfxBase, 146, Graphics)

AROS_LP2(void, LoadRGB32,
        AROS_LPA(struct ViewPort *, vp, A0),
        AROS_LPA(const ULONG *, table, A1),
        struct GfxBase *, GfxBase, 147, Graphics)

AROS_LP1(ULONG, SetChipRev,
        AROS_LPA(ULONG, ChipRev, D0),
        struct GfxBase *, GfxBase, 148, Graphics)

AROS_LP4(void, SetABPenDrMd,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(ULONG, apen, D0),
        AROS_LPA(ULONG, bpen, D1),
        AROS_LPA(ULONG, drawMode, D2),
        struct GfxBase *, GfxBase, 149, Graphics)

AROS_LP4(void, GetRGB32,
        AROS_LPA(struct ColorMap *, cm, A0),
        AROS_LPA(ULONG, firstcolor, D0),
        AROS_LPA(ULONG, ncolors, D1),
        AROS_LPA(ULONG *, table, A1),
        struct GfxBase *, GfxBase, 150, Graphics)

AROS_LP2(struct Region *, XorRegionRegionND,
        AROS_LPA(struct Region *, R1, A0),
        AROS_LPA(struct Region *, R2, A1),
        struct GfxBase *, GfxBase, 151, Graphics)

AROS_LP2(struct Region *, XorRectRegionND,
        AROS_LPA(struct Region *, Reg, A0),
        AROS_LPA(struct Rectangle *, Rect, A1),
        struct GfxBase *, GfxBase, 152, Graphics)

AROS_LP5(struct BitMap *, AllocBitMap,
        AROS_LPA(ULONG, sizex, D0),
        AROS_LPA(ULONG, sizey, D1),
        AROS_LPA(ULONG, depth, D2),
        AROS_LPA(ULONG, flags, D3),
        AROS_LPA(struct BitMap *, friend_bitmap, A0),
        struct GfxBase *, GfxBase, 153, Graphics)

AROS_LP1(void, FreeBitMap,
        AROS_LPA(struct BitMap *, bm, A0),
        struct GfxBase *, GfxBase, 154, Graphics)

AROS_LP2(LONG, GetExtSpriteA,
        AROS_LPA(struct ExtSprite *, sprite, A2),
        AROS_LPA(struct TagItem *, tags, A1),
        struct GfxBase *, GfxBase, 155, Graphics)

AROS_LP3(ULONG, CoerceMode,
        AROS_LPA(struct ViewPort *, RealViewPort, A0),
        AROS_LPA(ULONG, MonitorID, D0),
        AROS_LPA(ULONG, Flags, D1),
        struct GfxBase *, GfxBase, 156, Graphics)

AROS_LP3(void, ChangeVPBitMap,
        AROS_LPA(struct ViewPort *, vp, A0),
        AROS_LPA(struct BitMap *, bm, A1),
        AROS_LPA(struct DBufInfo *, db, A2),
        struct GfxBase *, GfxBase, 157, Graphics)

AROS_LP2(void, ReleasePen,
        AROS_LPA(struct ColorMap *, cm, A0),
        AROS_LPA(ULONG, n, D0),
        struct GfxBase *, GfxBase, 158, Graphics)

AROS_LP6(LONG, ObtainPen,
        AROS_LPA(struct ColorMap *, cm, A0),
        AROS_LPA(ULONG, n, D0),
        AROS_LPA(ULONG, r, D1),
        AROS_LPA(ULONG, g, D2),
        AROS_LPA(ULONG, b, D3),
        AROS_LPA(ULONG, flags, D4),
        struct GfxBase *, GfxBase, 159, Graphics)

AROS_LP2(IPTR, GetBitMapAttr,
        AROS_LPA(struct BitMap *, bitmap, A0),
        AROS_LPA(ULONG, attribute, D1),
        struct GfxBase *, GfxBase, 160, Graphics)

AROS_LP1(struct DBufInfo *, AllocDBufInfo,
        AROS_LPA(struct ViewPort *, vp, A0),
        struct GfxBase *, GfxBase, 161, Graphics)

AROS_LP1(void, FreeDBufInfo,
        AROS_LPA(struct DBufInfo *, db, A1),
        struct GfxBase *, GfxBase, 162, Graphics)

AROS_LP2(ULONG, SetOutlinePen,
        AROS_LPA(struct RastPort *, rp, A0),
        AROS_LPA(ULONG, pen, D0),
        struct GfxBase *, GfxBase, 163, Graphics)

AROS_LP2(ULONG, SetWriteMask,
        AROS_LPA(struct RastPort *, rp, A0),
        AROS_LPA(ULONG, mask, D0),
        struct GfxBase *, GfxBase, 164, Graphics)

AROS_LP2(void, SetMaxPen,
        AROS_LPA(struct RastPort *, rp, A0),
        AROS_LPA(ULONG, maxpen, D0),
        struct GfxBase *, GfxBase, 165, Graphics)

AROS_LP5(void, SetRGB32CM,
        AROS_LPA(struct ColorMap *, cm, A0),
        AROS_LPA(ULONG, n, D0),
        AROS_LPA(ULONG, r, D1),
        AROS_LPA(ULONG, g, D2),
        AROS_LPA(ULONG, b, D3),
        struct GfxBase *, GfxBase, 166, Graphics)

AROS_LP7(void, ScrollRasterBF,
        AROS_LPA(struct RastPort *, rp, A1),
        AROS_LPA(LONG, dx, D0),
        AROS_LPA(LONG, dy, D1),
        AROS_LPA(LONG, xMin, D2),
        AROS_LPA(LONG, yMin, D3),
        AROS_LPA(LONG, xMax, D4),
        AROS_LPA(LONG, yMax, D5),
        struct GfxBase *, GfxBase, 167, Graphics)

AROS_LP5(ULONG, FindColor,
        AROS_LPA(struct ColorMap *, cm, A3),
        AROS_LPA(ULONG, r, D1),
        AROS_LPA(ULONG, g, D2),
        AROS_LPA(ULONG, b, D3),
        AROS_LPA(ULONG, maxpen, D4),
        struct GfxBase *, GfxBase, 168, Graphics)

AROS_LP2(struct ExtSprite *, AllocSpriteDataA,
        AROS_LPA(struct BitMap *, bitmap, A2),
        AROS_LPA(struct TagItem *, tagList, A1),
        struct GfxBase *, GfxBase, 170, Graphics)

AROS_LP4(LONG, ChangeExtSpriteA,
        AROS_LPA(struct ViewPort *, vp, A0),
        AROS_LPA(struct ExtSprite *, oldsprite, A1),
        AROS_LPA(struct ExtSprite *, newsprite, A2),
        AROS_LPA(struct TagItem *, tags, A3),
        struct GfxBase *, GfxBase, 171, Graphics)

AROS_LP1(void, FreeSpriteData,
        AROS_LPA(struct ExtSprite *, extsp, A2),
        struct GfxBase *, GfxBase, 172, Graphics)

AROS_LP2(void, SetRPAttrsA,
        AROS_LPA(struct RastPort *, rp, A0),
        AROS_LPA(struct TagItem *, tags, A1),
        struct GfxBase *, GfxBase, 173, Graphics)

AROS_LP2(void, GetRPAttrsA,
        AROS_LPA(struct RastPort *, rp, A0),
        AROS_LPA(struct TagItem *, tags, A1),
        struct GfxBase *, GfxBase, 174, Graphics)

AROS_LP1(ULONG, BestModeIDA,
        AROS_LPA(struct TagItem *, TagItems, A0),
        struct GfxBase *, GfxBase, 175, Graphics)

AROS_LP7(void, WriteChunkyPixels,
        AROS_LPA(struct RastPort *, rp, A0),
        AROS_LPA(LONG, xstart, D0),
        AROS_LPA(LONG, ystart, D1),
        AROS_LPA(LONG, xstop, D2),
        AROS_LPA(LONG, ystop, D3),
        AROS_LPA(UBYTE *, array, A2),
        AROS_LPA(LONG, bytesperrow, D4),
        struct GfxBase *, GfxBase, 176, Graphics)

AROS_LP0(struct RastPort *, CreateRastPort,
        struct GfxBase *, GfxBase, 177, Graphics)

AROS_LP1(struct RastPort *, CloneRastPort,
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 178, Graphics)

AROS_LP1(void, DeinitRastPort,
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 179, Graphics)

AROS_LP1(void, FreeRastPort,
        AROS_LPA(struct RastPort *, rp, A1),
        struct GfxBase *, GfxBase, 180, Graphics)

AROS_LP1(BOOL, LateGfxInit,
        AROS_LPA(APTR, data, A0),
        struct GfxBase *, GfxBase, 181, Graphics)

AROS_LP1(struct BitMap *, AllocScreenBitMap,
        AROS_LPA(ULONG, modeid, D0),
        struct GfxBase *, GfxBase, 182, Graphics)

AROS_LP0(BOOL, MouseCoordsRelative,
        struct GfxBase *, GfxBase, 183, Graphics)

AROS_LP2(BOOL, SetFrontBitMap,
        AROS_LPA(struct BitMap *, bitmap, A0),
        AROS_LPA(BOOL, copyback, D0),
        struct GfxBase *, GfxBase, 184, Graphics)

AROS_LP2(void, SetPointerPos,
        AROS_LPA(UWORD, x, D0),
        AROS_LPA(UWORD, y, D1),
        struct GfxBase *, GfxBase, 185, Graphics)

AROS_LP5(void, SetPointerShape,
        AROS_LPA(UWORD *, shape, A0),
        AROS_LPA(UWORD, width, D0),
        AROS_LPA(UWORD, height, D1),
        AROS_LPA(UWORD, xoffset, D2),
        AROS_LPA(UWORD, yoffset, D3),
        struct GfxBase *, GfxBase, 186, Graphics)

AROS_LP2(BOOL, ClearRegionRegion,
        AROS_LPA(struct Region *, R1, A0),
        AROS_LPA(struct Region *, R2, A1),
        struct GfxBase *, GfxBase, 187, Graphics)

AROS_LP1(struct Region *, CopyRegion,
        AROS_LPA(struct Region *, region, A0),
        struct GfxBase *, GfxBase, 188, Graphics)

AROS_LP2(BOOL, AreRegionsEqual,
        AROS_LPA(struct Region *, R1, A0),
        AROS_LPA(struct Region *, R2, A1),
        struct GfxBase *, GfxBase, 189, Graphics)

AROS_LP3(BOOL, IsPointInRegion,
        AROS_LPA(struct Region *, Reg, A0),
        AROS_LPA(WORD, x, D0),
        AROS_LPA(WORD, y, D1),
        struct GfxBase *, GfxBase, 190, Graphics)

AROS_LP4(BOOL, ScrollRegion,
        AROS_LPA(struct Region *, region, A0),
        AROS_LPA(struct Rectangle *, rect, A1),
        AROS_LPA(WORD, dx, D0),
        AROS_LPA(WORD, dy, D1),
        struct GfxBase *, GfxBase, 191, Graphics)

AROS_LP2(void, SwapRegions,
        AROS_LPA(struct Region *, region1, A0),
        AROS_LPA(struct Region *, region2, A0),
        struct GfxBase *, GfxBase, 192, Graphics)

AROS_LP3(BOOL, AndRectRect,
        AROS_LPA(struct Rectangle *, rect1, A0),
        AROS_LPA(struct Rectangle *, rect2, A1),
        AROS_LPA(struct Rectangle *, intersect, A2),
        struct GfxBase *, GfxBase, 193, Graphics)

AROS_LP4(struct Region *, NewRectRegion,
        AROS_LPA(WORD, MinX, D0),
        AROS_LPA(WORD, MinY, D1),
        AROS_LPA(WORD, MaxX, D2),
        AROS_LPA(WORD, MaxY, D3),
        struct GfxBase *, GfxBase, 194, Graphics)

AROS_LP2(BOOL, SetRegion,
        AROS_LPA(struct Region *, src, A0),
        AROS_LPA(struct Region *, dest, A1),
        struct GfxBase *, GfxBase, 195, Graphics)

AROS_LP9(void, BltRastPortBitMap,
        AROS_LPA(struct RastPort *, srcRastPort, A0),
        AROS_LPA(LONG, xSrc, D0),
        AROS_LPA(LONG, ySrc, D1),
        AROS_LPA(struct BitMap *, destBitMap, A1),
        AROS_LPA(LONG, xDest, D2),
        AROS_LPA(LONG, yDest, D3),
        AROS_LPA(ULONG, xSize, D4),
        AROS_LPA(ULONG, ySize, D5),
        AROS_LPA(ULONG, minterm, D6),
        struct GfxBase *, GfxBase, 196, Graphics)

AROS_LP0(void, ShowImminentReset,
        struct GfxBase *, GfxBase, 197, Graphics)

#endif /* CLIB_GRAPHICS_PROTOS_H */
