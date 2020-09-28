#include "windows.h"
// For NT5 langpack dialog
#define IDD_DIALOG_LPK                  101
#define IDC_CHECK_LPK                   1000
#define IDC_STATIC_LANG                 201
#define IDC_STATIC                      -1

//
//  IDs for Mime Language Name (0x1000 - 0x10FF)
//
#define IDS_MIME_LANG_DEFAULT           0x1000
#define IDS_LANGPACK_INSTALL            0x1001
#define IDS_NO_ADMIN                    0x1002
#define IDS_NT5_LANGPACK                0x1003
//
//  IDs for Mime RFC1766 Name (0x1100 - 0x11FF)
//
#define IDS_RFC1766_LCID0436            0x1100            
#define IDS_RFC1766_LCID041C            0x1101
#define IDS_RFC1766_LCID0001            0x1102
#define IDS_RFC1766_LCID0401            0x1103
#define IDS_RFC1766_LCID0801            0x1104
#define IDS_RFC1766_LCID0C01            0x1105
#define IDS_RFC1766_LCID1001            0x1106
#define IDS_RFC1766_LCID1401            0x1107
#define IDS_RFC1766_LCID1801            0x1108
#define IDS_RFC1766_LCID1C01            0x1109
#define IDS_RFC1766_LCID2001            0x110A
#define IDS_RFC1766_LCID2401            0x110B
#define IDS_RFC1766_LCID2801            0x110C
#define IDS_RFC1766_LCID2C01            0x110D
#define IDS_RFC1766_LCID3001            0x110E
#define IDS_RFC1766_LCID3401            0x110F
#define IDS_RFC1766_LCID3801            0x1110
#define IDS_RFC1766_LCID3C01            0x1111
#define IDS_RFC1766_LCID4001            0x1112
#define IDS_RFC1766_LCID042D            0x1113
#define IDS_RFC1766_LCID0402            0x1114
#define IDS_RFC1766_LCID0423            0x1115
#define IDS_RFC1766_LCID0403            0x1116
#define IDS_RFC1766_LCID0004            0x1117
#define IDS_RFC1766_LCID0404            0x1118
#define IDS_RFC1766_LCID0804            0x1119
#define IDS_RFC1766_LCID0C04            0x111A
#define IDS_RFC1766_LCID1004            0x111B
#define IDS_RFC1766_LCID041A            0x111C
#define IDS_RFC1766_LCID0405            0x111D
#define IDS_RFC1766_LCID0406            0x111E
#define IDS_RFC1766_LCID0413            0x111F
#define IDS_RFC1766_LCID0813            0x1120
#define IDS_RFC1766_LCID0009            0x1121
#define IDS_RFC1766_LCID0409            0x1122
#define IDS_RFC1766_LCID0809            0x1123
#define IDS_RFC1766_LCID0C09            0x1124
#define IDS_RFC1766_LCID1009            0x1125
#define IDS_RFC1766_LCID1409            0x1126
#define IDS_RFC1766_LCID1809            0x1127
#define IDS_RFC1766_LCID1C09            0x1128
#define IDS_RFC1766_LCID2009            0x1129
#define IDS_RFC1766_LCID2809            0x112A
#define IDS_RFC1766_LCID2C09            0x112B
#define IDS_RFC1766_LCID0425            0x112C
#define IDS_RFC1766_LCID0438            0x112D
#define IDS_RFC1766_LCID0429            0x112E
#define IDS_RFC1766_LCID040B            0x112F
#define IDS_RFC1766_LCID040C            0x1130
#define IDS_RFC1766_LCID080C            0x1131
#define IDS_RFC1766_LCID0C0C            0x1132
#define IDS_RFC1766_LCID100C            0x1133
#define IDS_RFC1766_LCID140C            0x1134
#define IDS_RFC1766_LCID043C            0x1135
#define IDS_RFC1766_LCID0407            0x1136
#define IDS_RFC1766_LCID0807            0x1137
#define IDS_RFC1766_LCID0C07            0x1138
#define IDS_RFC1766_LCID1007            0x1139
#define IDS_RFC1766_LCID1407            0x113A
#define IDS_RFC1766_LCID0408            0x113B
#define IDS_RFC1766_LCID040D            0x113C
#define IDS_RFC1766_LCID0439            0x113D
#define IDS_RFC1766_LCID040E            0x113E
#define IDS_RFC1766_LCID040F            0x113F
#define IDS_RFC1766_LCID0421            0x1140
#define IDS_RFC1766_LCID0410            0x1141
#define IDS_RFC1766_LCID0810            0x1142
#define IDS_RFC1766_LCID0411            0x1143
#define IDS_RFC1766_LCID0412            0x1144
#define IDS_RFC1766_LCID0426            0x1145
#define IDS_RFC1766_LCID0427            0x1146
#define IDS_RFC1766_LCID042F            0x1147
#define IDS_RFC1766_LCID043E            0x1148
#define IDS_RFC1766_LCID043A            0x1149
#define IDS_RFC1766_LCID0414            0x114A
#define IDS_RFC1766_LCID0814            0x114B
#define IDS_RFC1766_LCID0415            0x114C
#define IDS_RFC1766_LCID0416            0x114D
#define IDS_RFC1766_LCID0816            0x114E
#define IDS_RFC1766_LCID0417            0x114F
#define IDS_RFC1766_LCID0418            0x1150
#define IDS_RFC1766_LCID0818            0x1151
#define IDS_RFC1766_LCID0419            0x1152
#define IDS_RFC1766_LCID0819            0x1153
#define IDS_RFC1766_LCID0C1A            0x1154
#define IDS_RFC1766_LCID081A            0x1155
#define IDS_RFC1766_LCID041B            0x1156
#define IDS_RFC1766_LCID0424            0x1157
#define IDS_RFC1766_LCID042E            0x1158
#define IDS_RFC1766_LCID040A            0x1159
#define IDS_RFC1766_LCID080A            0x115A
#define IDS_RFC1766_LCID0C0A            0x115B
#define IDS_RFC1766_LCID100A            0x115C
#define IDS_RFC1766_LCID140A            0x115D
#define IDS_RFC1766_LCID180A            0x115E
#define IDS_RFC1766_LCID1C0A            0x115F
#define IDS_RFC1766_LCID200A            0x1160
#define IDS_RFC1766_LCID240A            0x1161
#define IDS_RFC1766_LCID280A            0x1162
#define IDS_RFC1766_LCID2C0A            0x1163
#define IDS_RFC1766_LCID300A            0x1164
#define IDS_RFC1766_LCID340A            0x1165
#define IDS_RFC1766_LCID380A            0x1166
#define IDS_RFC1766_LCID3C0A            0x1167
#define IDS_RFC1766_LCID400A            0x1168
#define IDS_RFC1766_LCID440A            0x1169
#define IDS_RFC1766_LCID480A            0x116A
#define IDS_RFC1766_LCID4C0A            0x116B
#define IDS_RFC1766_LCID500A            0x116C
#define IDS_RFC1766_LCID0430            0x116D
#define IDS_RFC1766_LCID041D            0x116E
#define IDS_RFC1766_LCID081D            0x116F
#define IDS_RFC1766_LCID041E            0x1170
#define IDS_RFC1766_LCID0431            0x1171
#define IDS_RFC1766_LCID0432            0x1172
#define IDS_RFC1766_LCID041F            0x1173
#define IDS_RFC1766_LCID0422            0x1174
#define IDS_RFC1766_LCID0420            0x1175
#define IDS_RFC1766_LCID042A            0x1176
#define IDS_RFC1766_LCID0434            0x1177
#define IDS_RFC1766_LCID043D            0x1178
#define IDS_RFC1766_LCID0435            0x1179
#define IDS_RFC1766_LCID1404            0x117A
#define IDS_RFC1766_LCID2409            0x117B
#define IDS_RFC1766_LCID3009            0x117C
#define IDS_RFC1766_LCID3409            0x117D
#define IDS_RFC1766_LCID180C            0x117E
#define IDS_RFC1766_LCID042C            0x117F
#define IDS_RFC1766_LCID0843            0x1180
#define IDS_RFC1766_LCID0443            0x1181
#define IDS_RFC1766_LCID042B            0x1182
#define IDS_RFC1766_LCID0437            0x1183
#define IDS_RFC1766_LCID043F            0x1184
#define IDS_RFC1766_LCID0441            0x1185
#define IDS_RFC1766_LCID0444            0x1186
#define IDS_RFC1766_LCID0445            0x1187
#define IDS_RFC1766_LCID0446            0x1188
#define IDS_RFC1766_LCID0447            0x1189
#define IDS_RFC1766_LCID0448            0x118A
#define IDS_RFC1766_LCID0449            0x118B
#define IDS_RFC1766_LCID044A            0x118C
#define IDS_RFC1766_LCID044B            0x118D
#define IDS_RFC1766_LCID044C            0x118E
#define IDS_RFC1766_LCID044D            0x118F
#define IDS_RFC1766_LCID044E            0x1191
#define IDS_RFC1766_LCID083E            0x1192
#define IDS_RFC1766_LCID0861            0x1193
#define IDS_RFC1766_LCID044F            0x1194
#define IDS_RFC1766_LCID0827            0x1195
#define IDS_RFC1766_LCID0457            0x1196
#define IDS_RFC1766_LCID082C            0x1197


