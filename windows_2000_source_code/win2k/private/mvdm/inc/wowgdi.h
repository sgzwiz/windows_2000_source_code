/*++ BUILD Version: 0001
 *
 *  WOW v1.0
 *
 *  Copyright (c) 1991, Microsoft Corporation
 *
 *  WOWGDI.H
 *  16-bit GDI API argument structures
 *
 *  History:
 *  Created 02-Feb-1991 by Jeff Parsons (jeffpar)
 *  Added Win 31 19-March-1992 Chandan S. Chauhan (ChandanC)
 *
--*/


/* GDI API IDs
 */
#define FUN_ADDFONTRESOURCE     119 //
#define FUN_ANIMATEPALETTE      367 //
#define FUN_ARC             23  //
#define FUN_BITBLT          34  //
#define FUN_BRUTE           213 // No proto
#define FUN_CHORD           348 //
#define FUN_CLOSEJOB            243 // No proto
#define FUN_CLOSEMETAFILE       126 //
#define FUN_COMBINERGN          47  //
#define FUN_COMPATIBLEBITMAP        157 // Internal
#define FUN_COPY            250 // Internal
#define FUN_COPYMETAFILE        151 //
#define FUN_CREATEBITMAP        48  //
#define FUN_CREATEBITMAPINDIRECT    49  //
#define FUN_CREATEBRUSHINDIRECT     50  //
#define FUN_CREATECOMPATIBLEBITMAP  51  //
#define FUN_CREATECOMPATIBLEDC      52  //
#define FUN_CREATEDC            53  //
#define FUN_CREATEDIBITMAP      442 //
#define FUN_CREATEDIBPATTERNBRUSH   445 //
#define FUN_CREATEDISCARDABLEBITMAP 156 //
#define FUN_CREATEELLIPTICRGN       54  //
#define FUN_CREATEELLIPTICRGNINDIRECT   55  //
#define FUN_CREATEFONT          56  //
#define FUN_CREATEFONTINDIRECT      57  //
#define FUN_CREATEHATCHBRUSH        58  //
#define FUN_CREATEIC            153 //
#define FUN_CREATEMETAFILE      125 //
#define FUN_CREATEPALETTE       360 //
#define FUN_CREATEPATTERNBRUSH      60  //
#define FUN_CREATEPEN           61  //
#define FUN_CREATEPENINDIRECT       62  //
#define FUN_CREATEPOLYGONRGN        63  //
#define FUN_CREATEPOLYPOLYGONRGN    451 //
#define FUN_CREATEPQ            230 // No proto
#define FUN_CREATEREALBITMAP        408 // Internal
#define FUN_CREATEREALBITMAPINDIRECT    406 // Internal
#define FUN_CREATERECTRGN       64  //
#define FUN_CREATERECTRGNINDIRECT   65  //
#define FUN_CREATEROUNDRECTRGN      444 //
#define FUN_CREATESOLIDBRUSH        66  //
#define FUN_CREATEUSERBITMAP        407 // Internal
#define FUN_CREATEUSERDISCARDABLEBITMAP 409 // Internal
#define FUN_DEATH           121 // Internal
#define FUN_DELETEABOVELINEFONTS    186 // Internal
#define FUN_DELETEDC            68  //
#define FUN_DELETEJOB           244 // No proto
#define FUN_DELETEMETAFILE      127 //
#define FUN_DELETEOBJECT        69  //
#define FUN_DELETEPQ            235 // No proto
#define FUN_DEVICECOLORMATCH        449 // Internal
#define FUN_DEVICEMODE          452 //
#define FUN_DMBITBLT            201 // No proto
#define FUN_DMCOLORINFO         202 // No proto
#define FUN_DMENUMDFONTS        206 // No proto
#define FUN_DMENUMOBJ           207 // No proto
#define FUN_DMOUTPUT            208 // No proto
#define FUN_DMPIXEL         209 // No proto
#define FUN_DMREALIZEOBJECT     210 // No proto
#define FUN_DMSCANLR            212 // No proto
#define FUN_DMSTRBLT            211 // No proto
#define FUN_DMTRANSPOSE         220 // No proto
#define FUN_DPTOLP          67  //
#define FUN_DPXLATE         138 // Internal
#define FUN_ELLIPSE         24  //
#define FUN_ENDSPOOLPAGE        247 // No proto
#define FUN_ENUMCALLBACK        158 // Internal
#define FUN_ENUMFONTS           70  //
#define FUN_ENUMMETAFILE        175 //
#define FUN_ENUMOBJECTS         71  //
#define FUN_EQUALRGN            72  //
#define FUN_ESCAPE          38  //
#define FUN_EXCLUDECLIPRECT     21  //
#define FUN_EXCLUDEVISRECT      73  // Internal
#define FUN_EXTDEVICEMODE       453 //
#define FUN_DEVICECAPABILITIES  454
//#define FUN_ADVANCEDSETUPDIALOG 455
#define FUN_EXTFLOODFILL        372 // Internal, proto
#define FUN_EXTRACTPQ           232 // No proto
#define FUN_EXTTEXTOUT          351 //
#define FUN_FASTWINDOWFRAME     400 // Internal
#define FUN_FILLRGN         40  //
#define FUN_FINALGDIINIT        405 // Internal
#define FUN_FLOODFILL           25  //
#define FUN_FRAMERGN            41  //
#define FUN_GDIFLUSH            263 // New Private
#define FUN_GDIINIT2            403 // Internal
#define FUN_GDIMOVEBITMAP       401 // Internal
#define FUN_GDIREALIZEPALETTE       362 // Internal
#define FUN_GDISELECTPALETTE        361 // Internal
#define FUN_GDI_WEP         0   // Export by name
#define FUN_GETASPECTRATIOFILTER    353 //
#define FUN_GETBITMAPBITS       74  //
#define FUN_GETBITMAPDIMENSION      162 //
#define FUN_GETBKCOLOR          75  //
#define FUN_GETBKMODE           76  //
#define FUN_GETBRUSHORG         149 //
#define FUN_GETCHARWIDTH        350 //
#define FUN_GETCLIPBOX          77  //
#define FUN_GETCLIPRGN          173 // Internal
#define FUN_GETCURLOGFONT       411 // Internal
#define FUN_GETCURRENTOBJECT        261 // New Private
#define FUN_GETCURRENTPOSITION      78  //
#define FUN_GETDCORG            79  //
#define FUN_GETDCSTATE          179 // Internal
#define FUN_GETDEVICECAPS       80  //
#define FUN_GETDIBITS           441 //
#define FUN_GETENVIRONMENT      133 //
#define FUN_GETMAPMODE          81  //
#define FUN_GETMETAFILE         124 //
#define FUN_GETMETAFILEBITS     159 //
#define FUN_GETNEARESTCOLOR     154 //
#define FUN_GETNEARESTPALETTEINDEX  370 //
#define FUN_GETOBJECT           82  //
#define FUN_GETOBJECTTYPE       260 // New Private
#define FUN_GETPALETTEENTRIES       363 //
#define FUN_GETPHYSICALFONTHANDLE   352 // Internal
#define FUN_GETPIXEL            83  //
#define FUN_GETPOLYFILLMODE     84  //
#define FUN_GETRELABS           86  // Internal
#define FUN_GETRGNBOX           134 //
#define FUN_GETROP2         85  //
#define FUN_GETSPOOLJOB         245 // No proto
#define FUN_GETSTOCKOBJECT      87  //
#define FUN_GETSTRETCHBLTMODE       88  //
#define FUN_GETSYSTEMPALETTEENTRIES 375 //
#define FUN_GETSYSTEMPALETTEUSE     374 //
#define FUN_GETTEXTALIGN        345 //
#define FUN_GETTEXTCHARACTEREXTRA   89  //
#define FUN_GETTEXTCOLOR        90  //
#define FUN_GETTEXTEXTENT       91  //
#define FUN_GETTEXTFACE         92  //
#define FUN_GETTEXTMETRICS      93  //
#define FUN_GETVIEWPORTEXT      94  //
#define FUN_GETVIEWPORTORG      95  //
#define FUN_GETWINDOWEXT        96  //
#define FUN_GETWINDOWORG        97  //
#define FUN_GSV             137 // Internal
#define FUN_INQUIREVISRGN       131 // Internal
#define FUN_INSERTPQ            233 // No proto
#define FUN_INTERNALCREATEDC        118 // Internal
#define FUN_INTERSECTCLIPRECT       22  //
#define FUN_INTERSECTVISRECT        98  // Internal
#define FUN_INVERTRGN           42  //
#define FUN_ISDCCURRENTPALETTE      412 // Internal
#define FUN_ISDCDIRTY           169 // Internal
#define FUN_ISVALIDMETAFILE     410 // Internal
#define FUN_LINEDDA         100 //
#define FUN_LINETO          19  //
#define FUN_LPTODP          99  //
#define FUN_LVBUNION            171 // Internal
#define FUN_MFDRAWTEXT          347 // Internal
#define FUN_MINPQ           231 // No proto
#define FUN_MOVETO          20  //
#define FUN_MULDIV          128 //
#define FUN_OFFSETCLIPRGN       32  //
#define FUN_OFFSETORG           143 // Internal
#define FUN_OFFSETRGN           101 //
#define FUN_OFFSETVIEWPORTORG       17  //
#define FUN_OFFSETVISRGN        102 // Internal
#define FUN_OFFSETWINDOWORG     15  //
#define FUN_OPENJOB         240 // No proto
#define FUN_PAINTRGN            43  //
#define FUN_PATBLT          29  //
#define FUN_PIE             26  //
#define FUN_PIXTOLINE           164 // Internal
#define FUN_PLAYMETAFILE        123 //
#define FUN_PLAYMETAFILERECORD      176 //
#define FUN_POLYGON         36  //
#define FUN_POLYLINE            37  //
#define FUN_POLYPOLYGON         450 //
#define FUN_POLYPOLYLINEWOW     487 //
#define FUN_PTINREGION          161 //
#define FUN_PTVISIBLE           103 //
#define FUN_QUERYABORT          155 // Internal
#define FUN_QUERYJOB            248 // Internal
#define FUN_RCOS            177 // Internal
#define FUN_REALIZEDEFAULTPALETTE   365 // Internal
#define FUN_RECTANGLE           27  //
#define FUN_RECTINREGION        181 //
#define FUN_RECTSTUFF           142 // Internal
#define FUN_RECTVISIBLE         104 //
#define FUN_REMOVEFONTRESOURCE      136 //
#define FUN_RESIZEPALETTE       368 //
#define FUN_RESTOREDC           39  //
#define FUN_RESTOREVISRGN       130 // Internal
#define FUN_RESURRECTION        122 // Internal
#define FUN_ROUNDRECT           28  //
#define FUN_RSIN            178 // Internal
#define FUN_SAVEDC          30  //
#define FUN_SAVEVISRGN          129 // Internal
#define FUN_SCALEEXT            140 // Internal
#define FUN_SCALEVIEWPORTEXT        18  //
#define FUN_SCALEWINDOWEXT      16  //
#define FUN_SCANLR          135 // Internal
#define FUN_SELECTCLIPRGN       44  //
#define FUN_SELECTOBJECT        45  //
#define FUN_SELECTVISRGN        105 // Internal
#define FUN_SETBITMAPBITS       106 //
#define FUN_SETBITMAPDIMENSION      163 //
#define FUN_SETBKCOLOR          1   //
#define FUN_SETBKMODE           2   //
#define FUN_SETBRUSHORG         148 //
#define FUN_SETDCORG            117 // Internal
#define FUN_SETDCSTATE          180 // Internal
#define FUN_SETDCSTATUS         170 // Internal
#define FUN_SETDIBITS           440 //
#define FUN_SETDIBITSTODEVICE       443 //
#define FUN_SETENVIRONMENT      132 //
#define FUN_SETMAPMODE          3   //
#define FUN_SETMAPPERFLAGS      349 //
#define FUN_SETMETAFILEBITS     160 //
#define FUN_SETPALETTEENTRIES       364 //
#define FUN_SETPIXEL            31  //
#define FUN_SETPOLYFILLMODE     6   //
#define FUN_SETRECTRGN          172 //
#define FUN_SETRELABS           5   // Internal
#define FUN_SETROP2         4   //
#define FUN_SETSTRETCHBLTMODE       7   //
#define FUN_SETSYSTEMPALETTEUSE     373 //
#define FUN_SETTEXTALIGN        346 //
#define FUN_SETTEXTCHARACTEREXTRA   8   //
#define FUN_SETTEXTCOLOR        9   //
#define FUN_SETTEXTJUSTIFICATION    10  //
#define FUN_SETVIEWPORTEXT      14  //
#define FUN_SETVIEWPORTORG      13  //
#define FUN_SETWINDOWEXT        12  //
#define FUN_SETWINDOWORG        11  //
#define FUN_SETWINVIEWEXT       139 // Internal
#define FUN_SHRINKGDIHEAP       354 // Internal
#define FUN_SIZEPQ          234 // No proto
#define FUN_STARTSPOOLPAGE      246 // No proto
#define FUN_STRETCHBLT          35  //
#define FUN_STRETCHDIBITS       439 //
#define FUN_STUFFINREGION       185 // Internal
#define FUN_STUFFVISIBLE        184 // Internal
#define FUN_TEXTOUT         33  //
#define FUN_UNREALIZEOBJECT     150 //
#define FUN_UPDATECOLORS        366 //
#define FUN_WORDSET         141 // Internal
#define FUN_WRITEDIALOG         242 // No proto
#define FUN_WRITESPOOL          241 // No proto
#define FUN_ABORTDOC            382
#define FUN_CREATESCALABLEFONTRESOURCE  310
#define FUN_ENDDOC          378
#define FUN_ENDPAGE         380
#define FUN_ENUMFONTFAMILIES        330
#define FUN_GETASPECTRATIOFILTEREX  486
#define FUN_GETBITMAPDIMENSIONEX    468
#define FUN_GETBOUNDSRECT       194
#define FUN_GETBRUSHORGEX       469
#define FUN_GETCHARABCWIDTHS        307
#define FUN_GETCURRENTPOSITIONEX    470
#define FUN_GETFONTDATA         311
#define FUN_GETGLYPHOUTLINE     309
#define FUN_GETOUTLINETEXTMETRICS   308
#define FUN_GETRASTERIZERCAPS       313
#define FUN_GETEXTEXTENTEX      188
#define FUN_GETEXTEXTENTPOINT       471
#define FUN_GETVIEWPORTEXTEX        472
#define FUN_GETVIEWPORTORGEX        473
#define FUN_GETWINDOWEXTEX      474
#define FUN_GETWINDOWORGEX      475
#define FUN_ISGDIOBJECT         462
#define FUN_MOVETOEX            483
#define FUN_OFFSETVIEWPORTORGEX     476
#define FUN_OFFSETWINDOWORGEX       477
#define FUN_QUERYABORT          155
#define FUN_RESETDC         376
#define FUN_SCALEVIEWPORTEXTEX      484
#define FUN_SCALEWINDOWEXTEX        485
#define FUN_SETABORTPROC        381
#define FUN_SETBITMAPDIMENSIONEX    478
#define FUN_SETBOUNDSRECT       193
#define FUN_SETMETAFILEBITSBETTER   196
#define FUN_SETVIEWPORTEXTEX        479
#define FUN_SETVIEWPORTORGEX        480
#define FUN_SETWINDOWEXTEX      481
#define FUN_SETWINDOWORGEX      482
#define FUN_SPOOLFILE           254
#define FUN_STARTDOC            377
#define FUN_STARTPAGE           379
#define FUN_BITMAPBITS          46
#define FUN_SETDCHOOK           190
#define FUN_GETDCHOOK           191
#define FUN_SETHOOKFLAGS        192
#define FUN_SELECTBITMAP        195
#define FUN_DMEXTTEXTOUT        214
#define FUN_DMGETCHARWIDTH      215
#define FUN_DMSTRETCHBLT        216
#define FUN_DMDIBBITS           217
#define FUN_DMSTRETCHDIBITS     218
#define FUN_DMSETDIBTODEV       219
#define FUN_DELETESPOOLPAGE     253
#define FUN_ENGINEENUMERATEFONT     300     // Internal
#define FUN_ENGINEDELETEFONT        301
#define FUN_ENGINEREALIZEFONT       302
#define FUN_ENGINEGETCHARWIDTH      303
#define FUN_ENGINESETFONTCONTEXT    304
#define FUN_ENGINEGETGLYPHBMP       305
#define FUN_ENGINEMAKEFONTDIR       306
#define FUN_ENGINEEXTTEXTOUT        314  // Internal
#define FUN_GETKERNINGPAIRS     332
#define FUN_FTRAPPING0          355  // Internal
#define FUN_GDISEEGDIDO         452
#define FUN_GDITASKTERMINATION      460
#define FUN_SETOBJECTOWNER      461
#define FUN_MAKEOBJECTPRIVATE       463
#define FUN_FIXUPBOGUSPUBLISHERMETAFILE 464
#define FUN_RECTVISIBLE_EHH     465
#define FUN_RECTINREGION_EHH        466
#define FUN_UNICODETOANSI       467  // Internal
#define FUN_CONVERTOUTLINEFONTFILE  312
#define FUN_GETTEXTEXTENTPOINT      471
#define FUN_CREATEDIBSECTION        489
#define FUN_SETDIBCOLORTABLE        602
#define FUN_GETDIBCOLORTABLE        603

