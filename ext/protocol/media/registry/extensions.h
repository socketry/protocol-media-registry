/* ANSI-C code produced by gperf version 3.0.3 */
/* Computed positions: -k'1-6,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "extensions.gperf"

/* Released under the MIT License. */
/* Copyright, 2026, by Samuel Williams. */
#line 12 "extensions.gperf"
struct ExtensionRecord { const char *extension; const char *name; };
/* maximum key range = 8355, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
extension_hash (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356,    5, 8356,   50,   45, 8356,    0,  185,
      1440, 1875,  880,  135,   85, 1905,  120,   15, 8356, 8356,
      8356, 8356, 8356, 8356,    0,    5, 8356,    0, 8356, 8356,
      8356, 1832,  750, 1820,  185,    5,    0,   15,    0,    5,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
        10, 8356, 8356, 8356, 8356,    5, 8356,  750, 1480,   95,
        25, 1110,  950, 1695, 1597,  715, 1647, 1739,  100,    0,
       347, 1020,   20,  997,  525,    5,   75, 1690, 1772,  260,
        80,  387,   27, 1054, 1916, 2408, 1546,  102,    0, 1367,
      1390, 1740,    8, 2188,  535, 1520,  459,  800, 1437, 1830,
      1345,  744,   76, 1055, 1845, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356,
      8356, 8356, 8356, 8356, 8356, 8356, 8356, 8356
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]+22];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

const struct ExtensionRecord *
lookup_extension (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 1612,
      MIN_WORD_LENGTH = 1,
      MAX_WORD_LENGTH = 13,
      MIN_HASH_VALUE = 1,
      MAX_HASH_VALUE = 8355
    };

  static const struct ExtensionRecord wordlist[] =
    {
#line 695 "extensions.gperf"
      {"m", "text/x-objcsrc"},
#line 1110 "extensions.gperf"
      {"s", "text/x-assembly"},
#line 767 "extensions.gperf"
      {"mjs", "text/javascript"},
#line 28 "extensions.gperf"
      {"Z", "application/x-compressed"},
#line 1121 "extensions.gperf"
      {"s7m", "application/x-sas-dmdb"},
#line 989 "extensions.gperf"
      {"pnm", "image/x-portable-anymap"},
#line 930 "extensions.gperf"
      {"p7m", "application/pkcs7-mime"},
#line 925 "extensions.gperf"
      {"p", "text/x-pascal"},
#line 1164 "extensions.gperf"
      {"sds", "application/vnd.stardivision.chart"},
#line 932 "extensions.gperf"
      {"p7s", "application/pkcs7-signature"},
#line 254 "extensions.gperf"
      {"d", "text/x-d"},
#line 731 "extensions.gperf"
      {"md", "text/markdown"},
#line 1609 "extensions.gperf"
      {"z", "application/x-compressed"},
#line 1234 "extensions.gperf"
      {"snd", "audio/basic"},
#line 1163 "extensions.gperf"
      {"sdp", "application/sdp"},
#line 1300 "extensions.gperf"
      {"sxm", "application/vnd.sun.xml.math"},
#line 1157 "extensions.gperf"
      {"sdd", "application/vnd.stardivision.impress"},
#line 844 "extensions.gperf"
      {"mxs", "application/vnd.triscape.mxs"},
#line 1142 "extensions.gperf"
      {"sbs", "application/x-spss"},
#line 943 "extensions.gperf"
      {"pbm", "image/x-portable-bitmap"},
#line 273 "extensions.gperf"
      {"ddd", "application/vnd.fujixerox.ddd"},
#line 199 "extensions.gperf"
      {"cjs", "text/javascript"},
#line 1531 "extensions.gperf"
      {"xdm", "application/vnd.syncml.dm+xml"},
#line 147 "extensions.gperf"
      {"c++", "text/x-c++src"},
#line 1615 "extensions.gperf"
      {"z6", "application/x-zmachine"},
#line 1200 "extensions.gperf"
      {"sis", "application/vnd.symbian.install"},
#line 1295 "extensions.gperf"
      {"sxd", "application/vnd.sun.xml.draw"},
#line 288 "extensions.gperf"
      {"dis", "application/vnd.Mobius.DIS"},
#line 933 "extensions.gperf"
      {"p8", "application/pkcs8"},
#line 332 "extensions.gperf"
      {"dxp", "application/vnd.spotfire.dxp"},
#line 1617 "extensions.gperf"
      {"z8", "application/x-zmachine"},
#line 1532 "extensions.gperf"
      {"xdp", "application/vnd.adobe.xdp+xml"},
#line 1303 "extensions.gperf"
      {"t", "text/troff"},
#line 942 "extensions.gperf"
      {"pbd", "application/vnd.powerbuilder6"},
#line 755 "extensions.gperf"
      {"mid", "audio/x-midi"},
#line 219 "extensions.gperf"
      {"cnd", "text/plain"},
#line 1196 "extensions.gperf"
      {"sid", "image/x-mrsid-image"},
#line 1524 "extensions.gperf"
      {"xbm", "image/x-xbitmap"},
#line 1614 "extensions.gperf"
      {"z5", "application/x-zmachine"},
#line 1619 "extensions.gperf"
      {"zip", "application/zip"},
#line 146 "extensions.gperf"
      {"c", "text/plain"},
#line 1299 "extensions.gperf"
      {"sxls", "application/vnd.sealed.xls"},
#line 711 "extensions.gperf"
      {"m4s", "video/iso.segment"},
#line 661 "extensions.gperf"
      {"l", "text/x-lex"},
#line 1350 "extensions.gperf"
      {"txd", "application/vnd.genomatix.tuxedo"},
#line 1309 "extensions.gperf"
      {"tbz", "application/x-gtar"},
#line 1523 "extensions.gperf"
      {"xbd", "application/vnd.fujixerox.docuworks.binder"},
#line 1156 "extensions.gperf"
      {"sdc", "application/vnd.stardivision.calc"},
#line 929 "extensions.gperf"
      {"p7c", "application/pkcs7-mime"},
#line 166 "extensions.gperf"
      {"cbz", "application/x-cbr"},
#line 667 "extensions.gperf"
      {"lbd", "application/vnd.llamagraphics.life-balance.desktop"},
#line 675 "extensions.gperf"
      {"lisp", "text/x-common-lisp"},
#line 1202 "extensions.gperf"
      {"sit", "application/x-stuffit"},
#line 1439 "extensions.gperf"
      {"w60", "application/vnd.wordperfect"},
#line 290 "extensions.gperf"
      {"distz", "application/octet-stream"},
#line 1294 "extensions.gperf"
      {"sxc", "application/vnd.sun.xml.calc"},
#line 1201 "extensions.gperf"
      {"sisx", "application/vnd.symbian.install"},
#line 1125 "extensions.gperf"
      {"sas", "application/x-sas"},
#line 841 "extensions.gperf"
      {"mxl", "application/vnd.recordare.musicxml"},
#line 843 "extensions.gperf"
      {"mxml", "application/xv+xml"},
#line 937 "extensions.gperf"
      {"pam", "image/x-portable-arbitrarymap"},
#line 1298 "extensions.gperf"
      {"sxl", "application/vnd.sealed.xls"},
#line 181 "extensions.gperf"
      {"cdx", "chemical/x-cdx"},
#line 289 "extensions.gperf"
      {"dist", "application/octet-stream"},
#line 1141 "extensions.gperf"
      {"sbml", "application/sbml+xml"},
#line 939 "extensions.gperf"
      {"pas", "text/x-pascal"},
#line 715 "extensions.gperf"
      {"mads", "application/mads+xml"},
#line 1195 "extensions.gperf"
      {"sic", "application/vnd.wap.sic"},
#line 1352 "extensions.gperf"
      {"txt", "text/plain"},
#line 1124 "extensions.gperf"
      {"sap", "audio/x-sap"},
#line 1198 "extensions.gperf"
      {"sil", "audio/silk"},
#line 1533 "extensions.gperf"
      {"xdssc", "application/dssc+xml"},
#line 1620 "extensions.gperf"
      {"zipx", "application/zip"},
#line 971 "extensions.gperf"
      {"pic", "image/x-pict"},
#line 284 "extensions.gperf"
      {"dic", "text/x-c"},
#line 153 "extensions.gperf"
      {"c4p", "application/vnd.clonk.c4group"},
#line 252 "extensions.gperf"
      {"cxt", "application/x-director"},
#line 165 "extensions.gperf"
      {"cbt", "application/x-cbr"},
#line 1455 "extensions.gperf"
      {"wdp", "image/vnd.ms-photo"},
#line 150 "extensions.gperf"
      {"c4d", "application/vnd.clonk.c4group"},
#line 253 "extensions.gperf"
      {"cxx", "text/x-c"},
#line 1618 "extensions.gperf"
      {"zaz", "application/vnd.zzazz.deck+xml"},
#line 1203 "extensions.gperf"
      {"sitx", "application/x-stuffitx"},
#line 1451 "extensions.gperf"
      {"wbs", "application/vnd.criticaltools.wbs+xml"},
#line 676 "extensions.gperf"
      {"list", "text/plain"},
#line 864 "extensions.gperf"
      {"nns", "application/vnd.noblenet-sealer"},
#line 972 "extensions.gperf"
      {"pict", "image/x-pict"},
#line 663 "extensions.gperf"
      {"las", "application/x-asprs"},
#line 162 "extensions.gperf"
      {"cbl", "text/x-cobol"},
#line 1519 "extensions.gperf"
      {"xap", "application/x-silverlight-app"},
#line 1450 "extensions.gperf"
      {"wbmp", "image/vnd.wap.wbmp"},
#line 1149 "extensions.gperf"
      {"scm", "application/vnd.lotus-screencam"},
#line 157 "extensions.gperf"
      {"cap", "application/vnd.tcpdump.pcap"},
#line 198 "extensions.gperf"
      {"cil", "application/vnd.ms-artgalry"},
#line 1151 "extensions.gperf"
      {"scs", "application/scvp-cv-response"},
#line 182 "extensions.gperf"
      {"cdxml", "application/vnd.chemdraw+xml"},
#line 863 "extensions.gperf"
      {"nnd", "application/vnd.noblenet-directory"},
#line 723 "extensions.gperf"
      {"mat", "application/x-matlab-data"},
#line 267 "extensions.gperf"
      {"dcm", "application/dicom"},
#line 666 "extensions.gperf"
      {"laz", "application/x-asprs"},
#line 269 "extensions.gperf"
      {"dcs", "image/x-raw-kodak"},
#line 258 "extensions.gperf"
      {"dat", "text/plain"},
#line 729 "extensions.gperf"
      {"mcd", "application/vnd.mcd"},
#line 1147 "extensions.gperf"
      {"scd", "application/x-msschedule"},
#line 859 "extensions.gperf"
      {"nim", "video/vnd.nokia.interleaved-multimedia"},
#line 852 "extensions.gperf"
      {"nbp", "application/vnd.wolfram.player"},
#line 934 "extensions.gperf"
      {"pac", "application/x-ns-proxy-autoconfig"},
#line 1143 "extensions.gperf"
      {"sc", "application/vnd.ibm.secure-container"},
#line 159 "extensions.gperf"
      {"cat", "application/vnd.ms-pki.seccat"},
#line 1444 "extensions.gperf"
      {"wasm", "application/wasm"},
#line 1339 "extensions.gperf"
      {"trm", "application/x-msterminal"},
#line 812 "extensions.gperf"
      {"mpm", "application/vnd.blueice.multipass"},
#line 1518 "extensions.gperf"
      {"xaml", "application/xaml+xml"},
#line 1249 "extensions.gperf"
      {"sps", "application/x-spss"},
#line 1165 "extensions.gperf"
      {"sdw", "application/vnd.stardivision.writer"},
#line 1001 "extensions.gperf"
      {"ppm", "image/x-portable-pixmap"},
#line 949 "extensions.gperf"
      {"pct", "image/x-pict"},
#line 683 "extensions.gperf"
      {"lrm", "application/vnd.ms-lrm"},
#line 1003 "extensions.gperf"
      {"ppsm", "application/vnd.ms-powerpoint.slideshow.macroEnabled.12"},
#line 1002 "extensions.gperf"
      {"pps", "application/vnd.ms-powerpoint"},
#line 951 "extensions.gperf"
      {"pcx", "image/vnd.zbrush.pcx"},
#line 1440 "extensions.gperf"
      {"wad", "application/x-doom"},
#line 271 "extensions.gperf"
      {"dcx", "image/vnd.zbrush.dcx"},
#line 996 "extensions.gperf"
      {"pp", "text/x-pascal"},
#line 814 "extensions.gperf"
      {"mpp", "application/vnd.ms-project"},
#line 167 "extensions.gperf"
      {"cc", "text/plain"},
#line 307 "extensions.gperf"
      {"dp", "application/vnd.osgi.dp"},
#line 1246 "extensions.gperf"
      {"spp", "application/scvp-vp-response"},
#line 1091 "extensions.gperf"
      {"rnd", "application/prs.nprend"},
#line 803 "extensions.gperf"
      {"mpd", "application/dash+xml"},
#line 1240 "extensions.gperf"
      {"spd", "application/vnd.sealedmedia.softseal.pdf"},
#line 1301 "extensions.gperf"
      {"sxw", "application/vnd.sun.xml.writer"},
#line 232 "extensions.gperf"
      {"crd", "application/x-mscardfile"},
#line 999 "extensions.gperf"
      {"ppd", "application/vnd.cups-ppd"},
#line 1067 "extensions.gperf"
      {"rdz", "application/vnd.data-vision.rdz"},
#line 947 "extensions.gperf"
      {"pcl", "application/vnd.hp-PCL"},
#line 1008 "extensions.gperf"
      {"ppz", "application/vnd.ms-powerpoint"},
#line 266 "extensions.gperf"
      {"dcl", "text/plain"},
#line 1257 "extensions.gperf"
      {"srt", "application/x-subrip"},
#line 1577 "extensions.gperf"
      {"xpm", "image/x-xpixmap"},
#line 1452 "extensions.gperf"
      {"wbxml", "application/vnd.wap.wbxml"},
#line 1259 "extensions.gperf"
      {"srx", "application/sparql-results+xml"},
#line 1580 "extensions.gperf"
      {"xps", "application/vnd.ms-xpsdocument"},
#line 1534 "extensions.gperf"
      {"xdw", "application/vnd.fujixerox.docuworks"},
#line 1017 "extensions.gperf"
      {"prt", "application/x-prt"},
#line 1006 "extensions.gperf"
      {"pptm", "application/vnd.ms-powerpoint.presentation.macroEnabled.12"},
#line 169 "extensions.gperf"
      {"cct", "application/x-director"},
#line 1081 "extensions.gperf"
      {"ris", "application/x-research-info-systems"},
#line 811 "extensions.gperf"
      {"mpls", "video/MP2T"},
#line 1453 "extensions.gperf"
      {"wcm", "application/vnd.ms-works"},
#line 664 "extensions.gperf"
      {"lasxml", "application/vnd.las.las+xml"},
#line 819 "extensions.gperf"
      {"mrc", "application/marc"},
#line 1254 "extensions.gperf"
      {"src", "application/x-wais-source"},
#line 1312 "extensions.gperf"
      {"tcl", "application/x-tcl"},
#line 1256 "extensions.gperf"
      {"srl", "application/sereal"},
#line 1080 "extensions.gperf"
      {"rip", "audio/vnd.rip"},
#line 1010 "extensions.gperf"
      {"prc", "application/vnd.palm"},
#line 228 "extensions.gperf"
      {"cpp", "text/plain"},
#line 168 "extensions.gperf"
      {"ccc", "text/vnd.net2phone.commcenter.command"},
#line 312 "extensions.gperf"
      {"drc", "video/x-dirac"},
#line 1446 "extensions.gperf"
      {"wax", "audio/x-ms-wax"},
#line 815 "extensions.gperf"
      {"mpt", "application/vnd.ms-project"},
#line 1093 "extensions.gperf"
      {"rnx", "text/plain"},
#line 816 "extensions.gperf"
      {"mpx", "application/x-project"},
#line 1250 "extensions.gperf"
      {"spx", "audio/speex"},
#line 234 "extensions.gperf"
      {"crt", "application/x-x509-ca-cert"},
#line 1005 "extensions.gperf"
      {"ppt", "application/vnd.ms-powerpoint"},
#line 1622 "extensions.gperf"
      {"zirz", "application/vnd.zul"},
#line 1447 "extensions.gperf"
      {"wb1", "application/x-quattro-pro"},
#line 1247 "extensions.gperf"
      {"sppt", "application/vnd.sealed.ppt"},
#line 236 "extensions.gperf"
      {"crx", "application/x-chrome-extension"},
#line 820 "extensions.gperf"
      {"mrcx", "application/marcxml+xml"},
#line 310 "extensions.gperf"
      {"dpx", "image/x-dpx"},
#line 1004 "extensions.gperf"
      {"ppsx", "application/vnd.openxmlformats-officedocument.presentationml.slideshow"},
#line 1090 "extensions.gperf"
      {"rnc", "application/relax-ng-compact-syntax"},
#line 802 "extensions.gperf"
      {"mpc", "application/vnd.mophun.certificate"},
#line 1239 "extensions.gperf"
      {"spc", "application/x-pkcs7-certificates"},
#line 810 "extensions.gperf"
      {"mpl", "video/MP2T"},
#line 1243 "extensions.gperf"
      {"spl", "application/x-futuresplash"},
#line 233 "extensions.gperf"
      {"crl", "application/pkix-crl"},
#line 728 "extensions.gperf"
      {"mc1", "application/vnd.medcalcdata"},
#line 1336 "extensions.gperf"
      {"tpt", "application/vnd.trid.tpt"},
#line 170 "extensions.gperf"
      {"ccxml", "application/ccxml+xml"},
#line 1581 "extensions.gperf"
      {"xpt", "application/x-sas-xport"},
#line 1498 "extensions.gperf"
      {"wrd", "application/msword"},
#line 1604 "extensions.gperf"
      {"y", "text/x-yacc"},
#line 1583 "extensions.gperf"
      {"xpx", "application/vnd.intercon.formnet"},
#line 229 "extensions.gperf"
      {"cpt", "application/x-mac-compactpro"},
#line 786 "extensions.gperf"
      {"mny", "application/x-msmoney"},
#line 1058 "extensions.gperf"
      {"ram", "audio/x-pn-realaudio"},
#line 54 "extensions.gperf"
      {"ads", "text/x-ada"},
#line 948 "extensions.gperf"
      {"pclxl", "application/vnd.hp-PCLXL"},
#line 1036 "extensions.gperf"
      {"pxn", "image/x-raw-logitech"},
#line 1007 "extensions.gperf"
      {"pptx", "application/vnd.openxmlformats-officedocument.presentationml.presentation"},
#line 1060 "extensions.gperf"
      {"ras", "image/x-cmu-raster"},
#line 580 "extensions.gperf"
      {"indd", "application/x-adobe-indesign"},
#line 941 "extensions.gperf"
      {"paw", "application/vnd.pawaafile"},
#line 46 "extensions.gperf"
      {"ad", "text/x-asciidoc"},
#line 822 "extensions.gperf"
      {"ms", "text/troff"},
#line 1493 "extensions.gperf"
      {"wps", "application/vnd.ms-works"},
#line 1335 "extensions.gperf"
      {"tpl", "application/vnd.groove-tool-template"},
#line 1487 "extensions.gperf"
      {"wp", "application/vnd.wordperfect"},
#line 1576 "extensions.gperf"
      {"xpl", "application/xproc+xml"},
#line 53 "extensions.gperf"
      {"adp", "audio/adpcm"},
#line 1192 "extensions.gperf"
      {"si", "text/vnd.wap.si"},
#line 1018 "extensions.gperf"
      {"ps", "application/postscript"},
#line 853 "extensions.gperf"
      {"nc", "application/x-netcdf"},
#line 702 "extensions.gperf"
      {"m2ts", "video/MP2T"},
#line 832 "extensions.gperf"
      {"msp", "application/x-ms-installer"},
#line 1491 "extensions.gperf"
      {"wpd", "application/vnd.wordperfect"},
#line 1605 "extensions.gperf"
      {"yaml", "text/x-yaml"},
#line 1349 "extensions.gperf"
      {"twds", "application/vnd.SimTech-MindMapper"},
#line 1026 "extensions.gperf"
      {"psp", "image/x-paintshoppro"},
#line 315 "extensions.gperf"
      {"dsp", "text/plain"},
#line 1348 "extensions.gperf"
      {"twd", "application/vnd.SimTech-MindMapper"},
#line 1021 "extensions.gperf"
      {"psd", "image/vnd.adobe.photoshop"},
#line 1599 "extensions.gperf"
      {"xwd", "image/x-xwindowdump"},
#line 865 "extensions.gperf"
      {"nnw", "application/vnd.noblenet-web"},
#line 1341 "extensions.gperf"
      {"ts", "video/MP2T"},
#line 1592 "extensions.gperf"
      {"xsm", "application/vnd.syncml+xml"},
#line 585 "extensions.gperf"
      {"inx", "application/x-adobe-indesign-interchange"},
#line 689 "extensions.gperf"
      {"lwp", "application/vnd.lotus-wordpro"},
#line 177 "extensions.gperf"
      {"cdmid", "application/cdmi-domain"},
#line 854 "extensions.gperf"
      {"ncx", "application/x-dtbncx+xml"},
#line 240 "extensions.gperf"
      {"csm", "application/x-cu-seeme"},
#line 183 "extensions.gperf"
      {"cdy", "application/vnd.cinderella"},
#line 238 "extensions.gperf"
      {"cs", "text/x-csharp"},
#line 701 "extensions.gperf"
      {"m2t", "video/MP2T"},
#line 243 "extensions.gperf"
      {"css", "text/css"},
#line 1500 "extensions.gperf"
      {"wrl", "model/vrml"},
#line 1593 "extensions.gperf"
      {"xsp", "text/plain"},
#line 1342 "extensions.gperf"
      {"tsd", "application/timestamped-data"},
#line 1588 "extensions.gperf"
      {"xsd", "application/xml"},
#line 242 "extensions.gperf"
      {"csp", "application/vnd.commonspace"},
#line 684 "extensions.gperf"
      {"lsp", "text/x-common-lisp"},
#line 560 "extensions.gperf"
      {"idl", "text/x-idl"},
#line 561 "extensions.gperf"
      {"idml", "application/vnd.adobe.indesign-idml-package"},
#line 1494 "extensions.gperf"
      {"wpt", "application/vnd.wordperfect"},
#line 833 "extensions.gperf"
      {"mst", "application/x-ms-installer"},
#line 1522 "extensions.gperf"
      {"xbap", "application/x-ms-xbap"},
#line 719 "extensions.gperf"
      {"man", "text/troff"},
#line 391 "extensions.gperf"
      {"f90", "text/x-fortran"},
#line 257 "extensions.gperf"
      {"dart", "application/vnd.dart"},
#line 1489 "extensions.gperf"
      {"wp6", "application/vnd.wordperfect"},
#line 1028 "extensions.gperf"
      {"pst", "application/vnd.ms-outlook-pst"},
#line 1625 "extensions.gperf"
      {"zst", "application/zstd"},
#line 821 "extensions.gperf"
      {"mrw", "image/x-minolta-mrw"},
#line 108 "extensions.gperf"
      {"axx", "application/x-axcrypt"},
#line 1492 "extensions.gperf"
      {"wpl", "application/vnd.ms-wpl"},
#line 831 "extensions.gperf"
      {"msl", "application/vnd.Mobius.MSL"},
#line 65 "extensions.gperf"
      {"ait", "application/vnd.dvb.ait"},
#line 1264 "extensions.gperf"
      {"ssml", "application/ssml+xml"},
#line 714 "extensions.gperf"
      {"ma", "application/mathematica"},
#line 32 "extensions.gperf"
      {"aam", "application/x-authorware-map"},
#line 314 "extensions.gperf"
      {"dsc", "text/prs.lines.tag"},
#line 34 "extensions.gperf"
      {"aas", "application/x-authorware-seg"},
#line 316 "extensions.gperf"
      {"dssc", "application/dssc+der"},
#line 176 "extensions.gperf"
      {"cdmic", "application/cdmi-container"},
#line 1261 "extensions.gperf"
      {"ssdl", "application/ssdl+xml"},
#line 395 "extensions.gperf"
      {"fbs", "image/vnd.fastbidsheet"},
#line 868 "extensions.gperf"
      {"npx", "image/vnd.net-fpx"},
#line 244 "extensions.gperf"
      {"cst", "application/x-director"},
#line 889 "extensions.gperf"
      {"odm", "application/vnd.oasis.opendocument.text-master"},
#line 1054 "extensions.gperf"
      {"r", "text/x-rsrc"},
#line 891 "extensions.gperf"
      {"ods", "application/vnd.oasis.opendocument.spreadsheet"},
#line 1337 "extensions.gperf"
      {"tr", "text/troff"},
#line 1169 "extensions.gperf"
      {"sem", "application/vnd.sealed.eml"},
#line 1098 "extensions.gperf"
      {"rpm", "application/x-rpm"},
#line 1065 "extensions.gperf"
      {"rct", "application/prs.nprend"},
#line 708 "extensions.gperf"
      {"m4", "text/plain"},
#line 1488 "extensions.gperf"
      {"wp5", "application/wordperfect5.1"},
#line 452 "extensions.gperf"
      {"fxp", "application/vnd.adobe.fxp"},
#line 579 "extensions.gperf"
      {"in", "text/plain"},
#line 235 "extensions.gperf"
      {"crw", "image/x-canon-crw"},
#line 1099 "extensions.gperf"
      {"rpss", "application/vnd.nokia.radio-presets"},
#line 1589 "extensions.gperf"
      {"xsl", "application/xml"},
#line 931 "extensions.gperf"
      {"p7r", "application/x-pkcs7-certreqresp"},
#line 890 "extensions.gperf"
      {"odp", "application/vnd.oasis.opendocument.presentation"},
#line 1097 "extensions.gperf"
      {"rp9", "application/vnd.cloanto.rp9"},
#line 1613 "extensions.gperf"
      {"z4", "application/x-zmachine"},
#line 241 "extensions.gperf"
      {"csml", "chemical/x-csml"},
#line 824 "extensions.gperf"
      {"mscml", "application/mediaservercontrol+xml"},
#line 248 "extensions.gperf"
      {"cw", "application/prs.cww"},
#line 556 "extensions.gperf"
      {"icm", "application/vnd.iccprofile"},
#line 846 "extensions.gperf"
      {"myd", "application/x-mysql-misam-data"},
#line 1166 "extensions.gperf"
      {"sed", "text/x-sed"},
#line 1171 "extensions.gperf"
      {"semd", "application/vnd.semd"},
#line 559 "extensions.gperf"
      {"ics", "text/calendar"},
#line 699 "extensions.gperf"
      {"m21", "application/mp21"},
#line 1051 "extensions.gperf"
      {"qxd", "application/vnd.Quark.QuarkXPress"},
#line 1063 "extensions.gperf"
      {"rbw", "application/x-ruby"},
#line 923 "extensions.gperf"
      {"oxps", "application/oxps"},
#line 356 "extensions.gperf"
      {"ens", "application/x-endnote-style"},
#line 47 "extensions.gperf"
      {"ad.txt", "text/x-asciidoc"},
#line 1591 "extensions.gperf"
      {"xslt", "application/xslt+xml"},
#line 1582 "extensions.gperf"
      {"xpw", "application/vnd.intercon.formnet"},
#line 1501 "extensions.gperf"
      {"wsdd", "text/plain"},
#line 342 "extensions.gperf"
      {"edm", "application/vnd.novadigm.EDM"},
#line 417 "extensions.gperf"
      {"fits", "application/fits"},
#line 746 "extensions.gperf"
      {"mets", "application/mets+xml"},
#line 428 "extensions.gperf"
      {"fnc", "application/vnd.frogans.fnc"},
#line 879 "extensions.gperf"
      {"obd", "application/x-msbinder"},
#line 333 "extensions.gperf"
      {"dxr", "application/x-director"},
#line 27 "extensions.gperf"
      {"@dxr", "application/x-director"},
#line 669 "extensions.gperf"
      {"les", "application/vnd.hhe.lesson-player"},
#line 670 "extensions.gperf"
      {"less", "text/x-less"},
#line 180 "extensions.gperf"
      {"cdr", "application/coreldraw"},
#line 590 "extensions.gperf"
      {"irm", "application/vnd.ibm.rights-management"},
#line 388 "extensions.gperf"
      {"f4p", "video/mp4"},
#line 287 "extensions.gperf"
      {"dir", "application/x-director"},
#line 1621 "extensions.gperf"
      {"zir", "application/vnd.zul"},
#line 1607 "extensions.gperf"
      {"yin", "application/yin+xml"},
#line 1602 "extensions.gperf"
      {"xyz", "x-chemical/x-xyz"},
#line 1019 "extensions.gperf"
      {"ps1", "application/x-msdownload"},
#line 1145 "extensions.gperf"
      {"scad", "application/x-openscad"},
#line 892 "extensions.gperf"
      {"odt", "application/vnd.oasis.opendocument.text"},
#line 944 "extensions.gperf"
      {"pcap", "application/vnd.tcpdump.pcap"},
#line 31 "extensions.gperf"
      {"aac", "audio/aac"},
#line 416 "extensions.gperf"
      {"fit", "application/fits"},
#line 591 "extensions.gperf"
      {"irp", "application/vnd.irepository.package+xml"},
#line 1100 "extensions.gperf"
      {"rpst", "application/vnd.nokia.radio-preset"},
#line 1053 "extensions.gperf"
      {"qxt", "application/vnd.Quark.QuarkXPress"},
#line 164 "extensions.gperf"
      {"cbr", "application/x-cbr"},
#line 379 "extensions.gperf"
      {"exp", "text/x-expect"},
#line 813 "extensions.gperf"
      {"mpn", "application/vnd.mophun.application"},
#line 38 "extensions.gperf"
      {"ac", "text/plain"},
#line 1442 "extensions.gperf"
      {"warc", "application/warc"},
#line 884 "extensions.gperf"
      {"odc", "application/vnd.oasis.opendocument.chart"},
#line 278 "extensions.gperf"
      {"dex", "application/x-dex"},
#line 1162 "extensions.gperf"
      {"sdoc", "application/vnd.sealed.doc"},
#line 924 "extensions.gperf"
      {"oxt", "application/vnd.openofficeorg.extension"},
#line 453 "extensions.gperf"
      {"fxpl", "application/vnd.adobe.fxp"},
#line 1490 "extensions.gperf"
      {"wp61", "application/vnd.wordperfect"},
#line 1311 "extensions.gperf"
      {"tcap", "application/vnd.3gpp2.tcap"},
#line 1040 "extensions.gperf"
      {"qam", "application/vnd.epson.quickanime"},
#line 1173 "extensions.gperf"
      {"seml", "application/vnd.sealed.eml"},
#line 727 "extensions.gperf"
      {"mbox", "application/mbox"},
#line 357 "extensions.gperf"
      {"ent", "text/plain"},
#line 1052 "extensions.gperf"
      {"qxl", "application/vnd.Quark.QuarkXPress"},
#line 1502 "extensions.gperf"
      {"wsdl", "application/wsdl+xml"},
#line 1317 "extensions.gperf"
      {"tex", "application/x-tex"},
#line 878 "extensions.gperf"
      {"oas", "application/vnd.fujitsu.oasys"},
#line 554 "extensions.gperf"
      {"icc", "application/vnd.iccprofile"},
#line 343 "extensions.gperf"
      {"edx", "application/vnd.novadigm.EDX"},
#line 427 "extensions.gperf"
      {"fn", "text/plain"},
#line 1061 "extensions.gperf"
      {"raw", "image/x-panasonic-raw"},
#line 998 "extensions.gperf"
      {"ppam", "application/vnd.ms-powerpoint.addin.macroEnabled.12"},
#line 817 "extensions.gperf"
      {"mpy", "application/vnd.ibm.MiniPay"},
#line 721 "extensions.gperf"
      {"mar", "application/octet-stream"},
#line 1109 "extensions.gperf"
      {"rwz", "image/x-raw-rawzor"},
#line 1265 "extensions.gperf"
      {"ssw", "video/vnd.sealed.swf"},
#line 870 "extensions.gperf"
      {"nrw", "image/x-raw-nikon"},
#line 40 "extensions.gperf"
      {"acc", "application/vnd.americandynamics.acc"},
#line 1102 "extensions.gperf"
      {"rs", "application/rls-services+xml"},
#line 1104 "extensions.gperf"
      {"rss", "application/rss+xml"},
#line 381 "extensions.gperf"
      {"ext", "application/vnd.novadigm.EXT"},
#line 871 "extensions.gperf"
      {"nsc", "application/x-conference"},
#line 317 "extensions.gperf"
      {"dsw", "text/plain"},
#line 397 "extensions.gperf"
      {"fcs", "application/vnd.isac.fcs"},
#line 184 "extensions.gperf"
      {"cel", "image/vnd.dgn"},
#line 37 "extensions.gperf"
      {"abw", "application/x-abiword"},
#line 251 "extensions.gperf"
      {"cww", "application/prs.cww"},
#line 1320 "extensions.gperf"
      {"text", "text/plain"},
#line 1525 "extensions.gperf"
      {"xcat", "text/plain"},
#line 1207 "extensions.gperf"
      {"skm", "application/vnd.koan"},
#line 1103 "extensions.gperf"
      {"rsd", "application/rsd+xml"},
#line 771 "extensions.gperf"
      {"mks", "video/x-matroska"},
#line 762 "extensions.gperf"
      {"minipsf1", "audio/x-psf"},
#line 346 "extensions.gperf"
      {"ei6", "application/vnd.pg.osasli"},
#line 1307 "extensions.gperf"
      {"tar", "application/x-tar"},
#line 1520 "extensions.gperf"
      {"xar", "application/vnd.xara"},
#line 82 "extensions.gperf"
      {"arc", "application/x-freearc"},
#line 1288 "extensions.gperf"
      {"svd", "application/vnd.svd"},
#line 158 "extensions.gperf"
      {"car", "application/vnd.curl.car"},
#line 437 "extensions.gperf"
      {"frm", "application/vnd.framemaker"},
#line 856 "extensions.gperf"
      {"nes", "application/x-nesrom"},
#line 1208 "extensions.gperf"
      {"skp", "application/vnd.koan"},
#line 770 "extensions.gperf"
      {"mkd", "text/markdown"},
#line 983 "extensions.gperf"
      {"pls", "application/pls+xml"},
#line 1214 "extensions.gperf"
      {"sldm", "application/vnd.ms-powerpoint.slide.macroEnabled.12"},
#line 1206 "extensions.gperf"
      {"skd", "application/vnd.koan"},
#line 1042 "extensions.gperf"
      {"qcp", "audio/vnd.qcelp"},
#line 1597 "extensions.gperf"
      {"xvm", "application/xv+xml"},
#line 800 "extensions.gperf"
      {"mp4s", "application/mp4"},
#line 775 "extensions.gperf"
      {"mlp", "application/vnd.dolby.mlp"},
#line 80 "extensions.gperf"
      {"apt", "text/plain"},
#line 973 "extensions.gperf"
      {"pkd", "application/vnd.hbci"},
#line 1275 "extensions.gperf"
      {"stm", "application/vnd.sealedmedia.softseal.html"},
#line 738 "extensions.gperf"
      {"mdtext", "text/markdown"},
#line 835 "extensions.gperf"
      {"mts", "model/vnd.mts"},
#line 736 "extensions.gperf"
      {"mdi", "image/vnd.ms-modi"},
#line 1035 "extensions.gperf"
      {"pwn", "application/vnd.3M.Post-it-Notes"},
#line 557 "extensions.gperf"
      {"icns", "image/icns"},
#line 1037 "extensions.gperf"
      {"py", "application/x-python"},
#line 268 "extensions.gperf"
      {"dcr", "application/x-director"},
#line 1554 "extensions.gperf"
      {"xlm", "application/vnd.ms-excel"},
#line 321 "extensions.gperf"
      {"dts", "audio/vnd.dts"},
#line 1105 "extensions.gperf"
      {"rst", "text/plain"},
#line 1559 "extensions.gperf"
      {"xlsm", "application/vnd.ms-excel.sheet.macroEnabled.12"},
#line 1557 "extensions.gperf"
      {"xls", "application/vnd.ms-excel"},
#line 688 "extensions.gperf"
      {"lvp", "audio/vnd.lucent.voice"},
#line 773 "extensions.gperf"
      {"ml", "text/x-ml"},
#line 1270 "extensions.gperf"
      {"std", "application/vnd.sun.xml.draw.template"},
#line 1210 "extensions.gperf"
      {"sl", "text/vnd.wap.sl"},
#line 212 "extensions.gperf"
      {"cls", "text/x-vbasic"},
#line 29 "extensions.gperf"
      {"a", "application/x-archive"},
#line 120 "extensions.gperf"
      {"bdm", "application/vnd.syncml.dm+wbxml"},
#line 978 "extensions.gperf"
      {"pl", "application/x-perl"},
#line 1297 "extensions.gperf"
      {"sxi", "application/vnd.sun.xml.impress"},
#line 320 "extensions.gperf"
      {"dtd", "application/xml-dtd"},
#line 396 "extensions.gperf"
      {"fcdt", "application/vnd.adobe.formscentral.fcdt"},
#line 293 "extensions.gperf"
      {"dl", "video/x-dl"},
#line 1330 "extensions.gperf"
      {"tld", "text/plain"},
#line 1267 "extensions.gperf"
      {"st", "application/vnd.sailingtracker.track"},
#line 1549 "extensions.gperf"
      {"xld", "application/vnd.ms-excel"},
#line 1209 "extensions.gperf"
      {"skt", "application/vnd.koan"},
#line 1565 "extensions.gperf"
      {"xlz", "application/x-xliff+zip"},
#line 210 "extensions.gperf"
      {"clp", "application/x-msclip"},
#line 732 "extensions.gperf"
      {"mda", "application/x-msaccess"},
#line 1155 "extensions.gperf"
      {"sda", "application/vnd.stardivision.draw"},
#line 298 "extensions.gperf"
      {"dna", "application/vnd.dna"},
#line 1056 "extensions.gperf"
      {"ra", "audio/x-pn-realaudio"},
#line 1287 "extensions.gperf"
      {"svc", "application/vnd.dvb.service"},
#line 1044 "extensions.gperf"
      {"qps", "application/vnd.publishare-delta-tree"},
#line 1217 "extensions.gperf"
      {"slt", "application/vnd.epson.salt"},
#line 1562 "extensions.gperf"
      {"xltm", "application/vnd.ms-excel.template.macroEnabled.12"},
#line 91 "extensions.gperf"
      {"asm", "text/x-asm"},
#line 85 "extensions.gperf"
      {"as", "text/x-actionscript"},
#line 756 "extensions.gperf"
      {"midi", "audio/midi"},
#line 725 "extensions.gperf"
      {"mb", "application/mathematica"},
#line 984 "extensions.gperf"
      {"plt", "application/vnd.hp-HPGL"},
#line 60 "extensions.gperf"
      {"ai", "application/postscript"},
#line 1441 "extensions.gperf"
      {"war", "application/x-tika-java-web-archive"},
#line 1216 "extensions.gperf"
      {"sldx", "application/vnd.openxmlformats-officedocument.presentationml.slide"},
#line 200 "extensions.gperf"
      {"cl", "text/x-common-lisp"},
#line 1211 "extensions.gperf"
      {"slc", "application/vnd.wap.slc"},
#line 1073 "extensions.gperf"
      {"res", "application/x-dtbresource+xml"},
#line 94 "extensions.gperf"
      {"asp", "text/asp"},
#line 1189 "extensions.gperf"
      {"shp", "application/x-shapefile"},
#line 980 "extensions.gperf"
      {"plc", "application/vnd.Mobius.PLC"},
#line 1279 "extensions.gperf"
      {"stx", "application/x-sas-transport"},
#line 966 "extensions.gperf"
      {"php", "text/x-php"},
#line 309 "extensions.gperf"
      {"dpr", "text/x-pascal"},
#line 506 "extensions.gperf"
      {"h++", "text/x-c++hdr"},
#line 294 "extensions.gperf"
      {"dll", "application/octet-stream"},
#line 1032 "extensions.gperf"
      {"ptx", "image/x-raw-pentax"},
#line 1070 "extensions.gperf"
      {"rep", "application/vnd.businessobjects"},
#line 1561 "extensions.gperf"
      {"xlt", "application/vnd.ms-excel"},
#line 171 "extensions.gperf"
      {"cda", "application/x-cdf"},
#line 1598 "extensions.gperf"
      {"xvml", "application/xv+xml"},
#line 197 "extensions.gperf"
      {"cii", "application/vnd.anser-web-certificate-issue-initiation"},
#line 1269 "extensions.gperf"
      {"stc", "application/vnd.sun.xml.calc.template"},
#line 1560 "extensions.gperf"
      {"xlsx", "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet"},
#line 1471 "extensions.gperf"
      {"wks", "application/vnd.lotus-1-2-3"},
#line 359 "extensions.gperf"
      {"enw", "application/x-endnote-refer"},
#line 194 "extensions.gperf"
      {"chm", "application/vnd.ms-htmlhelp"},
#line 1274 "extensions.gperf"
      {"stl", "application/vnd.ms-pki.stl"},
#line 1276 "extensions.gperf"
      {"stml", "application/vnd.sealedmedia.softseal.html"},
#line 435 "extensions.gperf"
      {"fpx", "image/vnd.fpx"},
#line 834 "extensions.gperf"
      {"msty", "application/vnd.muvee.style"},
#line 1205 "extensions.gperf"
      {"sj", "application/javascript"},
#line 362 "extensions.gperf"
      {"eps", "application/postscript"},
#line 672 "extensions.gperf"
      {"lhs", "text/x-haskell"},
#line 850 "extensions.gperf"
      {"nar", "application/vnd.iptc.g2.newsmessage+xml"},
#line 1548 "extensions.gperf"
      {"xlc", "application/vnd.ms-excel"},
#line 1579 "extensions.gperf"
      {"xpr", "application/vnd.is-xpr"},
#line 1553 "extensions.gperf"
      {"xll", "application/vnd.ms-excel"},
#line 1536 "extensions.gperf"
      {"xenc", "application/xenc+xml"},
#line 161 "extensions.gperf"
      {"cba", "application/x-cbr"},
#line 1016 "extensions.gperf"
      {"prql", "application/prql"},
#line 1472 "extensions.gperf"
      {"wkz", "application/x-Wingz"},
#line 709 "extensions.gperf"
      {"m4a", "audio/MP4A-LATM"},
#line 33 "extensions.gperf"
      {"aart", "text/plain"},
#line 753 "extensions.gperf"
      {"mht", "multipart/related"},
#line 686 "extensions.gperf"
      {"ltx", "application/x-latex"},
#line 1344 "extensions.gperf"
      {"ttc", "font/collection"},
#line 1563 "extensions.gperf"
      {"xltx", "application/vnd.openxmlformats-officedocument.spreadsheetml.template"},
#line 665 "extensions.gperf"
      {"latex", "application/x-latex"},
#line 96 "extensions.gperf"
      {"asx", "application/x-ms-asx"},
#line 1245 "extensions.gperf"
      {"spot", "text/vnd.in3d.spot"},
#line 1346 "extensions.gperf"
      {"ttl", "text/turtle"},
#line 1347 "extensions.gperf"
      {"ttml", "application/ttml+xml"},
#line 969 "extensions.gperf"
      {"pht", "application/x-httpd-php"},
#line 1251 "extensions.gperf"
      {"sql", "application/x-sql"},
#line 1029 "extensions.gperf"
      {"pt5", "application/x-pagemaker"},
#line 35 "extensions.gperf"
      {"abs-linkmap", "text/plain"},
#line 84 "extensions.gperf"
      {"arw", "image/x-raw-sony"},
#line 95 "extensions.gperf"
      {"aspx", "text/aspdotnet"},
#line 81 "extensions.gperf"
      {"ar", "application/x-archive"},
#line 1074 "extensions.gperf"
      {"rest", "text/x-rst"},
#line 510 "extensions.gperf"
      {"h5", "application/x-hdf"},
#line 86 "extensions.gperf"
      {"asc", "text/plain"},
#line 1218 "extensions.gperf"
      {"sm", "application/vnd.stepmania.stepchart"},
#line 1473 "extensions.gperf"
      {"wl", "application/vnd.wolfram.wl"},
#line 112 "extensions.gperf"
      {"bas", "text/x-basic"},
#line 547 "extensions.gperf"
      {"hx", "text/x-haxe"},
#line 105 "extensions.gperf"
      {"aw", "application/applixware"},
#line 1231 "extensions.gperf"
      {"sms", "application/vnd.3gpp.sms"},
#line 905 "extensions.gperf"
      {"opml", "text/x-opml"},
#line 584 "extensions.gperf"
      {"install", "text/plain"},
#line 985 "extensions.gperf"
      {"pm", "application/x-pagemaker"},
#line 1587 "extensions.gperf"
      {"xsamples", "text/plain"},
#line 1506 "extensions.gperf"
      {"wvx", "video/x-ms-wvx"},
#line 1623 "extensions.gperf"
      {"zmm", "application/vnd.HandHeld-Entertainment+xml"},
#line 955 "extensions.gperf"
      {"pen", "text/plain"},
#line 367 "extensions.gperf"
      {"erl", "text/x-erlang"},
#line 1160 "extensions.gperf"
      {"sdkm", "application/vnd.solent.sdkm+xml"},
#line 297 "extensions.gperf"
      {"dms", "application/octet-stream"},
#line 1541 "extensions.gperf"
      {"xht", "application/xhtml+xml"},
#line 782 "extensions.gperf"
      {"mmp", "application/vnd.mindjet.mindmanager"},
#line 781 "extensions.gperf"
      {"mmmp", "application/vnd.mindjet.mindmanager"},
#line 1326 "extensions.gperf"
      {"thmx", "application/vnd.ms-officetheme"},
#line 1228 "extensions.gperf"
      {"smp", "audio/vnd.sealedmedia.softseal.mpeg"},
#line 649 "extensions.gperf"
      {"knp", "application/vnd.Kinar"},
#line 779 "extensions.gperf"
      {"mmd", "application/vnd.chipnuts.karaoke-mmd"},
#line 1048 "extensions.gperf"
      {"qwd", "application/vnd.Quark.QuarkXPress"},
#line 26 "extensions.gperf"
      {"@dir", "application/x-director"},
#line 610 "extensions.gperf"
      {"jisp", "application/vnd.jisp"},
#line 617 "extensions.gperf"
      {"jnlp", "application/x-java-jnlp-file"},
#line 471 "extensions.gperf"
      {"gim", "application/vnd.groove-identity-message"},
#line 956 "extensions.gperf"
      {"perl", "text/x-perl"},
#line 634 "extensions.gperf"
      {"jx", "text/plain"},
#line 296 "extensions.gperf"
      {"dmp", "application/vnd.tcpdump.pcap"},
#line 1566 "extensions.gperf"
      {"xm", "audio/xm"},
#line 1076 "extensions.gperf"
      {"rexx", "text/x-rexx"},
#line 1075 "extensions.gperf"
      {"restx", "text/x-rst"},
#line 1159 "extensions.gperf"
      {"sdkd", "application/vnd.solent.sdkm+xml"},
#line 754 "extensions.gperf"
      {"mhtml", "multipart/related"},
#line 1120 "extensions.gperf"
      {"s3m", "audio/s3m"},
#line 1190 "extensions.gperf"
      {"shtml", "text/html"},
#line 1497 "extensions.gperf"
      {"wqd", "application/vnd.wqd"},
#line 548 "extensions.gperf"
      {"hxx", "text/x-c++hdr"},
#line 1059 "extensions.gperf"
      {"rar", "application/x-rar-compressed"},
#line 1116 "extensions.gperf"
      {"s1m", "audio/vnd.sealedmedia.softseal.mpeg"},
#line 836 "extensions.gperf"
      {"mus", "application/vnd.musician"},
#line 970 "extensions.gperf"
      {"phtml", "application/x-httpd-php"},
#line 55 "extensions.gperf"
      {"aep", "application/vnd.audiograph"},
#line 1282 "extensions.gperf"
      {"sus", "application/vnd.sus-calendar"},
#line 926 "extensions.gperf"
      {"p10", "application/pkcs10"},
#line 1570 "extensions.gperf"
      {"xmp", "application/rdf+xml"},
#line 259 "extensions.gperf"
      {"data", "text/plain"},
#line 1402 "extensions.gperf"
      {"vbs", "application/x-msdownload"},
#line 514 "extensions.gperf"
      {"hbc", "application/vnd.hbci"},
#line 217 "extensions.gperf"
      {"cmp", "application/vnd.yellowriver-custom-menu"},
#line 1302 "extensions.gperf"
      {"sz", "application/x-snappy-framed"},
#line 1117 "extensions.gperf"
      {"s1p", "application/vnd.sealed.ppt"},
#line 328 "extensions.gperf"
      {"dwfx", "model/vnd.dwfx+xps"},
#line 1283 "extensions.gperf"
      {"susp", "application/vnd.sus-calendar"},
#line 1413 "extensions.gperf"
      {"vis", "application/vnd.visionary"},
#line 214 "extensions.gperf"
      {"cmd", "application/x-msdos-program"},
#line 114 "extensions.gperf"
      {"bat", "application/x-bat"},
#line 1049 "extensions.gperf"
      {"qwt", "application/vnd.Quark.QuarkXPress"},
#line 323 "extensions.gperf"
      {"dump", "application/octet-stream"},
#line 385 "extensions.gperf"
      {"f", "text/x-fortran"},
#line 439 "extensions.gperf"
      {"fst", "image/vnd.fst"},
#line 64 "extensions.gperf"
      {"air", "application/vnd.adobe.air-application-installer-package+zip"},
#line 1542 "extensions.gperf"
      {"xhtml", "application/xhtml+xml"},
#line 851 "extensions.gperf"
      {"nb", "application/mathematica"},
#line 601 "extensions.gperf"
      {"jam", "application/vnd.jam"},
#line 783 "extensions.gperf"
      {"mmpt", "application/vnd.mindjet.mindmanager"},
#line 17 "extensions.gperf"
      {"3ds", "image/x-3ds"},
#line 1235 "extensions.gperf"
      {"snf", "application/x-font-snf"},
#line 368 "extensions.gperf"
      {"es", "text/ecmascript"},
#line 748 "extensions.gperf"
      {"mfm", "application/vnd.mfmp"},
#line 1517 "extensions.gperf"
      {"x_t", "model/vnd.parasolid.transmit.text"},
#line 503 "extensions.gperf"
      {"gxt", "application/vnd.geonext"},
#line 463 "extensions.gperf"
      {"gdl", "model/vnd.gdl"},
#line 635 "extensions.gperf"
      {"jxl", "image/jxl"},
#line 735 "extensions.gperf"
      {"mdf", "application/x-msaccess"},
#line 1180 "extensions.gperf"
      {"sfs", "application/vnd.spotfire.sfs"},
#line 1158 "extensions.gperf"
      {"sdf", "application/vnd.Kinar"},
#line 959 "extensions.gperf"
      {"pfm", "application/x-font-printer-metric"},
#line 438 "extensions.gperf"
      {"fsc", "application/vnd.fsc.weblaunch"},
#line 1225 "extensions.gperf"
      {"sml", "application/smil+xml"},
#line 1616 "extensions.gperf"
      {"z7", "application/x-zmachine"},
#line 953 "extensions.gperf"
      {"pdf", "application/pdf"},
#line 92 "extensions.gperf"
      {"asnd", "audio/vnd.adobe.soundbooth"},
#line 1509 "extensions.gperf"
      {"x3d", "application/vnd.hzn-3d-crossword"},
#line 1603 "extensions.gperf"
      {"xz", "application/x-xz"},
#line 56 "extensions.gperf"
      {"aet", "application/vnd.adobe.aftereffects.template"},
#line 460 "extensions.gperf"
      {"gam", "application/x-tads"},
#line 640 "extensions.gperf"
      {"kdc", "image/x-kodak-kdc"},
#line 600 "extensions.gperf"
      {"jad", "text/vnd.sun.j2me.app-descriptor"},
#line 987 "extensions.gperf"
      {"pml", "application/vnd.ctc-posml"},
#line 1278 "extensions.gperf"
      {"stw", "application/vnd.sun.xml.writer.template"},
#line 922 "extensions.gperf"
      {"owl", "application/rdf+xml"},
#line 1084 "extensions.gperf"
      {"rld", "application/resource-lists-diff+xml"},
#line 912 "extensions.gperf"
      {"ost", "application/vnd.ms-outlook-pst"},
#line 691 "extensions.gperf"
      {"lz", "application/x-lzip"},
#line 1332 "extensions.gperf"
      {"tmx", "application/x-tmx"},
#line 840 "extensions.gperf"
      {"mxf", "application/mxf"},
#line 842 "extensions.gperf"
      {"mxmf", "audio/vnd.nokia.mobile-xmf"},
#line 1514 "extensions.gperf"
      {"x3dz", "model/x3d+xml"},
#line 311 "extensions.gperf"
      {"dra", "audio/vnd.dra"},
#line 51 "extensions.gperf"
      {"adoc", "text/x-asciidoc"},
#line 1564 "extensions.gperf"
      {"xlw", "application/vnd.ms-excel"},
#line 1323 "extensions.gperf"
      {"tfm", "application/x-tex-tfm"},
#line 62 "extensions.gperf"
      {"aifc", "audio/x-aiff"},
#line 218 "extensions.gperf"
      {"cmx", "image/x-cmx"},
#line 1466 "extensions.gperf"
      {"wk1", "application/vnd.lotus-1-2-3"},
#line 1474 "extensions.gperf"
      {"wm", "video/x-ms-wm"},
#line 331 "extensions.gperf"
      {"dxf", "image/vnd.dxf"},
#line 758 "extensions.gperf"
      {"mif", "application/vnd.mif"},
#line 264 "extensions.gperf"
      {"dbf", "application/x-dbf"},
#line 678 "extensions.gperf"
      {"listafp", "application/vnd.ibm.modcap"},
#line 1530 "extensions.gperf"
      {"xdf", "application/xcap-diff+xml"},
#line 36 "extensions.gperf"
      {"abs-menulinks", "text/plain"},
#line 188 "extensions.gperf"
      {"cfm", "text/x-coldfusion"},
#line 1082 "extensions.gperf"
      {"rl", "application/resource-lists+xml"},
#line 138 "extensions.gperf"
      {"bpm", "application/bizagi-modeler"},
#line 1569 "extensions.gperf"
      {"xml", "application/xml"},
#line 190 "extensions.gperf"
      {"cfs", "application/x-cfs-compressed"},
#line 173 "extensions.gperf"
      {"cdf", "application/x-netcdf"},
#line 213 "extensions.gperf"
      {"cmc", "application/vnd.cosmocaller"},
#line 285 "extensions.gperf"
      {"dif", "application/dif+xml"},
#line 986 "extensions.gperf"
      {"pm5", "application/x-pagemaker"},
#line 1338 "extensions.gperf"
      {"tra", "application/vnd.trueapp"},
#line 216 "extensions.gperf"
      {"cml", "chemical/x-cml"},
#line 645 "extensions.gperf"
      {"kil", "application/x-killustrator"},
#line 1610 "extensions.gperf"
      {"z1", "application/x-zmachine"},
#line 1575 "extensions.gperf"
      {"xpi", "application/x-xpinstall"},
#line 1437 "extensions.gperf"
      {"vxml", "application/voicexml+xml"},
#line 1476 "extensions.gperf"
      {"wmd", "application/x-ms-wmd"},
#line 1351 "extensions.gperf"
      {"txf", "application/vnd.Mobius.TXF"},
#line 1045 "extensions.gperf"
      {"qpw", "application/x-quattro-pro"},
#line 1484 "extensions.gperf"
      {"wmz", "application/x-ms-wmz"},
#line 997 "extensions.gperf"
      {"ppa", "application/vnd.ms-powerpoint"},
#line 511 "extensions.gperf"
      {"hal", "application/vnd.hal+xml"},
#line 512 "extensions.gperf"
      {"haml", "text/x-haml"},
#line 226 "extensions.gperf"
      {"cpi", "video/MP2T"},
#line 135 "extensions.gperf"
      {"bpd", "application/vnd.hbci"},
#line 749 "extensions.gperf"
      {"mft", "application/rpki-manifest"},
#line 737 "extensions.gperf"
      {"mdo", "text/plain"},
#line 1191 "extensions.gperf"
      {"shw", "application/x-corelpresentations"},
#line 1161 "extensions.gperf"
      {"sdo", "application/vnd.sealed.doc"},
#line 1327 "extensions.gperf"
      {"tif", "image/tiff"},
#line 1354 "extensions.gperf"
      {"tzx", "application/x-spectrum-tzx"},
#line 1545 "extensions.gperf"
      {"xif", "image/vnd.xiff"},
#line 1062 "extensions.gperf"
      {"rb", "application/x-ruby"},
#line 43 "extensions.gperf"
      {"acfm", "application/x-font-adobe-metric"},
#line 52 "extensions.gperf"
      {"adoc.txt", "text/x-asciidoc"},
#line 961 "extensions.gperf"
      {"pfx", "application/x-pkcs12"},
#line 196 "extensions.gperf"
      {"cif", "chemical/x-cif"},
#line 597 "extensions.gperf"
      {"ivp", "application/vnd.immervision-ivp"},
#line 662 "extensions.gperf"
      {"l16", "audio/L16"},
#line 16 "extensions.gperf"
      {"3dml", "text/vnd.in3d.3dml"},
#line 1083 "extensions.gperf"
      {"rlc", "image/vnd.fujixerox.edmics-rlc"},
#line 1174 "extensions.gperf"
      {"ser", "application/java-serialized-object"},
#line 1596 "extensions.gperf"
      {"xul", "application/vnd.mozilla.xul+xml"},
#line 1480 "extensions.gperf"
      {"wmls", "text/vnd.wap.wmlscript"},
#line 1215 "extensions.gperf"
      {"sldprt", "application/sldworks"},
#line 1107 "extensions.gperf"
      {"rtx", "text/richtext"},
#line 639 "extensions.gperf"
      {"kcm", "application/vnd.nervana"},
#line 277 "extensions.gperf"
      {"der", "application/x-x509-ca-cert"},
#line 1438 "extensions.gperf"
      {"w3d", "application/x-director"},
#line 1507 "extensions.gperf"
      {"wz", "application/x-Wingz"},
#line 1572 "extensions.gperf"
      {"xmt_txt", "model/vnd.parasolid.transmit.text"},
#line 724 "extensions.gperf"
      {"mathml", "application/mathml+xml"},
#line 1023 "extensions.gperf"
      {"psf1", "audio/x-psf"},
#line 534 "extensions.gperf"
      {"hps", "application/vnd.hp-hps"},
#line 761 "extensions.gperf"
      {"minipsf", "audio/x-psf"},
#line 459 "extensions.gperf"
      {"gac", "application/vnd.groove-account"},
#line 886 "extensions.gperf"
      {"odft", "application/vnd.oasis.opendocument.formula-template"},
#line 1499 "extensions.gperf"
      {"wri", "application/x-mswrite"},
#line 1495 "extensions.gperf"
      {"wq1", "application/x-quattro-pro"},
#line 528 "extensions.gperf"
      {"hp", "text/x-c++hdr"},
#line 581 "extensions.gperf"
      {"ini", "text/x-ini"},
#line 492 "extensions.gperf"
      {"grm", "text/plain"},
#line 1483 "extensions.gperf"
      {"wmx", "video/x-ms-wmx"},
#line 739 "extensions.gperf"
      {"me", "text/troff"},
#line 1123 "extensions.gperf"
      {"saf", "application/vnd.yamaha.smaf-audio"},
#line 355 "extensions.gperf"
      {"enr", "application/x-endnote-refer"},
#line 1407 "extensions.gperf"
      {"vcs", "text/x-vcalendar"},
#line 531 "extensions.gperf"
      {"hpp", "text/plain"},
#line 977 "extensions.gperf"
      {"pkpass", "application/vnd.apple.pkpass"},
#line 1212 "extensions.gperf"
      {"sldasm", "application/sldworks"},
#line 1293 "extensions.gperf"
      {"swi", "application/vnd.aristanetworks.swi"},
#line 151 "extensions.gperf"
      {"c4f", "application/vnd.clonk.c4group"},
#line 627 "extensions.gperf"
      {"jpm", "image/jpm"},
#line 1537 "extensions.gperf"
      {"xer", "application/patch-ops-error+xml"},
#line 256 "extensions.gperf"
      {"daf", "application/vnd.Mobius.DAF"},
#line 73 "extensions.gperf"
      {"ani", "application/octet-stream"},
#line 595 "extensions.gperf"
      {"itp", "application/vnd.shana.informed.formtemplate"},
#line 790 "extensions.gperf"
      {"mos", "image/x-raw-leaf"},
#line 185 "extensions.gperf"
      {"cer", "application/pkix-cert"},
#line 1478 "extensions.gperf"
      {"wml", "text/vnd.wap.wml"},
#line 186 "extensions.gperf"
      {"cfc", "text/x-coldfusion"},
#line 690 "extensions.gperf"
      {"lyr", "application/x-esri-layer"},
#line 1111 "extensions.gperf"
      {"s11", "video/vnd.sealed.mpeg1"},
#line 991 "extensions.gperf"
      {"pom", "text/plain"},
#line 1404 "extensions.gperf"
      {"vcd", "application/x-cdlink"},
#line 189 "extensions.gperf"
      {"cfml", "text/x-coldfusion"},
#line 1611 "extensions.gperf"
      {"z2", "application/x-zmachine"},
#line 335 "extensions.gperf"
      {"e", "text/x-eiffel"},
#line 1168 "extensions.gperf"
      {"seed", "application/vnd.fdsn.seed"},
#line 1547 "extensions.gperf"
      {"xlam", "application/vnd.ms-excel.addin.macroEnabled.12"},
#line 1539 "extensions.gperf"
      {"xfdl", "application/vnd.xfdl"},
#line 1031 "extensions.gperf"
      {"ptid", "application/vnd.pvi.ptid1"},
#line 789 "extensions.gperf"
      {"mods", "application/mods+xml"},
#line 830 "extensions.gperf"
      {"msi", "application/x-ms-installer"},
#line 893 "extensions.gperf"
      {"oex", "application/x-opera-extension"},
#line 380 "extensions.gperf"
      {"exr", "image/aces"},
#line 788 "extensions.gperf"
      {"mod", "audio/x-mod"},
#line 67 "extensions.gperf"
      {"al", "text/x-perl"},
#line 163 "extensions.gperf"
      {"cbor", "application/cbor"},
#line 734 "extensions.gperf"
      {"mde", "application/x-msaccess"},
#line 1199 "extensions.gperf"
      {"silo", "model/mesh"},
#line 1291 "extensions.gperf"
      {"swa", "application/x-director"},
#line 700 "extensions.gperf"
      {"m2a", "audio/mpeg"},
#line 202 "extensions.gperf"
      {"class", "application/octet-stream"},
#line 156 "extensions.gperf"
      {"caf", "audio/x-caf"},
#line 901 "extensions.gperf"
      {"onetmp", "application/onenote"},
#line 990 "extensions.gperf"
      {"pod", "text/plain"},
#line 1367 "extensions.gperf"
      {"urls", "text/uri-list"},
#line 1464 "extensions.gperf"
      {"wif", "application/watcherinfo+xml"},
#line 1085 "extensions.gperf"
      {"rm", "application/vnd.rn-realmedia"},
#line 394 "extensions.gperf"
      {"fbdoc", "application/vnd.framemaker"},
#line 906 "extensions.gperf"
      {"oprc", "application/vnd.palm"},
#line 1353 "extensions.gperf"
      {"types", "text/plain"},
#line 1088 "extensions.gperf"
      {"rms", "application/vnd.jcp.javame.midlet-rms"},
#line 125 "extensions.gperf"
      {"bin", "application/octet-stream"},
#line 48 "extensions.gperf"
      {"ada", "text/x-ada"},
#line 74 "extensions.gperf"
      {"anpa", "text/vnd.iptc.anpa"},
#line 677 "extensions.gperf"
      {"list3820", "application/vnd.ibm.modcap"},
#line 223 "extensions.gperf"
      {"com", "application/x-msdownload"},
#line 994 "extensions.gperf"
      {"potm", "application/vnd.ms-powerpoint.template.macroEnabled.12"},
#line 862 "extensions.gperf"
      {"nml", "application/vnd.enliven"},
#line 305 "extensions.gperf"
      {"dotm", "application/vnd.ms-word.template.macroEnabled.12"},
#line 1479 "extensions.gperf"
      {"wmlc", "application/vnd.wap.wmlc"},
#line 818 "extensions.gperf"
      {"mqy", "application/vnd.Mobius.MQY"},
#line 798 "extensions.gperf"
      {"mp4", "application/mp4"},
#line 1481 "extensions.gperf"
      {"wmlsc", "application/vnd.wap.wmlscriptc"},
#line 823 "extensions.gperf"
      {"msa", "application/vnd.msa-disk-image"},
#line 1087 "extensions.gperf"
      {"rmp", "audio/x-pn-realaudio-plugin"},
#line 946 "extensions.gperf"
      {"pcf", "application/x-font-pcf"},
#line 1574 "extensions.gperf"
      {"xop", "application/xop+xml"},
#line 302 "extensions.gperf"
      {"docm", "application/vnd.ms-word.document.macroEnabled.12"},
#line 1578 "extensions.gperf"
      {"xport", "application/x-sas-xport"},
#line 195 "extensions.gperf"
      {"chrt", "application/vnd.kde.kchart"},
#line 1408 "extensions.gperf"
      {"vcx", "application/vnd.vcx"},
#line 757 "extensions.gperf"
      {"mie", "application/x-mie"},
#line 759 "extensions.gperf"
      {"mime", "message/rfc822"},
#line 1608 "extensions.gperf"
      {"yml", "text/x-yaml"},
#line 260 "extensions.gperf"
      {"dataless", "application/vnd.fdsn.seed"},
#line 221 "extensions.gperf"
      {"cod", "application/vnd.rim.cod"},
#line 79 "extensions.gperf"
      {"apr", "application/vnd.lotus-approach"},
#line 175 "extensions.gperf"
      {"cdmia", "application/cdmi-capability"},
#line 628 "extensions.gperf"
      {"jpx", "image/jpx"},
#line 794 "extensions.gperf"
      {"mp21", "application/mp21"},
#line 101 "extensions.gperf"
      {"atx", "application/vnd.antix.game-component"},
#line 1078 "extensions.gperf"
      {"rhtml", "application/x-html+ruby"},
#line 1119 "extensions.gperf"
      {"s1w", "application/vnd.sealed.doc"},
#line 993 "extensions.gperf"
      {"pot", "application/vnd.ms-powerpoint"},
#line 881 "extensions.gperf"
      {"ocaml", "text/x-ocaml"},
#line 304 "extensions.gperf"
      {"dot", "application/msword"},
#line 1255 "extensions.gperf"
      {"srf", "image/x-sony-srf"},
#line 1526 "extensions.gperf"
      {"xcf", "image/x-xcf"},
#line 90 "extensions.gperf"
      {"asics", "application/vnd.etsi.asic-s+zip"},
#line 1306 "extensions.gperf"
      {"tao", "application/vnd.tao.intent-module-archive"},
#line 97 "extensions.gperf"
      {"atc", "application/vnd.acucorp"},
#line 1012 "extensions.gperf"
      {"prf", "application/pics-rules"},
#line 1237 "extensions.gperf"
      {"soc", "application/sgml-open-catalog"},
#line 313 "extensions.gperf"
      {"drf", "image/x-raw-kodak"},
#line 1150 "extensions.gperf"
      {"scq", "application/scvp-cv-request"},
#line 483 "extensions.gperf"
      {"gpx", "application/gpx+xml"},
#line 1055 "extensions.gperf"
      {"r3d", "image/x-raw-red"},
#line 66 "extensions.gperf"
      {"aj", "text/x-aspectj"},
#line 449 "extensions.gperf"
      {"fts", "application/fits"},
#line 668 "extensions.gperf"
      {"lbe", "application/vnd.llamagraphics.life-balance.exchange+xml"},
#line 536 "extensions.gperf"
      {"hs", "text/x-haskell"},
#line 301 "extensions.gperf"
      {"doc", "application/msword"},
#line 1184 "extensions.gperf"
      {"sgm", "text/sgml"},
#line 446 "extensions.gperf"
      {"ft9", "image/x-freehand"},
#line 337 "extensions.gperf"
      {"ear", "application/x-tika-java-enterprise-archive"},
#line 653 "extensions.gperf"
      {"kpt", "application/vnd.kde.kpresenter"},
#line 860 "extensions.gperf"
      {"nitf", "application/vnd.nitf"},
#line 963 "extensions.gperf"
      {"pgm", "image/x-portable-graymap"},
#line 1421 "extensions.gperf"
      {"vrml", "model/vrml"},
#line 495 "extensions.gperf"
      {"grxml", "application/srgs+xml"},
#line 1242 "extensions.gperf"
      {"spf", "application/vnd.yamaha.smaf-phrase"},
#line 995 "extensions.gperf"
      {"potx", "application/vnd.openxmlformats-officedocument.presentationml.template"},
#line 451 "extensions.gperf"
      {"fvt", "video/vnd.fvt"},
#line 751 "extensions.gperf"
      {"mgp", "application/vnd.osgeo.mapguide.package"},
#line 306 "extensions.gperf"
      {"dotx", "application/vnd.openxmlformats-officedocument.wordprocessingml.template"},
#line 629 "extensions.gperf"
      {"js", "text/javascript"},
#line 1066 "extensions.gperf"
      {"rdf", "application/rdf+xml"},
#line 918 "extensions.gperf"
      {"otm", "application/vnd.oasis.opendocument.text-master"},
#line 682 "extensions.gperf"
      {"lrf", "application/octet-stream"},
#line 440 "extensions.gperf"
      {"ft", "text/plain"},
#line 752 "extensions.gperf"
      {"mgz", "application/vnd.proteus.magazine"},
#line 139 "extensions.gperf"
      {"br", "application/x-brotli"},
#line 578 "extensions.gperf"
      {"ims", "application/vnd.ms-ims"},
#line 1241 "extensions.gperf"
      {"spdf", "application/vnd.sealedmedia.softseal.pdf"},
#line 920 "extensions.gperf"
      {"ots", "application/vnd.oasis.opendocument.spreadsheet-template"},
#line 965 "extensions.gperf"
      {"pgp", "application/octet-stream"},
#line 303 "extensions.gperf"
      {"docx", "application/vnd.openxmlformats-officedocument.wordprocessingml.document"},
#line 888 "extensions.gperf"
      {"odi", "application/vnd.oasis.opendocument.image"},
#line 847 "extensions.gperf"
      {"myi", "application/x-mysql-misam-compressed-index"},
#line 632 "extensions.gperf"
      {"jsp", "text/x-jsp"},
#line 68 "extensions.gperf"
      {"am", "text/plain"},
#line 1277 "extensions.gperf"
      {"str", "application/vnd.pg.format"},
#line 1213 "extensions.gperf"
      {"slddrw", "application/sldworks"},
#line 577 "extensions.gperf"
      {"imp", "application/vnd.accpac.simply.imp"},
#line 919 "extensions.gperf"
      {"otp", "application/vnd.oasis.opendocument.presentation-template"},
#line 424 "extensions.gperf"
      {"flx", "text/vnd.fmi.flexstor"},
#line 777 "extensions.gperf"
      {"mmas", "application/vnd.mindjet.mindmanager"},
#line 192 "extensions.gperf"
      {"cgm", "image/cgm"},
#line 255 "extensions.gperf"
      {"dae", "model/vnd.collada+xml"},
#line 1046 "extensions.gperf"
      {"qt", "video/quicktime"},
#line 392 "extensions.gperf"
      {"fb", "application/vnd.framemaker"},
#line 116 "extensions.gperf"
      {"bay", "image/x-raw-casio"},
#line 654 "extensions.gperf"
      {"kpxx", "application/vnd.ds-keypoint"},
#line 1013 "extensions.gperf"
      {"pro", "text/x-prolog"},
#line 1556 "extensions.gperf"
      {"xlr", "application/x-tika-msworks-spreadsheet"},
#line 546 "extensions.gperf"
      {"hwpx", "application/hwp+zip"},
#line 413 "extensions.gperf"
      {"fh9", "image/x-freehand"},
#line 1079 "extensions.gperf"
      {"rif", "application/reginfo+xml"},
#line 1233 "extensions.gperf"
      {"smzip", "application/vnd.stepmania.package"},
#line 419 "extensions.gperf"
      {"flc", "video/x-flc"},
#line 776 "extensions.gperf"
      {"mmap", "application/vnd.mindjet.mindmanager"},
#line 659 "extensions.gperf"
      {"kwd", "application/vnd.kde.kword"},
#line 1248 "extensions.gperf"
      {"spq", "application/scvp-vp-request"},
#line 1325 "extensions.gperf"
      {"tgz", "application/gzip"},
#line 572 "extensions.gperf"
      {"ihtml", "text/plain"},
#line 193 "extensions.gperf"
      {"chat", "application/x-chat"},
#line 674 "extensions.gperf"
      {"link66", "application/vnd.route66.link66+xml"},
#line 882 "extensions.gperf"
      {"oda", "application/oda"},
#line 681 "extensions.gperf"
      {"lostxml", "application/lost+xml"},
#line 1315 "extensions.gperf"
      {"tei", "application/tei+xml"},
#line 1170 "extensions.gperf"
      {"sema", "application/vnd.sema"},
#line 78 "extensions.gperf"
      {"application", "application/x-ms-application"},
#line 1521 "extensions.gperf"
      {"xargs", "text/plain"},
#line 441 "extensions.gperf"
      {"ft10", "image/x-freehand"},
#line 1038 "extensions.gperf"
      {"pya", "audio/vnd.ms-playready.media.pya"},
#line 447 "extensions.gperf"
      {"ftc", "application/vnd.fluxtime.clip"},
#line 1429 "extensions.gperf"
      {"vssm", "application/vnd.ms-visio.stencil.macroEnabled.12"},
#line 655 "extensions.gperf"
      {"ksp", "application/vnd.kde.kspread"},
#line 1244 "extensions.gperf"
      {"spo", "application/x-spss"},
#line 1428 "extensions.gperf"
      {"vss", "application/vnd.visio"},
#line 121 "extensions.gperf"
      {"bed", "application/vnd.realvnc.bed"},
#line 599 "extensions.gperf"
      {"j2c", "image/x-jp2-codestream"},
#line 1584 "extensions.gperf"
      {"xq", "application/xquery"},
#line 1424 "extensions.gperf"
      {"vsdm", "application/vnd.ms-visio.drawing.macroEnabled.12"},
#line 347 "extensions.gperf"
      {"el", "text/x-emacs-lisp"},
#line 552 "extensions.gperf"
      {"ica", "application/x-ica"},
#line 77 "extensions.gperf"
      {"applescript", "text/x-applescript"},
#line 110 "extensions.gperf"
      {"azs", "application/vnd.airzip.filesecure.azs"},
#line 921 "extensions.gperf"
      {"ott", "application/vnd.oasis.opendocument.text-template"},
#line 1567 "extensions.gperf"
      {"xmap", "text/plain"},
#line 1183 "extensions.gperf"
      {"sgl", "application/vnd.stardivision.writer-global"},
#line 1185 "extensions.gperf"
      {"sgml", "application/sgml"},
#line 378 "extensions.gperf"
      {"exi", "application/exi"},
#line 14 "extensions.gperf"
      {".htaccess", "text/plain"},
#line 1423 "extensions.gperf"
      {"vsd", "application/vnd.visio"},
#line 280 "extensions.gperf"
      {"dgc", "application/x-dgc-compressed"},
#line 445 "extensions.gperf"
      {"ft8", "image/x-freehand"},
#line 743 "extensions.gperf"
      {"meta", "text/plain"},
#line 564 "extensions.gperf"
      {"ifm", "application/vnd.shana.informed.formdata"},
#line 410 "extensions.gperf"
      {"fh50", "image/x-freehand"},
#line 660 "extensions.gperf"
      {"kwt", "application/vnd.kde.kword"},
#line 1047 "extensions.gperf"
      {"qtl", "application/x-quicktimeplayer"},
#line 386 "extensions.gperf"
      {"f4a", "audio/mp4"},
#line 1318 "extensions.gperf"
      {"texi", "application/x-texinfo"},
#line 778 "extensions.gperf"
      {"mmat", "application/vnd.mindjet.mindmanager"},
#line 839 "extensions.gperf"
      {"mwf", "application/vnd.MFER"},
#line 375 "extensions.gperf"
      {"evc", "audio/EVRC"},
#line 913 "extensions.gperf"
      {"otc", "application/vnd.oasis.opendocument.chart-template"},
#line 1432 "extensions.gperf"
      {"vstm", "application/vnd.ms-visio.template.macroEnabled.12"},
#line 1292 "extensions.gperf"
      {"swf", "application/x-shockwave-flash"},
#line 247 "extensions.gperf"
      {"curl", "application/vnd.curl"},
#line 1224 "extensions.gperf"
      {"smil", "application/smil+xml"},
#line 583 "extensions.gperf"
      {"inkml", "application/inkml+xml"},
#line 57 "extensions.gperf"
      {"afm", "application/x-font-adobe-metric"},
#line 327 "extensions.gperf"
      {"dwf", "model/vnd.dwf"},
#line 517 "extensions.gperf"
      {"hdr", "application/envi.hdr"},
#line 50 "extensions.gperf"
      {"adf", "application/x-amiga-disk-format"},
#line 1175 "extensions.gperf"
      {"setpay", "application/set-payment-initiation"},
#line 404 "extensions.gperf"
      {"fh10", "image/x-freehand"},
#line 1057 "extensions.gperf"
      {"raf", "image/x-fuji-raf"},
#line 414 "extensions.gperf"
      {"fhc", "image/x-freehand"},
#line 426 "extensions.gperf"
      {"fm", "application/vnd.framemaker"},
#line 348 "extensions.gperf"
      {"elc", "application/octet-stream"},
#line 523 "extensions.gperf"
      {"hep", "application/x-hep"},
#line 1011 "extensions.gperf"
      {"pre", "application/vnd.lotus-freelance"},
#line 827 "extensions.gperf"
      {"msf", "application/vnd.epson.msf"},
#line 1263 "extensions.gperf"
      {"ssf", "application/vnd.epson.ssf"},
#line 58 "extensions.gperf"
      {"afp", "application/vnd.ibm.modcap"},
#line 373 "extensions.gperf"
      {"etx", "text/x-setext"},
#line 573 "extensions.gperf"
      {"iif", "application/vnd.shana.informed.interchange"},
#line 1022 "extensions.gperf"
      {"psf", "application/x-font-linux-psf"},
#line 1431 "extensions.gperf"
      {"vst", "application/vnd.visio"},
#line 412 "extensions.gperf"
      {"fh8", "image/x-freehand"},
#line 1430 "extensions.gperf"
      {"vssx", "application/vnd.ms-visio.stencil"},
#line 1550 "extensions.gperf"
      {"xlex", "text/plain"},
#line 1146 "extensions.gperf"
      {"scala", "text/x-scala"},
#line 340 "extensions.gperf"
      {"ecelp9600", "audio/vnd.nuera.ecelp9600"},
#line 587 "extensions.gperf"
      {"ipa", "application/octet-stream"},
#line 61 "extensions.gperf"
      {"aif", "audio/x-aiff"},
#line 804 "extensions.gperf"
      {"mpe", "video/mpeg"},
#line 1425 "extensions.gperf"
      {"vsdx", "application/vnd.ms-visio.drawing"},
#line 636 "extensions.gperf"
      {"k25", "image/x-kodak-k25"},
#line 358 "extensions.gperf"
      {"entity", "application/vnd.nervana"},
#line 1422 "extensions.gperf"
      {"vsc", "application/vnd.vidsoft.vidconference"},
#line 409 "extensions.gperf"
      {"fh5", "image/x-freehand"},
#line 1427 "extensions.gperf"
      {"vsl", "text/plain"},
#line 1586 "extensions.gperf"
      {"xroles", "text/plain"},
#line 1595 "extensions.gperf"
      {"xtest", "text/plain"},
#line 784 "extensions.gperf"
      {"mmr", "image/vnd.fujixerox.edmics-mmr"},
#line 1459 "extensions.gperf"
      {"webm", "video/webm"},
#line 326 "extensions.gperf"
      {"dvi", "application/x-dvi"},
#line 1594 "extensions.gperf"
      {"xspf", "application/xspf+xml"},
#line 507 "extensions.gperf"
      {"h261", "video/H261"},
#line 730 "extensions.gperf"
      {"mcurl", "text/vnd.curl.mcurl"},
#line 454 "extensions.gperf"
      {"fzs", "application/vnd.fuzzysheet"},
#line 1433 "extensions.gperf"
      {"vstx", "application/vnd.ms-visio.template"},
#line 1152 "extensions.gperf"
      {"scurl", "text/vnd.curl.scurl"},
#line 574 "extensions.gperf"
      {"iiq", "image/x-raw-phaseone"},
#line 975 "extensions.gperf"
      {"pki", "application/pkixcmp"},
#line 1463 "extensions.gperf"
      {"wgt", "application/widget"},
#line 774 "extensions.gperf"
      {"mli", "text/x-ocaml"},
#line 950 "extensions.gperf"
      {"pcurl", "application/vnd.curl.pcurl"},
#line 461 "extensions.gperf"
      {"gbr", "application/rpki-ghostbusters"},
#line 270 "extensions.gperf"
      {"dcurl", "text/vnd.curl.dcurl"},
#line 837 "extensions.gperf"
      {"musicxml", "application/vnd.recordare.musicxml+xml"},
#line 179 "extensions.gperf"
      {"cdmiq", "application/cdmi-queue"},
#line 1461 "extensions.gperf"
      {"webp", "image/webp"},
#line 1025 "extensions.gperf"
      {"pskcxml", "application/pskc+xml"},
#line 126 "extensions.gperf"
      {"bkm", "application/vnd.nervana"},
#line 352 "extensions.gperf"
      {"emm", "application/vnd.ibm.electronic-media"},
#line 423 "extensions.gperf"
      {"flw", "application/vnd.kde.kivio"},
#line 747 "extensions.gperf"
      {"mf", "text/plain"},
#line 769 "extensions.gperf"
      {"mka", "audio/matroska"},
#line 1272 "extensions.gperf"
      {"sti", "application/vnd.sun.xml.impress.template"},
#line 673 "extensions.gperf"
      {"license", "text/plain"},
#line 1366 "extensions.gperf"
      {"uris", "text/uri-list"},
#line 398 "extensions.gperf"
      {"fdf", "application/vnd.fdf"},
#line 178 "extensions.gperf"
      {"cdmio", "application/cdmi-object"},
#line 763 "extensions.gperf"
      {"mj2", "video/MJ2"},
#line 279 "extensions.gperf"
      {"dfac", "application/vnd.dreamfactory"},
#line 1030 "extensions.gperf"
      {"pti", "application/vnd.pvi.ptid1"},
#line 530 "extensions.gperf"
      {"hpid", "application/vnd.hp-hpid"},
#line 764 "extensions.gperf"
      {"mjp2", "video/MJ2"},
#line 354 "extensions.gperf"
      {"emz", "image/x-emf-compressed"},
#line 486 "extensions.gperf"
      {"gram", "application/srgs"},
#line 465 "extensions.gperf"
      {"gex", "application/vnd.geometry-explorer"},
#line 1443 "extensions.gperf"
      {"warc.gz", "application/warc+gz"},
#line 1153 "extensions.gperf"
      {"sd2", "application/x-sas-data-v6"},
#line 799 "extensions.gperf"
      {"mp4a", "audio/mp4"},
#line 149 "extensions.gperf"
      {"c11amz", "application/vnd.cluetrust.cartomobile-config-pkg"},
#line 518 "extensions.gperf"
      {"he5", "application/x-hdf"},
#line 272 "extensions.gperf"
      {"dd2", "application/vnd.oma.dd2+xml"},
#line 1568 "extensions.gperf"
      {"xmind", "application/x-xmind"},
#line 211 "extensions.gperf"
      {"clpi", "video/MP2T"},
#line 487 "extensions.gperf"
      {"gramps", "application/x-gramps-xml"},
#line 593 "extensions.gperf"
      {"iso19139", "text/iso19139+xml"},
#line 442 "extensions.gperf"
      {"ft11", "image/x-freehand"},
#line 885 "extensions.gperf"
      {"odf", "application/vnd.oasis.opendocument.formula"},
#line 545 "extensions.gperf"
      {"hvs", "application/vnd.yamaha.hv-script"},
#line 740 "extensions.gperf"
      {"mef", "image/x-raw-mamiya"},
#line 602 "extensions.gperf"
      {"jar", "application/java-archive"},
#line 1172 "extensions.gperf"
      {"semf", "application/vnd.semf"},
#line 318 "extensions.gperf"
      {"dta", "application/x-stata-dta"},
#line 456 "extensions.gperf"
      {"g2w", "application/vnd.geoplan"},
#line 1266 "extensions.gperf"
      {"sswf", "video/vnd.sealed.swf"},
#line 1546 "extensions.gperf"
      {"xla", "application/vnd.ms-excel"},
#line 954 "extensions.gperf"
      {"pef", "image/x-pentax-pef"},
#line 286 "extensions.gperf"
      {"diff", "text/x-diff"},
#line 275 "extensions.gperf"
      {"def", "text/plain"},
#line 382 "extensions.gperf"
      {"ez", "application/andrew-inset"},
#line 544 "extensions.gperf"
      {"hvp", "application/vnd.yamaha.hv-voice"},
#line 201 "extensions.gperf"
      {"cla", "application/vnd.claymore"},
#line 960 "extensions.gperf"
      {"pfr", "application/font-tdpfr"},
#line 733 "extensions.gperf"
      {"mdb", "application/x-msaccess"},
#line 543 "extensions.gperf"
      {"hvd", "application/vnd.yamaha.hv-dic"},
#line 928 "extensions.gperf"
      {"p7b", "application/x-pkcs7-certificates"},
#line 276 "extensions.gperf"
      {"deploy", "application/octet-stream"},
#line 341 "extensions.gperf"
      {"ecma", "application/ecmascript"},
#line 952 "extensions.gperf"
      {"pdb", "application/vnd.palm"},
#line 1540 "extensions.gperf"
      {"xgrm", "text/plain"},
#line 611 "extensions.gperf"
      {"jks", "application/x-java-keystore"},
#line 1262 "extensions.gperf"
      {"sse", "application/vnd.kodak-descriptor"},
#line 527 "extensions.gperf"
      {"hlp", "text/plain"},
#line 1328 "extensions.gperf"
      {"tiff", "image/tiff"},
#line 539 "extensions.gperf"
      {"htm", "text/html"},
#line 1377 "extensions.gperf"
      {"uvm", "video/vnd.dece.mobile"},
#line 1009 "extensions.gperf"
      {"pqa", "application/vnd.palm"},
#line 1101 "extensions.gperf"
      {"rq", "application/sparql-query"},
#line 1285 "extensions.gperf"
      {"sv4crc", "application/x-sv4crc"},
#line 1379 "extensions.gperf"
      {"uvs", "video/vnd.dece.sd"},
#line 872 "extensions.gperf"
      {"nsf", "application/vnd.lotus-notes"},
#line 637 "extensions.gperf"
      {"kar", "audio/midi"},
#line 350 "extensions.gperf"
      {"eml", "message/rfc822"},
#line 405 "extensions.gperf"
      {"fh11", "image/x-freehand"},
#line 148 "extensions.gperf"
      {"c11amc", "application/vnd.cluetrust.cartomobile-config"},
#line 330 "extensions.gperf"
      {"dxb", "image/vnd.dxb"},
#line 1310 "extensions.gperf"
      {"tbz2", "application/x-gtar"},
#line 1194 "extensions.gperf"
      {"sib", "application/x-sibelius"},
#line 825 "extensions.gperf"
      {"mseed", "application/vnd.fdsn.mseed"},
#line 1043 "extensions.gperf"
      {"qfx", "application/vnd.intu.qfx"},
#line 1378 "extensions.gperf"
      {"uvp", "video/vnd.dece.pd"},
#line 588 "extensions.gperf"
      {"ipfix", "application/ipfix"},
#line 364 "extensions.gperf"
      {"epsi", "application/postscript"},
#line 262 "extensions.gperf"
      {"dbase", "application/x-dbf"},
#line 1372 "extensions.gperf"
      {"uvd", "application/vnd.dece.data"},
#line 283 "extensions.gperf"
      {"dib", "image/bmp"},
#line 1398 "extensions.gperf"
      {"uvz", "application/vnd.dece.zip"},
#line 1434 "extensions.gperf"
      {"vsw", "application/vnd.visio"},
#line 45 "extensions.gperf"
      {"acutc", "application/vnd.acucorp"},
#line 936 "extensions.gperf"
      {"pages", "application/vnd.apple.pages"},
#line 1290 "extensions.gperf"
      {"svgz", "image/svg+xml"},
#line 351 "extensions.gperf"
      {"emlx", "message/x-emlx"},
#line 425 "extensions.gperf"
      {"fly", "text/vnd.fly"},
#line 111 "extensions.gperf"
      {"azw", "application/vnd.amazon.ebook"},
#line 322 "extensions.gperf"
      {"dtshd", "audio/vnd.dts.hd"},
#line 1041 "extensions.gperf"
      {"qbo", "application/vnd.intu.qbo"},
#line 964 "extensions.gperf"
      {"pgn", "application/x-chess-pgn"},
#line 569 "extensions.gperf"
      {"igm", "application/vnd.insors.igm"},
#line 281 "extensions.gperf"
      {"dgn", "image/x-vnd.dgn"},
#line 499 "extensions.gperf"
      {"gtm", "application/vnd.groove-tool-message"},
#line 570 "extensions.gperf"
      {"igs", "model/iges"},
#line 612 "extensions.gperf"
      {"jl", "text/x-common-lisp"},
#line 324 "extensions.gperf"
      {"dv", "video/DV"},
#line 558 "extensions.gperf"
      {"ico", "image/vnd.microsoft.icon"},
#line 710 "extensions.gperf"
      {"m4b", "audio/mp4"},
#line 671 "extensions.gperf"
      {"lha", "application/octet-stream"},
#line 1186 "extensions.gperf"
      {"sh", "application/x-sh"},
#line 1015 "extensions.gperf"
      {"properties", "text/x-java-properties"},
#line 1528 "extensions.gperf"
      {"xcfgz", "image/x-compressed-xcf"},
#line 1333 "extensions.gperf"
      {"toast", "application/x-roxio-toast"},
#line 237 "extensions.gperf"
      {"cryptonote", "application/vnd.rig.cryptonote"},
#line 431 "extensions.gperf"
      {"fods", "application/vnd.oasis.opendocument.flat.spreadsheet"},
#line 1223 "extensions.gperf"
      {"smi", "application/smil+xml"},
#line 1329 "extensions.gperf"
      {"tk", "text/x-tcl"},
#line 1369 "extensions.gperf"
      {"utz", "application/vnd.uiq.theme"},
#line 472 "extensions.gperf"
      {"gl", "video/x-gl"},
#line 1380 "extensions.gperf"
      {"uvt", "application/vnd.dece.ttml+xml"},
#line 613 "extensions.gperf"
      {"jlt", "application/vnd.hp-jlyt"},
#line 642 "extensions.gperf"
      {"keys", "text/plain"},
#line 505 "extensions.gperf"
      {"h", "text/plain"},
#line 542 "extensions.gperf"
      {"htx", "text/html"},
#line 1397 "extensions.gperf"
      {"uvx", "application/vnd.dece.unspecified"},
#line 87 "extensions.gperf"
      {"asciidoc", "text/x-asciidoc"},
#line 515 "extensions.gperf"
      {"hbci", "application/vnd.hbci"},
#line 430 "extensions.gperf"
      {"fodp", "application/vnd.oasis.opendocument.flat.presentation"},
#line 98 "extensions.gperf"
      {"atom", "application/atom+xml"},
#line 1236 "extensions.gperf"
      {"so", "application/octet-stream"},
#line 1321 "extensions.gperf"
      {"textile", "text/plain"},
#line 1448 "extensions.gperf"
      {"wb2", "application/x-quattro-pro"},
#line 537 "extensions.gperf"
      {"htc", "text/plain"},
#line 485 "extensions.gperf"
      {"gqs", "application/vnd.grafeq"},
#line 376 "extensions.gperf"
      {"evy", "application/x-envoy"},
#line 658 "extensions.gperf"
      {"ktz", "application/vnd.kahootz"},
#line 300 "extensions.gperf"
      {"do", "application/x-stata-do"},
#line 540 "extensions.gperf"
      {"html", "text/html"},
#line 1360 "extensions.gperf"
      {"ulx", "application/x-glulx"},
#line 576 "extensions.gperf"
      {"imap", "application/x-imagemap"},
#line 1454 "extensions.gperf"
      {"wdb", "application/vnd.ms-works"},
#line 907 "extensions.gperf"
      {"opus", "audio/opus"},
#line 131 "extensions.gperf"
      {"bmp", "image/bmp"},
#line 206 "extensions.gperf"
      {"clkp", "application/vnd.crick.clicker.palette"},
#line 535 "extensions.gperf"
      {"hqx", "application/mac-binhex40"},
#line 1167 "extensions.gperf"
      {"see", "application/vnd.seemail"},
#line 418 "extensions.gperf"
      {"flac", "audio/flac"},
#line 571 "extensions.gperf"
      {"igx", "application/vnd.micrografx.igx"},
#line 1573 "extensions.gperf"
      {"xo", "application/vnd.olpc-sugar"},
#line 768 "extensions.gperf"
      {"mk3d", "video/x-matroska"},
#line 541 "extensions.gperf"
      {"htmlx", "text/html"},
#line 1409 "extensions.gperf"
      {"vda", "image/x-tga"},
#line 855 "extensions.gperf"
      {"nef", "image/x-nikon-nef"},
#line 1503 "extensions.gperf"
      {"wspolicy", "application/wspolicy+xml"},
#line 981 "extensions.gperf"
      {"plf", "application/vnd.pocketlearn"},
#line 432 "extensions.gperf"
      {"fodt", "application/vnd.oasis.opendocument.flat.text"},
#line 155 "extensions.gperf"
      {"cab", "application/vnd.ms-cab-compressed"},
#line 705 "extensions.gperf"
      {"m3a", "audio/mpeg"},
#line 555 "extensions.gperf"
      {"ice", "x-conference/x-cooltalk"},
#line 568 "extensions.gperf"
      {"igl", "application/vnd.igloader"},
#line 652 "extensions.gperf"
      {"kpr", "application/vnd.kde.kpresenter"},
#line 1400 "extensions.gperf"
      {"vb", "text/x-vbdotnet"},
#line 657 "extensions.gperf"
      {"ktx", "image/ktx"},
#line 1113 "extensions.gperf"
      {"s1a", "application/vnd.sealedmedia.softseal.pdf"},
#line 644 "extensions.gperf"
      {"kia", "application/vnd.kidspiration"},
#line 1271 "extensions.gperf"
      {"stf", "application/vnd.wt.stf"},
#line 1252 "extensions.gperf"
      {"sr2", "image/x-sony-sr2"},
#line 968 "extensions.gperf"
      {"php4", "text/x-php"},
#line 143 "extensions.gperf"
      {"bup", "application/x-dvd-ifo"},
#line 144 "extensions.gperf"
      {"bz", "application/x-bzip"},
#line 1187 "extensions.gperf"
      {"shar", "application/x-shar"},
#line 1535 "extensions.gperf"
      {"xegrm", "text/plain"},
#line 42 "extensions.gperf"
      {"ace", "application/x-ace-compressed"},
#line 1435 "extensions.gperf"
      {"vtt", "text/vtt"},
#line 76 "extensions.gperf"
      {"appcache", "text/cache-manifest"},
#line 1465 "extensions.gperf"
      {"wk", "application/x-123"},
#line 1411 "extensions.gperf"
      {"vhd", "text/x-vhdl"},
#line 1551 "extensions.gperf"
      {"xlf", "application/x-xliff+xml"},
#line 207 "extensions.gperf"
      {"clkt", "application/vnd.crick.clicker.template"},
#line 1505 "extensions.gperf"
      {"wv", "application/vnd.wv.csp+wbxml"},
#line 408 "extensions.gperf"
      {"fh40", "image/x-freehand"},
#line 908 "extensions.gperf"
      {"orf", "image/x-olympus-orf"},
#line 209 "extensions.gperf"
      {"clkx", "application/vnd.crick.clicker"},
#line 227 "extensions.gperf"
      {"cpio", "application/x-cpio"},
#line 1469 "extensions.gperf"
      {"wk4", "application/vnd.lotus-1-2-3"},
#line 455 "extensions.gperf"
      {"g", "text/plain"},
#line 1305 "extensions.gperf"
      {"taglet", "application/vnd.mynfc"},
#line 785 "extensions.gperf"
      {"mng", "video/x-mng"},
#line 172 "extensions.gperf"
      {"cdbcmsg", "application/vnd.contact.cmsg"},
#line 377 "extensions.gperf"
      {"exe", "application/x-dosexec"},
#line 119 "extensions.gperf"
      {"bdf", "application/x-font-bdf"},
#line 402 "extensions.gperf"
      {"fgd", "application/x-director"},
#line 370 "extensions.gperf"
      {"esa", "application/vnd.osgi.subsystem"},
#line 766 "extensions.gperf"
      {"mjpg", "video/x-motion-jpeg"},
#line 1345 "extensions.gperf"
      {"ttf", "font/ttf"},
#line 793 "extensions.gperf"
      {"mp2", "video/mpeg"},
#line 988 "extensions.gperf"
      {"png", "image/png"},
#line 1027 "extensions.gperf"
      {"pspimage", "image/x-paintshoppro"},
#line 1322 "extensions.gperf"
      {"tfi", "application/thraud+xml"},
#line 299 "extensions.gperf"
      {"dng", "image/x-adobe-dng"},
#line 902 "extensions.gperf"
      {"onetoc", "application/onenote"},
#line 896 "extensions.gperf"
      {"ogm", "video/x-ogm"},
#line 687 "extensions.gperf"
      {"lua", "text/x-lua"},
#line 230 "extensions.gperf"
      {"cr2", "image/x-canon-cr2"},
#line 957 "extensions.gperf"
      {"pfa", "application/x-font-type1"},
#line 685 "extensions.gperf"
      {"ltf", "application/vnd.frogans.ltf"},
#line 70 "extensions.gperf"
      {"amfm", "application/x-font-adobe-metric"},
#line 694 "extensions.gperf"
      {"lzma", "application/x-lzma"},
#line 361 "extensions.gperf"
      {"eot", "application/vnd.ms-fontobject"},
#line 513 "extensions.gperf"
      {"handlers", "text/plain"},
#line 88 "extensions.gperf"
      {"asf", "application/vnd.ms-asf"},
#line 1188 "extensions.gperf"
      {"shf", "application/shf+xml"},
#line 904 "extensions.gperf"
      {"opf", "application/oebps-package+xml"},
#line 845 "extensions.gperf"
      {"mxu", "video/vnd.mpegurl"},
#line 1511 "extensions.gperf"
      {"x3dbz", "model/x3d+binary"},
#line 720 "extensions.gperf"
      {"manifest", "text/plain"},
#line 366 "extensions.gperf"
      {"erf", "image/x-epson-erf"},
#line 1296 "extensions.gperf"
      {"sxg", "application/vnd.sun.xml.writer.global"},
#line 520 "extensions.gperf"
      {"heics", "image/heic-sequence"},
#line 795 "extensions.gperf"
      {"mp2a", "audio/mpeg"},
#line 1403 "extensions.gperf"
      {"vcard", "text/vcard"},
#line 1222 "extensions.gperf"
      {"smht", "application/vnd.sealed.mht"},
#line 1316 "extensions.gperf"
      {"teicorpus", "application/tei+xml"},
#line 1197 "extensions.gperf"
      {"sig", "application/pgp-signature"},
#line 360 "extensions.gperf"
      {"eol", "audio/vnd.digital-winds"},
#line 1475 "extensions.gperf"
      {"wma", "audio/x-ms-wma"},
#line 1416 "extensions.gperf"
      {"vm", "text/plain"},
#line 516 "extensions.gperf"
      {"hdf", "application/x-hdf"},
#line 103 "extensions.gperf"
      {"avi", "video/x-msvideo"},
#line 647 "extensions.gperf"
      {"kmz", "application/vnd.google-earth.kmz"},
#line 72 "extensions.gperf"
      {"amr", "audio/AMR"},
#line 1399 "extensions.gperf"
      {"v", "text/x-verilog"},
#line 1412 "extensions.gperf"
      {"vhdl", "text/x-vhdl"},
#line 614 "extensions.gperf"
      {"jmx", "text/plain"},
#line 363 "extensions.gperf"
      {"epsf", "application/postscript"},
#line 592 "extensions.gperf"
      {"iso", "application/x-iso9660-image"},
#line 519 "extensions.gperf"
      {"heic", "image/heic"},
#line 726 "extensions.gperf"
      {"mbk", "application/vnd.Mobius.MBK"},
#line 712 "extensions.gperf"
      {"m4u", "video/vnd.mpegurl"},
#line 504 "extensions.gperf"
      {"gz", "application/gzip"},
#line 641 "extensions.gperf"
      {"key", "application/vnd.apple.keynote"},
#line 291 "extensions.gperf"
      {"djv", "image/vnd.djvu"},
#line 1071 "extensions.gperf"
      {"req", "application/vnd.nervana"},
#line 606 "extensions.gperf"
      {"jdf", "application/x-jeol-jdf"},
#line 1365 "extensions.gperf"
      {"uri", "text/uri-list"},
#line 462 "extensions.gperf"
      {"gca", "application/x-gca-compressed"},
#line 265 "extensions.gperf"
      {"dbk", "application/docbook+xml"},
#line 679 "extensions.gperf"
      {"lnk", "application/x-ms-shortcut"},
#line 898 "extensions.gperf"
      {"ogx", "application/ogg"},
#line 93 "extensions.gperf"
      {"aso", "application/vnd.accpac.simply.aso"},
#line 697 "extensions.gperf"
      {"m14", "application/x-msmediaview"},
#line 474 "extensions.gperf"
      {"gmx", "application/vnd.gmx"},
#line 1112 "extensions.gperf"
      {"s14", "video/vnd.sealed.mpeg4"},
#line 526 "extensions.gperf"
      {"hif", "image/heic"},
#line 1544 "extensions.gperf"
      {"xhvml", "application/xv+xml"},
#line 1457 "extensions.gperf"
      {"webapp", "application/x-web-app-manifest+json"},
#line 338 "extensions.gperf"
      {"ecelp4800", "audio/vnd.nuera.ecelp4800"},
#line 246 "extensions.gperf"
      {"cu", "application/cu-seeme"},
#line 1470 "extensions.gperf"
      {"wkq", "application/x-quattro-pro"},
#line 401 "extensions.gperf"
      {"fg5", "application/vnd.fujitsu.oasysgp"},
#line 1308 "extensions.gperf"
      {"tbk", "application/x-toolbook"},
#line 473 "extensions.gperf"
      {"gml", "application/gml+xml"},
#line 780 "extensions.gperf"
      {"mmf", "application/vnd.smaf"},
#line 744 "extensions.gperf"
      {"meta4", "application/metalink4+xml"},
#line 1220 "extensions.gperf"
      {"smf", "application/vnd.stardivision.math"},
#line 940 "extensions.gperf"
      {"patch", "text/x-diff"},
#line 609 "extensions.gperf"
      {"jif", "image/jpeg"},
#line 716 "extensions.gperf"
      {"mag", "application/vnd.ecowin.chart"},
#line 1204 "extensions.gperf"
      {"siv", "application/sieve"},
#line 500 "extensions.gperf"
      {"gtw", "model/vnd.gtw"},
#line 1358 "extensions.gperf"
      {"ufd", "application/vnd.ufdl"},
#line 154 "extensions.gperf"
      {"c4u", "application/vnd.clonk.c4group"},
#line 1313 "extensions.gperf"
      {"tcsh", "application/x-csh"},
#line 562 "extensions.gperf"
      {"ief", "image/ief"},
#line 152 "extensions.gperf"
      {"c4g", "application/vnd.clonk.c4group"},
#line 502 "extensions.gperf"
      {"gxf", "application/gxf"},
#line 646 "extensions.gperf"
      {"kml", "application/vnd.google-earth.kml+xml"},
#line 1136 "extensions.gperf"
      {"sas7bpgm", "application/x-sas-program-data"},
#line 858 "extensions.gperf"
      {"ngdat", "application/vnd.nokia.n-gage.data"},
#line 873 "extensions.gperf"
      {"ntf", "application/vnd.nitf"},
#line 704 "extensions.gperf"
      {"m3", "text/x-modula"},
#line 1086 "extensions.gperf"
      {"rmi", "audio/midi"},
#line 470 "extensions.gperf"
      {"gif", "image/gif"},
#line 63 "extensions.gperf"
      {"aiff", "audio/x-aiff"},
#line 1178 "extensions.gperf"
      {"sfd-hdstx", "application/vnd.hydrostatix.sof-data"},
#line 692 "extensions.gperf"
      {"lz4", "application/x-lz4"},
#line 1131 "extensions.gperf"
      {"sas7bdmd", "application/x-sas-dmdb"},
#line 910 "extensions.gperf"
      {"osf", "application/vnd.yamaha.openscoreformat"},
#line 1612 "extensions.gperf"
      {"z3", "application/x-zmachine"},
#line 134 "extensions.gperf"
      {"boz", "application/x-bzip2"},
#line 1364 "extensions.gperf"
      {"upa", "application/vnd.hbci"},
#line 713 "extensions.gperf"
      {"m4v", "video/vnd.objectvideo"},
#line 808 "extensions.gperf"
      {"mpga", "audio/mpeg"},
#line 1529 "extensions.gperf"
      {"xconf", "text/x-config"},
#line 49 "extensions.gperf"
      {"adb", "text/x-ada"},
#line 208 "extensions.gperf"
      {"clkw", "application/vnd.crick.clicker.wordbank"},
#line 174 "extensions.gperf"
      {"cdkey", "application/vnd.mediastation.cdkey"},
#line 707 "extensions.gperf"
      {"m3u8", "application/vnd.apple.mpegurl"},
#line 1513 "extensions.gperf"
      {"x3dvz", "model/x3d+vrml"},
#line 1137 "extensions.gperf"
      {"sas7bput", "application/x-sas-putility"},
#line 1130 "extensions.gperf"
      {"sas7bdat", "application/x-sas-data"},
#line 215 "extensions.gperf"
      {"cmdf", "chemical/x-cmdf"},
#line 1304 "extensions.gperf"
      {"t3", "application/x-t3vm-image"},
#line 420 "extensions.gperf"
      {"fli", "video/x-fli"},
#line 25 "extensions.gperf"
      {"7z", "application/x-7z-compressed"},
#line 1020 "extensions.gperf"
      {"psb", "application/vnd.3gpp.pic-bw-small"},
#line 1226 "extensions.gperf"
      {"smo", "video/vnd.sealedmedia.softseal.mov"},
#line 1515 "extensions.gperf"
      {"x3f", "image/x-raw-sigma"},
#line 1140 "extensions.gperf"
      {"sav", "application/x-spss"},
#line 371 "extensions.gperf"
      {"esf", "application/vnd.epson.esf"},
#line 448 "extensions.gperf"
      {"fti", "application/vnd.anser-web-funds-transfer-initiation"},
#line 760 "extensions.gperf"
      {"minigsf", "audio/x-psf"},
#line 133 "extensions.gperf"
      {"box", "application/vnd.previewsystems.box"},
#line 1129 "extensions.gperf"
      {"sas7bcat", "application/x-sas-catalog"},
#line 1118 "extensions.gperf"
      {"s1q", "video/vnd.sealedmedia.softseal.mov"},
#line 1359 "extensions.gperf"
      {"ufdl", "application/vnd.ufdl"},
#line 1154 "extensions.gperf"
      {"sd7", "application/x-sas-data"},
#line 1182 "extensions.gperf"
      {"sgi", "image/sgi"},
#line 1258 "extensions.gperf"
      {"sru", "application/sru+xml"},
#line 1000 "extensions.gperf"
      {"ppj", "image/vnd.adobe.premiere"},
#line 935 "extensions.gperf"
      {"pack", "application/x-java-pack200"},
#line 1331 "extensions.gperf"
      {"tmo", "application/vnd.tmobile-livetv"},
#line 1148 "extensions.gperf"
      {"schemas", "text/plain"},
#line 1106 "extensions.gperf"
      {"rtf", "application/rtf"},
#line 203 "extensions.gperf"
      {"classpath", "text/plain"},
#line 625 "extensions.gperf"
      {"jpgm", "image/jpm"},
#line 917 "extensions.gperf"
      {"oti", "application/vnd.oasis.opendocument.image-template"},
#line 1477 "extensions.gperf"
      {"wmf", "image/wmf"},
#line 826 "extensions.gperf"
      {"mseq", "application/vnd.mseq"},
#line 393 "extensions.gperf"
      {"fb2", "application/x-fictionbook+xml"},
#line 1193 "extensions.gperf"
      {"si7", "application/x-sas-data-index"},
#line 71 "extensions.gperf"
      {"ami", "application/vnd.amiga.ami"},
#line 722 "extensions.gperf"
      {"markdown", "text/markdown"},
#line 1538 "extensions.gperf"
      {"xfdf", "application/vnd.adobe.xfdf"},
#line 1092 "extensions.gperf"
      {"rng", "text/plain"},
#line 806 "extensions.gperf"
      {"mpg", "video/mpeg"},
#line 650 "extensions.gperf"
      {"kom", "application/vnd.hbci"},
#line 191 "extensions.gperf"
      {"cgi", "text/x-cgi"},
#line 1096 "extensions.gperf"
      {"roles", "text/plain"},
#line 308 "extensions.gperf"
      {"dpg", "application/vnd.dpgraph"},
#line 374 "extensions.gperf"
      {"eva", "application/x-eva"},
#line 596 "extensions.gperf"
      {"ivf", "video/x-ivf"},
#line 648 "extensions.gperf"
      {"kne", "application/vnd.Kinar"},
#line 30 "extensions.gperf"
      {"aab", "application/x-authorware-bin"},
#line 1590 "extensions.gperf"
      {"xslfo", "application/xslfo+xml"},
#line 1460 "extensions.gperf"
      {"webmanifest", "application/manifest+json"},
#line 1324 "extensions.gperf"
      {"tga", "image/x-targa"},
#line 160 "extensions.gperf"
      {"cb7", "application/x-cbr"},
#line 479 "extensions.gperf"
      {"gp4", "application/x-guitar-pro"},
#line 807 "extensions.gperf"
      {"mpg4", "audio/mp4"},
#line 829 "extensions.gperf"
      {"msh", "model/mesh"},
#line 899 "extensions.gperf"
      {"omdoc", "application/omdoc+xml"},
#line 489 "extensions.gperf"
      {"grb1", "application/x-grib"},
#line 883 "extensions.gperf"
      {"odb", "application/vnd.oasis.opendocument.base"},
#line 631 "extensions.gperf"
      {"jsonml", "application/jsonml+json"},
#line 529 "extensions.gperf"
      {"hpgl", "application/vnd.hp-HPGL"},
#line 1050 "extensions.gperf"
      {"qxb", "application/vnd.Quark.QuarkXPress"},
#line 458 "extensions.gperf"
      {"g3w", "application/vnd.geospace"},
#line 274 "extensions.gperf"
      {"deb", "application/x-debian-package"},
#line 849 "extensions.gperf"
      {"n3", "text/plain"},
#line 345 "extensions.gperf"
      {"egrm", "text/plain"},
#line 1114 "extensions.gperf"
      {"s1e", "application/vnd.sealed.xls"},
#line 1405 "extensions.gperf"
      {"vcf", "text/x-vcard"},
#line 553 "extensions.gperf"
      {"icb", "image/x-tga"},
#line 1445 "extensions.gperf"
      {"wav", "audio/vnd.wave"},
#line 450 "extensions.gperf"
      {"fv", "text/plain"},
#line 1122 "extensions.gperf"
      {"sa7", "application/x-sas-access"},
#line 1363 "extensions.gperf"
      {"uoml", "application/vnd.uoml+xml"},
#line 622 "extensions.gperf"
      {"jpf", "image/jpx"},
#line 1284 "extensions.gperf"
      {"sv4cpio", "application/x-sv4cpio"},
#line 1135 "extensions.gperf"
      {"sas7bndx", "application/x-sas-data-index"},
#line 239 "extensions.gperf"
      {"csh", "application/x-csh"},
#line 1449 "extensions.gperf"
      {"wb3", "application/x-quattro-pro"},
#line 403 "extensions.gperf"
      {"fh", "image/x-freehand"},
#line 387 "extensions.gperf"
      {"f4b", "audio/mp4"},
#line 750 "extensions.gperf"
      {"mg", "text/x-modula"},
#line 467 "extensions.gperf"
      {"ggs", "application/vnd.geogebra.slides"},
#line 1420 "extensions.gperf"
      {"vox", "application/x-authorware-bin"},
#line 99 "extensions.gperf"
      {"atomcat", "application/atomcat+xml"},
#line 1108 "extensions.gperf"
      {"rw2", "image/x-raw-panasonic"},
#line 429 "extensions.gperf"
      {"fo", "application/xslfo+xml"},
#line 329 "extensions.gperf"
      {"dwg", "image/vnd.dwg"},
#line 876 "extensions.gperf"
      {"oa2", "application/vnd.fujitsu.oasys2"},
#line 718 "extensions.gperf"
      {"maker", "application/vnd.framemaker"},
#line 630 "extensions.gperf"
      {"json", "application/json"},
#line 433 "extensions.gperf"
      {"for", "text/x-fortran"},
#line 828 "extensions.gperf"
      {"msg", "application/vnd.ms-outlook"},
#line 509 "extensions.gperf"
      {"h264", "video/H264"},
#line 582 "extensions.gperf"
      {"ink", "application/inkml+xml"},
#line 1144 "extensions.gperf"
      {"sc7", "application/x-sas-catalog"},
#line 59 "extensions.gperf"
      {"ahead", "application/vnd.ahead.space"},
#line 1094 "extensions.gperf"
      {"roa", "application/rpki-roa"},
#line 41 "extensions.gperf"
      {"accdb", "application/x-msaccess"},
#line 656 "extensions.gperf"
      {"ktr", "application/vnd.kahootz"},
#line 567 "extensions.gperf"
      {"iges", "model/iges"},
#line 1319 "extensions.gperf"
      {"texinfo", "application/x-texinfo"},
#line 468 "extensions.gperf"
      {"ggt", "application/vnd.geogebra.tool"},
#line 742 "extensions.gperf"
      {"mesh", "model/mesh"},
#line 1624 "extensions.gperf"
      {"zoo", "application/x-zoo"},
#line 407 "extensions.gperf"
      {"fh4", "image/x-freehand"},
#line 1601 "extensions.gperf"
      {"xwelcome", "text/plain"},
#line 102 "extensions.gperf"
      {"au", "audio/basic"},
#line 1253 "extensions.gperf"
      {"sr7", "application/x-sas-itemstor"},
#line 796 "extensions.gperf"
      {"mp3", "audio/mpeg"},
#line 703 "extensions.gperf"
      {"m2v", "video/mpeg"},
#line 1456 "extensions.gperf"
      {"weba", "audio/webm"},
#line 857 "extensions.gperf"
      {"nfo", "text/x-nfo"},
#line 231 "extensions.gperf"
      {"cr3", "image/x-canon-cr3"},
#line 838 "extensions.gperf"
      {"mvb", "application/x-msmediaview"},
#line 250 "extensions.gperf"
      {"cwk", "application/x-appleworks"},
#line 20 "extensions.gperf"
      {"3gp", "video/3gpp"},
#line 1034 "extensions.gperf"
      {"pvb", "application/vnd.3gpp.pic-bw-var"},
#line 522 "extensions.gperf"
      {"heifs", "image/heif-sequence"},
#line 325 "extensions.gperf"
      {"dvb", "video/vnd.dvb.file"},
#line 21 "extensions.gperf"
      {"3gpp", "video/3gpp"},
#line 1238 "extensions.gperf"
      {"sp7", "application/x-sas-putility"},
#line 353 "extensions.gperf"
      {"emma", "application/emma+xml"},
#line 914 "extensions.gperf"
      {"otf", "font/otf"},
#line 1462 "extensions.gperf"
      {"wg", "application/vnd.pmi.widget"},
#line 1368 "extensions.gperf"
      {"ustar", "application/x-ustar"},
#line 979 "extensions.gperf"
      {"plb", "application/vnd.3gpp.pic-bw-large"},
#line 491 "extensions.gperf"
      {"gre", "application/vnd.geometry-explorer"},
#line 1133 "extensions.gperf"
      {"sas7bitm", "application/x-sas-itemstor"},
#line 421 "extensions.gperf"
      {"flo", "application/vnd.micrografx.flo"},
#line 436 "extensions.gperf"
      {"frame", "application/vnd.framemaker"},
#line 1606 "extensions.gperf"
      {"yang", "application/yang"},
#line 69 "extensions.gperf"
      {"amf", "application/x-amf"},
#line 880 "extensions.gperf"
      {"obj", "application/x-tgif"},
#line 496 "extensions.gperf"
      {"gsf", "application/x-font-ghostscript"},
#line 620 "extensions.gperf"
      {"jpe", "image/jpeg"},
#line 1340 "extensions.gperf"
      {"troff", "text/troff"},
#line 550 "extensions.gperf"
      {"i3", "text/x-modula"},
#line 124 "extensions.gperf"
      {"bibtex", "application/x-bibtex-text-file"},
#line 1126 "extensions.gperf"
      {"sas7bacs", "application/x-sas-access"},
#line 1343 "extensions.gperf"
      {"tsv", "text/tab-separated-values"},
#line 319 "extensions.gperf"
      {"dtb", "application/x-dtbook+xml"},
#line 1014 "extensions.gperf"
      {"project", "text/plain"},
#line 1127 "extensions.gperf"
      {"sas7baud", "application/x-sas-audit"},
#line 1558 "extensions.gperf"
      {"xlsb", "application/vnd.ms-excel.sheet.binary.macroEnabled.12"},
#line 887 "extensions.gperf"
      {"odg", "application/vnd.oasis.opendocument.graphics"},
#line 745 "extensions.gperf"
      {"metalink", "application/metalink+xml"},
#line 245 "extensions.gperf"
      {"csv", "text/csv"},
#line 415 "extensions.gperf"
      {"fig", "application/x-xfig"},
#line 1571 "extensions.gperf"
      {"xmt_bin", "model/vnd.parasolid.transmit.binary"},
#line 106 "extensions.gperf"
      {"awb", "audio/AMR-WB"},
#line 1376 "extensions.gperf"
      {"uvi", "image/vnd.dece.graphic"},
#line 1426 "extensions.gperf"
      {"vsf", "application/vnd.vsf"},
#line 586 "extensions.gperf"
      {"iota", "application/vnd.astraea-software.iota"},
#line 109 "extensions.gperf"
      {"azf", "application/vnd.airzip.filesecure.azf"},
#line 83 "extensions.gperf"
      {"arj", "application/x-arj"},
#line 1467 "extensions.gperf"
      {"wk2", "application/vnd.lotus-1-2-3"},
#line 44 "extensions.gperf"
      {"acu", "application/vnd.acucobol"},
#line 765 "extensions.gperf"
      {"mjpeg", "video/x-motion-jpeg"},
#line 224 "extensions.gperf"
      {"conf", "text/plain"},
#line 1371 "extensions.gperf"
      {"uva", "audio/vnd.dece.audio"},
#line 123 "extensions.gperf"
      {"bib", "application/x-bibtex-text-file"},
#line 1064 "extensions.gperf"
      {"rcprofile", "application/vnd.ipunplugged.rcprofile"},
#line 976 "extensions.gperf"
      {"pkipath", "application/pkix-pkipath"},
#line 140 "extensions.gperf"
      {"brotli", "application/x-brotli"},
#line 1068 "extensions.gperf"
      {"readme", "text/plain"},
#line 89 "extensions.gperf"
      {"asice", "application/vnd.etsi.asic-e+zip"},
#line 551 "extensions.gperf"
      {"ibooks", "application/x-ibooks+zip"},
#line 604 "extensions.gperf"
      {"jb2", "image/x-jbig2"},
#line 1260 "extensions.gperf"
      {"ss7", "application/x-sas-program-data"},
#line 1039 "extensions.gperf"
      {"pyv", "video/vnd.ms-playready.media.pyv"},
#line 1362 "extensions.gperf"
      {"unityweb", "application/vnd.unity"},
#line 651 "extensions.gperf"
      {"kon", "application/vnd.kde.kontour"},
#line 1410 "extensions.gperf"
      {"vf", "application/x-tex-virtual-font"},
#line 339 "extensions.gperf"
      {"ecelp7470", "audio/vnd.nuera.ecelp7470"},
#line 118 "extensions.gperf"
      {"bcpio", "application/x-bcpio"},
#line 130 "extensions.gperf"
      {"bmi", "application/vnd.bmi"},
#line 1504 "extensions.gperf"
      {"wtb", "application/vnd.webturbo"},
#line 1496 "extensions.gperf"
      {"wq2", "application/x-quattro-pro"},
#line 565 "extensions.gperf"
      {"ifo", "application/x-dvd-ifo"},
#line 869 "extensions.gperf"
      {"nroff", "text/troff"},
#line 389 "extensions.gperf"
      {"f4v", "video/mp4"},
#line 938 "extensions.gperf"
      {"parquet", "application/vnd.apache.parquet"},
#line 1543 "extensions.gperf"
      {"xhtml2", "application/xhtml+xml"},
#line 15 "extensions.gperf"
      {"123", "application/vnd.lotus-1-2-3"},
#line 633 "extensions.gperf"
      {"junit", "text/plain"},
#line 982 "extensions.gperf"
      {"plj", "audio/vnd.everad.plj"},
#line 104 "extensions.gperf"
      {"avif", "image/avif"},
#line 249 "extensions.gperf"
      {"cwiki", "text/plain"},
#line 589 "extensions.gperf"
      {"ipk", "application/vnd.shana.informed.package"},
#line 1516 "extensions.gperf"
      {"x_b", "model/vnd.parasolid.transmit.binary"},
#line 927 "extensions.gperf"
      {"p12", "application/x-pkcs12"},
#line 525 "extensions.gperf"
      {"hh", "text/plain"},
#line 1289 "extensions.gperf"
      {"svg", "image/svg+xml"},
#line 349 "extensions.gperf"
      {"emf", "image/emf"},
#line 533 "extensions.gperf"
      {"hprof.txt", "application/vnd.java.hprof.text"},
#line 75 "extensions.gperf"
      {"apk", "application/vnd.android.package-archive"},
#line 400 "extensions.gperf"
      {"fff", "image/x-raw-imacon"},
#line 903 "extensions.gperf"
      {"onetoc2", "application/onenote"},
#line 390 "extensions.gperf"
      {"f77", "text/x-fortran"},
#line 974 "extensions.gperf"
      {"pkg", "application/octet-stream"},
#line 204 "extensions.gperf"
      {"clj", "text/x-clojure"},
#line 1508 "extensions.gperf"
      {"x32", "application/x-authorware-bin"},
#line 464 "extensions.gperf"
      {"geo", "application/vnd.dynageo"},
#line 1281 "extensions.gperf"
      {"sub", "image/vnd.dvb.subtitle"},
#line 1389 "extensions.gperf"
      {"uvvm", "video/vnd.dece.mobile"},
#line 1033 "extensions.gperf"
      {"pub", "application/x-mspublisher"},
#line 501 "extensions.gperf"
      {"gv", "text/vnd.graphviz"},
#line 566 "extensions.gperf"
      {"ig", "text/x-modula"},
#line 1391 "extensions.gperf"
      {"uvvs", "video/vnd.dece.sd"},
#line 18 "extensions.gperf"
      {"3fr", "image/x-hasselblad-3fr"},
#line 261 "extensions.gperf"
      {"davmount", "application/davmount+xml"},
#line 1390 "extensions.gperf"
      {"uvvp", "video/vnd.dece.pd"},
#line 1334 "extensions.gperf"
      {"torrent", "application/x-bittorrent"},
#line 549 "extensions.gperf"
      {"i2g", "application/vnd.intergeo"},
#line 334 "extensions.gperf"
      {"dylib", "application/octet-stream"},
#line 1384 "extensions.gperf"
      {"uvvd", "application/vnd.dece.data"},
#line 1396 "extensions.gperf"
      {"uvvz", "application/vnd.dece.zip"},
#line 909 "extensions.gperf"
      {"org", "application/vnd.lotus-organizer"},
#line 1510 "extensions.gperf"
      {"x3db", "model/x3d+binary"},
#line 39 "extensions.gperf"
      {"ac3", "audio/ac3"},
#line 1600 "extensions.gperf"
      {"xweb", "text/plain"},
#line 958 "extensions.gperf"
      {"pfb", "application/x-font-type1"},
#line 478 "extensions.gperf"
      {"go", "text/x-go"},
#line 772 "extensions.gperf"
      {"mkv", "video/x-matroska"},
#line 945 "extensions.gperf"
      {"pcapng", "application/vnd.tcpdump.pcapng"},
#line 1273 "extensions.gperf"
      {"stk", "application/hyperstudio"},
#line 336 "extensions.gperf"
      {"e57", "model/e57"},
#line 894 "extensions.gperf"
      {"oga", "audio/ogg"},
#line 498 "extensions.gperf"
      {"gtar", "application/x-gtar"},
#line 1373 "extensions.gperf"
      {"uvf", "application/vnd.dece.data"},
#line 1221 "extensions.gperf"
      {"smh", "application/vnd.sealed.mht"},
#line 113 "extensions.gperf"
      {"bash", "application/x-sh"},
#line 1356 "extensions.gperf"
      {"uc2", "application/x-uc2-compressed"},
#line 1392 "extensions.gperf"
      {"uvvt", "application/vnd.dece.ttml+xml"},
#line 801 "extensions.gperf"
      {"mp4v", "video/mp4"},
#line 1395 "extensions.gperf"
      {"uvvx", "application/vnd.dece.unspecified"},
#line 1069 "extensions.gperf"
      {"reg", "application/x-msdownload"},
#line 107 "extensions.gperf"
      {"awk", "text/x-awk"},
#line 607 "extensions.gperf"
      {"jfi", "image/jpeg"},
#line 1419 "extensions.gperf"
      {"vor", "application/x-staroffice-template"},
#line 524 "extensions.gperf"
      {"hfa", "application/x-erdas-hfa"},
#line 877 "extensions.gperf"
      {"oa3", "application/vnd.fujitsu.oasys3"},
#line 1115 "extensions.gperf"
      {"s1h", "application/vnd.sealedmedia.softseal.html"},
#line 805 "extensions.gperf"
      {"mpeg", "video/mpeg"},
#line 1552 "extensions.gperf"
      {"xliff", "application/x-xliff+xml"},
#line 615 "extensions.gperf"
      {"jng", "video/x-jng"},
#line 619 "extensions.gperf"
      {"jp2", "image/jp2"},
#line 100 "extensions.gperf"
      {"atomsvc", "application/atomsvc+xml"},
#line 787 "extensions.gperf"
      {"mobi", "application/x-mobipocket-ebook"},
#line 488 "extensions.gperf"
      {"grb", "application/x-grib"},
#line 484 "extensions.gperf"
      {"gqf", "application/vnd.grafeq"},
#line 861 "extensions.gperf"
      {"nlu", "application/vnd.neurolanguage.nlu"},
#line 115 "extensions.gperf"
      {"bau", "application/vnd.openofficeorg.autotext"},
#line 477 "extensions.gperf"
      {"gnumeric", "application/x-gnumeric"},
#line 128 "extensions.gperf"
      {"bleep", "application/x-bleeper"},
#line 693 "extensions.gperf"
      {"lzh", "application/octet-stream"},
#line 1134 "extensions.gperf"
      {"sas7bmdb", "application/x-sas-mddb"},
#line 469 "extensions.gperf"
      {"ghf", "application/vnd.groove-help"},
#line 875 "extensions.gperf"
      {"nzb", "application/x-nzb"},
#line 295 "extensions.gperf"
      {"dmg", "application/x-apple-diskimage"},
#line 1230 "extensions.gperf"
      {"smpg", "video/vnd.sealed.mpeg4"},
#line 1286 "extensions.gperf"
      {"sv7", "application/x-sas-view"},
#line 292 "extensions.gperf"
      {"djvu", "image/vnd.djvu"},
#line 603 "extensions.gperf"
      {"java", "text/x-java-source"},
#line 706 "extensions.gperf"
      {"m3u", "audio/x-mpegurl"},
#line 1370 "extensions.gperf"
      {"uu", "text/x-uuencode"},
#line 1314 "extensions.gperf"
      {"teacher", "application/vnd.smart.teacher"},
#line 220 "extensions.gperf"
      {"cob", "text/x-cobol"},
#line 1268 "extensions.gperf"
      {"st7", "application/x-sas-audit"},
#line 521 "extensions.gperf"
      {"heif", "image/heif"},
#line 1458 "extensions.gperf"
      {"webarchive", "application/x-webarchive"},
#line 1232 "extensions.gperf"
      {"smv", "audio/SMV"},
#line 434 "extensions.gperf"
      {"fp7", "application/x-filemaker"},
#line 1485 "extensions.gperf"
      {"woff", "font/woff"},
#line 874 "extensions.gperf"
      {"numbers", "application/vnd.apple.numbers"},
#line 1179 "extensions.gperf"
      {"sfdu", "application/x-sfdu"},
#line 1401 "extensions.gperf"
      {"vbk", "audio/vnd.nortel.vbk"},
#line 967 "extensions.gperf"
      {"php3", "text/x-php"},
#line 117 "extensions.gperf"
      {"bck", "application/x-VMSBACKUP"},
#line 618 "extensions.gperf"
      {"joda", "application/vnd.joost.joda-archive"},
#line 698 "extensions.gperf"
      {"m1v", "video/mpeg"},
#line 1468 "extensions.gperf"
      {"wk3", "application/vnd.lotus-1-2-3"},
#line 962 "extensions.gperf"
      {"pgb", "image/vnd.globalgraphics.pgb"},
#line 457 "extensions.gperf"
      {"g3", "image/g3fax"},
#line 187 "extensions.gperf"
      {"cfg", "text/x-config"},
#line 136 "extensions.gperf"
      {"bpg", "image/x-bpg"},
#line 1414 "extensions.gperf"
      {"viv", "video/vnd.vivo"},
#line 481 "extensions.gperf"
      {"gph", "application/vnd.FloGraphIt"},
#line 598 "extensions.gperf"
      {"ivu", "application/vnd.immervision-ivu"},
#line 1138 "extensions.gperf"
      {"sas7butl", "application/x-sas-utility"},
#line 443 "extensions.gperf"
      {"ft12", "image/x-freehand"},
#line 1072 "extensions.gperf"
      {"request", "application/vnd.nervana"},
#line 1181 "extensions.gperf"
      {"sfv", "text/x-sfv"},
#line 1512 "extensions.gperf"
      {"x3dv", "model/x3d+vrml"},
#line 141 "extensions.gperf"
      {"bsh", "text/plain"},
#line 137 "extensions.gperf"
      {"bpk", "application/octet-stream"},
#line 24 "extensions.gperf"
      {"4th", "text/x-forth"},
#line 23 "extensions.gperf"
      {"3mf", "application/vnd.ms-package.3dmanufacturing-3dmodel+xml"},
#line 1229 "extensions.gperf"
      {"smp3", "audio/vnd.sealedmedia.softseal.mpeg"},
#line 142 "extensions.gperf"
      {"btif", "image/prs.btif"},
#line 1482 "extensions.gperf"
      {"wmv", "audio/x-ms-wmv"},
#line 1024 "extensions.gperf"
      {"psflib", "audio/x-psf"},
#line 1406 "extensions.gperf"
      {"vcg", "application/vnd.groove-vcard"},
#line 1219 "extensions.gperf"
      {"sm7", "application/x-sas-mddb"},
#line 406 "extensions.gperf"
      {"fh12", "image/x-freehand"},
#line 1095 "extensions.gperf"
      {"roff", "text/troff"},
#line 623 "extensions.gperf"
      {"jpg", "image/jpeg"},
#line 532 "extensions.gperf"
      {"hprof", "application/vnd.java.hprof "},
#line 696 "extensions.gperf"
      {"m13", "application/x-msmediaview"},
#line 563 "extensions.gperf"
      {"ifb", "text/calendar"},
#line 480 "extensions.gperf"
      {"gpg", "application/octet-stream"},
#line 741 "extensions.gperf"
      {"memgraph", "application/x-memgraph"},
#line 594 "extensions.gperf"
      {"itk", "text/x-tcl"},
#line 344 "extensions.gperf"
      {"efif", "application/vnd.picsel"},
#line 867 "extensions.gperf"
      {"notice", "text/plain"},
#line 1280 "extensions.gperf"
      {"su7", "application/x-sas-utility"},
#line 916 "extensions.gperf"
      {"oth", "application/vnd.oasis.opendocument.text-web"},
#line 369 "extensions.gperf"
      {"es3", "application/vnd.eszigno3+xml"},
#line 809 "extensions.gperf"
      {"mpkg", "application/vnd.apple.installer+xml"},
#line 680 "extensions.gperf"
      {"log", "text/plain"},
#line 1415 "extensions.gperf"
      {"vivo", "video/vnd.vivo"},
#line 1139 "extensions.gperf"
      {"sas7bvew", "application/x-sas-view"},
#line 643 "extensions.gperf"
      {"kfo", "application/vnd.kde.kformula"},
#line 494 "extensions.gperf"
      {"grv", "application/vnd.groove-injector"},
#line 1585 "extensions.gperf"
      {"xquery", "application/xquery"},
#line 638 "extensions.gperf"
      {"karbon", "application/vnd.kde.karbon"},
#line 263 "extensions.gperf"
      {"dbase3", "application/x-dbf"},
#line 1177 "extensions.gperf"
      {"sf7", "application/x-sas-fdb"},
#line 791 "extensions.gperf"
      {"mov", "video/quicktime"},
#line 1357 "extensions.gperf"
      {"udeb", "application/x-debian-package"},
#line 797 "extensions.gperf"
      {"mp3g", "video/mpeg"},
#line 1527 "extensions.gperf"
      {"xcfbz2", "image/x-compressed-xcf"},
#line 127 "extensions.gperf"
      {"blb", "application/x-blorb"},
#line 383 "extensions.gperf"
      {"ez2", "application/vnd.ezpix-album"},
#line 475 "extensions.gperf"
      {"gnucash", "application/x-gnucash"},
#line 915 "extensions.gperf"
      {"otg", "application/vnd.oasis.opendocument.graphics-template"},
#line 1555 "extensions.gperf"
      {"xlog", "text/plain"},
#line 422 "extensions.gperf"
      {"flv", "video/x-flv"},
#line 717 "extensions.gperf"
      {"makefile", "text/x-makefile"},
#line 1077 "extensions.gperf"
      {"rgb", "image/x-rgb"},
#line 122 "extensions.gperf"
      {"bh2", "application/vnd.fujitsu.oasysprs"},
#line 575 "extensions.gperf"
      {"imagemap", "application/x-imagemap"},
#line 1132 "extensions.gperf"
      {"sas7bfdb", "application/x-sas-fdb"},
#line 616 "extensions.gperf"
      {"jnilib", "application/x-java-jnilib"},
#line 399 "extensions.gperf"
      {"fe_launch", "application/vnd.denovo.fcselayout-link"},
#line 1176 "extensions.gperf"
      {"setreg", "application/set-registration-initiation"},
#line 608 "extensions.gperf"
      {"jfif", "image/jpeg"},
#line 508 "extensions.gperf"
      {"h263", "video/H263"},
#line 444 "extensions.gperf"
      {"ft7", "image/x-freehand"},
#line 145 "extensions.gperf"
      {"bz2", "application/x-bzip2"},
#line 1375 "extensions.gperf"
      {"uvh", "video/vnd.dece.hd"},
#line 1388 "extensions.gperf"
      {"uvvi", "image/vnd.dece.graphic"},
#line 992 "extensions.gperf"
      {"portpkg", "application/vnd.macports.portpkg"},
#line 497 "extensions.gperf"
      {"gslib", "audio/x-psf"},
#line 365 "extensions.gperf"
      {"epub", "application/epub+zip"},
#line 372 "extensions.gperf"
      {"et3", "application/vnd.eszigno3+xml"},
#line 411 "extensions.gperf"
      {"fh7", "image/x-freehand"},
#line 1383 "extensions.gperf"
      {"uvva", "audio/vnd.dece.audio"},
#line 1227 "extensions.gperf"
      {"smov", "video/vnd.sealedmedia.softseal.mov"},
#line 1355 "extensions.gperf"
      {"u32", "application/x-authorware-bin"},
#line 1381 "extensions.gperf"
      {"uvu", "video/vnd.uvvu.mp4"},
#line 1374 "extensions.gperf"
      {"uvg", "image/vnd.dece.graphic"},
#line 490 "extensions.gperf"
      {"grb2", "application/x-grib"},
#line 282 "extensions.gperf"
      {"dgnlib", "image/vnd.dgn"},
#line 1382 "extensions.gperf"
      {"uvv", "video/vnd.dece.video"},
#line 1436 "extensions.gperf"
      {"vtu", "model/vnd.vtu"},
#line 621 "extensions.gperf"
      {"jpeg", "image/jpeg"},
#line 205 "extensions.gperf"
      {"clkk", "application/vnd.crick.clicker.keyboard"},
#line 384 "extensions.gperf"
      {"ez3", "application/vnd.ezpix-package"},
#line 1385 "extensions.gperf"
      {"uvvf", "application/vnd.dece.data"},
#line 848 "extensions.gperf"
      {"n-gage", "application/vnd.nokia.n-gage.symbian.install"},
#line 1361 "extensions.gperf"
      {"umj", "application/vnd.umajin"},
#line 493 "extensions.gperf"
      {"groovy", "text/x-groovy"},
#line 624 "extensions.gperf"
      {"jpg2", "image/jp2"},
#line 895 "extensions.gperf"
      {"ogg", "audio/vorbis"},
#line 1128 "extensions.gperf"
      {"sas7bbak", "application/x-sas-backup"},
#line 792 "extensions.gperf"
      {"movie", "video/x-sgi-movie"},
#line 1418 "extensions.gperf"
      {"vob", "video/x-ms-vob"},
#line 897 "extensions.gperf"
      {"ogv", "video/ogg"},
#line 538 "extensions.gperf"
      {"htke", "application/vnd.kenameaapp"},
#line 1089 "extensions.gperf"
      {"rmvb", "application/vnd.rn-realmedia-vbr"},
#line 476 "extensions.gperf"
      {"gnumakefile", "text/x-makefile"},
#line 1417 "extensions.gperf"
      {"vmdk", "application/x-vmdk"},
#line 605 "extensions.gperf"
      {"jbig2", "image/x-jbig2"},
#line 466 "extensions.gperf"
      {"ggb", "application/vnd.geogebra.file"},
#line 19 "extensions.gperf"
      {"3g2", "video/3gpp2"},
#line 22 "extensions.gperf"
      {"3gpp2", "video/3gpp2"},
#line 1486 "extensions.gperf"
      {"woff2", "font/woff2"},
#line 900 "extensions.gperf"
      {"onepkg", "application/onenote"},
#line 482 "extensions.gperf"
      {"gpkg", "application/x-geopackage"},
#line 129 "extensions.gperf"
      {"blorb", "application/x-blorb"},
#line 626 "extensions.gperf"
      {"jpgv", "video/JPEG"},
#line 222 "extensions.gperf"
      {"coffee", "text/x-coffeescript"},
#line 225 "extensions.gperf"
      {"config", "text/x-config"},
#line 911 "extensions.gperf"
      {"osfpvg", "application/vnd.yamaha.openscoreformat.osfpvg+xml"},
#line 866 "extensions.gperf"
      {"notebook", "application/x-smarttech-notebook"},
#line 1387 "extensions.gperf"
      {"uvvh", "video/vnd.dece.hd"},
#line 132 "extensions.gperf"
      {"book", "application/vnd.framemaker"},
#line 1393 "extensions.gperf"
      {"uvvu", "video/vnd.uvvu.mp4"},
#line 1386 "extensions.gperf"
      {"uvvg", "image/vnd.dece.graphic"},
#line 1394 "extensions.gperf"
      {"uvvv", "video/vnd.dece.video"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = extension_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct ExtensionRecord *resword;

          if (key < 2506)
            {
              if (key < 1497)
                {
                  switch (key - 1)
                    {
                      case 0:
                        resword = &wordlist[0];
                        goto compare;
                      case 10:
                        resword = &wordlist[1];
                        goto compare;
                      case 12:
                        resword = &wordlist[2];
                        goto compare;
                      case 20:
                        resword = &wordlist[3];
                        goto compare;
                      case 22:
                        resword = &wordlist[4];
                        goto compare;
                      case 30:
                        resword = &wordlist[5];
                        goto compare;
                      case 37:
                        resword = &wordlist[6];
                        goto compare;
                      case 40:
                        resword = &wordlist[7];
                        goto compare;
                      case 44:
                        resword = &wordlist[8];
                        goto compare;
                      case 47:
                        resword = &wordlist[9];
                        goto compare;
                      case 50:
                        resword = &wordlist[10];
                        goto compare;
                      case 53:
                        resword = &wordlist[11];
                        goto compare;
                      case 54:
                        resword = &wordlist[12];
                        goto compare;
                      case 65:
                        resword = &wordlist[13];
                        goto compare;
                      case 74:
                        resword = &wordlist[14];
                        goto compare;
                      case 83:
                        resword = &wordlist[15];
                        goto compare;
                      case 84:
                        resword = &wordlist[16];
                        goto compare;
                      case 88:
                        resword = &wordlist[17];
                        goto compare;
                      case 97:
                        resword = &wordlist[18];
                        goto compare;
                      case 102:
                        resword = &wordlist[19];
                        goto compare;
                      case 104:
                        resword = &wordlist[20];
                        goto compare;
                      case 107:
                        resword = &wordlist[21];
                        goto compare;
                      case 109:
                        resword = &wordlist[22];
                        goto compare;
                      case 112:
                        resword = &wordlist[23];
                        goto compare;
                      case 113:
                        resword = &wordlist[24];
                        goto compare;
                      case 119:
                        resword = &wordlist[25];
                        goto compare;
                      case 133:
                        resword = &wordlist[26];
                        goto compare;
                      case 139:
                        resword = &wordlist[27];
                        goto compare;
                      case 141:
                        resword = &wordlist[28];
                        goto compare;
                      case 143:
                        resword = &wordlist[29];
                        goto compare;
                      case 148:
                        resword = &wordlist[30];
                        goto compare;
                      case 149:
                        resword = &wordlist[31];
                        goto compare;
                      case 150:
                        resword = &wordlist[32];
                        goto compare;
                      case 152:
                        resword = &wordlist[33];
                        goto compare;
                      case 154:
                        resword = &wordlist[34];
                        goto compare;
                      case 155:
                        resword = &wordlist[35];
                        goto compare;
                      case 159:
                        resword = &wordlist[36];
                        goto compare;
                      case 162:
                        resword = &wordlist[37];
                        goto compare;
                      case 168:
                        resword = &wordlist[38];
                        goto compare;
                      case 171:
                        resword = &wordlist[39];
                        goto compare;
                      case 190:
                        resword = &wordlist[40];
                        goto compare;
                      case 194:
                        resword = &wordlist[41];
                        goto compare;
                      case 197:
                        resword = &wordlist[42];
                        goto compare;
                      case 200:
                        resword = &wordlist[43];
                        goto compare;
                      case 203:
                        resword = &wordlist[44];
                        goto compare;
                      case 211:
                        resword = &wordlist[45];
                        goto compare;
                      case 212:
                        resword = &wordlist[46];
                        goto compare;
                      case 224:
                        resword = &wordlist[47];
                        goto compare;
                      case 227:
                        resword = &wordlist[48];
                        goto compare;
                      case 231:
                        resword = &wordlist[49];
                        goto compare;
                      case 232:
                        resword = &wordlist[50];
                        goto compare;
                      case 250:
                        resword = &wordlist[51];
                        goto compare;
                      case 259:
                        resword = &wordlist[52];
                        goto compare;
                      case 262:
                        resword = &wordlist[53];
                        goto compare;
                      case 265:
                        resword = &wordlist[54];
                        goto compare;
                      case 273:
                        resword = &wordlist[55];
                        goto compare;
                      case 275:
                        resword = &wordlist[56];
                        goto compare;
                      case 277:
                        resword = &wordlist[57];
                        goto compare;
                      case 278:
                        resword = &wordlist[58];
                        goto compare;
                      case 279:
                        resword = &wordlist[59];
                        goto compare;
                      case 282:
                        resword = &wordlist[60];
                        goto compare;
                      case 283:
                        resword = &wordlist[61];
                        goto compare;
                      case 284:
                        resword = &wordlist[62];
                        goto compare;
                      case 285:
                        resword = &wordlist[63];
                        goto compare;
                      case 288:
                        resword = &wordlist[64];
                        goto compare;
                      case 292:
                        resword = &wordlist[65];
                        goto compare;
                      case 298:
                        resword = &wordlist[66];
                        goto compare;
                      case 299:
                        resword = &wordlist[67];
                        goto compare;
                      case 303:
                        resword = &wordlist[68];
                        goto compare;
                      case 307:
                        resword = &wordlist[69];
                        goto compare;
                      case 309:
                        resword = &wordlist[70];
                        goto compare;
                      case 311:
                        resword = &wordlist[71];
                        goto compare;
                      case 312:
                        resword = &wordlist[72];
                        goto compare;
                      case 314:
                        resword = &wordlist[73];
                        goto compare;
                      case 319:
                        resword = &wordlist[74];
                        goto compare;
                      case 322:
                        resword = &wordlist[75];
                        goto compare;
                      case 323:
                        resword = &wordlist[76];
                        goto compare;
                      case 327:
                        resword = &wordlist[77];
                        goto compare;
                      case 329:
                        resword = &wordlist[78];
                        goto compare;
                      case 332:
                        resword = &wordlist[79];
                        goto compare;
                      case 333:
                        resword = &wordlist[80];
                        goto compare;
                      case 343:
                        resword = &wordlist[81];
                        goto compare;
                      case 345:
                        resword = &wordlist[82];
                        goto compare;
                      case 352:
                        resword = &wordlist[83];
                        goto compare;
                      case 360:
                        resword = &wordlist[84];
                        goto compare;
                      case 367:
                        resword = &wordlist[85];
                        goto compare;
                      case 370:
                        resword = &wordlist[86];
                        goto compare;
                      case 372:
                        resword = &wordlist[87];
                        goto compare;
                      case 377:
                        resword = &wordlist[88];
                        goto compare;
                      case 382:
                        resword = &wordlist[89];
                        goto compare;
                      case 383:
                        resword = &wordlist[90];
                        goto compare;
                      case 394:
                        resword = &wordlist[91];
                        goto compare;
                      case 397:
                        resword = &wordlist[92];
                        goto compare;
                      case 399:
                        resword = &wordlist[93];
                        goto compare;
                      case 404:
                        resword = &wordlist[94];
                        goto compare;
                      case 406:
                        resword = &wordlist[95];
                        goto compare;
                      case 407:
                        resword = &wordlist[96];
                        goto compare;
                      case 412:
                        resword = &wordlist[97];
                        goto compare;
                      case 414:
                        resword = &wordlist[98];
                        goto compare;
                      case 416:
                        resword = &wordlist[99];
                        goto compare;
                      case 424:
                        resword = &wordlist[100];
                        goto compare;
                      case 437:
                        resword = &wordlist[101];
                        goto compare;
                      case 439:
                        resword = &wordlist[102];
                        goto compare;
                      case 444:
                        resword = &wordlist[103];
                        goto compare;
                      case 451:
                        resword = &wordlist[104];
                        goto compare;
                      case 469:
                        resword = &wordlist[105];
                        goto compare;
                      case 472:
                        resword = &wordlist[106];
                        goto compare;
                      case 488:
                        resword = &wordlist[107];
                        goto compare;
                      case 507:
                        resword = &wordlist[108];
                        goto compare;
                      case 528:
                        resword = &wordlist[109];
                        goto compare;
                      case 536:
                        resword = &wordlist[110];
                        goto compare;
                      case 537:
                        resword = &wordlist[111];
                        goto compare;
                      case 543:
                        resword = &wordlist[112];
                        goto compare;
                      case 552:
                        resword = &wordlist[113];
                        goto compare;
                      case 554:
                        resword = &wordlist[114];
                        goto compare;
                      case 557:
                        resword = &wordlist[115];
                        goto compare;
                      case 559:
                        resword = &wordlist[116];
                        goto compare;
                      case 561:
                        resword = &wordlist[117];
                        goto compare;
                      case 563:
                        resword = &wordlist[118];
                        goto compare;
                      case 567:
                        resword = &wordlist[119];
                        goto compare;
                      case 569:
                        resword = &wordlist[120];
                        goto compare;
                      case 572:
                        resword = &wordlist[121];
                        goto compare;
                      case 574:
                        resword = &wordlist[122];
                        goto compare;
                      case 576:
                        resword = &wordlist[123];
                        goto compare;
                      case 577:
                        resword = &wordlist[124];
                        goto compare;
                      case 578:
                        resword = &wordlist[125];
                        goto compare;
                      case 581:
                        resword = &wordlist[126];
                        goto compare;
                      case 582:
                        resword = &wordlist[127];
                        goto compare;
                      case 585:
                        resword = &wordlist[128];
                        goto compare;
                      case 587:
                        resword = &wordlist[129];
                        goto compare;
                      case 592:
                        resword = &wordlist[130];
                        goto compare;
                      case 603:
                        resword = &wordlist[131];
                        goto compare;
                      case 606:
                        resword = &wordlist[132];
                        goto compare;
                      case 607:
                        resword = &wordlist[133];
                        goto compare;
                      case 608:
                        resword = &wordlist[134];
                        goto compare;
                      case 609:
                        resword = &wordlist[135];
                        goto compare;
                      case 611:
                        resword = &wordlist[136];
                        goto compare;
                      case 614:
                        resword = &wordlist[137];
                        goto compare;
                      case 616:
                        resword = &wordlist[138];
                        goto compare;
                      case 617:
                        resword = &wordlist[139];
                        goto compare;
                      case 624:
                        resword = &wordlist[140];
                        goto compare;
                      case 626:
                        resword = &wordlist[141];
                        goto compare;
                      case 627:
                        resword = &wordlist[142];
                        goto compare;
                      case 629:
                        resword = &wordlist[143];
                        goto compare;
                      case 631:
                        resword = &wordlist[144];
                        goto compare;
                      case 633:
                        resword = &wordlist[145];
                        goto compare;
                      case 634:
                        resword = &wordlist[146];
                        goto compare;
                      case 639:
                        resword = &wordlist[147];
                        goto compare;
                      case 648:
                        resword = &wordlist[148];
                        goto compare;
                      case 649:
                        resword = &wordlist[149];
                        goto compare;
                      case 650:
                        resword = &wordlist[150];
                        goto compare;
                      case 651:
                        resword = &wordlist[151];
                        goto compare;
                      case 656:
                        resword = &wordlist[152];
                        goto compare;
                      case 664:
                        resword = &wordlist[153];
                        goto compare;
                      case 666:
                        resword = &wordlist[154];
                        goto compare;
                      case 669:
                        resword = &wordlist[155];
                        goto compare;
                      case 671:
                        resword = &wordlist[156];
                        goto compare;
                      case 672:
                        resword = &wordlist[157];
                        goto compare;
                      case 674:
                        resword = &wordlist[158];
                        goto compare;
                      case 676:
                        resword = &wordlist[159];
                        goto compare;
                      case 682:
                        resword = &wordlist[160];
                        goto compare;
                      case 687:
                        resword = &wordlist[161];
                        goto compare;
                      case 695:
                        resword = &wordlist[162];
                        goto compare;
                      case 697:
                        resword = &wordlist[163];
                        goto compare;
                      case 702:
                        resword = &wordlist[164];
                        goto compare;
                      case 706:
                        resword = &wordlist[165];
                        goto compare;
                      case 707:
                        resword = &wordlist[166];
                        goto compare;
                      case 711:
                        resword = &wordlist[167];
                        goto compare;
                      case 712:
                        resword = &wordlist[168];
                        goto compare;
                      case 713:
                        resword = &wordlist[169];
                        goto compare;
                      case 716:
                        resword = &wordlist[170];
                        goto compare;
                      case 717:
                        resword = &wordlist[171];
                        goto compare;
                      case 722:
                        resword = &wordlist[172];
                        goto compare;
                      case 723:
                        resword = &wordlist[173];
                        goto compare;
                      case 725:
                        resword = &wordlist[174];
                        goto compare;
                      case 727:
                        resword = &wordlist[175];
                        goto compare;
                      case 732:
                        resword = &wordlist[176];
                        goto compare;
                      case 737:
                        resword = &wordlist[177];
                        goto compare;
                      case 742:
                        resword = &wordlist[178];
                        goto compare;
                      case 756:
                        resword = &wordlist[179];
                        goto compare;
                      case 759:
                        resword = &wordlist[180];
                        goto compare;
                      case 762:
                        resword = &wordlist[181];
                        goto compare;
                      case 766:
                        resword = &wordlist[182];
                        goto compare;
                      case 767:
                        resword = &wordlist[183];
                        goto compare;
                      case 771:
                        resword = &wordlist[184];
                        goto compare;
                      case 774:
                        resword = &wordlist[185];
                        goto compare;
                      case 777:
                        resword = &wordlist[186];
                        goto compare;
                      case 782:
                        resword = &wordlist[187];
                        goto compare;
                      case 784:
                        resword = &wordlist[188];
                        goto compare;
                      case 787:
                        resword = &wordlist[189];
                        goto compare;
                      case 789:
                        resword = &wordlist[190];
                        goto compare;
                      case 791:
                        resword = &wordlist[191];
                        goto compare;
                      case 792:
                        resword = &wordlist[192];
                        goto compare;
                      case 793:
                        resword = &wordlist[193];
                        goto compare;
                      case 797:
                        resword = &wordlist[194];
                        goto compare;
                      case 801:
                        resword = &wordlist[195];
                        goto compare;
                      case 802:
                        resword = &wordlist[196];
                        goto compare;
                      case 803:
                        resword = &wordlist[197];
                        goto compare;
                      case 806:
                        resword = &wordlist[198];
                        goto compare;
                      case 807:
                        resword = &wordlist[199];
                        goto compare;
                      case 812:
                        resword = &wordlist[200];
                        goto compare;
                      case 816:
                        resword = &wordlist[201];
                        goto compare;
                      case 817:
                        resword = &wordlist[202];
                        goto compare;
                      case 819:
                        resword = &wordlist[203];
                        goto compare;
                      case 823:
                        resword = &wordlist[204];
                        goto compare;
                      case 826:
                        resword = &wordlist[205];
                        goto compare;
                      case 830:
                        resword = &wordlist[206];
                        goto compare;
                      case 838:
                        resword = &wordlist[207];
                        goto compare;
                      case 842:
                        resword = &wordlist[208];
                        goto compare;
                      case 847:
                        resword = &wordlist[209];
                        goto compare;
                      case 850:
                        resword = &wordlist[210];
                        goto compare;
                      case 857:
                        resword = &wordlist[211];
                        goto compare;
                      case 862:
                        resword = &wordlist[212];
                        goto compare;
                      case 867:
                        resword = &wordlist[213];
                        goto compare;
                      case 871:
                        resword = &wordlist[214];
                        goto compare;
                      case 872:
                        resword = &wordlist[215];
                        goto compare;
                      case 876:
                        resword = &wordlist[216];
                        goto compare;
                      case 877:
                        resword = &wordlist[217];
                        goto compare;
                      case 881:
                        resword = &wordlist[218];
                        goto compare;
                      case 882:
                        resword = &wordlist[219];
                        goto compare;
                      case 885:
                        resword = &wordlist[220];
                        goto compare;
                      case 886:
                        resword = &wordlist[221];
                        goto compare;
                      case 891:
                        resword = &wordlist[222];
                        goto compare;
                      case 896:
                        resword = &wordlist[223];
                        goto compare;
                      case 897:
                        resword = &wordlist[224];
                        goto compare;
                      case 898:
                        resword = &wordlist[225];
                        goto compare;
                      case 901:
                        resword = &wordlist[226];
                        goto compare;
                      case 902:
                        resword = &wordlist[227];
                        goto compare;
                      case 907:
                        resword = &wordlist[228];
                        goto compare;
                      case 921:
                        resword = &wordlist[229];
                        goto compare;
                      case 922:
                        resword = &wordlist[230];
                        goto compare;
                      case 927:
                        resword = &wordlist[231];
                        goto compare;
                      case 932:
                        resword = &wordlist[232];
                        goto compare;
                      case 937:
                        resword = &wordlist[233];
                        goto compare;
                      case 942:
                        resword = &wordlist[234];
                        goto compare;
                      case 944:
                        resword = &wordlist[235];
                        goto compare;
                      case 945:
                        resword = &wordlist[236];
                        goto compare;
                      case 947:
                        resword = &wordlist[237];
                        goto compare;
                      case 952:
                        resword = &wordlist[238];
                        goto compare;
                      case 953:
                        resword = &wordlist[239];
                        goto compare;
                      case 956:
                        resword = &wordlist[240];
                        goto compare;
                      case 957:
                        resword = &wordlist[241];
                        goto compare;
                      case 963:
                        resword = &wordlist[242];
                        goto compare;
                      case 967:
                        resword = &wordlist[243];
                        goto compare;
                      case 972:
                        resword = &wordlist[244];
                        goto compare;
                      case 979:
                        resword = &wordlist[245];
                        goto compare;
                      case 981:
                        resword = &wordlist[246];
                        goto compare;
                      case 988:
                        resword = &wordlist[247];
                        goto compare;
                      case 997:
                        resword = &wordlist[248];
                        goto compare;
                      case 1002:
                        resword = &wordlist[249];
                        goto compare;
                      case 1004:
                        resword = &wordlist[250];
                        goto compare;
                      case 1008:
                        resword = &wordlist[251];
                        goto compare;
                      case 1011:
                        resword = &wordlist[252];
                        goto compare;
                      case 1012:
                        resword = &wordlist[253];
                        goto compare;
                      case 1017:
                        resword = &wordlist[254];
                        goto compare;
                      case 1022:
                        resword = &wordlist[255];
                        goto compare;
                      case 1023:
                        resword = &wordlist[256];
                        goto compare;
                      case 1031:
                        resword = &wordlist[257];
                        goto compare;
                      case 1033:
                        resword = &wordlist[258];
                        goto compare;
                      case 1042:
                        resword = &wordlist[259];
                        goto compare;
                      case 1044:
                        resword = &wordlist[260];
                        goto compare;
                      case 1047:
                        resword = &wordlist[261];
                        goto compare;
                      case 1049:
                        resword = &wordlist[262];
                        goto compare;
                      case 1050:
                        resword = &wordlist[263];
                        goto compare;
                      case 1059:
                        resword = &wordlist[264];
                        goto compare;
                      case 1060:
                        resword = &wordlist[265];
                        goto compare;
                      case 1061:
                        resword = &wordlist[266];
                        goto compare;
                      case 1062:
                        resword = &wordlist[267];
                        goto compare;
                      case 1064:
                        resword = &wordlist[268];
                        goto compare;
                      case 1066:
                        resword = &wordlist[269];
                        goto compare;
                      case 1067:
                        resword = &wordlist[270];
                        goto compare;
                      case 1068:
                        resword = &wordlist[271];
                        goto compare;
                      case 1071:
                        resword = &wordlist[272];
                        goto compare;
                      case 1076:
                        resword = &wordlist[273];
                        goto compare;
                      case 1078:
                        resword = &wordlist[274];
                        goto compare;
                      case 1082:
                        resword = &wordlist[275];
                        goto compare;
                      case 1087:
                        resword = &wordlist[276];
                        goto compare;
                      case 1089:
                        resword = &wordlist[277];
                        goto compare;
                      case 1092:
                        resword = &wordlist[278];
                        goto compare;
                      case 1093:
                        resword = &wordlist[279];
                        goto compare;
                      case 1098:
                        resword = &wordlist[280];
                        goto compare;
                      case 1099:
                        resword = &wordlist[281];
                        goto compare;
                      case 1100:
                        resword = &wordlist[282];
                        goto compare;
                      case 1104:
                        resword = &wordlist[283];
                        goto compare;
                      case 1107:
                        resword = &wordlist[284];
                        goto compare;
                      case 1111:
                        resword = &wordlist[285];
                        goto compare;
                      case 1112:
                        resword = &wordlist[286];
                        goto compare;
                      case 1114:
                        resword = &wordlist[287];
                        goto compare;
                      case 1122:
                        resword = &wordlist[288];
                        goto compare;
                      case 1125:
                        resword = &wordlist[289];
                        goto compare;
                      case 1127:
                        resword = &wordlist[290];
                        goto compare;
                      case 1129:
                        resword = &wordlist[291];
                        goto compare;
                      case 1130:
                        resword = &wordlist[292];
                        goto compare;
                      case 1132:
                        resword = &wordlist[293];
                        goto compare;
                      case 1133:
                        resword = &wordlist[294];
                        goto compare;
                      case 1137:
                        resword = &wordlist[295];
                        goto compare;
                      case 1138:
                        resword = &wordlist[296];
                        goto compare;
                      case 1139:
                        resword = &wordlist[297];
                        goto compare;
                      case 1140:
                        resword = &wordlist[298];
                        goto compare;
                      case 1142:
                        resword = &wordlist[299];
                        goto compare;
                      case 1150:
                        resword = &wordlist[300];
                        goto compare;
                      case 1152:
                        resword = &wordlist[301];
                        goto compare;
                      case 1153:
                        resword = &wordlist[302];
                        goto compare;
                      case 1160:
                        resword = &wordlist[303];
                        goto compare;
                      case 1166:
                        resword = &wordlist[304];
                        goto compare;
                      case 1172:
                        resword = &wordlist[305];
                        goto compare;
                      case 1174:
                        resword = &wordlist[306];
                        goto compare;
                      case 1176:
                        resword = &wordlist[307];
                        goto compare;
                      case 1177:
                        resword = &wordlist[308];
                        goto compare;
                      case 1179:
                        resword = &wordlist[309];
                        goto compare;
                      case 1181:
                        resword = &wordlist[310];
                        goto compare;
                      case 1185:
                        resword = &wordlist[311];
                        goto compare;
                      case 1191:
                        resword = &wordlist[312];
                        goto compare;
                      case 1192:
                        resword = &wordlist[313];
                        goto compare;
                      case 1195:
                        resword = &wordlist[314];
                        goto compare;
                      case 1199:
                        resword = &wordlist[315];
                        goto compare;
                      case 1200:
                        resword = &wordlist[316];
                        goto compare;
                      case 1202:
                        resword = &wordlist[317];
                        goto compare;
                      case 1204:
                        resword = &wordlist[318];
                        goto compare;
                      case 1216:
                        resword = &wordlist[319];
                        goto compare;
                      case 1218:
                        resword = &wordlist[320];
                        goto compare;
                      case 1225:
                        resword = &wordlist[321];
                        goto compare;
                      case 1227:
                        resword = &wordlist[322];
                        goto compare;
                      case 1228:
                        resword = &wordlist[323];
                        goto compare;
                      case 1231:
                        resword = &wordlist[324];
                        goto compare;
                      case 1233:
                        resword = &wordlist[325];
                        goto compare;
                      case 1238:
                        resword = &wordlist[326];
                        goto compare;
                      case 1239:
                        resword = &wordlist[327];
                        goto compare;
                      case 1241:
                        resword = &wordlist[328];
                        goto compare;
                      case 1245:
                        resword = &wordlist[329];
                        goto compare;
                      case 1248:
                        resword = &wordlist[330];
                        goto compare;
                      case 1249:
                        resword = &wordlist[331];
                        goto compare;
                      case 1253:
                        resword = &wordlist[332];
                        goto compare;
                      case 1255:
                        resword = &wordlist[333];
                        goto compare;
                      case 1259:
                        resword = &wordlist[334];
                        goto compare;
                      case 1262:
                        resword = &wordlist[335];
                        goto compare;
                      case 1263:
                        resword = &wordlist[336];
                        goto compare;
                      case 1270:
                        resword = &wordlist[337];
                        goto compare;
                      case 1275:
                        resword = &wordlist[338];
                        goto compare;
                      case 1288:
                        resword = &wordlist[339];
                        goto compare;
                      case 1291:
                        resword = &wordlist[340];
                        goto compare;
                      case 1292:
                        resword = &wordlist[341];
                        goto compare;
                      case 1294:
                        resword = &wordlist[342];
                        goto compare;
                      case 1299:
                        resword = &wordlist[343];
                        goto compare;
                      case 1306:
                        resword = &wordlist[344];
                        goto compare;
                      case 1307:
                        resword = &wordlist[345];
                        goto compare;
                      case 1308:
                        resword = &wordlist[346];
                        goto compare;
                      case 1311:
                        resword = &wordlist[347];
                        goto compare;
                      case 1312:
                        resword = &wordlist[348];
                        goto compare;
                      case 1325:
                        resword = &wordlist[349];
                        goto compare;
                      case 1327:
                        resword = &wordlist[350];
                        goto compare;
                      case 1328:
                        resword = &wordlist[351];
                        goto compare;
                      case 1329:
                        resword = &wordlist[352];
                        goto compare;
                      case 1331:
                        resword = &wordlist[353];
                        goto compare;
                      case 1337:
                        resword = &wordlist[354];
                        goto compare;
                      case 1338:
                        resword = &wordlist[355];
                        goto compare;
                      case 1339:
                        resword = &wordlist[356];
                        goto compare;
                      case 1347:
                        resword = &wordlist[357];
                        goto compare;
                      case 1349:
                        resword = &wordlist[358];
                        goto compare;
                      case 1351:
                        resword = &wordlist[359];
                        goto compare;
                      case 1352:
                        resword = &wordlist[360];
                        goto compare;
                      case 1361:
                        resword = &wordlist[361];
                        goto compare;
                      case 1362:
                        resword = &wordlist[362];
                        goto compare;
                      case 1370:
                        resword = &wordlist[363];
                        goto compare;
                      case 1374:
                        resword = &wordlist[364];
                        goto compare;
                      case 1377:
                        resword = &wordlist[365];
                        goto compare;
                      case 1379:
                        resword = &wordlist[366];
                        goto compare;
                      case 1381:
                        resword = &wordlist[367];
                        goto compare;
                      case 1384:
                        resword = &wordlist[368];
                        goto compare;
                      case 1387:
                        resword = &wordlist[369];
                        goto compare;
                      case 1392:
                        resword = &wordlist[370];
                        goto compare;
                      case 1401:
                        resword = &wordlist[371];
                        goto compare;
                      case 1402:
                        resword = &wordlist[372];
                        goto compare;
                      case 1407:
                        resword = &wordlist[373];
                        goto compare;
                      case 1411:
                        resword = &wordlist[374];
                        goto compare;
                      case 1413:
                        resword = &wordlist[375];
                        goto compare;
                      case 1414:
                        resword = &wordlist[376];
                        goto compare;
                      case 1419:
                        resword = &wordlist[377];
                        goto compare;
                      case 1422:
                        resword = &wordlist[378];
                        goto compare;
                      case 1423:
                        resword = &wordlist[379];
                        goto compare;
                      case 1424:
                        resword = &wordlist[380];
                        goto compare;
                      case 1426:
                        resword = &wordlist[381];
                        goto compare;
                      case 1427:
                        resword = &wordlist[382];
                        goto compare;
                      case 1428:
                        resword = &wordlist[383];
                        goto compare;
                      case 1432:
                        resword = &wordlist[384];
                        goto compare;
                      case 1437:
                        resword = &wordlist[385];
                        goto compare;
                      case 1439:
                        resword = &wordlist[386];
                        goto compare;
                      case 1444:
                        resword = &wordlist[387];
                        goto compare;
                      case 1447:
                        resword = &wordlist[388];
                        goto compare;
                      case 1449:
                        resword = &wordlist[389];
                        goto compare;
                      case 1459:
                        resword = &wordlist[390];
                        goto compare;
                      case 1460:
                        resword = &wordlist[391];
                        goto compare;
                      case 1462:
                        resword = &wordlist[392];
                        goto compare;
                      case 1463:
                        resword = &wordlist[393];
                        goto compare;
                      case 1464:
                        resword = &wordlist[394];
                        goto compare;
                      case 1472:
                        resword = &wordlist[395];
                        goto compare;
                      case 1474:
                        resword = &wordlist[396];
                        goto compare;
                      case 1477:
                        resword = &wordlist[397];
                        goto compare;
                      case 1478:
                        resword = &wordlist[398];
                        goto compare;
                      case 1482:
                        resword = &wordlist[399];
                        goto compare;
                      case 1487:
                        resword = &wordlist[400];
                        goto compare;
                      case 1491:
                        resword = &wordlist[401];
                        goto compare;
                      case 1494:
                        resword = &wordlist[402];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 1497)
                    {
                      case 0:
                        resword = &wordlist[403];
                        goto compare;
                      case 1:
                        resword = &wordlist[404];
                        goto compare;
                      case 4:
                        resword = &wordlist[405];
                        goto compare;
                      case 13:
                        resword = &wordlist[406];
                        goto compare;
                      case 15:
                        resword = &wordlist[407];
                        goto compare;
                      case 17:
                        resword = &wordlist[408];
                        goto compare;
                      case 18:
                        resword = &wordlist[409];
                        goto compare;
                      case 19:
                        resword = &wordlist[410];
                        goto compare;
                      case 20:
                        resword = &wordlist[411];
                        goto compare;
                      case 21:
                        resword = &wordlist[412];
                        goto compare;
                      case 22:
                        resword = &wordlist[413];
                        goto compare;
                      case 26:
                        resword = &wordlist[414];
                        goto compare;
                      case 28:
                        resword = &wordlist[415];
                        goto compare;
                      case 30:
                        resword = &wordlist[416];
                        goto compare;
                      case 31:
                        resword = &wordlist[417];
                        goto compare;
                      case 33:
                        resword = &wordlist[418];
                        goto compare;
                      case 38:
                        resword = &wordlist[419];
                        goto compare;
                      case 39:
                        resword = &wordlist[420];
                        goto compare;
                      case 40:
                        resword = &wordlist[421];
                        goto compare;
                      case 46:
                        resword = &wordlist[422];
                        goto compare;
                      case 48:
                        resword = &wordlist[423];
                        goto compare;
                      case 51:
                        resword = &wordlist[424];
                        goto compare;
                      case 52:
                        resword = &wordlist[425];
                        goto compare;
                      case 56:
                        resword = &wordlist[426];
                        goto compare;
                      case 60:
                        resword = &wordlist[427];
                        goto compare;
                      case 64:
                        resword = &wordlist[428];
                        goto compare;
                      case 65:
                        resword = &wordlist[429];
                        goto compare;
                      case 66:
                        resword = &wordlist[430];
                        goto compare;
                      case 72:
                        resword = &wordlist[431];
                        goto compare;
                      case 76:
                        resword = &wordlist[432];
                        goto compare;
                      case 87:
                        resword = &wordlist[433];
                        goto compare;
                      case 90:
                        resword = &wordlist[434];
                        goto compare;
                      case 91:
                        resword = &wordlist[435];
                        goto compare;
                      case 95:
                        resword = &wordlist[436];
                        goto compare;
                      case 96:
                        resword = &wordlist[437];
                        goto compare;
                      case 97:
                        resword = &wordlist[438];
                        goto compare;
                      case 106:
                        resword = &wordlist[439];
                        goto compare;
                      case 108:
                        resword = &wordlist[440];
                        goto compare;
                      case 112:
                        resword = &wordlist[441];
                        goto compare;
                      case 116:
                        resword = &wordlist[442];
                        goto compare;
                      case 118:
                        resword = &wordlist[443];
                        goto compare;
                      case 121:
                        resword = &wordlist[444];
                        goto compare;
                      case 123:
                        resword = &wordlist[445];
                        goto compare;
                      case 125:
                        resword = &wordlist[446];
                        goto compare;
                      case 126:
                        resword = &wordlist[447];
                        goto compare;
                      case 128:
                        resword = &wordlist[448];
                        goto compare;
                      case 132:
                        resword = &wordlist[449];
                        goto compare;
                      case 133:
                        resword = &wordlist[450];
                        goto compare;
                      case 138:
                        resword = &wordlist[451];
                        goto compare;
                      case 142:
                        resword = &wordlist[452];
                        goto compare;
                      case 143:
                        resword = &wordlist[453];
                        goto compare;
                      case 144:
                        resword = &wordlist[454];
                        goto compare;
                      case 147:
                        resword = &wordlist[455];
                        goto compare;
                      case 148:
                        resword = &wordlist[456];
                        goto compare;
                      case 149:
                        resword = &wordlist[457];
                        goto compare;
                      case 151:
                        resword = &wordlist[458];
                        goto compare;
                      case 156:
                        resword = &wordlist[459];
                        goto compare;
                      case 157:
                        resword = &wordlist[460];
                        goto compare;
                      case 161:
                        resword = &wordlist[461];
                        goto compare;
                      case 162:
                        resword = &wordlist[462];
                        goto compare;
                      case 163:
                        resword = &wordlist[463];
                        goto compare;
                      case 166:
                        resword = &wordlist[464];
                        goto compare;
                      case 171:
                        resword = &wordlist[465];
                        goto compare;
                      case 176:
                        resword = &wordlist[466];
                        goto compare;
                      case 178:
                        resword = &wordlist[467];
                        goto compare;
                      case 181:
                        resword = &wordlist[468];
                        goto compare;
                      case 183:
                        resword = &wordlist[469];
                        goto compare;
                      case 187:
                        resword = &wordlist[470];
                        goto compare;
                      case 191:
                        resword = &wordlist[471];
                        goto compare;
                      case 192:
                        resword = &wordlist[472];
                        goto compare;
                      case 202:
                        resword = &wordlist[473];
                        goto compare;
                      case 203:
                        resword = &wordlist[474];
                        goto compare;
                      case 208:
                        resword = &wordlist[475];
                        goto compare;
                      case 212:
                        resword = &wordlist[476];
                        goto compare;
                      case 213:
                        resword = &wordlist[477];
                        goto compare;
                      case 216:
                        resword = &wordlist[478];
                        goto compare;
                      case 217:
                        resword = &wordlist[479];
                        goto compare;
                      case 218:
                        resword = &wordlist[480];
                        goto compare;
                      case 219:
                        resword = &wordlist[481];
                        goto compare;
                      case 222:
                        resword = &wordlist[482];
                        goto compare;
                      case 231:
                        resword = &wordlist[483];
                        goto compare;
                      case 233:
                        resword = &wordlist[484];
                        goto compare;
                      case 234:
                        resword = &wordlist[485];
                        goto compare;
                      case 235:
                        resword = &wordlist[486];
                        goto compare;
                      case 237:
                        resword = &wordlist[487];
                        goto compare;
                      case 239:
                        resword = &wordlist[488];
                        goto compare;
                      case 241:
                        resword = &wordlist[489];
                        goto compare;
                      case 242:
                        resword = &wordlist[490];
                        goto compare;
                      case 246:
                        resword = &wordlist[491];
                        goto compare;
                      case 250:
                        resword = &wordlist[492];
                        goto compare;
                      case 255:
                        resword = &wordlist[493];
                        goto compare;
                      case 256:
                        resword = &wordlist[494];
                        goto compare;
                      case 258:
                        resword = &wordlist[495];
                        goto compare;
                      case 259:
                        resword = &wordlist[496];
                        goto compare;
                      case 261:
                        resword = &wordlist[497];
                        goto compare;
                      case 262:
                        resword = &wordlist[498];
                        goto compare;
                      case 263:
                        resword = &wordlist[499];
                        goto compare;
                      case 265:
                        resword = &wordlist[500];
                        goto compare;
                      case 266:
                        resword = &wordlist[501];
                        goto compare;
                      case 271:
                        resword = &wordlist[502];
                        goto compare;
                      case 273:
                        resword = &wordlist[503];
                        goto compare;
                      case 274:
                        resword = &wordlist[504];
                        goto compare;
                      case 275:
                        resword = &wordlist[505];
                        goto compare;
                      case 278:
                        resword = &wordlist[506];
                        goto compare;
                      case 281:
                        resword = &wordlist[507];
                        goto compare;
                      case 282:
                        resword = &wordlist[508];
                        goto compare;
                      case 286:
                        resword = &wordlist[509];
                        goto compare;
                      case 287:
                        resword = &wordlist[510];
                        goto compare;
                      case 288:
                        resword = &wordlist[511];
                        goto compare;
                      case 291:
                        resword = &wordlist[512];
                        goto compare;
                      case 293:
                        resword = &wordlist[513];
                        goto compare;
                      case 296:
                        resword = &wordlist[514];
                        goto compare;
                      case 297:
                        resword = &wordlist[515];
                        goto compare;
                      case 299:
                        resword = &wordlist[516];
                        goto compare;
                      case 301:
                        resword = &wordlist[517];
                        goto compare;
                      case 302:
                        resword = &wordlist[518];
                        goto compare;
                      case 303:
                        resword = &wordlist[519];
                        goto compare;
                      case 306:
                        resword = &wordlist[520];
                        goto compare;
                      case 308:
                        resword = &wordlist[521];
                        goto compare;
                      case 311:
                        resword = &wordlist[522];
                        goto compare;
                      case 325:
                        resword = &wordlist[523];
                        goto compare;
                      case 326:
                        resword = &wordlist[524];
                        goto compare;
                      case 327:
                        resword = &wordlist[525];
                        goto compare;
                      case 328:
                        resword = &wordlist[526];
                        goto compare;
                      case 329:
                        resword = &wordlist[527];
                        goto compare;
                      case 331:
                        resword = &wordlist[528];
                        goto compare;
                      case 334:
                        resword = &wordlist[529];
                        goto compare;
                      case 336:
                        resword = &wordlist[530];
                        goto compare;
                      case 339:
                        resword = &wordlist[531];
                        goto compare;
                      case 341:
                        resword = &wordlist[532];
                        goto compare;
                      case 343:
                        resword = &wordlist[533];
                        goto compare;
                      case 346:
                        resword = &wordlist[534];
                        goto compare;
                      case 349:
                        resword = &wordlist[535];
                        goto compare;
                      case 350:
                        resword = &wordlist[536];
                        goto compare;
                      case 351:
                        resword = &wordlist[537];
                        goto compare;
                      case 358:
                        resword = &wordlist[538];
                        goto compare;
                      case 366:
                        resword = &wordlist[539];
                        goto compare;
                      case 367:
                        resword = &wordlist[540];
                        goto compare;
                      case 368:
                        resword = &wordlist[541];
                        goto compare;
                      case 373:
                        resword = &wordlist[542];
                        goto compare;
                      case 381:
                        resword = &wordlist[543];
                        goto compare;
                      case 382:
                        resword = &wordlist[544];
                        goto compare;
                      case 383:
                        resword = &wordlist[545];
                        goto compare;
                      case 386:
                        resword = &wordlist[546];
                        goto compare;
                      case 387:
                        resword = &wordlist[547];
                        goto compare;
                      case 390:
                        resword = &wordlist[548];
                        goto compare;
                      case 391:
                        resword = &wordlist[549];
                        goto compare;
                      case 396:
                        resword = &wordlist[550];
                        goto compare;
                      case 397:
                        resword = &wordlist[551];
                        goto compare;
                      case 402:
                        resword = &wordlist[552];
                        goto compare;
                      case 404:
                        resword = &wordlist[553];
                        goto compare;
                      case 406:
                        resword = &wordlist[554];
                        goto compare;
                      case 408:
                        resword = &wordlist[555];
                        goto compare;
                      case 409:
                        resword = &wordlist[556];
                        goto compare;
                      case 412:
                        resword = &wordlist[557];
                        goto compare;
                      case 413:
                        resword = &wordlist[558];
                        goto compare;
                      case 417:
                        resword = &wordlist[559];
                        goto compare;
                      case 418:
                        resword = &wordlist[560];
                        goto compare;
                      case 419:
                        resword = &wordlist[561];
                        goto compare;
                      case 420:
                        resword = &wordlist[562];
                        goto compare;
                      case 422:
                        resword = &wordlist[563];
                        goto compare;
                      case 426:
                        resword = &wordlist[564];
                        goto compare;
                      case 427:
                        resword = &wordlist[565];
                        goto compare;
                      case 428:
                        resword = &wordlist[566];
                        goto compare;
                      case 429:
                        resword = &wordlist[567];
                        goto compare;
                      case 433:
                        resword = &wordlist[568];
                        goto compare;
                      case 437:
                        resword = &wordlist[569];
                        goto compare;
                      case 438:
                        resword = &wordlist[570];
                        goto compare;
                      case 442:
                        resword = &wordlist[571];
                        goto compare;
                      case 446:
                        resword = &wordlist[572];
                        goto compare;
                      case 451:
                        resword = &wordlist[573];
                        goto compare;
                      case 452:
                        resword = &wordlist[574];
                        goto compare;
                      case 453:
                        resword = &wordlist[575];
                        goto compare;
                      case 454:
                        resword = &wordlist[576];
                        goto compare;
                      case 456:
                        resword = &wordlist[577];
                        goto compare;
                      case 457:
                        resword = &wordlist[578];
                        goto compare;
                      case 460:
                        resword = &wordlist[579];
                        goto compare;
                      case 461:
                        resword = &wordlist[580];
                        goto compare;
                      case 462:
                        resword = &wordlist[581];
                        goto compare;
                      case 463:
                        resword = &wordlist[582];
                        goto compare;
                      case 466:
                        resword = &wordlist[583];
                        goto compare;
                      case 468:
                        resword = &wordlist[584];
                        goto compare;
                      case 470:
                        resword = &wordlist[585];
                        goto compare;
                      case 471:
                        resword = &wordlist[586];
                        goto compare;
                      case 476:
                        resword = &wordlist[587];
                        goto compare;
                      case 477:
                        resword = &wordlist[588];
                        goto compare;
                      case 481:
                        resword = &wordlist[589];
                        goto compare;
                      case 482:
                        resword = &wordlist[590];
                        goto compare;
                      case 483:
                        resword = &wordlist[591];
                        goto compare;
                      case 486:
                        resword = &wordlist[592];
                        goto compare;
                      case 490:
                        resword = &wordlist[593];
                        goto compare;
                      case 494:
                        resword = &wordlist[594];
                        goto compare;
                      case 496:
                        resword = &wordlist[595];
                        goto compare;
                      case 497:
                        resword = &wordlist[596];
                        goto compare;
                      case 499:
                        resword = &wordlist[597];
                        goto compare;
                      case 501:
                        resword = &wordlist[598];
                        goto compare;
                      case 503:
                        resword = &wordlist[599];
                        goto compare;
                      case 505:
                        resword = &wordlist[600];
                        goto compare;
                      case 507:
                        resword = &wordlist[601];
                        goto compare;
                      case 508:
                        resword = &wordlist[602];
                        goto compare;
                      case 511:
                        resword = &wordlist[603];
                        goto compare;
                      case 512:
                        resword = &wordlist[604];
                        goto compare;
                      case 513:
                        resword = &wordlist[605];
                        goto compare;
                      case 516:
                        resword = &wordlist[606];
                        goto compare;
                      case 517:
                        resword = &wordlist[607];
                        goto compare;
                      case 520:
                        resword = &wordlist[608];
                        goto compare;
                      case 521:
                        resword = &wordlist[609];
                        goto compare;
                      case 526:
                        resword = &wordlist[610];
                        goto compare;
                      case 527:
                        resword = &wordlist[611];
                        goto compare;
                      case 528:
                        resword = &wordlist[612];
                        goto compare;
                      case 531:
                        resword = &wordlist[613];
                        goto compare;
                      case 533:
                        resword = &wordlist[614];
                        goto compare;
                      case 536:
                        resword = &wordlist[615];
                        goto compare;
                      case 540:
                        resword = &wordlist[616];
                        goto compare;
                      case 541:
                        resword = &wordlist[617];
                        goto compare;
                      case 547:
                        resword = &wordlist[618];
                        goto compare;
                      case 549:
                        resword = &wordlist[619];
                        goto compare;
                      case 551:
                        resword = &wordlist[620];
                        goto compare;
                      case 555:
                        resword = &wordlist[621];
                        goto compare;
                      case 556:
                        resword = &wordlist[622];
                        goto compare;
                      case 557:
                        resword = &wordlist[623];
                        goto compare;
                      case 558:
                        resword = &wordlist[624];
                        goto compare;
                      case 560:
                        resword = &wordlist[625];
                        goto compare;
                      case 561:
                        resword = &wordlist[626];
                        goto compare;
                      case 563:
                        resword = &wordlist[627];
                        goto compare;
                      case 564:
                        resword = &wordlist[628];
                        goto compare;
                      case 566:
                        resword = &wordlist[629];
                        goto compare;
                      case 571:
                        resword = &wordlist[630];
                        goto compare;
                      case 572:
                        resword = &wordlist[631];
                        goto compare;
                      case 573:
                        resword = &wordlist[632];
                        goto compare;
                      case 577:
                        resword = &wordlist[633];
                        goto compare;
                      case 578:
                        resword = &wordlist[634];
                        goto compare;
                      case 583:
                        resword = &wordlist[635];
                        goto compare;
                      case 586:
                        resword = &wordlist[636];
                        goto compare;
                      case 588:
                        resword = &wordlist[637];
                        goto compare;
                      case 590:
                        resword = &wordlist[638];
                        goto compare;
                      case 594:
                        resword = &wordlist[639];
                        goto compare;
                      case 598:
                        resword = &wordlist[640];
                        goto compare;
                      case 602:
                        resword = &wordlist[641];
                        goto compare;
                      case 603:
                        resword = &wordlist[642];
                        goto compare;
                      case 606:
                        resword = &wordlist[643];
                        goto compare;
                      case 608:
                        resword = &wordlist[644];
                        goto compare;
                      case 609:
                        resword = &wordlist[645];
                        goto compare;
                      case 611:
                        resword = &wordlist[646];
                        goto compare;
                      case 615:
                        resword = &wordlist[647];
                        goto compare;
                      case 616:
                        resword = &wordlist[648];
                        goto compare;
                      case 617:
                        resword = &wordlist[649];
                        goto compare;
                      case 624:
                        resword = &wordlist[650];
                        goto compare;
                      case 628:
                        resword = &wordlist[651];
                        goto compare;
                      case 632:
                        resword = &wordlist[652];
                        goto compare;
                      case 635:
                        resword = &wordlist[653];
                        goto compare;
                      case 636:
                        resword = &wordlist[654];
                        goto compare;
                      case 637:
                        resword = &wordlist[655];
                        goto compare;
                      case 640:
                        resword = &wordlist[656];
                        goto compare;
                      case 641:
                        resword = &wordlist[657];
                        goto compare;
                      case 647:
                        resword = &wordlist[658];
                        goto compare;
                      case 648:
                        resword = &wordlist[659];
                        goto compare;
                      case 649:
                        resword = &wordlist[660];
                        goto compare;
                      case 651:
                        resword = &wordlist[661];
                        goto compare;
                      case 654:
                        resword = &wordlist[662];
                        goto compare;
                      case 655:
                        resword = &wordlist[663];
                        goto compare;
                      case 656:
                        resword = &wordlist[664];
                        goto compare;
                      case 657:
                        resword = &wordlist[665];
                        goto compare;
                      case 659:
                        resword = &wordlist[666];
                        goto compare;
                      case 660:
                        resword = &wordlist[667];
                        goto compare;
                      case 666:
                        resword = &wordlist[668];
                        goto compare;
                      case 669:
                        resword = &wordlist[669];
                        goto compare;
                      case 671:
                        resword = &wordlist[670];
                        goto compare;
                      case 674:
                        resword = &wordlist[671];
                        goto compare;
                      case 675:
                        resword = &wordlist[672];
                        goto compare;
                      case 678:
                        resword = &wordlist[673];
                        goto compare;
                      case 681:
                        resword = &wordlist[674];
                        goto compare;
                      case 684:
                        resword = &wordlist[675];
                        goto compare;
                      case 685:
                        resword = &wordlist[676];
                        goto compare;
                      case 686:
                        resword = &wordlist[677];
                        goto compare;
                      case 688:
                        resword = &wordlist[678];
                        goto compare;
                      case 690:
                        resword = &wordlist[679];
                        goto compare;
                      case 691:
                        resword = &wordlist[680];
                        goto compare;
                      case 694:
                        resword = &wordlist[681];
                        goto compare;
                      case 698:
                        resword = &wordlist[682];
                        goto compare;
                      case 704:
                        resword = &wordlist[683];
                        goto compare;
                      case 705:
                        resword = &wordlist[684];
                        goto compare;
                      case 706:
                        resword = &wordlist[685];
                        goto compare;
                      case 707:
                        resword = &wordlist[686];
                        goto compare;
                      case 711:
                        resword = &wordlist[687];
                        goto compare;
                      case 713:
                        resword = &wordlist[688];
                        goto compare;
                      case 714:
                        resword = &wordlist[689];
                        goto compare;
                      case 715:
                        resword = &wordlist[690];
                        goto compare;
                      case 718:
                        resword = &wordlist[691];
                        goto compare;
                      case 722:
                        resword = &wordlist[692];
                        goto compare;
                      case 724:
                        resword = &wordlist[693];
                        goto compare;
                      case 726:
                        resword = &wordlist[694];
                        goto compare;
                      case 727:
                        resword = &wordlist[695];
                        goto compare;
                      case 728:
                        resword = &wordlist[696];
                        goto compare;
                      case 729:
                        resword = &wordlist[697];
                        goto compare;
                      case 730:
                        resword = &wordlist[698];
                        goto compare;
                      case 736:
                        resword = &wordlist[699];
                        goto compare;
                      case 740:
                        resword = &wordlist[700];
                        goto compare;
                      case 742:
                        resword = &wordlist[701];
                        goto compare;
                      case 744:
                        resword = &wordlist[702];
                        goto compare;
                      case 745:
                        resword = &wordlist[703];
                        goto compare;
                      case 752:
                        resword = &wordlist[704];
                        goto compare;
                      case 753:
                        resword = &wordlist[705];
                        goto compare;
                      case 754:
                        resword = &wordlist[706];
                        goto compare;
                      case 755:
                        resword = &wordlist[707];
                        goto compare;
                      case 756:
                        resword = &wordlist[708];
                        goto compare;
                      case 758:
                        resword = &wordlist[709];
                        goto compare;
                      case 761:
                        resword = &wordlist[710];
                        goto compare;
                      case 762:
                        resword = &wordlist[711];
                        goto compare;
                      case 764:
                        resword = &wordlist[712];
                        goto compare;
                      case 766:
                        resword = &wordlist[713];
                        goto compare;
                      case 768:
                        resword = &wordlist[714];
                        goto compare;
                      case 770:
                        resword = &wordlist[715];
                        goto compare;
                      case 773:
                        resword = &wordlist[716];
                        goto compare;
                      case 777:
                        resword = &wordlist[717];
                        goto compare;
                      case 778:
                        resword = &wordlist[718];
                        goto compare;
                      case 781:
                        resword = &wordlist[719];
                        goto compare;
                      case 782:
                        resword = &wordlist[720];
                        goto compare;
                      case 783:
                        resword = &wordlist[721];
                        goto compare;
                      case 785:
                        resword = &wordlist[722];
                        goto compare;
                      case 788:
                        resword = &wordlist[723];
                        goto compare;
                      case 789:
                        resword = &wordlist[724];
                        goto compare;
                      case 790:
                        resword = &wordlist[725];
                        goto compare;
                      case 793:
                        resword = &wordlist[726];
                        goto compare;
                      case 795:
                        resword = &wordlist[727];
                        goto compare;
                      case 797:
                        resword = &wordlist[728];
                        goto compare;
                      case 800:
                        resword = &wordlist[729];
                        goto compare;
                      case 801:
                        resword = &wordlist[730];
                        goto compare;
                      case 803:
                        resword = &wordlist[731];
                        goto compare;
                      case 806:
                        resword = &wordlist[732];
                        goto compare;
                      case 811:
                        resword = &wordlist[733];
                        goto compare;
                      case 813:
                        resword = &wordlist[734];
                        goto compare;
                      case 814:
                        resword = &wordlist[735];
                        goto compare;
                      case 815:
                        resword = &wordlist[736];
                        goto compare;
                      case 818:
                        resword = &wordlist[737];
                        goto compare;
                      case 823:
                        resword = &wordlist[738];
                        goto compare;
                      case 825:
                        resword = &wordlist[739];
                        goto compare;
                      case 828:
                        resword = &wordlist[740];
                        goto compare;
                      case 829:
                        resword = &wordlist[741];
                        goto compare;
                      case 833:
                        resword = &wordlist[742];
                        goto compare;
                      case 836:
                        resword = &wordlist[743];
                        goto compare;
                      case 839:
                        resword = &wordlist[744];
                        goto compare;
                      case 841:
                        resword = &wordlist[745];
                        goto compare;
                      case 845:
                        resword = &wordlist[746];
                        goto compare;
                      case 848:
                        resword = &wordlist[747];
                        goto compare;
                      case 852:
                        resword = &wordlist[748];
                        goto compare;
                      case 853:
                        resword = &wordlist[749];
                        goto compare;
                      case 854:
                        resword = &wordlist[750];
                        goto compare;
                      case 863:
                        resword = &wordlist[751];
                        goto compare;
                      case 864:
                        resword = &wordlist[752];
                        goto compare;
                      case 865:
                        resword = &wordlist[753];
                        goto compare;
                      case 869:
                        resword = &wordlist[754];
                        goto compare;
                      case 870:
                        resword = &wordlist[755];
                        goto compare;
                      case 873:
                        resword = &wordlist[756];
                        goto compare;
                      case 878:
                        resword = &wordlist[757];
                        goto compare;
                      case 881:
                        resword = &wordlist[758];
                        goto compare;
                      case 883:
                        resword = &wordlist[759];
                        goto compare;
                      case 885:
                        resword = &wordlist[760];
                        goto compare;
                      case 889:
                        resword = &wordlist[761];
                        goto compare;
                      case 890:
                        resword = &wordlist[762];
                        goto compare;
                      case 892:
                        resword = &wordlist[763];
                        goto compare;
                      case 896:
                        resword = &wordlist[764];
                        goto compare;
                      case 901:
                        resword = &wordlist[765];
                        goto compare;
                      case 902:
                        resword = &wordlist[766];
                        goto compare;
                      case 903:
                        resword = &wordlist[767];
                        goto compare;
                      case 906:
                        resword = &wordlist[768];
                        goto compare;
                      case 907:
                        resword = &wordlist[769];
                        goto compare;
                      case 909:
                        resword = &wordlist[770];
                        goto compare;
                      case 919:
                        resword = &wordlist[771];
                        goto compare;
                      case 923:
                        resword = &wordlist[772];
                        goto compare;
                      case 926:
                        resword = &wordlist[773];
                        goto compare;
                      case 930:
                        resword = &wordlist[774];
                        goto compare;
                      case 931:
                        resword = &wordlist[775];
                        goto compare;
                      case 934:
                        resword = &wordlist[776];
                        goto compare;
                      case 938:
                        resword = &wordlist[777];
                        goto compare;
                      case 942:
                        resword = &wordlist[778];
                        goto compare;
                      case 946:
                        resword = &wordlist[779];
                        goto compare;
                      case 950:
                        resword = &wordlist[780];
                        goto compare;
                      case 951:
                        resword = &wordlist[781];
                        goto compare;
                      case 954:
                        resword = &wordlist[782];
                        goto compare;
                      case 955:
                        resword = &wordlist[783];
                        goto compare;
                      case 957:
                        resword = &wordlist[784];
                        goto compare;
                      case 958:
                        resword = &wordlist[785];
                        goto compare;
                      case 963:
                        resword = &wordlist[786];
                        goto compare;
                      case 965:
                        resword = &wordlist[787];
                        goto compare;
                      case 967:
                        resword = &wordlist[788];
                        goto compare;
                      case 968:
                        resword = &wordlist[789];
                        goto compare;
                      case 969:
                        resword = &wordlist[790];
                        goto compare;
                      case 971:
                        resword = &wordlist[791];
                        goto compare;
                      case 972:
                        resword = &wordlist[792];
                        goto compare;
                      case 973:
                        resword = &wordlist[793];
                        goto compare;
                      case 974:
                        resword = &wordlist[794];
                        goto compare;
                      case 975:
                        resword = &wordlist[795];
                        goto compare;
                      case 983:
                        resword = &wordlist[796];
                        goto compare;
                      case 991:
                        resword = &wordlist[797];
                        goto compare;
                      case 993:
                        resword = &wordlist[798];
                        goto compare;
                      case 995:
                        resword = &wordlist[799];
                        goto compare;
                      case 998:
                        resword = &wordlist[800];
                        goto compare;
                      case 999:
                        resword = &wordlist[801];
                        goto compare;
                      case 1001:
                        resword = &wordlist[802];
                        goto compare;
                      case 1003:
                        resword = &wordlist[803];
                        goto compare;
                      case 1006:
                        resword = &wordlist[804];
                        goto compare;
                      case 1007:
                        resword = &wordlist[805];
                        goto compare;
                    }
                }
            }
          else
            {
              if (key < 3739)
                {
                  switch (key - 2506)
                    {
                      case 0:
                        resword = &wordlist[806];
                        goto compare;
                      case 2:
                        resword = &wordlist[807];
                        goto compare;
                      case 5:
                        resword = &wordlist[808];
                        goto compare;
                      case 6:
                        resword = &wordlist[809];
                        goto compare;
                      case 11:
                        resword = &wordlist[810];
                        goto compare;
                      case 12:
                        resword = &wordlist[811];
                        goto compare;
                      case 16:
                        resword = &wordlist[812];
                        goto compare;
                      case 17:
                        resword = &wordlist[813];
                        goto compare;
                      case 19:
                        resword = &wordlist[814];
                        goto compare;
                      case 23:
                        resword = &wordlist[815];
                        goto compare;
                      case 24:
                        resword = &wordlist[816];
                        goto compare;
                      case 26:
                        resword = &wordlist[817];
                        goto compare;
                      case 27:
                        resword = &wordlist[818];
                        goto compare;
                      case 28:
                        resword = &wordlist[819];
                        goto compare;
                      case 30:
                        resword = &wordlist[820];
                        goto compare;
                      case 31:
                        resword = &wordlist[821];
                        goto compare;
                      case 34:
                        resword = &wordlist[822];
                        goto compare;
                      case 35:
                        resword = &wordlist[823];
                        goto compare;
                      case 39:
                        resword = &wordlist[824];
                        goto compare;
                      case 43:
                        resword = &wordlist[825];
                        goto compare;
                      case 44:
                        resword = &wordlist[826];
                        goto compare;
                      case 49:
                        resword = &wordlist[827];
                        goto compare;
                      case 56:
                        resword = &wordlist[828];
                        goto compare;
                      case 57:
                        resword = &wordlist[829];
                        goto compare;
                      case 67:
                        resword = &wordlist[830];
                        goto compare;
                      case 69:
                        resword = &wordlist[831];
                        goto compare;
                      case 70:
                        resword = &wordlist[832];
                        goto compare;
                      case 72:
                        resword = &wordlist[833];
                        goto compare;
                      case 74:
                        resword = &wordlist[834];
                        goto compare;
                      case 75:
                        resword = &wordlist[835];
                        goto compare;
                      case 76:
                        resword = &wordlist[836];
                        goto compare;
                      case 77:
                        resword = &wordlist[837];
                        goto compare;
                      case 79:
                        resword = &wordlist[838];
                        goto compare;
                      case 81:
                        resword = &wordlist[839];
                        goto compare;
                      case 84:
                        resword = &wordlist[840];
                        goto compare;
                      case 93:
                        resword = &wordlist[841];
                        goto compare;
                      case 95:
                        resword = &wordlist[842];
                        goto compare;
                      case 96:
                        resword = &wordlist[843];
                        goto compare;
                      case 99:
                        resword = &wordlist[844];
                        goto compare;
                      case 100:
                        resword = &wordlist[845];
                        goto compare;
                      case 102:
                        resword = &wordlist[846];
                        goto compare;
                      case 104:
                        resword = &wordlist[847];
                        goto compare;
                      case 108:
                        resword = &wordlist[848];
                        goto compare;
                      case 110:
                        resword = &wordlist[849];
                        goto compare;
                      case 111:
                        resword = &wordlist[850];
                        goto compare;
                      case 113:
                        resword = &wordlist[851];
                        goto compare;
                      case 114:
                        resword = &wordlist[852];
                        goto compare;
                      case 119:
                        resword = &wordlist[853];
                        goto compare;
                      case 120:
                        resword = &wordlist[854];
                        goto compare;
                      case 124:
                        resword = &wordlist[855];
                        goto compare;
                      case 127:
                        resword = &wordlist[856];
                        goto compare;
                      case 128:
                        resword = &wordlist[857];
                        goto compare;
                      case 129:
                        resword = &wordlist[858];
                        goto compare;
                      case 130:
                        resword = &wordlist[859];
                        goto compare;
                      case 131:
                        resword = &wordlist[860];
                        goto compare;
                      case 132:
                        resword = &wordlist[861];
                        goto compare;
                      case 137:
                        resword = &wordlist[862];
                        goto compare;
                      case 138:
                        resword = &wordlist[863];
                        goto compare;
                      case 141:
                        resword = &wordlist[864];
                        goto compare;
                      case 142:
                        resword = &wordlist[865];
                        goto compare;
                      case 144:
                        resword = &wordlist[866];
                        goto compare;
                      case 145:
                        resword = &wordlist[867];
                        goto compare;
                      case 146:
                        resword = &wordlist[868];
                        goto compare;
                      case 148:
                        resword = &wordlist[869];
                        goto compare;
                      case 158:
                        resword = &wordlist[870];
                        goto compare;
                      case 161:
                        resword = &wordlist[871];
                        goto compare;
                      case 163:
                        resword = &wordlist[872];
                        goto compare;
                      case 166:
                        resword = &wordlist[873];
                        goto compare;
                      case 171:
                        resword = &wordlist[874];
                        goto compare;
                      case 174:
                        resword = &wordlist[875];
                        goto compare;
                      case 178:
                        resword = &wordlist[876];
                        goto compare;
                      case 179:
                        resword = &wordlist[877];
                        goto compare;
                      case 182:
                        resword = &wordlist[878];
                        goto compare;
                      case 183:
                        resword = &wordlist[879];
                        goto compare;
                      case 186:
                        resword = &wordlist[880];
                        goto compare;
                      case 187:
                        resword = &wordlist[881];
                        goto compare;
                      case 188:
                        resword = &wordlist[882];
                        goto compare;
                      case 196:
                        resword = &wordlist[883];
                        goto compare;
                      case 197:
                        resword = &wordlist[884];
                        goto compare;
                      case 202:
                        resword = &wordlist[885];
                        goto compare;
                      case 203:
                        resword = &wordlist[886];
                        goto compare;
                      case 204:
                        resword = &wordlist[887];
                        goto compare;
                      case 214:
                        resword = &wordlist[888];
                        goto compare;
                      case 217:
                        resword = &wordlist[889];
                        goto compare;
                      case 219:
                        resword = &wordlist[890];
                        goto compare;
                      case 233:
                        resword = &wordlist[891];
                        goto compare;
                      case 235:
                        resword = &wordlist[892];
                        goto compare;
                      case 238:
                        resword = &wordlist[893];
                        goto compare;
                      case 241:
                        resword = &wordlist[894];
                        goto compare;
                      case 245:
                        resword = &wordlist[895];
                        goto compare;
                      case 247:
                        resword = &wordlist[896];
                        goto compare;
                      case 249:
                        resword = &wordlist[897];
                        goto compare;
                      case 252:
                        resword = &wordlist[898];
                        goto compare;
                      case 255:
                        resword = &wordlist[899];
                        goto compare;
                      case 256:
                        resword = &wordlist[900];
                        goto compare;
                      case 257:
                        resword = &wordlist[901];
                        goto compare;
                      case 259:
                        resword = &wordlist[902];
                        goto compare;
                      case 263:
                        resword = &wordlist[903];
                        goto compare;
                      case 269:
                        resword = &wordlist[904];
                        goto compare;
                      case 279:
                        resword = &wordlist[905];
                        goto compare;
                      case 281:
                        resword = &wordlist[906];
                        goto compare;
                      case 287:
                        resword = &wordlist[907];
                        goto compare;
                      case 292:
                        resword = &wordlist[908];
                        goto compare;
                      case 297:
                        resword = &wordlist[909];
                        goto compare;
                      case 298:
                        resword = &wordlist[910];
                        goto compare;
                      case 300:
                        resword = &wordlist[911];
                        goto compare;
                      case 301:
                        resword = &wordlist[912];
                        goto compare;
                      case 302:
                        resword = &wordlist[913];
                        goto compare;
                      case 305:
                        resword = &wordlist[914];
                        goto compare;
                      case 306:
                        resword = &wordlist[915];
                        goto compare;
                      case 308:
                        resword = &wordlist[916];
                        goto compare;
                      case 314:
                        resword = &wordlist[917];
                        goto compare;
                      case 315:
                        resword = &wordlist[918];
                        goto compare;
                      case 317:
                        resword = &wordlist[919];
                        goto compare;
                      case 321:
                        resword = &wordlist[920];
                        goto compare;
                      case 322:
                        resword = &wordlist[921];
                        goto compare;
                      case 326:
                        resword = &wordlist[922];
                        goto compare;
                      case 327:
                        resword = &wordlist[923];
                        goto compare;
                      case 330:
                        resword = &wordlist[924];
                        goto compare;
                      case 332:
                        resword = &wordlist[925];
                        goto compare;
                      case 335:
                        resword = &wordlist[926];
                        goto compare;
                      case 344:
                        resword = &wordlist[927];
                        goto compare;
                      case 347:
                        resword = &wordlist[928];
                        goto compare;
                      case 357:
                        resword = &wordlist[929];
                        goto compare;
                      case 362:
                        resword = &wordlist[930];
                        goto compare;
                      case 364:
                        resword = &wordlist[931];
                        goto compare;
                      case 369:
                        resword = &wordlist[932];
                        goto compare;
                      case 370:
                        resword = &wordlist[933];
                        goto compare;
                      case 372:
                        resword = &wordlist[934];
                        goto compare;
                      case 374:
                        resword = &wordlist[935];
                        goto compare;
                      case 376:
                        resword = &wordlist[936];
                        goto compare;
                      case 377:
                        resword = &wordlist[937];
                        goto compare;
                      case 379:
                        resword = &wordlist[938];
                        goto compare;
                      case 384:
                        resword = &wordlist[939];
                        goto compare;
                      case 395:
                        resword = &wordlist[940];
                        goto compare;
                      case 398:
                        resword = &wordlist[941];
                        goto compare;
                      case 401:
                        resword = &wordlist[942];
                        goto compare;
                      case 402:
                        resword = &wordlist[943];
                        goto compare;
                      case 406:
                        resword = &wordlist[944];
                        goto compare;
                      case 408:
                        resword = &wordlist[945];
                        goto compare;
                      case 409:
                        resword = &wordlist[946];
                        goto compare;
                      case 413:
                        resword = &wordlist[947];
                        goto compare;
                      case 416:
                        resword = &wordlist[948];
                        goto compare;
                      case 418:
                        resword = &wordlist[949];
                        goto compare;
                      case 429:
                        resword = &wordlist[950];
                        goto compare;
                      case 431:
                        resword = &wordlist[951];
                        goto compare;
                      case 433:
                        resword = &wordlist[952];
                        goto compare;
                      case 434:
                        resword = &wordlist[953];
                        goto compare;
                      case 437:
                        resword = &wordlist[954];
                        goto compare;
                      case 440:
                        resword = &wordlist[955];
                        goto compare;
                      case 444:
                        resword = &wordlist[956];
                        goto compare;
                      case 449:
                        resword = &wordlist[957];
                        goto compare;
                      case 451:
                        resword = &wordlist[958];
                        goto compare;
                      case 454:
                        resword = &wordlist[959];
                        goto compare;
                      case 457:
                        resword = &wordlist[960];
                        goto compare;
                      case 459:
                        resword = &wordlist[961];
                        goto compare;
                      case 462:
                        resword = &wordlist[962];
                        goto compare;
                      case 463:
                        resword = &wordlist[963];
                        goto compare;
                      case 467:
                        resword = &wordlist[964];
                        goto compare;
                      case 471:
                        resword = &wordlist[965];
                        goto compare;
                      case 475:
                        resword = &wordlist[966];
                        goto compare;
                      case 476:
                        resword = &wordlist[967];
                        goto compare;
                      case 478:
                        resword = &wordlist[968];
                        goto compare;
                      case 479:
                        resword = &wordlist[969];
                        goto compare;
                      case 482:
                        resword = &wordlist[970];
                        goto compare;
                      case 483:
                        resword = &wordlist[971];
                        goto compare;
                      case 484:
                        resword = &wordlist[972];
                        goto compare;
                      case 489:
                        resword = &wordlist[973];
                        goto compare;
                      case 492:
                        resword = &wordlist[974];
                        goto compare;
                      case 493:
                        resword = &wordlist[975];
                        goto compare;
                      case 495:
                        resword = &wordlist[976];
                        goto compare;
                      case 504:
                        resword = &wordlist[977];
                        goto compare;
                      case 511:
                        resword = &wordlist[978];
                        goto compare;
                      case 521:
                        resword = &wordlist[979];
                        goto compare;
                      case 522:
                        resword = &wordlist[980];
                        goto compare;
                      case 524:
                        resword = &wordlist[981];
                        goto compare;
                      case 525:
                        resword = &wordlist[982];
                        goto compare;
                      case 531:
                        resword = &wordlist[983];
                        goto compare;
                      case 532:
                        resword = &wordlist[984];
                        goto compare;
                      case 537:
                        resword = &wordlist[985];
                        goto compare;
                      case 538:
                        resword = &wordlist[986];
                        goto compare;
                      case 540:
                        resword = &wordlist[987];
                        goto compare;
                      case 542:
                        resword = &wordlist[988];
                        goto compare;
                      case 544:
                        resword = &wordlist[989];
                        goto compare;
                      case 546:
                        resword = &wordlist[990];
                        goto compare;
                      case 547:
                        resword = &wordlist[991];
                        goto compare;
                      case 549:
                        resword = &wordlist[992];
                        goto compare;
                      case 552:
                        resword = &wordlist[993];
                        goto compare;
                      case 558:
                        resword = &wordlist[994];
                        goto compare;
                      case 560:
                        resword = &wordlist[995];
                        goto compare;
                      case 564:
                        resword = &wordlist[996];
                        goto compare;
                      case 569:
                        resword = &wordlist[997];
                        goto compare;
                      case 570:
                        resword = &wordlist[998];
                        goto compare;
                      case 572:
                        resword = &wordlist[999];
                        goto compare;
                      case 574:
                        resword = &wordlist[1000];
                        goto compare;
                      case 578:
                        resword = &wordlist[1001];
                        goto compare;
                      case 579:
                        resword = &wordlist[1002];
                        goto compare;
                      case 582:
                        resword = &wordlist[1003];
                        goto compare;
                      case 584:
                        resword = &wordlist[1004];
                        goto compare;
                      case 586:
                        resword = &wordlist[1005];
                        goto compare;
                      case 589:
                        resword = &wordlist[1006];
                        goto compare;
                      case 591:
                        resword = &wordlist[1007];
                        goto compare;
                      case 594:
                        resword = &wordlist[1008];
                        goto compare;
                      case 597:
                        resword = &wordlist[1009];
                        goto compare;
                      case 608:
                        resword = &wordlist[1010];
                        goto compare;
                      case 611:
                        resword = &wordlist[1011];
                        goto compare;
                      case 612:
                        resword = &wordlist[1012];
                        goto compare;
                      case 613:
                        resword = &wordlist[1013];
                        goto compare;
                      case 614:
                        resword = &wordlist[1014];
                        goto compare;
                      case 619:
                        resword = &wordlist[1015];
                        goto compare;
                      case 620:
                        resword = &wordlist[1016];
                        goto compare;
                      case 624:
                        resword = &wordlist[1017];
                        goto compare;
                      case 629:
                        resword = &wordlist[1018];
                        goto compare;
                      case 630:
                        resword = &wordlist[1019];
                        goto compare;
                      case 633:
                        resword = &wordlist[1020];
                        goto compare;
                      case 638:
                        resword = &wordlist[1021];
                        goto compare;
                      case 639:
                        resword = &wordlist[1022];
                        goto compare;
                      case 642:
                        resword = &wordlist[1023];
                        goto compare;
                      case 643:
                        resword = &wordlist[1024];
                        goto compare;
                      case 644:
                        resword = &wordlist[1025];
                        goto compare;
                      case 663:
                        resword = &wordlist[1026];
                        goto compare;
                      case 665:
                        resword = &wordlist[1027];
                        goto compare;
                      case 667:
                        resword = &wordlist[1028];
                        goto compare;
                      case 670:
                        resword = &wordlist[1029];
                        goto compare;
                      case 671:
                        resword = &wordlist[1030];
                        goto compare;
                      case 672:
                        resword = &wordlist[1031];
                        goto compare;
                      case 677:
                        resword = &wordlist[1032];
                        goto compare;
                      case 678:
                        resword = &wordlist[1033];
                        goto compare;
                      case 681:
                        resword = &wordlist[1034];
                        goto compare;
                      case 682:
                        resword = &wordlist[1035];
                        goto compare;
                      case 684:
                        resword = &wordlist[1036];
                        goto compare;
                      case 688:
                        resword = &wordlist[1037];
                        goto compare;
                      case 689:
                        resword = &wordlist[1038];
                        goto compare;
                      case 691:
                        resword = &wordlist[1039];
                        goto compare;
                      case 692:
                        resword = &wordlist[1040];
                        goto compare;
                      case 697:
                        resword = &wordlist[1041];
                        goto compare;
                      case 700:
                        resword = &wordlist[1042];
                        goto compare;
                      case 701:
                        resword = &wordlist[1043];
                        goto compare;
                      case 705:
                        resword = &wordlist[1044];
                        goto compare;
                      case 709:
                        resword = &wordlist[1045];
                        goto compare;
                      case 710:
                        resword = &wordlist[1046];
                        goto compare;
                      case 717:
                        resword = &wordlist[1047];
                        goto compare;
                      case 721:
                        resword = &wordlist[1048];
                        goto compare;
                      case 722:
                        resword = &wordlist[1049];
                        goto compare;
                      case 726:
                        resword = &wordlist[1050];
                        goto compare;
                      case 727:
                        resword = &wordlist[1051];
                        goto compare;
                      case 729:
                        resword = &wordlist[1052];
                        goto compare;
                      case 732:
                        resword = &wordlist[1053];
                        goto compare;
                      case 737:
                        resword = &wordlist[1054];
                        goto compare;
                      case 743:
                        resword = &wordlist[1055];
                        goto compare;
                      case 744:
                        resword = &wordlist[1056];
                        goto compare;
                      case 753:
                        resword = &wordlist[1057];
                        goto compare;
                      case 757:
                        resword = &wordlist[1058];
                        goto compare;
                      case 762:
                        resword = &wordlist[1059];
                        goto compare;
                      case 774:
                        resword = &wordlist[1060];
                        goto compare;
                      case 776:
                        resword = &wordlist[1061];
                        goto compare;
                      case 778:
                        resword = &wordlist[1062];
                        goto compare;
                      case 780:
                        resword = &wordlist[1063];
                        goto compare;
                      case 784:
                        resword = &wordlist[1064];
                        goto compare;
                      case 790:
                        resword = &wordlist[1065];
                        goto compare;
                      case 793:
                        resword = &wordlist[1066];
                        goto compare;
                      case 796:
                        resword = &wordlist[1067];
                        goto compare;
                      case 798:
                        resword = &wordlist[1068];
                        goto compare;
                      case 804:
                        resword = &wordlist[1069];
                        goto compare;
                      case 807:
                        resword = &wordlist[1070];
                        goto compare;
                      case 811:
                        resword = &wordlist[1071];
                        goto compare;
                      case 812:
                        resword = &wordlist[1072];
                        goto compare;
                      case 817:
                        resword = &wordlist[1073];
                        goto compare;
                      case 819:
                        resword = &wordlist[1074];
                        goto compare;
                      case 820:
                        resword = &wordlist[1075];
                        goto compare;
                      case 821:
                        resword = &wordlist[1076];
                        goto compare;
                      case 828:
                        resword = &wordlist[1077];
                        goto compare;
                      case 833:
                        resword = &wordlist[1078];
                        goto compare;
                      case 834:
                        resword = &wordlist[1079];
                        goto compare;
                      case 838:
                        resword = &wordlist[1080];
                        goto compare;
                      case 839:
                        resword = &wordlist[1081];
                        goto compare;
                      case 841:
                        resword = &wordlist[1082];
                        goto compare;
                      case 844:
                        resword = &wordlist[1083];
                        goto compare;
                      case 847:
                        resword = &wordlist[1084];
                        goto compare;
                      case 848:
                        resword = &wordlist[1085];
                        goto compare;
                      case 849:
                        resword = &wordlist[1086];
                        goto compare;
                      case 853:
                        resword = &wordlist[1087];
                        goto compare;
                      case 854:
                        resword = &wordlist[1088];
                        goto compare;
                      case 856:
                        resword = &wordlist[1089];
                        goto compare;
                      case 857:
                        resword = &wordlist[1090];
                        goto compare;
                      case 862:
                        resword = &wordlist[1091];
                        goto compare;
                      case 865:
                        resword = &wordlist[1092];
                        goto compare;
                      case 867:
                        resword = &wordlist[1093];
                        goto compare;
                      case 872:
                        resword = &wordlist[1094];
                        goto compare;
                      case 873:
                        resword = &wordlist[1095];
                        goto compare;
                      case 874:
                        resword = &wordlist[1096];
                        goto compare;
                      case 876:
                        resword = &wordlist[1097];
                        goto compare;
                      case 882:
                        resword = &wordlist[1098];
                        goto compare;
                      case 883:
                        resword = &wordlist[1099];
                        goto compare;
                      case 884:
                        resword = &wordlist[1100];
                        goto compare;
                      case 885:
                        resword = &wordlist[1101];
                        goto compare;
                      case 890:
                        resword = &wordlist[1102];
                        goto compare;
                      case 895:
                        resword = &wordlist[1103];
                        goto compare;
                      case 898:
                        resword = &wordlist[1104];
                        goto compare;
                      case 903:
                        resword = &wordlist[1105];
                        goto compare;
                      case 904:
                        resword = &wordlist[1106];
                        goto compare;
                      case 905:
                        resword = &wordlist[1107];
                        goto compare;
                      case 907:
                        resword = &wordlist[1108];
                        goto compare;
                      case 908:
                        resword = &wordlist[1109];
                        goto compare;
                      case 909:
                        resword = &wordlist[1110];
                        goto compare;
                      case 912:
                        resword = &wordlist[1111];
                        goto compare;
                      case 915:
                        resword = &wordlist[1112];
                        goto compare;
                      case 917:
                        resword = &wordlist[1113];
                        goto compare;
                      case 918:
                        resword = &wordlist[1114];
                        goto compare;
                      case 920:
                        resword = &wordlist[1115];
                        goto compare;
                      case 923:
                        resword = &wordlist[1116];
                        goto compare;
                      case 925:
                        resword = &wordlist[1117];
                        goto compare;
                      case 927:
                        resword = &wordlist[1118];
                        goto compare;
                      case 931:
                        resword = &wordlist[1119];
                        goto compare;
                      case 933:
                        resword = &wordlist[1120];
                        goto compare;
                      case 934:
                        resword = &wordlist[1121];
                        goto compare;
                      case 938:
                        resword = &wordlist[1122];
                        goto compare;
                      case 943:
                        resword = &wordlist[1123];
                        goto compare;
                      case 945:
                        resword = &wordlist[1124];
                        goto compare;
                      case 946:
                        resword = &wordlist[1125];
                        goto compare;
                      case 947:
                        resword = &wordlist[1126];
                        goto compare;
                      case 948:
                        resword = &wordlist[1127];
                        goto compare;
                      case 952:
                        resword = &wordlist[1128];
                        goto compare;
                      case 953:
                        resword = &wordlist[1129];
                        goto compare;
                      case 958:
                        resword = &wordlist[1130];
                        goto compare;
                      case 959:
                        resword = &wordlist[1131];
                        goto compare;
                      case 966:
                        resword = &wordlist[1132];
                        goto compare;
                      case 968:
                        resword = &wordlist[1133];
                        goto compare;
                      case 970:
                        resword = &wordlist[1134];
                        goto compare;
                      case 973:
                        resword = &wordlist[1135];
                        goto compare;
                      case 983:
                        resword = &wordlist[1136];
                        goto compare;
                      case 990:
                        resword = &wordlist[1137];
                        goto compare;
                      case 992:
                        resword = &wordlist[1138];
                        goto compare;
                      case 994:
                        resword = &wordlist[1139];
                        goto compare;
                      case 995:
                        resword = &wordlist[1140];
                        goto compare;
                      case 997:
                        resword = &wordlist[1141];
                        goto compare;
                      case 1008:
                        resword = &wordlist[1142];
                        goto compare;
                      case 1021:
                        resword = &wordlist[1143];
                        goto compare;
                      case 1022:
                        resword = &wordlist[1144];
                        goto compare;
                      case 1030:
                        resword = &wordlist[1145];
                        goto compare;
                      case 1037:
                        resword = &wordlist[1146];
                        goto compare;
                      case 1039:
                        resword = &wordlist[1147];
                        goto compare;
                      case 1041:
                        resword = &wordlist[1148];
                        goto compare;
                      case 1044:
                        resword = &wordlist[1149];
                        goto compare;
                      case 1048:
                        resword = &wordlist[1150];
                        goto compare;
                      case 1052:
                        resword = &wordlist[1151];
                        goto compare;
                      case 1054:
                        resword = &wordlist[1152];
                        goto compare;
                      case 1055:
                        resword = &wordlist[1153];
                        goto compare;
                      case 1062:
                        resword = &wordlist[1154];
                        goto compare;
                      case 1063:
                        resword = &wordlist[1155];
                        goto compare;
                      case 1064:
                        resword = &wordlist[1156];
                        goto compare;
                      case 1066:
                        resword = &wordlist[1157];
                        goto compare;
                      case 1070:
                        resword = &wordlist[1158];
                        goto compare;
                      case 1071:
                        resword = &wordlist[1159];
                        goto compare;
                      case 1076:
                        resword = &wordlist[1160];
                        goto compare;
                      case 1079:
                        resword = &wordlist[1161];
                        goto compare;
                      case 1080:
                        resword = &wordlist[1162];
                        goto compare;
                      case 1083:
                        resword = &wordlist[1163];
                        goto compare;
                      case 1085:
                        resword = &wordlist[1164];
                        goto compare;
                      case 1087:
                        resword = &wordlist[1165];
                        goto compare;
                      case 1089:
                        resword = &wordlist[1166];
                        goto compare;
                      case 1092:
                        resword = &wordlist[1167];
                        goto compare;
                      case 1094:
                        resword = &wordlist[1168];
                        goto compare;
                      case 1096:
                        resword = &wordlist[1169];
                        goto compare;
                      case 1097:
                        resword = &wordlist[1170];
                        goto compare;
                      case 1104:
                        resword = &wordlist[1171];
                        goto compare;
                      case 1110:
                        resword = &wordlist[1172];
                        goto compare;
                      case 1111:
                        resword = &wordlist[1173];
                        goto compare;
                      case 1118:
                        resword = &wordlist[1174];
                        goto compare;
                      case 1125:
                        resword = &wordlist[1175];
                        goto compare;
                      case 1130:
                        resword = &wordlist[1176];
                        goto compare;
                      case 1132:
                        resword = &wordlist[1177];
                        goto compare;
                      case 1137:
                        resword = &wordlist[1178];
                        goto compare;
                      case 1138:
                        resword = &wordlist[1179];
                        goto compare;
                      case 1142:
                        resword = &wordlist[1180];
                        goto compare;
                      case 1143:
                        resword = &wordlist[1181];
                        goto compare;
                      case 1146:
                        resword = &wordlist[1182];
                        goto compare;
                      case 1147:
                        resword = &wordlist[1183];
                        goto compare;
                      case 1148:
                        resword = &wordlist[1184];
                        goto compare;
                      case 1149:
                        resword = &wordlist[1185];
                        goto compare;
                      case 1153:
                        resword = &wordlist[1186];
                        goto compare;
                      case 1157:
                        resword = &wordlist[1187];
                        goto compare;
                      case 1159:
                        resword = &wordlist[1188];
                        goto compare;
                      case 1166:
                        resword = &wordlist[1189];
                        goto compare;
                      case 1167:
                        resword = &wordlist[1190];
                        goto compare;
                      case 1168:
                        resword = &wordlist[1191];
                        goto compare;
                      case 1176:
                        resword = &wordlist[1192];
                        goto compare;
                      case 1177:
                        resword = &wordlist[1193];
                        goto compare;
                      case 1179:
                        resword = &wordlist[1194];
                        goto compare;
                      case 1181:
                        resword = &wordlist[1195];
                        goto compare;
                      case 1191:
                        resword = &wordlist[1196];
                        goto compare;
                      case 1192:
                        resword = &wordlist[1197];
                        goto compare;
                      case 1194:
                        resword = &wordlist[1198];
                        goto compare;
                      case 1200:
                        resword = &wordlist[1199];
                        goto compare;
                      case 1201:
                        resword = &wordlist[1200];
                        goto compare;
                      case 1202:
                        resword = &wordlist[1201];
                        goto compare;
                      case 1207:
                        resword = &wordlist[1202];
                        goto compare;
                      case 1217:
                        resword = &wordlist[1203];
                        goto compare;
                      case 1218:
                        resword = &wordlist[1204];
                        goto compare;
                      case 1219:
                        resword = &wordlist[1205];
                        goto compare;
                      case 1222:
                        resword = &wordlist[1206];
                        goto compare;
                      case 1226:
                        resword = &wordlist[1207];
                        goto compare;
                      case 1228:
                        resword = &wordlist[1208];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 3739)
                    {
                      case 0:
                        resword = &wordlist[1209];
                        goto compare;
                      case 1:
                        resword = &wordlist[1210];
                        goto compare;
                      case 9:
                        resword = &wordlist[1211];
                        goto compare;
                      case 11:
                        resword = &wordlist[1212];
                        goto compare;
                      case 15:
                        resword = &wordlist[1213];
                        goto compare;
                      case 17:
                        resword = &wordlist[1214];
                        goto compare;
                      case 19:
                        resword = &wordlist[1215];
                        goto compare;
                      case 24:
                        resword = &wordlist[1216];
                        goto compare;
                      case 25:
                        resword = &wordlist[1217];
                        goto compare;
                      case 33:
                        resword = &wordlist[1218];
                        goto compare;
                      case 34:
                        resword = &wordlist[1219];
                        goto compare;
                      case 40:
                        resword = &wordlist[1220];
                        goto compare;
                      case 44:
                        resword = &wordlist[1221];
                        goto compare;
                      case 49:
                        resword = &wordlist[1222];
                        goto compare;
                      case 64:
                        resword = &wordlist[1223];
                        goto compare;
                      case 73:
                        resword = &wordlist[1224];
                        goto compare;
                      case 74:
                        resword = &wordlist[1225];
                        goto compare;
                      case 81:
                        resword = &wordlist[1226];
                        goto compare;
                      case 82:
                        resword = &wordlist[1227];
                        goto compare;
                      case 92:
                        resword = &wordlist[1228];
                        goto compare;
                      case 94:
                        resword = &wordlist[1229];
                        goto compare;
                      case 95:
                        resword = &wordlist[1230];
                        goto compare;
                      case 96:
                        resword = &wordlist[1231];
                        goto compare;
                      case 106:
                        resword = &wordlist[1232];
                        goto compare;
                      case 107:
                        resword = &wordlist[1233];
                        goto compare;
                      case 108:
                        resword = &wordlist[1234];
                        goto compare;
                      case 113:
                        resword = &wordlist[1235];
                        goto compare;
                      case 118:
                        resword = &wordlist[1236];
                        goto compare;
                      case 119:
                        resword = &wordlist[1237];
                        goto compare;
                      case 122:
                        resword = &wordlist[1238];
                        goto compare;
                      case 126:
                        resword = &wordlist[1239];
                        goto compare;
                      case 132:
                        resword = &wordlist[1240];
                        goto compare;
                      case 142:
                        resword = &wordlist[1241];
                        goto compare;
                      case 151:
                        resword = &wordlist[1242];
                        goto compare;
                      case 164:
                        resword = &wordlist[1243];
                        goto compare;
                      case 169:
                        resword = &wordlist[1244];
                        goto compare;
                      case 174:
                        resword = &wordlist[1245];
                        goto compare;
                      case 181:
                        resword = &wordlist[1246];
                        goto compare;
                      case 184:
                        resword = &wordlist[1247];
                        goto compare;
                      case 185:
                        resword = &wordlist[1248];
                        goto compare;
                      case 186:
                        resword = &wordlist[1249];
                        goto compare;
                      case 187:
                        resword = &wordlist[1250];
                        goto compare;
                      case 189:
                        resword = &wordlist[1251];
                        goto compare;
                      case 191:
                        resword = &wordlist[1252];
                        goto compare;
                      case 197:
                        resword = &wordlist[1253];
                        goto compare;
                      case 199:
                        resword = &wordlist[1254];
                        goto compare;
                      case 214:
                        resword = &wordlist[1255];
                        goto compare;
                      case 219:
                        resword = &wordlist[1256];
                        goto compare;
                      case 224:
                        resword = &wordlist[1257];
                        goto compare;
                      case 231:
                        resword = &wordlist[1258];
                        goto compare;
                      case 234:
                        resword = &wordlist[1259];
                        goto compare;
                      case 236:
                        resword = &wordlist[1260];
                        goto compare;
                      case 238:
                        resword = &wordlist[1261];
                        goto compare;
                      case 247:
                        resword = &wordlist[1262];
                        goto compare;
                      case 249:
                        resword = &wordlist[1263];
                        goto compare;
                      case 254:
                        resword = &wordlist[1264];
                        goto compare;
                      case 255:
                        resword = &wordlist[1265];
                        goto compare;
                      case 258:
                        resword = &wordlist[1266];
                        goto compare;
                      case 261:
                        resword = &wordlist[1267];
                        goto compare;
                      case 269:
                        resword = &wordlist[1268];
                        goto compare;
                      case 271:
                        resword = &wordlist[1269];
                        goto compare;
                      case 281:
                        resword = &wordlist[1270];
                        goto compare;
                      case 292:
                        resword = &wordlist[1271];
                        goto compare;
                      case 297:
                        resword = &wordlist[1272];
                        goto compare;
                      case 299:
                        resword = &wordlist[1273];
                        goto compare;
                      case 303:
                        resword = &wordlist[1274];
                        goto compare;
                      case 305:
                        resword = &wordlist[1275];
                        goto compare;
                      case 308:
                        resword = &wordlist[1276];
                        goto compare;
                      case 321:
                        resword = &wordlist[1277];
                        goto compare;
                      case 323:
                        resword = &wordlist[1278];
                        goto compare;
                      case 326:
                        resword = &wordlist[1279];
                        goto compare;
                      case 328:
                        resword = &wordlist[1280];
                        goto compare;
                      case 330:
                        resword = &wordlist[1281];
                        goto compare;
                      case 339:
                        resword = &wordlist[1282];
                        goto compare;
                      case 343:
                        resword = &wordlist[1283];
                        goto compare;
                      case 346:
                        resword = &wordlist[1284];
                        goto compare;
                      case 348:
                        resword = &wordlist[1285];
                        goto compare;
                      case 351:
                        resword = &wordlist[1286];
                        goto compare;
                      case 353:
                        resword = &wordlist[1287];
                        goto compare;
                      case 354:
                        resword = &wordlist[1288];
                        goto compare;
                      case 356:
                        resword = &wordlist[1289];
                        goto compare;
                      case 359:
                        resword = &wordlist[1290];
                        goto compare;
                      case 366:
                        resword = &wordlist[1291];
                        goto compare;
                      case 377:
                        resword = &wordlist[1292];
                        goto compare;
                      case 384:
                        resword = &wordlist[1293];
                        goto compare;
                      case 395:
                        resword = &wordlist[1294];
                        goto compare;
                      case 413:
                        resword = &wordlist[1295];
                        goto compare;
                      case 421:
                        resword = &wordlist[1296];
                        goto compare;
                      case 423:
                        resword = &wordlist[1297];
                        goto compare;
                      case 424:
                        resword = &wordlist[1298];
                        goto compare;
                      case 425:
                        resword = &wordlist[1299];
                        goto compare;
                      case 426:
                        resword = &wordlist[1300];
                        goto compare;
                      case 452:
                        resword = &wordlist[1301];
                        goto compare;
                      case 454:
                        resword = &wordlist[1302];
                        goto compare;
                      case 457:
                        resword = &wordlist[1303];
                        goto compare;
                      case 465:
                        resword = &wordlist[1304];
                        goto compare;
                      case 466:
                        resword = &wordlist[1305];
                        goto compare;
                      case 472:
                        resword = &wordlist[1306];
                        goto compare;
                      case 477:
                        resword = &wordlist[1307];
                        goto compare;
                      case 483:
                        resword = &wordlist[1308];
                        goto compare;
                      case 490:
                        resword = &wordlist[1309];
                        goto compare;
                      case 508:
                        resword = &wordlist[1310];
                        goto compare;
                      case 509:
                        resword = &wordlist[1311];
                        goto compare;
                      case 517:
                        resword = &wordlist[1312];
                        goto compare;
                      case 518:
                        resword = &wordlist[1313];
                        goto compare;
                      case 519:
                        resword = &wordlist[1314];
                        goto compare;
                      case 520:
                        resword = &wordlist[1315];
                        goto compare;
                      case 528:
                        resword = &wordlist[1316];
                        goto compare;
                      case 533:
                        resword = &wordlist[1317];
                        goto compare;
                      case 538:
                        resword = &wordlist[1318];
                        goto compare;
                      case 549:
                        resword = &wordlist[1319];
                        goto compare;
                      case 558:
                        resword = &wordlist[1320];
                        goto compare;
                      case 559:
                        resword = &wordlist[1321];
                        goto compare;
                      case 567:
                        resword = &wordlist[1322];
                        goto compare;
                      case 568:
                        resword = &wordlist[1323];
                        goto compare;
                      case 569:
                        resword = &wordlist[1324];
                        goto compare;
                      case 581:
                        resword = &wordlist[1325];
                        goto compare;
                      case 587:
                        resword = &wordlist[1326];
                        goto compare;
                      case 589:
                        resword = &wordlist[1327];
                        goto compare;
                      case 592:
                        resword = &wordlist[1328];
                        goto compare;
                      case 594:
                        resword = &wordlist[1329];
                        goto compare;
                      case 608:
                        resword = &wordlist[1330];
                        goto compare;
                      case 614:
                        resword = &wordlist[1331];
                        goto compare;
                      case 615:
                        resword = &wordlist[1332];
                        goto compare;
                      case 621:
                        resword = &wordlist[1333];
                        goto compare;
                      case 626:
                        resword = &wordlist[1334];
                        goto compare;
                      case 631:
                        resword = &wordlist[1335];
                        goto compare;
                      case 634:
                        resword = &wordlist[1336];
                        goto compare;
                      case 638:
                        resword = &wordlist[1337];
                        goto compare;
                      case 639:
                        resword = &wordlist[1338];
                        goto compare;
                      case 644:
                        resword = &wordlist[1339];
                        goto compare;
                      case 645:
                        resword = &wordlist[1340];
                        goto compare;
                      case 649:
                        resword = &wordlist[1341];
                        goto compare;
                      case 654:
                        resword = &wordlist[1342];
                        goto compare;
                      case 658:
                        resword = &wordlist[1343];
                        goto compare;
                      case 659:
                        resword = &wordlist[1344];
                        goto compare;
                      case 666:
                        resword = &wordlist[1345];
                        goto compare;
                      case 670:
                        resword = &wordlist[1346];
                        goto compare;
                      case 673:
                        resword = &wordlist[1347];
                        goto compare;
                      case 674:
                        resword = &wordlist[1348];
                        goto compare;
                      case 679:
                        resword = &wordlist[1349];
                        goto compare;
                      case 683:
                        resword = &wordlist[1350];
                        goto compare;
                      case 686:
                        resword = &wordlist[1351];
                        goto compare;
                      case 694:
                        resword = &wordlist[1352];
                        goto compare;
                      case 699:
                        resword = &wordlist[1353];
                        goto compare;
                      case 700:
                        resword = &wordlist[1354];
                        goto compare;
                      case 701:
                        resword = &wordlist[1355];
                        goto compare;
                      case 702:
                        resword = &wordlist[1356];
                        goto compare;
                      case 703:
                        resword = &wordlist[1357];
                        goto compare;
                      case 706:
                        resword = &wordlist[1358];
                        goto compare;
                      case 710:
                        resword = &wordlist[1359];
                        goto compare;
                      case 718:
                        resword = &wordlist[1360];
                        goto compare;
                      case 729:
                        resword = &wordlist[1361];
                        goto compare;
                      case 736:
                        resword = &wordlist[1362];
                        goto compare;
                      case 743:
                        resword = &wordlist[1363];
                        goto compare;
                      case 759:
                        resword = &wordlist[1364];
                        goto compare;
                      case 767:
                        resword = &wordlist[1365];
                        goto compare;
                      case 771:
                        resword = &wordlist[1366];
                        goto compare;
                      case 781:
                        resword = &wordlist[1367];
                        goto compare;
                      case 786:
                        resword = &wordlist[1368];
                        goto compare;
                      case 795:
                        resword = &wordlist[1369];
                        goto compare;
                      case 799:
                        resword = &wordlist[1370];
                        goto compare;
                      case 806:
                        resword = &wordlist[1371];
                        goto compare;
                      case 807:
                        resword = &wordlist[1372];
                        goto compare;
                      case 812:
                        resword = &wordlist[1373];
                        goto compare;
                      case 831:
                        resword = &wordlist[1374];
                        goto compare;
                      case 841:
                        resword = &wordlist[1375];
                        goto compare;
                      case 846:
                        resword = &wordlist[1376];
                        goto compare;
                      case 851:
                        resword = &wordlist[1377];
                        goto compare;
                      case 871:
                        resword = &wordlist[1378];
                        goto compare;
                      case 879:
                        resword = &wordlist[1379];
                        goto compare;
                      case 883:
                        resword = &wordlist[1380];
                        goto compare;
                      case 884:
                        resword = &wordlist[1381];
                        goto compare;
                      case 885:
                        resword = &wordlist[1382];
                        goto compare;
                      case 901:
                        resword = &wordlist[1383];
                        goto compare;
                      case 902:
                        resword = &wordlist[1384];
                        goto compare;
                      case 908:
                        resword = &wordlist[1385];
                        goto compare;
                      case 914:
                        resword = &wordlist[1386];
                        goto compare;
                      case 921:
                        resword = &wordlist[1387];
                        goto compare;
                      case 924:
                        resword = &wordlist[1388];
                        goto compare;
                      case 935:
                        resword = &wordlist[1389];
                        goto compare;
                      case 942:
                        resword = &wordlist[1390];
                        goto compare;
                      case 943:
                        resword = &wordlist[1391];
                        goto compare;
                      case 945:
                        resword = &wordlist[1392];
                        goto compare;
                      case 948:
                        resword = &wordlist[1393];
                        goto compare;
                      case 949:
                        resword = &wordlist[1394];
                        goto compare;
                      case 955:
                        resword = &wordlist[1395];
                        goto compare;
                      case 968:
                        resword = &wordlist[1396];
                        goto compare;
                      case 975:
                        resword = &wordlist[1397];
                        goto compare;
                      case 989:
                        resword = &wordlist[1398];
                        goto compare;
                      case 992:
                        resword = &wordlist[1399];
                        goto compare;
                      case 994:
                        resword = &wordlist[1400];
                        goto compare;
                      case 996:
                        resword = &wordlist[1401];
                        goto compare;
                      case 1003:
                        resword = &wordlist[1402];
                        goto compare;
                      case 1004:
                        resword = &wordlist[1403];
                        goto compare;
                      case 1014:
                        resword = &wordlist[1404];
                        goto compare;
                      case 1017:
                        resword = &wordlist[1405];
                        goto compare;
                      case 1027:
                        resword = &wordlist[1406];
                        goto compare;
                      case 1030:
                        resword = &wordlist[1407];
                        goto compare;
                      case 1036:
                        resword = &wordlist[1408];
                        goto compare;
                      case 1039:
                        resword = &wordlist[1409];
                        goto compare;
                      case 1041:
                        resword = &wordlist[1410];
                        goto compare;
                      case 1043:
                        resword = &wordlist[1411];
                        goto compare;
                      case 1044:
                        resword = &wordlist[1412];
                        goto compare;
                      case 1053:
                        resword = &wordlist[1413];
                        goto compare;
                      case 1059:
                        resword = &wordlist[1414];
                        goto compare;
                      case 1072:
                        resword = &wordlist[1415];
                        goto compare;
                      case 1074:
                        resword = &wordlist[1416];
                        goto compare;
                      case 1075:
                        resword = &wordlist[1417];
                        goto compare;
                      case 1081:
                        resword = &wordlist[1418];
                        goto compare;
                      case 1082:
                        resword = &wordlist[1419];
                        goto compare;
                      case 1105:
                        resword = &wordlist[1420];
                        goto compare;
                      case 1111:
                        resword = &wordlist[1421];
                        goto compare;
                      case 1112:
                        resword = &wordlist[1422];
                        goto compare;
                      case 1113:
                        resword = &wordlist[1423];
                        goto compare;
                      case 1119:
                        resword = &wordlist[1424];
                        goto compare;
                      case 1121:
                        resword = &wordlist[1425];
                        goto compare;
                      case 1122:
                        resword = &wordlist[1426];
                        goto compare;
                      case 1126:
                        resword = &wordlist[1427];
                        goto compare;
                      case 1133:
                        resword = &wordlist[1428];
                        goto compare;
                      case 1150:
                        resword = &wordlist[1429];
                        goto compare;
                      case 1151:
                        resword = &wordlist[1430];
                        goto compare;
                      case 1159:
                        resword = &wordlist[1431];
                        goto compare;
                      case 1160:
                        resword = &wordlist[1432];
                        goto compare;
                      case 1166:
                        resword = &wordlist[1433];
                        goto compare;
                      case 1175:
                        resword = &wordlist[1434];
                        goto compare;
                      case 1181:
                        resword = &wordlist[1435];
                        goto compare;
                      case 1184:
                        resword = &wordlist[1436];
                        goto compare;
                      case 1189:
                        resword = &wordlist[1437];
                        goto compare;
                      case 1192:
                        resword = &wordlist[1438];
                        goto compare;
                      case 1197:
                        resword = &wordlist[1439];
                        goto compare;
                      case 1199:
                        resword = &wordlist[1440];
                        goto compare;
                      case 1203:
                        resword = &wordlist[1441];
                        goto compare;
                      case 1204:
                        resword = &wordlist[1442];
                        goto compare;
                      case 1221:
                        resword = &wordlist[1443];
                        goto compare;
                      case 1222:
                        resword = &wordlist[1444];
                        goto compare;
                      case 1224:
                        resword = &wordlist[1445];
                        goto compare;
                      case 1232:
                        resword = &wordlist[1446];
                        goto compare;
                      case 1233:
                        resword = &wordlist[1447];
                        goto compare;
                      case 1236:
                        resword = &wordlist[1448];
                        goto compare;
                      case 1257:
                        resword = &wordlist[1449];
                        goto compare;
                      case 1274:
                        resword = &wordlist[1450];
                        goto compare;
                      case 1277:
                        resword = &wordlist[1451];
                        goto compare;
                      case 1294:
                        resword = &wordlist[1452];
                        goto compare;
                      case 1295:
                        resword = &wordlist[1453];
                        goto compare;
                      case 1300:
                        resword = &wordlist[1454];
                        goto compare;
                      case 1301:
                        resword = &wordlist[1455];
                        goto compare;
                      case 1309:
                        resword = &wordlist[1456];
                        goto compare;
                      case 1326:
                        resword = &wordlist[1457];
                        goto compare;
                      case 1347:
                        resword = &wordlist[1458];
                        goto compare;
                      case 1363:
                        resword = &wordlist[1459];
                        goto compare;
                      case 1378:
                        resword = &wordlist[1460];
                        goto compare;
                      case 1379:
                        resword = &wordlist[1461];
                        goto compare;
                      case 1381:
                        resword = &wordlist[1462];
                        goto compare;
                      case 1384:
                        resword = &wordlist[1463];
                        goto compare;
                      case 1392:
                        resword = &wordlist[1464];
                        goto compare;
                      case 1396:
                        resword = &wordlist[1465];
                        goto compare;
                      case 1403:
                        resword = &wordlist[1466];
                        goto compare;
                      case 1404:
                        resword = &wordlist[1467];
                        goto compare;
                      case 1405:
                        resword = &wordlist[1468];
                        goto compare;
                      case 1416:
                        resword = &wordlist[1469];
                        goto compare;
                      case 1419:
                        resword = &wordlist[1470];
                        goto compare;
                      case 1420:
                        resword = &wordlist[1471];
                        goto compare;
                      case 1424:
                        resword = &wordlist[1472];
                        goto compare;
                      case 1442:
                        resword = &wordlist[1473];
                        goto compare;
                      case 1444:
                        resword = &wordlist[1474];
                        goto compare;
                      case 1464:
                        resword = &wordlist[1475];
                        goto compare;
                      case 1473:
                        resword = &wordlist[1476];
                        goto compare;
                      case 1474:
                        resword = &wordlist[1477];
                        goto compare;
                      case 1507:
                        resword = &wordlist[1478];
                        goto compare;
                      case 1516:
                        resword = &wordlist[1479];
                        goto compare;
                      case 1531:
                        resword = &wordlist[1480];
                        goto compare;
                      case 1545:
                        resword = &wordlist[1481];
                        goto compare;
                      case 1553:
                        resword = &wordlist[1482];
                        goto compare;
                      case 1559:
                        resword = &wordlist[1483];
                        goto compare;
                      case 1563:
                        resword = &wordlist[1484];
                        goto compare;
                      case 1565:
                        resword = &wordlist[1485];
                        goto compare;
                      case 1591:
                        resword = &wordlist[1486];
                        goto compare;
                      case 1594:
                        resword = &wordlist[1487];
                        goto compare;
                      case 1601:
                        resword = &wordlist[1488];
                        goto compare;
                      case 1609:
                        resword = &wordlist[1489];
                        goto compare;
                      case 1625:
                        resword = &wordlist[1490];
                        goto compare;
                      case 1640:
                        resword = &wordlist[1491];
                        goto compare;
                      case 1641:
                        resword = &wordlist[1492];
                        goto compare;
                      case 1652:
                        resword = &wordlist[1493];
                        goto compare;
                      case 1653:
                        resword = &wordlist[1494];
                        goto compare;
                      case 1665:
                        resword = &wordlist[1495];
                        goto compare;
                      case 1669:
                        resword = &wordlist[1496];
                        goto compare;
                      case 1682:
                        resword = &wordlist[1497];
                        goto compare;
                      case 1688:
                        resword = &wordlist[1498];
                        goto compare;
                      case 1704:
                        resword = &wordlist[1499];
                        goto compare;
                      case 1714:
                        resword = &wordlist[1500];
                        goto compare;
                      case 1717:
                        resword = &wordlist[1501];
                        goto compare;
                      case 1724:
                        resword = &wordlist[1502];
                        goto compare;
                      case 1729:
                        resword = &wordlist[1503];
                        goto compare;
                      case 1734:
                        resword = &wordlist[1504];
                        goto compare;
                      case 1738:
                        resword = &wordlist[1505];
                        goto compare;
                      case 1757:
                        resword = &wordlist[1506];
                        goto compare;
                      case 1775:
                        resword = &wordlist[1507];
                        goto compare;
                      case 1779:
                        resword = &wordlist[1508];
                        goto compare;
                      case 1780:
                        resword = &wordlist[1509];
                        goto compare;
                      case 1797:
                        resword = &wordlist[1510];
                        goto compare;
                      case 1808:
                        resword = &wordlist[1511];
                        goto compare;
                      case 1812:
                        resword = &wordlist[1512];
                        goto compare;
                      case 1813:
                        resword = &wordlist[1513];
                        goto compare;
                      case 1819:
                        resword = &wordlist[1514];
                        goto compare;
                      case 1826:
                        resword = &wordlist[1515];
                        goto compare;
                      case 1828:
                        resword = &wordlist[1516];
                        goto compare;
                      case 1836:
                        resword = &wordlist[1517];
                        goto compare;
                      case 1843:
                        resword = &wordlist[1518];
                        goto compare;
                      case 1846:
                        resword = &wordlist[1519];
                        goto compare;
                      case 1855:
                        resword = &wordlist[1520];
                        goto compare;
                      case 1884:
                        resword = &wordlist[1521];
                        goto compare;
                      case 1890:
                        resword = &wordlist[1522];
                        goto compare;
                      case 1894:
                        resword = &wordlist[1523];
                        goto compare;
                      case 1906:
                        resword = &wordlist[1524];
                        goto compare;
                      case 1907:
                        resword = &wordlist[1525];
                        goto compare;
                      case 1909:
                        resword = &wordlist[1526];
                        goto compare;
                      case 1915:
                        resword = &wordlist[1527];
                        goto compare;
                      case 1924:
                        resword = &wordlist[1528];
                        goto compare;
                      case 1929:
                        resword = &wordlist[1529];
                        goto compare;
                      case 1942:
                        resword = &wordlist[1530];
                        goto compare;
                      case 1951:
                        resword = &wordlist[1531];
                        goto compare;
                      case 1956:
                        resword = &wordlist[1532];
                        goto compare;
                      case 1959:
                        resword = &wordlist[1533];
                        goto compare;
                      case 1962:
                        resword = &wordlist[1534];
                        goto compare;
                      case 1966:
                        resword = &wordlist[1535];
                        goto compare;
                      case 1985:
                        resword = &wordlist[1536];
                        goto compare;
                      case 1987:
                        resword = &wordlist[1537];
                        goto compare;
                      case 1995:
                        resword = &wordlist[1538];
                        goto compare;
                      case 1996:
                        resword = &wordlist[1539];
                        goto compare;
                      case 2052:
                        resword = &wordlist[1540];
                        goto compare;
                      case 2065:
                        resword = &wordlist[1541];
                        goto compare;
                      case 2071:
                        resword = &wordlist[1542];
                        goto compare;
                      case 2094:
                        resword = &wordlist[1543];
                        goto compare;
                      case 2099:
                        resword = &wordlist[1544];
                        goto compare;
                      case 2108:
                        resword = &wordlist[1545];
                        goto compare;
                      case 2111:
                        resword = &wordlist[1546];
                        goto compare;
                      case 2145:
                        resword = &wordlist[1547];
                        goto compare;
                      case 2148:
                        resword = &wordlist[1548];
                        goto compare;
                      case 2153:
                        resword = &wordlist[1549];
                        goto compare;
                      case 2157:
                        resword = &wordlist[1550];
                        goto compare;
                      case 2170:
                        resword = &wordlist[1551];
                        goto compare;
                      case 2299:
                        resword = &wordlist[1552];
                        goto compare;
                      case 2354:
                        resword = &wordlist[1553];
                        goto compare;
                      case 2412:
                        resword = &wordlist[1554];
                        goto compare;
                      case 2416:
                        resword = &wordlist[1555];
                        goto compare;
                      case 2426:
                        resword = &wordlist[1556];
                        goto compare;
                      case 2443:
                        resword = &wordlist[1557];
                        goto compare;
                      case 2447:
                        resword = &wordlist[1558];
                        goto compare;
                      case 2461:
                        resword = &wordlist[1559];
                        goto compare;
                      case 2469:
                        resword = &wordlist[1560];
                        goto compare;
                      case 2493:
                        resword = &wordlist[1561];
                        goto compare;
                      case 2502:
                        resword = &wordlist[1562];
                        goto compare;
                      case 2530:
                        resword = &wordlist[1563];
                        goto compare;
                      case 2536:
                        resword = &wordlist[1564];
                        goto compare;
                      case 2560:
                        resword = &wordlist[1565];
                        goto compare;
                      case 2561:
                        resword = &wordlist[1566];
                        goto compare;
                      case 2570:
                        resword = &wordlist[1567];
                        goto compare;
                      case 2572:
                        resword = &wordlist[1568];
                        goto compare;
                      case 2574:
                        resword = &wordlist[1569];
                        goto compare;
                      case 2654:
                        resword = &wordlist[1570];
                        goto compare;
                      case 2679:
                        resword = &wordlist[1571];
                        goto compare;
                      case 2689:
                        resword = &wordlist[1572];
                        goto compare;
                      case 2779:
                        resword = &wordlist[1573];
                        goto compare;
                      case 2822:
                        resword = &wordlist[1574];
                        goto compare;
                      case 2843:
                        resword = &wordlist[1575];
                        goto compare;
                      case 2853:
                        resword = &wordlist[1576];
                        goto compare;
                      case 2947:
                        resword = &wordlist[1577];
                        goto compare;
                      case 2967:
                        resword = &wordlist[1578];
                        goto compare;
                      case 2969:
                        resword = &wordlist[1579];
                        goto compare;
                      case 2972:
                        resword = &wordlist[1580];
                        goto compare;
                      case 2974:
                        resword = &wordlist[1581];
                        goto compare;
                      case 2988:
                        resword = &wordlist[1582];
                        goto compare;
                      case 3007:
                        resword = &wordlist[1583];
                        goto compare;
                      case 3022:
                        resword = &wordlist[1584];
                        goto compare;
                      case 3082:
                        resword = &wordlist[1585];
                        goto compare;
                      case 3143:
                        resword = &wordlist[1586];
                        goto compare;
                      case 3161:
                        resword = &wordlist[1587];
                        goto compare;
                      case 3184:
                        resword = &wordlist[1588];
                        goto compare;
                      case 3236:
                        resword = &wordlist[1589];
                        goto compare;
                      case 3258:
                        resword = &wordlist[1590];
                        goto compare;
                      case 3262:
                        resword = &wordlist[1591];
                        goto compare;
                      case 3264:
                        resword = &wordlist[1592];
                        goto compare;
                      case 3280:
                        resword = &wordlist[1593];
                        goto compare;
                      case 3283:
                        resword = &wordlist[1594];
                        goto compare;
                      case 3327:
                        resword = &wordlist[1595];
                        goto compare;
                      case 3427:
                        resword = &wordlist[1596];
                        goto compare;
                      case 3469:
                        resword = &wordlist[1597];
                        goto compare;
                      case 3494:
                        resword = &wordlist[1598];
                        goto compare;
                      case 3554:
                        resword = &wordlist[1599];
                        goto compare;
                      case 3624:
                        resword = &wordlist[1600];
                        goto compare;
                      case 3641:
                        resword = &wordlist[1601];
                        goto compare;
                      case 3686:
                        resword = &wordlist[1602];
                        goto compare;
                      case 3780:
                        resword = &wordlist[1603];
                        goto compare;
                      case 3952:
                        resword = &wordlist[1604];
                        goto compare;
                      case 4219:
                        resword = &wordlist[1605];
                        goto compare;
                      case 4228:
                        resword = &wordlist[1606];
                        goto compare;
                      case 4266:
                        resword = &wordlist[1607];
                        goto compare;
                      case 4431:
                        resword = &wordlist[1608];
                        goto compare;
                      case 4452:
                        resword = &wordlist[1609];
                        goto compare;
                      case 4462:
                        resword = &wordlist[1610];
                        goto compare;
                      case 4616:
                        resword = &wordlist[1611];
                        goto compare;
                    }
                }
            }
          return 0;
        compare:
          {
            register const char *s = resword->extension;

            if (*str == *s && !strcmp (str + 1, s + 1))
              return resword;
          }
        }
    }
  return 0;
}