//
//  IDs for Mime Codepage Name (0x1200 - 0x12FF)
//
#define IDS_DESC_1200                   0x1200
#define IDS_DESC_1201                   0x1201
#define IDS_DESC_1250                   0x1202
#define IDS_DESC_1251                   0x1203
#define IDS_DESC_1252                   0x1204
#define IDS_DESC_1253                   0x1205
#define IDS_DESC_1254                   0x1206
#define IDS_DESC_1255                   0x1207
#define IDS_DESC_1256                   0x1208
#define IDS_DESC_1257                   0x1209
#define IDS_DESC_1258                   0x120A
#define IDS_DESC_20105                  0x120B
#define IDS_DESC_20106                  0x120C
#define IDS_DESC_20107                  0x120D
#define IDS_DESC_20108                  0x120E
#define IDS_DESC_20866                  0x120F
#define IDS_DESC_21866                  0x1210
#define IDS_DESC_28592                  0x1211
#define IDS_DESC_28593                  0x1212
#define IDS_DESC_28594                  0x1213
#define IDS_DESC_28595                  0x1214
#define IDS_DESC_28596                  0x1215
#define IDS_DESC_28597                  0x1216
#define IDS_DESC_28598                  0x1217
#define IDS_DESC_50000                  0x1218
#define IDS_DESC_50220                  0x1219
#define IDS_DESC_50221                  0x121A
#define IDS_DESC_50222                  0x121B
#define IDS_DESC_50225                  0x121C
#define IDS_DESC_50932                  0x121D
#define IDS_DESC_50949                  0x121E
#define IDS_DESC_51932                  0x121F
#define IDS_DESC_51949                  0x1220
#define IDS_DESC_52936                  0x1221
#define IDS_DESC_65000                  0x1222
#define IDS_DESC_65001                  0x1223
#define IDS_DESC_852                    0x1224
#define IDS_DESC_866                    0x1225
#define IDS_DESC_874                    0x1226
#define IDS_DESC_932                    0x1227
#define IDS_DESC_936                    0x1228
#define IDS_DESC_949                    0x1229
#define IDS_DESC_950                    0x122A
#define IDS_DESC_38598                  0x122B
#define IDS_DESC_50001                  0x122C
#define IDS_DESC_708                    0x122D
#define IDS_DESC_720                    0x122E
#define IDS_DESC_862                    0x122F
#define IDS_DESC_28591                  0x1230
#define IDS_DESC_50936                  0x1231
#define IDS_DESC_50950                  0x1232   
#define IDS_DESC_51251                  0x1233
#define IDS_DESC_51253                  0x1234    
#define IDS_DESC_51256                  0x1235    
#define IDS_DESC_28599                  0x1236    
#define IDS_DESC_28605                  0x1237    
#define IDS_DESC_20127                  0x1238
#define IDS_DESC_51936                  0x1239
#define IDS_DESC_1361                   0x123A
#define IDS_DESC_437                    0x123B
#define IDS_DESC_1252_IE4               0x123C
#define IDS_DESC_29001                  0x123D
#define IDS_DESC_20000                  0x123E
#define IDS_DESC_20002                  0x123F
#define IDS_DESC_28603                  0x1240
#define IDS_DESC_850                    0x1241
#define IDS_DESC_737                    0x1242
#define IDS_DESC_869                    0x1243
#define IDS_DESC_775                    0x1244
#define IDS_DESC_857                    0x1245
#define IDS_DESC_861                    0x1246
#define IDS_DESC_10000                  0x1247
#define IDS_DESC_10001                  0x1248
#define IDS_DESC_10002                  0x1249
#define IDS_DESC_10003                  0x124A
#define IDS_DESC_10004                  0x124B
#define IDS_DESC_10005                  0x125C
#define IDS_DESC_10006                  0x125D
#define IDS_DESC_10007                  0x125E
#define IDS_DESC_10008                  0x125F
#define IDS_DESC_10029                  0x1260
#define IDS_DESC_10079                  0x1261
#define IDS_DESC_10081                  0x1262
#define IDS_DESC_37                     0x1263
#define IDS_DESC_500                    0x1264
#define IDS_DESC_870                    0x1265
#define IDS_DESC_875                    0x1266
#define IDS_DESC_1026                   0x1267
#define IDS_DESC_20273                  0x1268
#define IDS_DESC_20277                  0x1269
#define IDS_DESC_20278                  0x126A
#define IDS_DESC_20280                  0x126B
#define IDS_DESC_20284                  0x126C
#define IDS_DESC_20285                  0x126D
#define IDS_DESC_20290                  0x126E
#define IDS_DESC_20297                  0x126F
#define IDS_DESC_20420                  0x1270
#define IDS_DESC_20423                  0x1271
#define IDS_DESC_20424                  0x1272
#define IDS_DESC_20833                  0x1273
#define IDS_DESC_20838                  0x1274
#define IDS_DESC_20871                  0x1275
#define IDS_DESC_20880                  0x1276
#define IDS_DESC_20905                  0x1277
#define IDS_DESC_21025                  0x1278
#define IDS_DESC_50930                  0x1279
#define IDS_DESC_50931                  0x127A
#define IDS_DESC_50939                  0x127B
#define IDS_DESC_50933                  0x127C
#define IDS_DESC_50935                  0x127D
#define IDS_DESC_50937                  0x127E