#ifdef  FE_SB
// GetFontAssocStatus @488->459 for Taiwan, Prc and Korea
#define FUN_GETFONTASSOCSTATUS      459

/* EUDC/GAIJI escapes for FE */
#define TTYMODE                      2560
#define GAIJIFIRST                   TTYMODE+0x10
#define GAIJIFONTSIZE                GAIJIFIRST
#define GAIJIAREASIZE                GAIJIFIRST+1
#define GAIJISYSTEMGETFONT           GAIJIFIRST+2
#define GAIJISYSTEMSETFONT           GAIJIFIRST+3
#define GAIJIITOCODE                 GAIJIFIRST+4
#define GAIJILOCALOPEN               GAIJIFIRST+5
#define GAIJILOCALCLOSE              GAIJIFIRST+6
#define GAIJILOCALSETFONT            GAIJIFIRST+7
#define GAIJILOCALSAVE               GAIJIFIRST+8
#define GAIJILOCALRESTORE            GAIJIFIRST+9
#define GAIJIGETFILENAME             GAIJIFIRST+10
#define GAIJISETFILENAME             GAIJIFIRST+11
#define GAIJIGETDESCRIPTIONNAME      GAIJIFIRST+12
#define GAIJIPHYSICALFONTSIZE        GAIJIFIRST+13
#endif  // FE_SB

/* New for NT 5.0 Win95 compatibility */

#define FUN_ABORTPATH               511
#define FUN_ABORTPRINTER            271
#define FUN_ADDLPKTOGDI             614
#define FUN_BEGINPATH               512
#define FUN_BUILDINVERSETABLEDIB    617  // export 650
#define FUN_CLOSEENHMETAFILE        490
#define FUN_CLOSEFIGURE             513
#define FUN_CLOSEPRINTER            274
#define FUN_COPYENHMETAFILE         491
#define FUN_CREATEENHMETAFILE       492
#define FUN_CREATEHALFTONEPALETTE   529
#define FUN_DELETEENHMETAFILE       493
#define FUN_DRVGETPRINTERDATA       282
#define FUN_DRVSETPRINTERDATA       281
#define FUN_ENDDOCPRINTER           272
#define FUN_ENDPAGEPRINTER          270
#define FUN_ENDPATH                 514
#define FUN_ENGINEGETCHARWIDTHEX    299
#define FUN_ENGINEGETCHARWIDTHSTR   316
#define FUN_ENGINEGETGLYPHBMPEXT    305
#define FUN_ENGINEREALIZEFONTEXT    315
#define FUN_ENUMFONTFAMILIESEX      613
#define FUN_EXTCREATEPEN            523
#define FUN_EXTCREATEREGION         608
#define FUN_EXTSELECTCLIPRGN        508
#define FUN_FILLPATH                515
#define FUN_FLATTENPATH             516
#define FUN_GDICOMMENT              495
#define FUN___AVAILABLE_609         609
#define FUN_GDIPARAMETERSINFO       528
#define FUN_GDISIGNALPROC32         610
#define FUN_GETARCDIRECTION         524
#define FUN_GETCHARACTERPLACEMENT   615
#define FUN_GETENHMETAFILE          496
#define FUN_GETENHMETAFILEBITS      497
#define FUN_GETENHMETAFILEDESCRIPTION 498
#define FUN_GETENHMETAFILEHEADER    499
#define FUN_GETENHMETAFILEPALETTEENTRIES 501
#define FUN_GETFONTLANGUAGEINFO     616
#define FUN_GETMITERLIMIT           526
#define FUN_GETPATH                 517
#define FUN_GETRANDOMRGN            611
#define FUN_GETREALDRIVERINFO       280
#define FUN_GETREGIONDATA           607
#define FUN_GETTEXTCHARSET          612
#define FUN_GETTEXTEXTENTEX         188
#define FUN_GETTTGLYPHINDEXMAP      404
#define FUN_ICMCHECKCOLORSINGAMUT   622  // export 824
#define FUN_ICMCREATETRANSFORM      618  // export 820
#define FUN_ICMDELETETRANSFORM      619  // export 821
#define FUN_ICMTRANSLATERGB         620  // export 822
#define FUN_ICMTRANSLATERGBS        621  // export 823
#define FUN_OPENPRINTERA            266
#define FUN_PATHTOREGION            518
#define FUN_PLAYENHMETAFILERECORD   504
#define FUN_POLYBEZIER              502
#define FUN_POLYBEZIERTO            503
#define FUN_SELECTCLIPPATH          519
#define FUN_SETARCDIRECTION         525
#define FUN_SETENHMETAFILEBITS      505
#define FUN_SETMAGICCOLORS          606
#define FUN_SETMETARGN              506
#define FUN_SETMITERLIMIT           527
#define FUN_SETSOLIDBRUSH           604
#define FUN_STARTDOCPRINTERA        267
#define FUN_STARTPAGEPRINTER        268
#define FUN_STROKEANDFILLPATH       520
#define FUN_STROKEPATH              521
#define FUN_SYSDELETEOBJECT         605
#define FUN_WIDENPATH               522
#define FUN_WRITEPRINTER            269


/* XLATOFF */
#pragma pack(2)
/* XLATON */

typedef struct _ADDFONTRESOURCE16 {     /* g119 */
    VPSZ f1;
} ADDFONTRESOURCE16;
typedef ADDFONTRESOURCE16 UNALIGNED *PADDFONTRESOURCE16;

typedef struct _ANIMATEPALETTE16 {      /* g367 */
    VPPALETTEENTRY16 f4;
    WORD f3;
    WORD f2;
    HPAL16 f1;
} ANIMATEPALETTE16;
typedef ANIMATEPALETTE16 UNALIGNED *PANIMATEPALETTE16;

typedef struct _ARC16 {             /* g23 */
    SHORT f9;
    SHORT f8;
    SHORT f7;
    SHORT f6;
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} ARC16;
typedef ARC16 UNALIGNED *PARC16;

typedef struct _BITBLT16 {          /* g34 */
    DWORD f9;
    SHORT f8;
    SHORT f7;
    HDC16 f6;
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} BITBLT16;
typedef BITBLT16 UNALIGNED *PBITBLT16;

typedef struct _CHORD16 {           /* g348 */
    SHORT f9;
    SHORT f8;
    SHORT f7;
    SHORT f6;
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} CHORD16;
typedef CHORD16 UNALIGNED *PCHORD16;

typedef struct _SETRELABS16 {      /* g5 */
    SHORT f2;
    HDC16 f1;
} SETRELABS16;
typedef SETRELABS16 UNALIGNED *PSETRELABS16;

typedef struct _GETRELABS16 {      /* g86 */
    HDC16 f1;
} GETRELABS16;
typedef GETRELABS16 UNALIGNED *PGETRELABS16;

typedef struct _CLOSEMETAFILE16 {  /* g126 */
    HAND16 f1;
} CLOSEMETAFILE16;
typedef CLOSEMETAFILE16 UNALIGNED *PCLOSEMETAFILE16;

typedef struct _COMBINERGN16 {          /* g47 */
    SHORT f4;
    HRGN16 f3;
    HRGN16 f2;
    HRGN16 f1;
} COMBINERGN16;
typedef COMBINERGN16 UNALIGNED *PCOMBINERGN16;

typedef struct _COPYMETAFILE16 {        /* g151 */
    VPSZ f2;
    HAND16 f1;
} COPYMETAFILE16;
typedef COPYMETAFILE16 UNALIGNED *PCOPYMETAFILE16;