#define IDS_DESC_1140                   0x127F
#define IDS_DESC_1141                   0x1280
#define IDS_DESC_1142                   0x1281
#define IDS_DESC_1143                   0x1282
#define IDS_DESC_1144                   0x1283
#define IDS_DESC_1145                   0x1284
#define IDS_DESC_1146                   0x1285
#define IDS_DESC_1147                   0x1286
#define IDS_DESC_1148                   0x1287
#define IDS_DESC_1149                   0x1288
#define IDS_DESC_57006                  0x1289
#define IDS_DESC_57003                  0x128A
#define IDS_DESC_57002                  0x128B
#define IDS_DESC_57010                  0x128C
#define IDS_DESC_57008                  0x128D
#define IDS_DESC_57009                  0x128E
#define IDS_DESC_57007                  0x128F
#define IDS_DESC_57011                  0x1290
#define IDS_DESC_57005                  0x1291
#define IDS_DESC_57004                  0x1292

//
//  IDs for Mime Fontface Name (0x1300 - 0x13FF)
//
#define IDS_FONT_JAPANESE_FIXED         0x1300
#define IDS_FONT_JAPANESE_PROP          0x1301
#define IDS_FONT_CHINESE_FIXED          0x1302
#define IDS_FONT_CHINESE_PROP           0x1303
// a-ehuang: mail-Hyo Kyoung Kim-Kevin Gjerstad-9/14/98
#define IDS_FONT_KOREAN_FIXED           0x1304
#define IDS_FONT_KOREAN_PROP            0x1305
#define IDS_FONT_KOREAN_FIXED4          0x1306
#define IDS_FONT_KOREAN_PROP4           0x1307
// end-of-change
#define IDS_FONT_TAIWAN_FIXED           0x1308
#define IDS_FONT_TAIWAN_PROP            0x1309
#define IDS_FONT_WESTERN_FIXED          0x130A
#define IDS_FONT_WESTERN_PROP           0x130B
#define IDS_FONT_UNICODE_PROP           0x130C
#define IDS_FONT_HEBREW_FIXED           0x130D
#define IDS_FONT_HEBREW_PROP            0x130E
#define IDS_FONT_THAI_FIXED             0x130F
#define IDS_FONT_THAI_PROP              0x1310