typedef struct _CREATEBITMAP16 {        /* g48 */
    VPBYTE f5;
    WORD f4;
    WORD f3;
    SHORT f2;
    SHORT f1;
} CREATEBITMAP16;
typedef CREATEBITMAP16 UNALIGNED *PCREATEBITMAP16;

typedef struct _CREATEUSERBITMAP16 {        /* g407 */
    VPBYTE f5;
    WORD f4;
    WORD f3;
    SHORT f2;
    SHORT f1;
} CREATEUSERBITMAP16, *PCREATEUSERBITMAP16;

typedef struct _CREATEBITMAPINDIRECT16 {    /* g49 */
    VPBITMAP16 f1;
} CREATEBITMAPINDIRECT16;
typedef CREATEBITMAPINDIRECT16 UNALIGNED *PCREATEBITMAPINDIRECT16;

typedef struct _CREATEBRUSHINDIRECT16 {     /* g50 */
    VPLOGBRUSH16 f1;
} CREATEBRUSHINDIRECT16;
typedef CREATEBRUSHINDIRECT16 UNALIGNED *PCREATEBRUSHINDIRECT16;

typedef struct _CREATECOMPATIBLEBITMAP16 {  /* g51 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} CREATECOMPATIBLEBITMAP16;
typedef CREATECOMPATIBLEBITMAP16 UNALIGNED *PCREATECOMPATIBLEBITMAP16;

typedef struct _CREATECOMPATIBLEDC16 {      /* g52 */
    HDC16 f1;
} CREATECOMPATIBLEDC16;
typedef CREATECOMPATIBLEDC16 UNALIGNED *PCREATECOMPATIBLEDC16;

typedef struct _CREATEDC16 {            /* g53 */
    VPDEVMODE31 f4;
    VPSZ f3;
    VPSZ f2;
    VPSZ f1;
} CREATEDC16;
typedef CREATEDC16 UNALIGNED *PCREATEDC16;

typedef struct _CREATEDIBITMAP16 {      /* g442 */
    WORD f6;
    VPBITMAPINFO16 f5;
    VPBYTE f4;
    DWORD f3;
    VPBITMAPINFOHEADER16 f2;
    HDC16 f1;
} CREATEDIBITMAP16;
typedef CREATEDIBITMAP16 UNALIGNED *PCREATEDIBITMAP16;

typedef struct _CREATEDIBSECTION16 {      /* g489 */
    DWORD f6;
    DWORD f5;
    VPBYTE f4;
    WORD f3;
    VPBITMAPINFO16 f2;
    HDC16 f1;
} CREATEDIBSECTION16;
typedef CREATEDIBSECTION16 UNALIGNED *PCREATEDIBSECTION16;

typedef struct _GETDIBCOLORTABLE16 {      /* g603 */
    VPBYTE f4;
    WORD f3;
    WORD f2;
    HDC16 f1;
} GETDIBCOLORTABLE16;
typedef GETDIBCOLORTABLE16 UNALIGNED *PGETDIBCOLORTABLE16;

typedef struct _SETDIBCOLORTABLE16 {      /* g602 */
    VPBYTE f4;
    WORD f3;
    WORD f2;
    HDC16 f1;
} SETDIBCOLORTABLE16;
typedef SETDIBCOLORTABLE16 UNALIGNED *PSETDIBCOLORTABLE16;

typedef struct _CREATEDIBPATTERNBRUSH16 {   /* g445 */
    WORD f2;
    VPVOID f1;
} CREATEDIBPATTERNBRUSH16;
typedef CREATEDIBPATTERNBRUSH16 UNALIGNED *PCREATEDIBPATTERNBRUSH16;

typedef struct _CREATEDISCARDABLEBITMAP16 { /* g156 */
    SHORT height;
    SHORT width;
    HDC16 hdc;
} CREATEDISCARDABLEBITMAP16;
typedef CREATEDISCARDABLEBITMAP16 UNALIGNED *PCREATEDISCARDABLEBITMAP16;

typedef struct _CREATEELLIPTICRGN16 {       /* g54 */
    SHORT f4;
    SHORT f3;
    SHORT f2;
    SHORT f1;
} CREATEELLIPTICRGN16;
typedef CREATEELLIPTICRGN16 UNALIGNED *PCREATEELLIPTICRGN16;

typedef struct _CREATEELLIPTICRGNINDIRECT16 {   /* g55 */
    VPRECT16 f1;
} CREATEELLIPTICRGNINDIRECT16;
typedef CREATEELLIPTICRGNINDIRECT16 UNALIGNED *PCREATEELLIPTICRGNINDIRECT16;

typedef struct _CREATEFONT16 {          /* g56 */
    VPSZ f14;
    WORD f13;
    WORD f12;
    WORD f11;
    WORD f10;
    WORD f9;
    WORD f8;
    WORD f7;
    WORD f6;
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    SHORT f1;
} CREATEFONT16;
typedef CREATEFONT16 UNALIGNED *PCREATEFONT16;

typedef struct _CREATEFONTINDIRECT16 {      /* g57 */
    VPLOGFONT16 f1;
} CREATEFONTINDIRECT16;
typedef CREATEFONTINDIRECT16 UNALIGNED *PCREATEFONTINDIRECT16;

typedef struct _CREATEHATCHBRUSH16 {        /* g58 */
    DWORD f2;
    SHORT f1;
} CREATEHATCHBRUSH16;
typedef CREATEHATCHBRUSH16 UNALIGNED *PCREATEHATCHBRUSH16;

typedef struct _CREATEIC16 {            /* g153 */
    VPDEVMODE31 f4;
    VPSZ f3;
    VPSZ f2;
    VPSZ f1;
} CREATEIC16;
typedef CREATEIC16 UNALIGNED *PCREATEIC16;

typedef struct _CREATEMETAFILE16 {      /* g125 */
    VPSZ f1;
} CREATEMETAFILE16;
typedef CREATEMETAFILE16 UNALIGNED *PCREATEMETAFILE16;

typedef struct _CREATEPALETTE16 {       /* g360 */
    VPLOGPALETTE16 f1;
} CREATEPALETTE16;
typedef CREATEPALETTE16 UNALIGNED *PCREATEPALETTE16;

typedef struct _CREATEPATTERNBRUSH16 {      /* g60 */
    HBM16 f1;
} CREATEPATTERNBRUSH16;
typedef CREATEPATTERNBRUSH16 UNALIGNED *PCREATEPATTERNBRUSH16;

typedef struct _CREATEPEN16 {           /* g61 */
    DWORD f3;
    SHORT f2;
    SHORT f1;
} CREATEPEN16;
typedef CREATEPEN16 UNALIGNED *PCREATEPEN16;

typedef struct _CREATEPENINDIRECT16 {       /* g62 */
    VPLOGPEN16 f1;
} CREATEPENINDIRECT16;
typedef CREATEPENINDIRECT16 UNALIGNED *PCREATEPENINDIRECT16;

typedef struct _CREATEPOLYGONRGN16 {        /* g63 */
    SHORT f3;
    SHORT f2;
    VPPOINT16 f1;
} CREATEPOLYGONRGN16;
typedef CREATEPOLYGONRGN16 UNALIGNED *PCREATEPOLYGONRGN16;

typedef struct _CREATEPOLYPOLYGONRGN16 {    /* g451 */
    SHORT f4;
    SHORT f3;
    VPSHORT f2;
    VPPOINT16 f1;
} CREATEPOLYPOLYGONRGN16;
typedef CREATEPOLYPOLYGONRGN16 UNALIGNED *PCREATEPOLYPOLYGONRGN16;

typedef struct _CREATERECTRGN16 {       /* g64 */
    SHORT f4;
    SHORT f3;
    SHORT f2;
    SHORT f1;
} CREATERECTRGN16;
typedef CREATERECTRGN16 UNALIGNED *PCREATERECTRGN16;

typedef struct _CREATERECTRGNINDIRECT16 {   /* g65 */
    VPRECT16 f1;
} CREATERECTRGNINDIRECT16;
typedef CREATERECTRGNINDIRECT16 UNALIGNED *PCREATERECTRGNINDIRECT16;

typedef struct _CREATEROUNDRECTRGN16 {      /* g444 */
    SHORT f6;
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    SHORT f1;
} CREATEROUNDRECTRGN16;
typedef CREATEROUNDRECTRGN16 UNALIGNED *PCREATEROUNDRECTRGN16;

typedef struct _CREATESOLIDBRUSH16 {        /* g66 */
    DWORD f1;
} CREATESOLIDBRUSH16;
typedef CREATESOLIDBRUSH16 UNALIGNED *PCREATESOLIDBRUSH16;

typedef struct _DELETEDC16 {            /* g68 */
    HDC16 f1;
} DELETEDC16;
typedef DELETEDC16 UNALIGNED *PDELETEDC16;

typedef struct _DELETEMETAFILE16 {      /* g127 */
    HAND16 f1;
} DELETEMETAFILE16;
typedef DELETEMETAFILE16 UNALIGNED *PDELETEMETAFILE16;

typedef struct _DELETEOBJECT16 {        /* g69 */
    HAND16 f1;
} DELETEOBJECT16;
typedef DELETEOBJECT16 UNALIGNED *PDELETEOBJECT16;

typedef struct _DEVICEMODE16 {          /* g452 */
    VPSZ    f4;
    VPSZ    f3;
    HAND16  f2;
    HWND16  f1;
} DEVICEMODE16;
typedef DEVICEMODE16 UNALIGNED *PDEVICEMODE16;

typedef struct _EXTDEVICEMODE16 {       /* g453 */
    SHORT   f8;
    VPSZ    f7;
    VPDEVMODE31 f6;
    VPSZ    f5;
    VPSZ    f4;
    VPDEVMODE31 f3;
    HAND16  f2;
    HWND16  f1;
} EXTDEVICEMODE16;
typedef EXTDEVICEMODE16 UNALIGNED *PEXTDEVICEMODE16;

typedef struct _DEVICECAPABILITIES16 {  /* g454 */
    VPDEVMODE31 f5;
    VPSZ    f4;
    SHORT   f3;
    VPSZ    f2;
    VPSZ    f1;
} DEVICECAPABILITIES16;
typedef DEVICECAPABILITIES16 UNALIGNED *PDEVICECAPABILITIES16;

//typedef struct _ADVANCEDSETUPDIALOG16 {  /* g455 */
//    VPSZ    f4;
//    VPSZ    f3;
//    HAND16  f2;
//    HWND16  f1;
//} ADVANCEDSETUPDIALOG16;
//typedef ADVANCEDSETUPDIALOG16 UNALIGNED *PADVANCEDSETUPDIALOG16;

typedef struct _DPTOLP16 {          /* g67 */
    SHORT f3;
    VPPOINT16 f2;
    HDC16 f1;
} DPTOLP16;
typedef DPTOLP16 UNALIGNED *PDPTOLP16;

typedef struct _ELLIPSE16 {         /* g24 */
    SHORT y2;
    SHORT x2;
    SHORT y1;
    SHORT x1;
    HDC16 hdc;
} ELLIPSE16;
typedef ELLIPSE16 UNALIGNED *PELLIPSE16;

typedef struct _ENUMFONTS16 {           /* g70 */
    VPBYTE f4;
    VPPROC f3;
    VPSZ f2;
    HDC16 f1;
} ENUMFONTS16;
typedef ENUMFONTS16 UNALIGNED *PENUMFONTS16;

typedef struct _ENUMMETAFILE16 {        /* g175 */
    VPBYTE  f4;
    VPPROC f3;
    HAND16  f2;
    HDC16   f1;
} ENUMMETAFILE16;
typedef ENUMMETAFILE16 UNALIGNED *PENUMMETAFILE16;

typedef struct _ENUMOBJECTS16 {         /* g71 */
    VPBYTE f4;
    VPPROC f3;
    SHORT f2;
    HDC16 f1;
} ENUMOBJECTS16;
typedef ENUMOBJECTS16 UNALIGNED *PENUMOBJECTS16;

typedef struct _EQUALRGN16 {            /* g72 */
    HRGN16 f2;
    HRGN16 f1;
} EQUALRGN16;
typedef EQUALRGN16 UNALIGNED *PEQUALRGN16;

typedef struct _ESCAPE16 {          /* g38 */
    VPSTR f5;
    VPSTR f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} ESCAPE16;
typedef ESCAPE16 UNALIGNED *PESCAPE16;

typedef struct _EXCLUDECLIPRECT16 {     /* g21 */
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} EXCLUDECLIPRECT16;
typedef EXCLUDECLIPRECT16 UNALIGNED *PEXCLUDECLIPRECT16;

typedef struct _EXTFLOODFILL16 {        /* g372 */
    WORD f5;
    DWORD f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} EXTFLOODFILL16;
typedef EXTFLOODFILL16 UNALIGNED *PEXTFLOODFILL16;

typedef struct _EXTTEXTOUT16 {          /* g351 */
    VPSHORT f8;
    WORD f7;
    VPSTR f6;
    VPRECT16 f5;
    WORD f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} EXTTEXTOUT16;
typedef EXTTEXTOUT16 UNALIGNED *PEXTTEXTOUT16;

typedef struct _FILLRGN16 {         /* g40 */
    HBRSH16 f3;
    HRGN16 f2;
    HDC16 f1;
} FILLRGN16;
typedef FILLRGN16 UNALIGNED *PFILLRGN16;

typedef struct _FLOODFILL16 {           /* g25 */
    DWORD f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} FLOODFILL16;
typedef FLOODFILL16 UNALIGNED *PFLOODFILL16;

typedef struct _FRAMERGN16 {            /* g41 */
    SHORT f5;
    SHORT f4;
    HBRSH16 f3;
    HRGN16 f2;
    HDC16 f1;
} FRAMERGN16;
typedef FRAMERGN16 UNALIGNED *PFRAMERGN16;

typedef struct _GETASPECTRATIOFILTER16 {    /* g353 */
    HDC16 f1;
} GETASPECTRATIOFILTER16;
typedef GETASPECTRATIOFILTER16 UNALIGNED *PGETASPECTRATIOFILTER16;

typedef struct _GETASPECTRATIOFILTEREX16 {  /* g486 */
    VPVOID  f2;
    HDC16 f1;
} GETASPECTRATIOFILTEREX16;
typedef GETASPECTRATIOFILTEREX16 UNALIGNED *PGETASPECTRATIOFILTEREX16;

typedef struct _GETBITMAPBITS16 {       /* g74 */
    VPSTR f3;
    LONG f2;
    HBM16 f1;
} GETBITMAPBITS16;
typedef GETBITMAPBITS16 UNALIGNED *PGETBITMAPBITS16;

typedef struct _GETBITMAPDIMENSION16 {      /* g162 */
    HBM16 f1;
} GETBITMAPDIMENSION16;
typedef GETBITMAPDIMENSION16 UNALIGNED *PGETBITMAPDIMENSION16;

typedef struct _GETBKCOLOR16 {          /* g75 */
    HDC16 f1;
} GETBKCOLOR16;
typedef GETBKCOLOR16 UNALIGNED *PGETBKCOLOR16;

typedef struct _GETBKMODE16 {           /* g76 */
    HDC16 f1;
} GETBKMODE16;
typedef GETBKMODE16 UNALIGNED *PGETBKMODE16;

typedef struct _GETBRUSHORG16 {         /* g149 */
    HDC16 f1;
} GETBRUSHORG16;
typedef GETBRUSHORG16 UNALIGNED *PGETBRUSHORG16;

typedef struct _GETCHARWIDTH16 {        /* g350 */
    VPSHORT lpIntBuffer;
    WORD wLastChar;
    WORD wFirstChar;
    HDC16 hDC;
} GETCHARWIDTH16;
typedef GETCHARWIDTH16 UNALIGNED *PGETCHARWIDTH16;

typedef struct _GETCLIPBOX16 {          /* g77 */
    VPRECT16 f2;
    HDC16 f1;
} GETCLIPBOX16;
typedef GETCLIPBOX16 UNALIGNED *PGETCLIPBOX16;

typedef struct _GETCURRENTOBJECT16 {        /* g261 */
    WORD  f2;
    HDC16 f1;
} GETCURRENTOBJECT16;
typedef GETCURRENTOBJECT16 UNALIGNED *PGETCURRENTOBJECT16;

typedef struct _GETCURRENTPOSITION16 {      /* g78 */
    HDC16 f1;
} GETCURRENTPOSITION16;
typedef GETCURRENTPOSITION16 UNALIGNED *PGETCURRENTPOSITION16;

typedef struct _GETDCORG16 {            /* g79 */
    HDC16 f1;
} GETDCORG16;
typedef GETDCORG16 UNALIGNED *PGETDCORG16;

typedef struct _GETDEVICECAPS16 {       /* g80 */
    SHORT f2;
    HDC16 f1;
} GETDEVICECAPS16;
typedef GETDEVICECAPS16 UNALIGNED *PGETDEVICECAPS16;

typedef struct _GETDIBITS16 {           /* g441 */
    WORD f7;
    VPBITMAPINFO16 f6;
    VPSTR f5;
    WORD f4;
    WORD f3;
    HAND16 f2;
    HDC16 f1;
} GETDIBITS16;
typedef GETDIBITS16 UNALIGNED *PGETDIBITS16;

typedef struct _GETENVIRONMENT16 {      /* g133 */
    WORD f3;
    VPSTR f2;
    VPSTR f1;
} GETENVIRONMENT16;
typedef GETENVIRONMENT16 UNALIGNED *PGETENVIRONMENT16;

typedef struct _GETKERNINGPAIRS16 {      /* g332 */
    VPSTR f3;
    WORD f2;
    WORD f1;
} GETKERNINGPAIRS16;
typedef GETKERNINGPAIRS16 UNALIGNED *PGETKERNINGPAIRS16;


typedef struct _GETMAPMODE16 {          /* g81 */
    HDC16 f1;
} GETMAPMODE16;
typedef GETMAPMODE16 UNALIGNED *PGETMAPMODE16;

typedef struct _GETMETAFILE16 {         /* g124 */
    VPSTR f1;
} GETMETAFILE16;
typedef GETMETAFILE16 UNALIGNED *PGETMETAFILE16;

typedef struct _GETMETAFILEBITS16 {     /* g159 */
    HAND16 f1;
} GETMETAFILEBITS16;
typedef GETMETAFILEBITS16 UNALIGNED *PGETMETAFILEBITS16;

typedef struct _GETNEARESTCOLOR16 {     /* g154 */
    DWORD f2;
    HDC16 f1;
} GETNEARESTCOLOR16;
typedef GETNEARESTCOLOR16 UNALIGNED *PGETNEARESTCOLOR16;

typedef struct _GETNEARESTPALETTEINDEX16 {  /* g370 */
    DWORD f2;
    HPAL16 f1;
} GETNEARESTPALETTEINDEX16;
typedef GETNEARESTPALETTEINDEX16 UNALIGNED *PGETNEARESTPALETTEINDEX16;

typedef struct _GETOBJECT16 {           /* g82 */
    VPSTR f3;
    SHORT f2;
    HAND16 f1;
} GETOBJECT16;
typedef GETOBJECT16 UNALIGNED *PGETOBJECT16;

typedef struct _GETOBJECTTYPE16 {       /* g260 */
    HDC16 f1;
} GETOBJECTTYPE16;
typedef GETOBJECTTYPE16 UNALIGNED *PGETOBJECTTYPE16;

typedef struct _GETPALETTEENTRIES16 {       /* g363 */
    VPPALETTEENTRY16 f4;
    WORD f3;
    WORD f2;
    HPAL16 f1;
} GETPALETTEENTRIES16;
typedef GETPALETTEENTRIES16 UNALIGNED *PGETPALETTEENTRIES16;

typedef struct _GETPIXEL16 {            /* g83 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} GETPIXEL16;
typedef GETPIXEL16 UNALIGNED *PGETPIXEL16;

typedef struct _GETPOLYFILLMODE16 {     /* g84 */
    HDC16 f1;
} GETPOLYFILLMODE16;
typedef GETPOLYFILLMODE16 UNALIGNED *PGETPOLYFILLMODE16;

typedef struct _GETRGNBOX16 {           /* g134 */
    VPRECT16 f2;
    HRGN16 f1;
} GETRGNBOX16;
typedef GETRGNBOX16 UNALIGNED *PGETRGNBOX16;

typedef struct _GETROP216 {         /* g85 */
    HDC16 f1;
} GETROP216;
typedef GETROP216 UNALIGNED *PGETROP216;

typedef struct _GETSTOCKOBJECT16 {      /* g87 */
    SHORT f1;
} GETSTOCKOBJECT16;
typedef GETSTOCKOBJECT16 UNALIGNED *PGETSTOCKOBJECT16;

typedef struct _GETSTRETCHBLTMODE16 {       /* g88 */
    HDC16 f1;
} GETSTRETCHBLTMODE16;
typedef GETSTRETCHBLTMODE16 UNALIGNED *PGETSTRETCHBLTMODE16;

typedef struct _GETSYSTEMPALETTEENTRIES16 { /* g375 */
    VPPALETTEENTRY16 f4;
    WORD f3;
    WORD f2;
    HDC16 f1;
} GETSYSTEMPALETTEENTRIES16;
typedef GETSYSTEMPALETTEENTRIES16 UNALIGNED *PGETSYSTEMPALETTEENTRIES16;

typedef struct _GETSYSTEMPALETTEUSE16 {     /* g374 */
    HDC16 f1;
} GETSYSTEMPALETTEUSE16;
typedef GETSYSTEMPALETTEUSE16 UNALIGNED *PGETSYSTEMPALETTEUSE16;

typedef struct _GETTEXTALIGN16 {        /* g345 */
    HDC16 f1;
} GETTEXTALIGN16;
typedef GETTEXTALIGN16 UNALIGNED *PGETTEXTALIGN16;

typedef struct _GETTEXTCHARACTEREXTRA16 {   /* g89 */
    HDC16 f1;
} GETTEXTCHARACTEREXTRA16;
typedef GETTEXTCHARACTEREXTRA16 UNALIGNED *PGETTEXTCHARACTEREXTRA16;

typedef struct _GETTEXTCOLOR16 {        /* g90 */
    HDC16 f1;
} GETTEXTCOLOR16;
typedef GETTEXTCOLOR16 UNALIGNED *PGETTEXTCOLOR16;

typedef struct _GETTEXTEXTENT16 {       /* g91 */
    SHORT f3;
    VPSTR f2;
    HDC16 f1;
} GETTEXTEXTENT16;
typedef GETTEXTEXTENT16 UNALIGNED *PGETTEXTEXTENT16;

typedef struct _GETTEXTFACE16 {         /* g92 */
    VPSTR f3;
    SHORT f2;
    HDC16 f1;
} GETTEXTFACE16;
typedef GETTEXTFACE16 UNALIGNED *PGETTEXTFACE16;

typedef struct _GETTEXTMETRICS16 {      /* g93 */
    VPTEXTMETRIC16 f2;
    HDC16 f1;
} GETTEXTMETRICS16;
typedef GETTEXTMETRICS16 UNALIGNED *PGETTEXTMETRICS16;

typedef struct _GETVIEWPORTEXT16 {      /* g94 */
    HDC16 f1;
} GETVIEWPORTEXT16;
typedef GETVIEWPORTEXT16 UNALIGNED *PGETVIEWPORTEXT16;

typedef struct _GETVIEWPORTORG16 {      /* g95 */
    HDC16 f1;
} GETVIEWPORTORG16;
typedef GETVIEWPORTORG16 UNALIGNED *PGETVIEWPORTORG16;

typedef struct _GETWINDOWEXT16 {        /* g96 */
    HDC16 f1;
} GETWINDOWEXT16;
typedef GETWINDOWEXT16 UNALIGNED *PGETWINDOWEXT16;

typedef struct _GETWINDOWORG16 {        /* g97 */
    HDC16 f1;
} GETWINDOWORG16;
typedef GETWINDOWORG16 UNALIGNED *PGETWINDOWORG16;

typedef struct _INTERSECTCLIPRECT16 {       /* g22 */
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} INTERSECTCLIPRECT16;
typedef INTERSECTCLIPRECT16 UNALIGNED *PINTERSECTCLIPRECT16;

typedef struct _INVERTRGN16 {           /* g42 */
    HRGN16 f2;
    HDC16 f1;
} INVERTRGN16;
typedef INVERTRGN16 UNALIGNED *PINVERTRGN16;

typedef struct _LINEDDA16 {         /* g100 */
    VPSTR f6;
    VPPROC f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    SHORT f1;
} LINEDDA16;
typedef LINEDDA16 UNALIGNED *PLINEDDA16;

typedef struct _LINETO16 {          /* g19 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} LINETO16;
typedef LINETO16 UNALIGNED *PLINETO16;

typedef struct _LPTODP16 {          /* g99 */
    SHORT f3;
    VPPOINT16 f2;
    HDC16 f1;
} LPTODP16;
typedef LPTODP16 UNALIGNED *PLPTODP16;