#define IDS_FONT_ARABIC_FIXED           0x1311
#define IDS_FONT_ARABIC_PROP            0x1312
#define IDS_FONT_DEVANAGARI_FIXED       0x1313
#define IDS_FONT_DEVANAGARI_PROP        0x1314
#define IDS_FONT_TAMIL_FIXED            0x1315
#define IDS_FONT_TAMIL_PROP             0x1316
#define IDS_FONT_WESTERN_PROP2          0x1317

//
// IDs for script descriptions (0x1400 - -x14FF)
//
#define IDS_SIDASCIILATIN               0x1400
#define IDS_SIDLATIN                    0x1401
#define IDS_SIDGREEK                    0x1402
#define IDS_SIDCYRILLIC                 0x1403
#define IDS_SIDARMENIAN                 0x1404
#define IDS_SIDHEBREW                   0x1405
#define IDS_SIDARABIC                   0x1406
#define IDS_SIDDEVANAGARI               0x1407
#define IDS_SIDBENGALI                  0x1408
#define IDS_SIDGURMUKHI                 0x1409
#define IDS_SIDGUJARATI                 0x140A
#define IDS_SIDORIYA                    0x140B
#define IDS_SIDTAMIL                    0x140C
#define IDS_SIDTELUGU                   0x140D
#define IDS_SIDKANNADA                  0x140E
#define IDS_SIDMALAYALAM                0x140F
#define IDS_SIDTHAI                     0x1410
#define IDS_SIDLAO                      0x1411
#define IDS_SIDTIBETAN                  0x1412
#define IDS_SIDGEORGIAN                 0x1413
#define IDS_SIDHANGUL                   0x1414
#define IDS_SIDKANA                     0x1415
#define IDS_SIDBOPOMOFO                 0x1416
#define IDS_SIDHAN                      0x1417
#define IDS_SIDETHIOPIC                 0x1418
#define IDS_SIDCANSYLLABIC              0x1419
#define IDS_SIDCHEROKEE                 0x141A
#define IDS_SIDYI                       0x141B
#define IDS_SIDBRAILLE                  0x141C
#define IDS_SIDRUNIC                    0x141D
#define IDS_SIDOGHAM                    0x141E
#define IDS_SIDSINHALA                  0x141F
#define IDS_SIDSYRIAC                   0x1420
#define IDS_SIDBURMESE                  0x1421
#define IDS_SIDKHMER                    0x1422
#define IDS_SIDTHAANA                   0x1423
#define IDS_SIDMONGOLIAN                0x1424
#define IDS_SIDDEFAULT                  0x1426
#define IDS_SIDMERGE                    0x1427
#define IDS_SIDASCIISYM                 0x1428
#define IDS_SIDUSERDEFINED              0x1429

//                                      
//  Other Resource IDs                  
//                                      
#define IDR_CODEPAGES                   0x2000