typedef struct _MOVETO16 {          /* g20 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} MOVETO16;
typedef MOVETO16 UNALIGNED *PMOVETO16;

typedef struct _MULDIV16 {          /* g128 */
    SHORT f3;
    SHORT f2;
    SHORT f1;
} MULDIV16;
typedef MULDIV16 UNALIGNED *PMULDIV16;

typedef struct _OFFSETCLIPRGN16 {       /* g32 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} OFFSETCLIPRGN16;
typedef OFFSETCLIPRGN16 UNALIGNED *POFFSETCLIPRGN16;

typedef struct _OFFSETRGN16 {           /* g101 */
    SHORT f3;
    SHORT f2;
    HRGN16 f1;
} OFFSETRGN16;
typedef OFFSETRGN16 UNALIGNED *POFFSETRGN16;

typedef struct _OFFSETVIEWPORTORG16 {       /* g17 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} OFFSETVIEWPORTORG16;
typedef OFFSETVIEWPORTORG16 UNALIGNED *POFFSETVIEWPORTORG16;

typedef struct _OFFSETWINDOWORG16 {     /* g15 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} OFFSETWINDOWORG16;
typedef OFFSETWINDOWORG16 UNALIGNED *POFFSETWINDOWORG16;

typedef struct _PAINTRGN16 {            /* g43 */
    HRGN16 f2;
    HDC16 f1;
} PAINTRGN16;
typedef PAINTRGN16 UNALIGNED *PPAINTRGN16;

typedef struct _PATBLT16 {          /* g29 */
    DWORD dwRop;
    SHORT nHeight;
    SHORT nWidth;
    SHORT y;
    SHORT x;
    HDC16 hdc;
} PATBLT16;
typedef PATBLT16 UNALIGNED *PPATBLT16;

typedef struct _PIE16 {             /* g26 */
    SHORT f9;
    SHORT f8;
    SHORT f7;
    SHORT f6;
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} PIE16;
typedef PIE16 UNALIGNED *PPIE16;

typedef struct _PLAYMETAFILE16 {        /* g123 */
    HAND16 f2;
    HDC16 f1;
} PLAYMETAFILE16;
typedef PLAYMETAFILE16 UNALIGNED *PPLAYMETAFILE16;

typedef struct _PLAYMETAFILERECORD16 {      /* g176 */
    WORD f4;
    VPMETARECORD16 f3;
    VPHANDLETABLE16 f2;
    HDC16 f1;
} PLAYMETAFILERECORD16;
typedef PLAYMETAFILERECORD16 UNALIGNED *PPLAYMETAFILERECORD16;

typedef struct _POLYGON16 {         /* g36 */
    SHORT f3;
    VPPOINT16 f2;
    HDC16 f1;
} POLYGON16;
typedef POLYGON16 UNALIGNED *PPOLYGON16;

typedef struct _POLYLINE16 {            /* g37 */
    SHORT f3;
    VPPOINT16 f2;
    HDC16 f1;
} POLYLINE16;
typedef POLYLINE16 UNALIGNED *PPOLYLINE16;

typedef struct _POLYPOLYGON16 {         /* g450 */
    SHORT f4;
    VPSHORT f3;
    VPPOINT16 f2;
    HDC16 f1;
} POLYPOLYGON16;
typedef POLYPOLYGON16 UNALIGNED *PPOLYPOLYGON16;

typedef struct _POLYPOLYLINEWOW16 {     /* g487 */
    DWORD f4;
    VPDWORD f3;
    VPDWORD f2;
    HDC16 f1;
} POLYPOLYLINEWOW16;
typedef POLYPOLYLINEWOW16 UNALIGNED *PPOLYPOLYLINEWOW16;

typedef struct _PTINREGION16 {          /* g161 */
    SHORT f3;
    SHORT f2;
    HRGN16 f1;
} PTINREGION16;
typedef PTINREGION16 UNALIGNED *PPTINREGION16;

typedef struct _PTVISIBLE16 {           /* g103 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} PTVISIBLE16;
typedef PTVISIBLE16 UNALIGNED *PPTVISIBLE16;

typedef struct _RECTANGLE16 {           /* g27 */
    SHORT y2;
    SHORT x2;
    SHORT y1;
    SHORT x1;
    HDC16 hdc;
} RECTANGLE16;
typedef RECTANGLE16 UNALIGNED *PRECTANGLE16;

typedef struct _RECTINREGION16 {        /* g181 */
    VPRECT16 f2;
    HRGN16 f1;
} RECTINREGION16;
typedef RECTINREGION16 UNALIGNED *PRECTINREGION16;

typedef struct _RECTVISIBLE16 {         /* g104 */
    VPRECT16 f2;
    HDC16 f1;
} RECTVISIBLE16;
typedef RECTVISIBLE16 UNALIGNED *PRECTVISIBLE16;

typedef struct _REMOVEFONTRESOURCE16 {      /* g136 */
    VPSTR f1;
} REMOVEFONTRESOURCE16;
typedef REMOVEFONTRESOURCE16 UNALIGNED *PREMOVEFONTRESOURCE16;

typedef struct _RESIZEPALETTE16 {       /* g368 */
    WORD f2;
    HPAL16 f1;
} RESIZEPALETTE16;
typedef RESIZEPALETTE16 UNALIGNED *PRESIZEPALETTE16;

typedef struct _RESTOREDC16 {           /* g39 */
    SHORT f2;
    HDC16 f1;
} RESTOREDC16;
typedef RESTOREDC16 UNALIGNED *PRESTOREDC16;

typedef struct _ROUNDRECT16 {           /* g28 */
    SHORT f7;
    SHORT f6;
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} ROUNDRECT16;
typedef ROUNDRECT16 UNALIGNED *PROUNDRECT16;

typedef struct _SAVEDC16 {          /* g30 */
    HDC16 f1;
} SAVEDC16;
typedef SAVEDC16 UNALIGNED *PSAVEDC16;

typedef struct _SCALEVIEWPORTEXT16 {        /* g18 */
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SCALEVIEWPORTEXT16;
typedef SCALEVIEWPORTEXT16 UNALIGNED *PSCALEVIEWPORTEXT16;

typedef struct _SCALEWINDOWEXT16 {      /* g16 */
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SCALEWINDOWEXT16;
typedef SCALEWINDOWEXT16 UNALIGNED *PSCALEWINDOWEXT16;

typedef struct _SELECTCLIPRGN16 {       /* g44 */
    HRGN16 f2;
    HDC16 f1;
} SELECTCLIPRGN16;
typedef SELECTCLIPRGN16 UNALIGNED *PSELECTCLIPRGN16;

typedef struct _SELECTOBJECT16 {        /* g45 */
    HAND16 f2;
    HDC16 f1;
} SELECTOBJECT16;
typedef SELECTOBJECT16 UNALIGNED *PSELECTOBJECT16;

typedef struct _SETBITMAPBITS16 {       /* g106 */
    VPSTR f3;
    DWORD f2;
    HBM16 f1;
} SETBITMAPBITS16;
typedef SETBITMAPBITS16 UNALIGNED *PSETBITMAPBITS16;

typedef struct _SETBITMAPDIMENSION16 {      /* g163 */
    SHORT f3;
    SHORT f2;
    HBM16 f1;
} SETBITMAPDIMENSION16;
typedef SETBITMAPDIMENSION16 UNALIGNED *PSETBITMAPDIMENSION16;

typedef struct _SETBKCOLOR16 {          /* g1 */
    DWORD f2;
    HDC16 f1;
} SETBKCOLOR16;
typedef SETBKCOLOR16 UNALIGNED *PSETBKCOLOR16;

typedef struct _SETBKMODE16 {           /* g2 */
    SHORT f2;
    HDC16 f1;
} SETBKMODE16;
typedef SETBKMODE16 UNALIGNED *PSETBKMODE16;

typedef struct _SETBRUSHORG16 {         /* g148 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SETBRUSHORG16;
typedef SETBRUSHORG16 UNALIGNED *PSETBRUSHORG16;

typedef struct _SETDIBITS16 {           /* g440 */
    WORD f7;
    VPBITMAPINFO16 f6;
    VPSTR f5;
    WORD f4;
    WORD f3;
    HAND16 f2;
    HDC16 f1;
} SETDIBITS16;
typedef SETDIBITS16 UNALIGNED *PSETDIBITS16;

typedef struct _SETDIBITSTODEVICE16 {       /* g443 */
    WORD f12;
    VPBITMAPINFO16 f11;
    VPSTR f10;
    WORD f9;
    WORD f8;
    WORD f7;
    WORD f6;
    WORD f5;
    WORD f4;
    WORD f3;
    WORD f2;
    HDC16 f1;
} SETDIBITSTODEVICE16;
typedef SETDIBITSTODEVICE16 UNALIGNED *PSETDIBITSTODEVICE16;

typedef struct _SETENVIRONMENT16 {      /* g132 */
    WORD f3;
    VPSTR f2;
    VPSTR f1;
} SETENVIRONMENT16;
typedef SETENVIRONMENT16 UNALIGNED *PSETENVIRONMENT16;

typedef struct _SETMAPMODE16 {          /* g3 */
    SHORT f2;
    HDC16 f1;
} SETMAPMODE16;
typedef SETMAPMODE16 UNALIGNED *PSETMAPMODE16;

typedef struct _SETMAPPERFLAGS16 {      /* g349 */
    DWORD f2;
    HDC16 f1;
} SETMAPPERFLAGS16;
typedef SETMAPPERFLAGS16 UNALIGNED *PSETMAPPERFLAGS16;

typedef struct _SETMETAFILEBITS16 {     /* g160 */
    HAND16 f1;
} SETMETAFILEBITS16;
typedef SETMETAFILEBITS16 UNALIGNED *PSETMETAFILEBITS16;

typedef struct _SETPALETTEENTRIES16 {       /* g364 */
    VPPALETTEENTRY16 f4;
    WORD f3;
    WORD f2;
    HPAL16 f1;
} SETPALETTEENTRIES16;
typedef SETPALETTEENTRIES16 UNALIGNED *PSETPALETTEENTRIES16;

typedef struct _SETPIXEL16 {            /* g31 */
    DWORD f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SETPIXEL16;
typedef SETPIXEL16 UNALIGNED *PSETPIXEL16;

typedef struct _SETPOLYFILLMODE16 {     /* g6 */
    SHORT f2;
    HDC16 f1;
} SETPOLYFILLMODE16;
typedef SETPOLYFILLMODE16 UNALIGNED *PSETPOLYFILLMODE16;

typedef struct _SETRECTRGN16 {          /* g172 */
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HRGN16 f1;
} SETRECTRGN16;
typedef SETRECTRGN16 UNALIGNED *PSETRECTRGN16;

typedef struct _SETROP216 {         /* g4 */
    SHORT f2;
    HDC16 f1;
} SETROP216;
typedef SETROP216 UNALIGNED *PSETROP216;

typedef struct _SETSTRETCHBLTMODE16 {       /* g7 */
    SHORT f2;
    HDC16 f1;
} SETSTRETCHBLTMODE16;
typedef SETSTRETCHBLTMODE16 UNALIGNED *PSETSTRETCHBLTMODE16;

typedef struct _SETSYSTEMPALETTEUSE16 {     /* g373 */
    WORD f2;
    HDC16 f1;
} SETSYSTEMPALETTEUSE16;
typedef SETSYSTEMPALETTEUSE16 UNALIGNED *PSETSYSTEMPALETTEUSE16;

typedef struct _SETTEXTALIGN16 {        /* g346 */
    WORD f2;
    HDC16 f1;
} SETTEXTALIGN16;
typedef SETTEXTALIGN16 UNALIGNED *PSETTEXTALIGN16;

typedef struct _SETTEXTCHARACTEREXTRA16 {   /* g8 */
    SHORT f2;
    HDC16 f1;
} SETTEXTCHARACTEREXTRA16;
typedef SETTEXTCHARACTEREXTRA16 UNALIGNED *PSETTEXTCHARACTEREXTRA16;

typedef struct _SETTEXTCOLOR16 {        /* g9 */
    DWORD f2;
    HDC16 f1;
} SETTEXTCOLOR16;
typedef SETTEXTCOLOR16 UNALIGNED *PSETTEXTCOLOR16;

typedef struct _SETTEXTJUSTIFICATION16 {    /* g10 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SETTEXTJUSTIFICATION16;
typedef SETTEXTJUSTIFICATION16 UNALIGNED *PSETTEXTJUSTIFICATION16;

typedef struct _SETVIEWPORTEXT16 {      /* g14 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SETVIEWPORTEXT16;
typedef SETVIEWPORTEXT16 UNALIGNED *PSETVIEWPORTEXT16;

typedef struct _SETVIEWPORTORG16 {      /* g13 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SETVIEWPORTORG16;
typedef SETVIEWPORTORG16 UNALIGNED *PSETVIEWPORTORG16;

typedef struct _SETWINDOWEXT16 {        /* g12 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SETWINDOWEXT16;
typedef SETWINDOWEXT16 UNALIGNED *PSETWINDOWEXT16;

typedef struct _SETWINDOWORG16 {        /* g11 */
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SETWINDOWORG16;
typedef SETWINDOWORG16 UNALIGNED *PSETWINDOWORG16;

#ifdef NULLSTRUCT
typedef struct _SHRINKGDIHEAP16 {        /* g354 */
} SHRINKGDIHEAP16;
typedef SHRINKGDIHEAP16 UNALIGNED *PSHRINKGDIHEAP16;
#endif

typedef struct _STRETCHBLT16 {          /* g35 */
    DWORD f11;
    SHORT f10;
    SHORT f9;
    SHORT f8;
    SHORT f7;
    HDC16 f6;
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} STRETCHBLT16;
typedef STRETCHBLT16 UNALIGNED *PSTRETCHBLT16;

typedef struct _STRETCHDIBITS16 {       /* g439 */
    DWORD f13;
    WORD f12;
    VPBITMAPINFO16 f11;
    VPSTR f10;
    WORD f9;
    WORD f8;
    WORD f7;
    WORD f6;
    WORD f5;
    WORD f4;
    WORD f3;
    WORD f2;
    HDC16 f1;
} STRETCHDIBITS16;
typedef STRETCHDIBITS16 UNALIGNED *PSTRETCHDIBITS16;

typedef struct _TEXTOUT16 {         /* g33 */
    SHORT f5;
    VPSTR f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} TEXTOUT16;
typedef TEXTOUT16 UNALIGNED *PTEXTOUT16;

typedef struct _UNREALIZEOBJECT16 {     /* g150 */
    HBRSH16 f1;
} UNREALIZEOBJECT16;
typedef UNREALIZEOBJECT16 UNALIGNED *PUNREALIZEOBJECT16;

typedef struct _UPDATECOLORS16 {        /* g366 */
    HDC16 f1;
} UPDATECOLORS16;
typedef UPDATECOLORS16 UNALIGNED *PUPDATECOLORS16;

// These are new functions for win 31

typedef struct _ABORTDOC16 {            /* g382 */
    HDC16 f1;
} ABORTDOC16;
typedef ABORTDOC16 UNALIGNED *PABORTDOC16;

typedef struct _CREATESCALABLEFONTRESOURCE16 {  /* g510 */
    VPSZ f4;
    VPSZ f3;
    VPSZ f2;
    WORD  f1;
} CREATESCALABLEFONTRESOURCE16;
typedef CREATESCALABLEFONTRESOURCE16 UNALIGNED *PCREATESCALABLEFONTRESOURCE16;

typedef struct _ENDDOC16 {          /* g378 */
    HDC16 f1;
} ENDDOC16;
typedef ENDDOC16 UNALIGNED *PENDDOC16;

typedef struct _ENDPAGE16 {         /* g380 */
    HDC16 f1;
} ENDPAGE16;
typedef ENDPAGE16 UNALIGNED *PENDPAGE16;

typedef struct _ENUMFONTFAMILIES16 {        /* g330 */
    VPBYTE f4;
    VPPROC f3;
    VPSZ f2;
    HDC16 f1;
} ENUMFONTFAMILIES16;
typedef ENUMFONTFAMILIES16 UNALIGNED *PENUMFONTFAMILIES16;

typedef struct _GETBITMAPDIMENSIONEX16 {            /* g468 */
    VPVOID f2;
    WORD f1;
} GETBITMAPDIMENSIONEX16;
typedef GETBITMAPDIMENSIONEX16 UNALIGNED *PGETBITMAPDIMENSIONEX16;

typedef struct _GETBOUNDSRECT16 {           /* g194 */
    WORD f3;
    VPRECT16 f2;
    HDC16 f1;
} GETBOUNDSRECT16;
typedef GETBOUNDSRECT16 UNALIGNED *PGETBOUNDSRECT16;

typedef struct _GETBRUSHORGEX16 {           /* g469 */
    VPPOINT16 f2;
    HDC16 f1;
} GETBRUSHORGEX16;
typedef GETBRUSHORGEX16 UNALIGNED *PGETBRUSHORGEX16;

typedef struct _GETCHARABCWIDTHS16 {        /* g307 */
    VPVOID f4;
    WORD f3;
    WORD f2;
    HDC16 f1;
} GETCHARABCWIDTHS16;
typedef GETCHARABCWIDTHS16 UNALIGNED *PGETCHARABCWIDTHS16;

typedef struct _GETCURRENTPOSITIONEX16 {            /* g470 */
    VPPOINT16 f2;
    HDC16 f1;
} GETCURRENTPOSITIONEX16;
typedef GETCURRENTPOSITIONEX16 UNALIGNED *PGETCURRENTPOSITIONEX16;

typedef struct _GETFONTDATA16 {     /* g311 */
    DWORD f5;
    VPVOID f4;
    DWORD f3;
    DWORD f2;
    HDC16 f1;
} GETFONTDATA16;
typedef GETFONTDATA16 UNALIGNED *PGETFONTDATA16;

typedef struct _GETGLYPHOUTLINE16 {     /* g309 */
    VPVOID f7;
    VPVOID f6;
    DWORD f5;
    VPVOID f4;
    WORD f3;
    WORD f2;
    HDC16 f1;
} GETGLYPHOUTLINE16;
typedef GETGLYPHOUTLINE16 UNALIGNED *PGETGLYPHOUTLINE16;

typedef struct _GETOULTLINETEXTMETRICS16 {  /* g1000 */
    VPVOID f3;
    WORD f2;
    HDC16 f1;
} GETOULTLINETEXTMETRICS16;
typedef GETOULTLINETEXTMETRICS16 UNALIGNED *PGETOULTLINETEXTMETRICS16;

typedef struct _GETRASTERIZERCAPS16 {   /* g313 */
    SHORT f2;
    VPVOID f1;
} GETRASTERIZERCAPS16;
typedef GETRASTERIZERCAPS16 UNALIGNED *PGETRASTERIZERCAPS16;

typedef struct _GETTEXTEXTENTPOINT16 {      /* gxx */
    VPVOID f4;
    SHORT f3;
    VPSZ f2;
    HDC16 f1;
} GETTEXTEXTENTPOINT16;
typedef GETTEXTEXTENTPOINT16 UNALIGNED *PGETTEXTEXTENTPOINT16;

typedef struct _GETVIEWPORTEXTEX16 {        /* g472 */
    VPVOID f2;
    HDC16 f1;
} GETVIEWPORTEXTEX16;
typedef GETVIEWPORTEXTEX16 UNALIGNED *PGETVIEWPORTEXTEX16;

typedef struct _GETVIEWPORTORGEX16 {        /* g473 */
    VPPOINT16 f2;
    HDC16 f1;
} GETVIEWPORTORGEX16;
typedef GETVIEWPORTORGEX16 UNALIGNED *PGETVIEWPORTORGEX16;

typedef struct _GETWINDOWEXTEX16 {      /* g474 */
    VPVOID f2;
    HDC16 f1;
} GETWINDOWEXTEX16;
typedef GETWINDOWEXTEX16 UNALIGNED *PGETWINDOWEXTEX16;

typedef struct _GETWINDOWORGEX16 {      /* g475 */
    VPPOINT16 f2;
    HDC16 f1;
} GETWINDOWORGEX16;
typedef GETWINDOWORGEX16 UNALIGNED *PGETWINDOWORGEX16;

typedef struct _ISGDIOBJECT16 {     /* g462 */
    WORD f1;
} ISGDIOBJECT16;
typedef ISGDIOBJECT16 UNALIGNED *PISGDIOBJECT16;

typedef struct _MOVETOEX16 {        /* g483 */
    VPPOINT16 f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} MOVETOEX16;
typedef MOVETOEX16 UNALIGNED *PMOVETOEX16;

typedef struct _OFFSETVIEWPORTORGEX16 {     /* g476 */
    VPPOINT16 f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} OFFSETVIEWPORTORGEX16;
typedef OFFSETVIEWPORTORGEX16 UNALIGNED *POFFSETVIEWPORTORGEX16;

typedef struct _OFFSETWINDOWORGEX16 {       /* g477 */
    VPPOINT16 f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} OFFSETWINDOWORGEX16;
typedef OFFSETWINDOWORGEX16 UNALIGNED *POFFSETWINDOWORGEX16;

typedef struct _QUERTABORT16 {      /* gxxx */
    SHORT f2;
    HDC16 f1;
} QUERTABORT16;
typedef QUERTABORT16 UNALIGNED *PQUERTABORT16;

typedef struct _RESETDC16 {     /* g376 */
    VPVOID f2;
    HDC16 f1;
} RESETDC16;
typedef RESETDC16 UNALIGNED *PRESETDC16;

typedef struct _SCALEVIEWPORTEXTEX16 {      /* g484 */
    VPVOID f6;
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SCALEVIEWPORTEXTEX16;
typedef SCALEVIEWPORTEXTEX16 UNALIGNED *PSCALEVIEWPORTEXTEX16;

typedef struct _SCALEWINDOWEXTEX16 {        /* g485 */
    VPVOID f6;
    SHORT f5;
    SHORT f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SCALEWINDOWEXTEX16;
typedef SCALEWINDOWEXTEX16 UNALIGNED *PSCALEWINDOWEXTEX16;

typedef struct _SETABORTPROC16 {        /* g381 */
    VPVOID f2;
    HDC16 f1;
} SETABORTPROC16;
typedef SETABORTPROC16 UNALIGNED *PSETABORTPROC16;

typedef struct _SETBITMAPDIMENSIONEX16 {        /* g478 */
    VPVOID f4;
    SHORT f3;
    SHORT f2;
    WORD f1;
} SETBITMAPDIMENSIONEX16;
typedef SETBITMAPDIMENSIONEX16 UNALIGNED *PSETBITMAPDIMENSIONEX16;

typedef struct _SETBOUNDSRECT16 {       /* g193 */
    WORD f3;
    VPRECT16 f2;
    HDC16 f1;
} SETBOUNDSRECT16;
typedef SETBOUNDSRECT16 UNALIGNED *PSETBOUNDSRECT16;

typedef struct _SETMETAFILEBITSBETTER16 {       /* g196 */
    WORD f1;
} SETMETAFILEBITSBETTER16;
typedef SETMETAFILEBITSBETTER16 UNALIGNED *PSETMETAFILEBITSBETTER16;

typedef struct _SETVIEWPORTEXTEX16 {        /* g479 */
    VPVOID f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SETVIEWPORTEXTEX16;
typedef SETVIEWPORTEXTEX16 UNALIGNED *PSETVIEWPORTEXTEX16;

typedef struct _SETVIEWPORTORGEX16 {        /* g480 */
    VPPOINT16 f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SETVIEWPORTORGEX16;
typedef SETVIEWPORTORGEX16 UNALIGNED *PSETVIEWPORTORGEX16;

typedef struct _SETWINDOWEXTEX16 {      /* g481 */
    VPVOID f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SETWINDOWEXTEX16;
typedef SETWINDOWEXTEX16 UNALIGNED *PSETWINDOWEXTEX16;

typedef struct _SETWINDOWORGEX16 {      /* g482 */
    VPPOINT16 f4;
    SHORT f3;
    SHORT f2;
    HDC16 f1;
} SETWINDOWORGEX16;
typedef SETWINDOWORGEX16 UNALIGNED *PSETWINDOWORGEX16;

typedef struct _SPOOLFILE16 {       /* g254 */
    VPSZ f4;
    VPSZ f3;
    VPSZ f2;
    VPSZ f1;
} SPOOLFILE16;
typedef SPOOLFILE16 UNALIGNED *PSPOOLFILE16;

typedef struct _STARTDOC16 {        /* g377 */
    VPVOID f2;
    HDC16 f1;
} STARTDOC16;
typedef STARTDOC16 UNALIGNED *PSTARTDOC16;

typedef struct _STARTPAGE16 {       /* g379 */
    HDC16 f1;
} STARTPAGE16;
typedef STARTPAGE16 UNALIGNED *PSTARTPAGE16;

typedef struct _GETOUTLINETEXTMETRICS16 {       /* g308 */
    VPVOID f3;
    WORD f2;
    HDC16 f1;
} GETOUTLINETEXTMETRICS16;
typedef GETOUTLINETEXTMETRICS16 UNALIGNED *PGETOUTLINETEXTMETRICS16;

typedef struct _DOCINFO16 {                    /* di16wow32 */
    SHORT   cbSize;
    VPSZ    lpszDocName;
    VPSZ    lpszOutput;
} DOCINFO16;
typedef DOCINFO16 UNALIGNED *LPDOCINFO16;

typedef struct _SIZE16 {                       /* sz16wow32 */
    SHORT   cx;
    SHORT   cy;
} SIZE16;
typedef SIZE16 UNALIGNED *PSIZE16;
typedef VPVOID VPSIZE16;

typedef struct _INQUIREVISRGN16 {       /* g131 */
    HDC16 f1;
}INQUIREVISRGN16;
typedef INQUIREVISRGN16 UNALIGNED *PINQUIREVISRGN16;

typedef struct _GETCLIPRGN16 {       /* g173 */
    HDC16   f1;
}GETCLIPRGN16;
typedef GETCLIPRGN16 UNALIGNED *PGETCLIPRGN16;


typedef struct _OPENJOB16 {  /* g240 */
    WORD    f3;
    VPSZ    f2;
    VPSZ    f1;
} OPENJOB16;
typedef OPENJOB16 UNALIGNED *POPENJOB16;

typedef struct _STARTSPOOLPAGE16 {  /* g246 */
    HAND16 f1;
} STARTSPOOLPAGE16;
typedef STARTSPOOLPAGE16 UNALIGNED *PSTARTSPOOLPAGE16;

typedef struct _ENDSPOOLPAGE16 {  /* g247 */
    HAND16 f1;
} ENDSPOOLPAGE16;
typedef ENDSPOOLPAGE16 UNALIGNED *PENDSPOOLPAGE16;

typedef struct _CLOSEJOB16 {  /* g243 */
    HAND16 f1;
} CLOSEJOB16;
typedef CLOSEJOB16 UNALIGNED *PCLOSEJOB16;

typedef struct _WRITESPOOL16 {  /* g241 */
    WORD    f3;
    VPSZ    f2;
    HAND16  f1;
} WRITESPOOL16;
typedef WRITESPOOL16 UNALIGNED *PWRITESPOOL16;

typedef struct _DELETEJOB16 {  /* g244 */
    WORD    f2;
    HAND16  f1;
} DELETEJOB16;
typedef DELETEJOB16 UNALIGNED *PDELETEJOB16;

typedef struct _WRITEDIALOG16 {  /* g242 */
    WORD    f3;
    VPSZ    f2;
    HAND16  f1;
} WRITEDIALOG16;
typedef WRITEDIALOG16 UNALIGNED *PWRITEDIALOG16;

#ifdef FE_SB
// GetFontAssocStatus @488->459 for Taiwan, Prc and Korea
typedef struct _GETFONTASSOCSTATUS16 {          /* g459 */
    HDC16 f1;
} GETFONTASSOCSTATUS16;
typedef GETFONTASSOCSTATUS16 UNALIGNED *PGETFONTASSOCSTATUS16;
#endif  // FE_SB

typedef struct _DMBITBLT16 {  /* g201 */
    VPSZ    pdrawmode;
    VPSZ    pbrush;
    LONG    rop;
    WORD    exty;
    WORD    extx;
    WORD    srcy;
    WORD    srcx;
    VPSZ    pbitmapsrc;
    WORD    desty;
    WORD    destx;
    VPSZ    pbitmapdest;
} DMBITBLT16;
typedef DMBITBLT16 UNALIGNED *PDMBITBLT16;

typedef struct _GETCURLOGFONT16 {        /* g411 */
    HAND16 hDC;
} GETCURLOGFONT16;
typedef GETCURLOGFONT16 UNALIGNED *PGETCURLOGFONT16;


/* New for NT 5.0 Win95 compatibility */


typedef struct _ABORTPATH16 {        /* g511 */
    HDC16 hdc;
} ABORTPATH16;
typedef ABORTPATH16 UNALIGNED *PABORTPATH16;

typedef struct _ABORTPRINTER16 {        /* g271 */
    DWORD hPrinter;
} ABORTPRINTER16;
typedef ABORTPRINTER16 UNALIGNED *PABORTPRINTER16;

typedef struct _ADDLPKTOGDI16 {        /* g614 */
    WORD  iCharset;
    WORD  hlibLPK;
} ADDLPKTOGDI16;
typedef ADDLPKTOGDI16 UNALIGNED *PADDLPKTOGDI16;

typedef struct _BEGINPATH16 {        /* g512 */
    HDC16 hdc;
} BEGINPATH16;
typedef BEGINPATH16 UNALIGNED *PBEGINPATH16;

typedef struct _BUILDINVERSETABLEDIB16 {        /* g617 */
    DWORD  dwUniqueID;
    VPVOID lpbi;
} BUILDINVERSETABLEDIB16;
typedef BUILDINVERSETABLEDIB16 UNALIGNED *PBUILDINVERSETABLEDIB16;

typedef struct _CLOSEENHMETAFILE16 {        /* g490 */
    HDC16 hdc;
} CLOSEENHMETAFILE16;
typedef CLOSEENHMETAFILE16 UNALIGNED *PCLOSEENHMETAFILE16;

typedef struct _CLOSEFIGURE16 {        /* g513 */
    HDC16 hdc;
} CLOSEFIGURE16;
typedef CLOSEFIGURE16 UNALIGNED *PCLOSEFIGURE16;

typedef struct _CLOSEPRINTER16 {        /* g274 */
    DWORD  hPrinter;
} CLOSEPRINTER16;
typedef CLOSEPRINTER16 UNALIGNED *PCLOSEPRINTER16;

typedef struct _COPYENHMETAFILE16 {        /* g491 */
    VPSTR   lpszFile;
    HAND16  hemfSrc;
} COPYENHMETAFILE16;
typedef COPYENHMETAFILE16 UNALIGNED *PCOPYENHMETAFILE16;

typedef struct _CREATEENHMETAFILE16 {        /* g492 */
    VPSTR     lpszDescription;
    VPRECTL16 lprclFrame;
    VPSTR     lpszFile;
    HDC16     hdcRef;
} CREATEENHMETAFILE16;
typedef CREATEENHMETAFILE16 UNALIGNED *PCREATEENHMETAFILE16;

typedef struct _CREATEHALFTONEPALETTE16 {        /* g529 */
    HDC16 hdc;
} CREATEHALFTONEPALETTE16;
typedef CREATEHALFTONEPALETTE16 UNALIGNED *PCREATEHALFTONEPALETTE16;

typedef struct _DELETEENHMETAFILE16 {        /* g493 */
    HAND16 hemf;
} DELETEENHMETAFILE16;
typedef DELETEENHMETAFILE16 UNALIGNED *PDELETEENHMETAFILE16;

typedef struct _DRVGETPRINTERDATA16 {        /* g282 */
    VPDWORD   lpdwNeeded;
    DWORD     cbData;
    VPBYTE    lpData;
    VPDWORD   lpdwType;
    VPSTR     lpszValueName;
    VPSTR     lpszPrinter;
} DRVGETPRINTERDATA16;
typedef DRVGETPRINTERDATA16 UNALIGNED *PDRVGETPRINTERDATA16;

typedef struct _DRVSETPRINTERDATA16 {        /* g281 */
    DWORD     cbData;
    VPBYTE    lpData;
    VPDWORD   lpdwType;
    VPSTR     lpszValueName;
    VPSTR     lpszPrinter;
} DRVSETPRINTERDATA16;
typedef DRVSETPRINTERDATA16 UNALIGNED *PDRVSETPRINTERDATA16;

typedef struct _ENDDOCPRINTER16 {        /* g272 */
    DWORD     hPrinter;
} ENDDOCPRINTER16;
typedef ENDDOCPRINTER16 UNALIGNED *PENDDOCPRINTER16;

typedef struct _ENDPAGEPRINTER16 {        /* g270 */
    DWORD     hPrinter;
} ENDPAGEPRINTER16;
typedef ENDPAGEPRINTER16 UNALIGNED *PENDPAGEPRINTER16;

typedef struct _ENDPATH16 {        /* g514 */
    HDC16 hdc;
} ENDPATH16;
typedef ENDPATH16 UNALIGNED *PENDPATH16;

typedef struct _ENGINEGETCHARWIDTHEX16 {        /* g299 */
    VPWORD    lpwWidths;
    WORD      nLast;
    WORD      nFirst;
    VPVOID    lpEFont;
} ENGINEGETCHARWIDTHEX16;
typedef ENGINEGETCHARWIDTHEX16 UNALIGNED *PENGINEGETCHARWIDTHEX16;

typedef struct _ENGINEGETCHARWIDTHSTR16 {        /* g316 */
    VPWORD    lpwWidths;
    WORD      wCount;
    VPSTR     lpGlyphs;
    VPVOID    lpEFont;
} ENGINEGETCHARWIDTHSTR16;
typedef ENGINEGETCHARWIDTHSTR16 UNALIGNED *PENGINEGETCHARWIDTHSTR16;

typedef struct _ENGINEGETGLYPHBMPEXT16 {        /* g305 */
    VPVOID    lpBmpMetrics;
    DWORD     dwSizeBmp;
    VPVOID    lpBitmap;
    WORD      wQueryType;
    WORD      wChar;
    VPVOID    lpEFont;
    HDC16     hdc;
} ENGINEGETGLYPHBMPEXT16;
typedef ENGINEGETGLYPHBMPEXT16 UNALIGNED *PENGINEGETGLYPHBMPEXT16;

typedef struct _ENGINEREALIZEFONTEXT16 {        /* g315 */
    WORD        wFlags;
    VPVOID      lpFont;
    VPVOID      lpTextTransform;
    VPLOGFONT16 lpLogFont;
    HDC16       hdc;
} ENGINEREALIZEFONTEXT16;
typedef ENGINEREALIZEFONTEXT16 UNALIGNED *PENGINEREALIZEFONTEXT16;

typedef struct _ENUMFONTFAMILIESEX16 {        /* g613 */
    DWORD       dwFlags;
    VPVOID      lpClientData;
    VPPROC      lpfnCallBack;
    VPLOGFONT16 lpLogFont;
    HDC16       hdc;
} ENUMFONTFAMILIESEX16;
typedef ENUMFONTFAMILIESEX16 UNALIGNED *PENUMFONTFAMILIESEX16;

typedef struct _EXTCREATEPEN16 {        /* g523 */
    VPVOID    lpStyle;
    DWORD     dwStyleCount;
    VPVOID    lpntlb;
    DWORD     dwWidth;
    DWORD     dwPenStyle;
} EXTCREATEPEN16;
typedef EXTCREATEPEN16 UNALIGNED *PEXTCREATEPEN16;

typedef struct _EXTCREATEREGION16 {        /* g608 */
    VPVOID    lpRgnData;
    DWORD     dwCount;
    VPBYTE    lpReserved;
} EXTCREATEREGION16;
typedef EXTCREATEREGION16 UNALIGNED *PEXTCREATEREGION16;

typedef struct _EXTSELECTCLIPRGN16 {        /* g508 */
    SHORT     iMode;
    HRGN16    hrgn;
    HDC16     hdc;
} EXTSELECTCLIPRGN16;
typedef EXTSELECTCLIPRGN16 UNALIGNED *PEXTSELECTCLIPRGN16;

typedef struct _FILLPATH16 {        /* g515 */
    HDC16  hdc;
} FILLPATH16;
typedef FILLPATH16 UNALIGNED *PFILLPATH16;

typedef struct _FLATTENPATH16 {        /* g516 */
    HDC16  hdc;
} FLATTENPATH16;
typedef FLATTENPATH16 UNALIGNED *PFLATTENPATH16;

typedef struct _GDICOMMENT16 {        /* g495 */
    VPBYTE  lpData;
    DWORD   cbSize;
    HDC16   hdc;
} GDICOMMENT16;
typedef GDICOMMENT16 UNALIGNED *PGDICOMMENT16;

typedef struct _GDIPARAMETERSINFO16 {        /* g528 */
    WORD   flags;
    VPVOID lParam;
    WORD   wParam;
    WORD   wFlag;
} GDIPARAMETERSINFO16;
typedef GDIPARAMETERSINFO16 UNALIGNED *PGDIPARAMETERSINFO16;

typedef struct _GDISIGNALPROC3216 {        /* g610 */
    WORD  hTask16;
    DWORD dwFlags;
    DWORD dwID;
    DWORD dwSignalID;
} GDISIGNALPROC3216;
typedef GDISIGNALPROC3216 UNALIGNED *PGDISIGNALPROC3216;

typedef struct _GETARCDIRECTION16 {        /* g524 */
    HDC16 hdc;
} GETARCDIRECTION16;
typedef GETARCDIRECTION16 UNALIGNED *PGETARCDIRECTION16;

typedef struct _GCP_RESULTS16                /* gcp_r */
{
    DWORD lStructSize;
    VPSTR lpOutString;
    VPSTR lpOrder;
    VPSTR lpDx;
    VPSTR lpCaretPos;
    VPSTR lpClass;
    VPSTR lpGlyphs;
    SHORT nGlyphs;
    SHORT nMaxFit;
} GCP_RESULTS16;
typedef GCP_RESULTS16 UNALIGNED *PGCP_RESULTS16;

typedef struct _GETCHARACTERPLACEMENT16 {        /* g615 */
    DWORD  dwFlags;
    VPVOID lpResults;
    WORD   wMaxExtent;
    WORD   wCount;
    VPSTR  lpszText;
    HDC16  hdc;
} GETCHARACTERPLACEMENT16;
typedef GETCHARACTERPLACEMENT16 UNALIGNED *PGETCHARACTERPLACEMENT16;

typedef struct _GETENHMETAFILE16 {        /* g496 */
    VPSTR lpszFile;
} GETENHMETAFILE16;
typedef GETENHMETAFILE16 UNALIGNED *PGETENHMETAFILE16;

typedef struct _GETENHMETAFILEBITS16 {        /* g497 */
    VPBYTE  lpBuffer;
    DWORD   cbBuffer;
    HAND16  hemf;
} GETENHMETAFILEBITS16;
typedef GETENHMETAFILEBITS16 UNALIGNED *PGETENHMETAFILEBITS16;

typedef struct _GETENHMETAFILEDESCRIPTION16 {        /* g498 */
    VPSTR   lpszBuffer;
    DWORD   cbBuffer;
    HAND16  hemf;
} GETENHMETAFILEDESCRIPTION16;
typedef GETENHMETAFILEDESCRIPTION16 UNALIGNED *PGETENHMETAFILEDESCRIPTION16;

typedef struct _GETENHMETAFILEHEADER16 {        /* g499 */
    VPVOID  lpmrmf;
    DWORD   cbBuffer;
    HAND16  hemf;
} GETENHMETAFILEHEADER16;
typedef GETENHMETAFILEHEADER16 UNALIGNED *PGETENHMETAFILEHEADER16;

typedef struct _GETENHMETAFILEPALETTEENTRIES16 {        /* g501 */
    VPVOID  lpclr;
    DWORD   cEntries;
    HAND16  hemf;
} GETENHMETAFILEPALETTEENTRIES16;
typedef GETENHMETAFILEPALETTEENTRIES16 UNALIGNED *PGETENHMETAFILEPALETTEENTRIES16;

typedef struct _GETFONTLANGUAGEINFO16 {        /* g616 */
    HDC16 hdc;
} GETFONTLANGUAGEINFO16;
typedef GETFONTLANGUAGEINFO16 UNALIGNED *PGETFONTLANGUAGEINFO16;

typedef struct _GETMITERLIMIT16 {        /* g526 */
    VPLONG lpMiter;
    HDC16  hdc;
} GETMITERLIMIT16;
typedef GETMITERLIMIT16 UNALIGNED *PGETMITERLIMIT16;

typedef struct _GETPATH16 {        /* g517 */
    LONG       cptl;
    VPBYTE     lpby;
    VPPOINTL16 lpptl;
    HDC16      hdc;
} GETPATH16;
typedef GETPATH16 UNALIGNED *PGETPATH16;

typedef struct _GETRANDOMRGN16 {        /* g611 */
    WORD     iType;
    HRGN16   hrgn;
    HDC16    hdc;
} GETRANDOMRGN16;
typedef GETRANDOMRGN16 UNALIGNED *PGETRANDOMRGN16;

typedef struct _GETREALDRIVERINFO16 {        /* g280 */
    VPSTR lpszDriverPath;
    VPSTR lpszDeviceName;
    VPSTR lpszPrinterName;
} GETREALDRIVERINFO16;
typedef GETREALDRIVERINFO16 UNALIGNED *PGETREALDRIVERINFO16;

typedef struct _GETREGIONDATA16 {        /* g607 */
    VPVOID  lpRgnData;
    DWORD   dwCount;
    HDC16   hrgn;
} GETREGIONDATA16;
typedef GETREGIONDATA16 UNALIGNED *PGETREGIONDATA16;

typedef struct _GETTEXTCHARSET16 {        /* g612 */
    HDC16  hdc;
} GETTEXTCHARSET16;
typedef GETTEXTCHARSET16 UNALIGNED *PGETTEXTCHARSET16;

typedef struct _GETTEXTEXTENTEX16 {        /* g188 */
    WORD    wFlags;
    VPWORD  lpDx;
    VPWORD  lpnFit;
    WORD    wMaxExtent;
    WORD    wCount;
    VPSTR   lpszString;
    HDC16   hdc;
} GETTEXTEXTENTEX16;
typedef GETTEXTEXTENTEX16 UNALIGNED *PGETTEXTEXTENTEX16;

typedef struct _GETTTGLYPHINDEXMAP16 {        /* g404 */
    VPVOID  lpEFont;
    WORD    wCharSet;
} GETTTGLYPHINDEXMAP16;
typedef GETTTGLYPHINDEXMAP16 UNALIGNED *PGETTTGLYPHINDEXMAP16;

typedef struct _ICMCHECKCOLORSINGAMUT16 {        /* g622 */
    DWORD  f4;
    VPBYTE f3;
    VPVOID lpRGBQuad;
    DWORD  hcmTransform;
} ICMCHECKCOLORSINGAMUT16;
typedef ICMCHECKCOLORSINGAMUT16 UNALIGNED *PICMCHECKCOLORSINGAMUT16;

typedef struct _ICMCREATETRANSFORM16 {        /* g618 */
    VPBYTE lpdevchar;
    VPBYTE lpdevcharacter;
    VPBYTE lplogcolorspace;
} ICMCREATETRANSFORM16;
typedef ICMCREATETRANSFORM16 UNALIGNED *PICMCREATETRANSFORM16;

typedef struct _ICMDELETETRANSFORM16 {        /* g619 */
    DWORD     huh;
    VPDWORD   lpColorRef;
    RGBQUAD16 rgbQuad;
    DWORD     hcmTransform;
} ICMDELETETRANSFORM16;
typedef ICMDELETETRANSFORM16 UNALIGNED *PICMDELETETRANSFORM16;

typedef struct _ICMTRANSLATERGB16 {        /* g620 */
    DWORD     huh;
    VPDWORD   lpColorRef;
    RGBQUAD16 rgbQuad;
    DWORD     hcmTransform;
} ICMTRANSLATERGB16;
typedef ICMTRANSLATERGB16 UNALIGNED *PICMTRANSLATERGB16;

typedef struct _ICMTRANSLATERGBS16 {        /* g621 */
    DWORD     flags;
    DWORD     destflags;
    VPVOID    lpdest;
    DWORD     nsrcwrap;
    DWORD     nsrcheight;
    DWORD     hsrcwidth;
    DWORD     srcflags;
    VPVOID    lpsrc;
} ICMTRANSLATERGBS16;
typedef ICMTRANSLATERGBS16 UNALIGNED *PICMTRANSLATERGBS16;

typedef struct _OPENPRINTERA16 {        /* g266 */
    VPVOID  lppd;
    VPDWORD hPrinter;
    VPSTR   lpszPrinter;
} OPENPRINTERA16;
typedef OPENPRINTERA16 UNALIGNED *POPENPRINTERA16;

typedef struct _PATHTOREGION16 {        /* g518 */
    HDC16 hdc;
} PATHTOREGION16;
typedef PATHTOREGION16 UNALIGNED *PPATHTOREGION16;

typedef struct _PLAYENHMETAFILERECORD16 {        /* g504 */
    DWORD   dwHandles;
    VPVOID  lpemr;
    VPVOID  lpht;
    HDC16   hdc;
} PLAYENHMETAFILERECORD16;
typedef PLAYENHMETAFILERECORD16 UNALIGNED *PPLAYENHMETAFILERECORD16;

typedef struct _POLYBEZIER16 {        /* g502 */
    SHORT     f3;
    VPPOINT16 f2;
    HDC16     f1;
} POLYBEZIER16;
typedef POLYBEZIER16 UNALIGNED *PPOLYBEZIER16;

typedef struct _POLYBEZIERTO16 {        /* g503 */
    SHORT     f3;
    VPPOINT16 f2;
    HDC16     f1;
} POLYBEZIERTO16;
typedef POLYBEZIERTO16 UNALIGNED *PPOLYBEZIERTO16;

typedef struct _SELECTCLIPPATH16 {        /* g519 */
    SHORT     iMode;
    HDC16     hdc;
} SELECTCLIPPATH16;
typedef SELECTCLIPPATH16 UNALIGNED *PSELECTCLIPPATH16;

typedef struct _SETARCDIRECTION16 {        /* g525 */
    SHORT     iArcDirection;
    HDC16     hdc;
} SETARCDIRECTION16;
typedef SETARCDIRECTION16 UNALIGNED *PSETARCDIRECTION16;

typedef struct _SETENHMETAFILEBITS16 {        /* g505 */
    VPBYTE  lpBuffer;
    DWORD   cbBuffer;
} SETENHMETAFILEBITS16;
typedef SETENHMETAFILEBITS16 UNALIGNED *PSETENHMETAFILEBITS16;

typedef struct _SETMAGICCOLORS16 {        /* g606 */
    WORD   iColor;
    DWORD  c1;
    HDC16  hdc;
} SETMAGICCOLORS16;
typedef SETMAGICCOLORS16 UNALIGNED *PSETMAGICCOLORS16;

typedef struct _SETMETARGN16 {        /* g506 */
    HDC16  hdc;
} SETMETARGN16;
typedef SETMETARGN16 UNALIGNED *PSETMETARGN16;

typedef struct _SETMITERLIMIT16 {        /* g527 */
    VPLONG  lpeMiter;
    LONG    eMiter;
    HDC16   hdc;
} SETMITERLIMIT16;
typedef SETMITERLIMIT16 UNALIGNED *PSETMITERLIMIT16;

typedef struct _SETSOLIDBRUSH16 {        /* g604 */
    DWORD   rgbNewColor;
    HAND16  hbrush;
} SETSOLIDBRUSH16;
typedef SETSOLIDBRUSH16 UNALIGNED *PSETSOLIDBRUSH16;

typedef struct _STARTDOCPRINTERA16 {        /* g267 */
    VPVOID  lpDocInfo;
    DWORD   dwLevel;
    DWORD   hPrinter;
} STARTDOCPRINTERA16;
typedef STARTDOCPRINTERA16 UNALIGNED *PSTARTDOCPRINTERA16;

typedef struct _STARTPAGEPRINTER16 {        /* g268 */
    DWORD   hPrinter;
} STARTPAGEPRINTER16;
typedef STARTPAGEPRINTER16 UNALIGNED *PSTARTPAGEPRINTER16;

typedef struct _STROKEANDFILLPATH16 {        /* g520 */
    HDC16 hdc;
} STROKEANDFILLPATH16;
typedef STROKEANDFILLPATH16 UNALIGNED *PSTROKEANDFILLPATH16;

typedef struct _STROKEPATH16 {        /* g521 */
    HDC16 hdc;
} STROKEPATH16;
typedef STROKEPATH16 UNALIGNED *PSTROKEPATH16;

typedef struct _SYSDELETEOBJECT16 {        /* g605 */
    HAND16 h;
} SYSDELETEOBJECT16;
typedef SYSDELETEOBJECT16 UNALIGNED *PSYSDELETEOBJECT16;

typedef struct _WIDENPATH16 {        /* g522 */
    HDC16 hdc;
} WIDENPATH16;
typedef WIDENPATH16 UNALIGNED *PWIDENPATH16;

typedef struct _WRITEPRINTER16 {        /* g269 */
    VPDWORD lpdwWritten;
    DWORD   cbBuf;
    VPVOID  lpBuf;
    DWORD   hPrinter;
} WRITEPRINTER16;
typedef WRITEPRINTER16 UNALIGNED *PWRITEPRINTER16;



/* XLATOFF */
#pragma pack()
/* XLATON */
