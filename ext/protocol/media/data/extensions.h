/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: /Library/Developer/CommandLineTools/usr/bin/gperf -CDt --output-file /Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.h /Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf  */
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

#line 8 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
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
#line 691 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m", "text/x-objcsrc"},
#line 1106 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s", "text/x-asm"},
#line 763 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mjs", "text/javascript"},
#line 24 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"Z", "application/x-compressed"},
#line 1117 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s7m", "application/x-sas-dmdb"},
#line 985 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pnm", "image/x-portable-anymap"},
#line 926 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"p7m", "application/pkcs7-mime"},
#line 921 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"p", "text/x-pascal"},
#line 1160 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sds", "application/vnd.stardivision.chart"},
#line 928 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"p7s", "application/pkcs7-signature"},
#line 250 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"d", "text/x-d"},
#line 727 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"md", "text/markdown"},
#line 1605 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"z", "application/x-compressed"},
#line 1230 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"snd", "audio/basic"},
#line 1159 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sdp", "application/sdp"},
#line 1296 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sxm", "application/vnd.sun.xml.math"},
#line 1153 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sdd", "application/vnd.stardivision.impress"},
#line 840 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mxs", "application/vnd.triscape.mxs"},
#line 1138 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sbs", "application/x-spss"},
#line 939 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pbm", "image/x-portable-bitmap"},
#line 269 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ddd", "application/vnd.fujixerox.ddd"},
#line 195 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cjs", "text/javascript"},
#line 1527 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xdm", "application/vnd.syncml.dm+xml"},
#line 143 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"c++", "text/x-c++src"},
#line 1611 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"z6", "application/x-zmachine"},
#line 1196 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sis", "application/vnd.symbian.install"},
#line 1291 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sxd", "application/vnd.sun.xml.draw"},
#line 284 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dis", "application/vnd.Mobius.DIS"},
#line 929 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"p8", "application/pkcs8"},
#line 328 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dxp", "application/vnd.spotfire.dxp"},
#line 1613 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"z8", "application/x-zmachine"},
#line 1528 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xdp", "application/vnd.adobe.xdp+xml"},
#line 1299 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"t", "text/troff"},
#line 938 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pbd", "application/vnd.powerbuilder6"},
#line 751 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mid", "audio/midi"},
#line 215 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cnd", "text/plain"},
#line 1192 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sid", "image/x-mrsid-image"},
#line 1520 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xbm", "image/x-xbitmap"},
#line 1610 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"z5", "application/x-zmachine"},
#line 1615 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"zip", "application/zip"},
#line 142 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"c", "text/plain"},
#line 1295 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sxls", "application/vnd.sealed.xls"},
#line 707 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m4s", "video/iso.segment"},
#line 657 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"l", "text/x-lex"},
#line 1346 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"txd", "application/vnd.genomatix.tuxedo"},
#line 1305 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tbz", "application/x-gtar"},
#line 1519 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xbd", "application/vnd.fujixerox.docuworks.binder"},
#line 1152 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sdc", "application/vnd.stardivision.calc"},
#line 925 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"p7c", "application/pkcs7-mime"},
#line 162 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cbz", "application/x-cbr"},
#line 663 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lbd", "application/vnd.llamagraphics.life-balance.desktop"},
#line 671 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lisp", "text/x-common-lisp"},
#line 1198 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sit", "application/x-stuffit"},
#line 1435 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"w60", "application/vnd.wordperfect"},
#line 286 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"distz", "application/octet-stream"},
#line 1290 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sxc", "application/vnd.sun.xml.calc"},
#line 1197 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sisx", "application/vnd.symbian.install"},
#line 1121 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas", "application/x-sas"},
#line 837 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mxl", "application/vnd.recordare.musicxml"},
#line 839 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mxml", "application/xv+xml"},
#line 933 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pam", "image/x-portable-arbitrarymap"},
#line 1294 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sxl", "application/vnd.sealed.xls"},
#line 177 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdx", "chemical/x-cdx"},
#line 285 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dist", "application/octet-stream"},
#line 1137 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sbml", "application/sbml+xml"},
#line 935 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pas", "text/x-pascal"},
#line 711 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mads", "application/mads+xml"},
#line 1191 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sic", "application/vnd.wap.sic"},
#line 1348 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"txt", "text/plain"},
#line 1120 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sap", "audio/x-sap"},
#line 1194 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sil", "audio/silk"},
#line 1529 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xdssc", "application/dssc+xml"},
#line 1616 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"zipx", "application/zip"},
#line 967 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pic", "image/x-pict"},
#line 280 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dic", "text/x-c"},
#line 149 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"c4p", "application/vnd.clonk.c4group"},
#line 248 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cxt", "application/x-director"},
#line 161 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cbt", "application/x-cbr"},
#line 1451 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wdp", "image/vnd.ms-photo"},
#line 146 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"c4d", "application/vnd.clonk.c4group"},
#line 249 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cxx", "text/x-c"},
#line 1614 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"zaz", "application/vnd.zzazz.deck+xml"},
#line 1199 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sitx", "application/x-stuffitx"},
#line 1447 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wbs", "application/vnd.criticaltools.wbs+xml"},
#line 672 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"list", "text/plain"},
#line 860 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nns", "application/vnd.noblenet-sealer"},
#line 968 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pict", "image/x-pict"},
#line 659 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"las", "application/x-asprs"},
#line 158 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cbl", "text/x-cobol"},
#line 1515 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xap", "application/x-silverlight-app"},
#line 1446 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wbmp", "image/vnd.wap.wbmp"},
#line 1145 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"scm", "application/vnd.lotus-screencam"},
#line 153 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cap", "application/vnd.tcpdump.pcap"},
#line 194 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cil", "application/vnd.ms-artgalry"},
#line 1147 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"scs", "application/scvp-cv-response"},
#line 178 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdxml", "application/vnd.chemdraw+xml"},
#line 859 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nnd", "application/vnd.noblenet-directory"},
#line 719 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mat", "application/x-matlab-data"},
#line 263 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dcm", "application/dicom"},
#line 662 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"laz", "application/x-asprs"},
#line 265 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dcs", "image/x-raw-kodak"},
#line 254 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dat", "text/plain"},
#line 725 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mcd", "application/vnd.mcd"},
#line 1143 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"scd", "application/x-msschedule"},
#line 855 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nim", "video/vnd.nokia.interleaved-multimedia"},
#line 848 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nbp", "application/vnd.wolfram.player"},
#line 930 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pac", "application/x-ns-proxy-autoconfig"},
#line 1139 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sc", "application/vnd.ibm.secure-container"},
#line 155 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cat", "application/vnd.ms-pki.seccat"},
#line 1440 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wasm", "application/wasm"},
#line 1335 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"trm", "application/x-msterminal"},
#line 808 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpm", "application/vnd.blueice.multipass"},
#line 1514 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xaml", "application/xaml+xml"},
#line 1245 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sps", "application/x-spss"},
#line 1161 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sdw", "application/vnd.stardivision.writer"},
#line 997 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ppm", "image/x-portable-pixmap"},
#line 945 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pct", "image/x-pict"},
#line 679 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lrm", "application/vnd.ms-lrm"},
#line 999 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ppsm", "application/vnd.ms-powerpoint.slideshow.macroEnabled.12"},
#line 998 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pps", "application/vnd.ms-powerpoint"},
#line 947 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pcx", "image/vnd.zbrush.pcx"},
#line 1436 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wad", "application/x-doom"},
#line 267 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dcx", "image/vnd.zbrush.dcx"},
#line 992 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pp", "text/x-pascal"},
#line 810 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpp", "application/vnd.ms-project"},
#line 163 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cc", "text/plain"},
#line 303 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dp", "application/vnd.osgi.dp"},
#line 1242 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"spp", "application/vnd.sealed.ppt"},
#line 1087 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rnd", "application/prs.nprend"},
#line 799 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpd", "application/dash+xml"},
#line 1236 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"spd", "application/vnd.sealedmedia.softseal.pdf"},
#line 1297 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sxw", "application/vnd.sun.xml.writer"},
#line 228 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"crd", "application/x-mscardfile"},
#line 995 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ppd", "application/vnd.cups-ppd"},
#line 1063 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rdz", "application/vnd.data-vision.rdz"},
#line 943 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pcl", "application/vnd.hp-PCL"},
#line 1004 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ppz", "application/vnd.ms-powerpoint"},
#line 262 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dcl", "text/plain"},
#line 1253 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"srt", "application/x-subrip"},
#line 1573 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xpm", "image/x-xpixmap"},
#line 1448 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wbxml", "application/vnd.wap.wbxml"},
#line 1255 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"srx", "application/sparql-results+xml"},
#line 1576 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xps", "application/vnd.ms-xpsdocument"},
#line 1530 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xdw", "application/vnd.fujixerox.docuworks"},
#line 1013 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"prt", "application/x-prt"},
#line 1002 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pptm", "application/vnd.ms-powerpoint.presentation.macroEnabled.12"},
#line 165 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cct", "application/x-director"},
#line 1077 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ris", "application/x-research-info-systems"},
#line 807 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpls", "video/MP2T"},
#line 1449 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wcm", "application/vnd.ms-works"},
#line 660 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lasxml", "application/vnd.las.las+xml"},
#line 815 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mrc", "application/marc"},
#line 1250 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"src", "application/x-wais-source"},
#line 1308 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tcl", "text/x-tcl"},
#line 1252 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"srl", "application/sereal"},
#line 1076 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rip", "audio/vnd.rip"},
#line 1006 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"prc", "application/vnd.palm"},
#line 224 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cpp", "text/plain"},
#line 164 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ccc", "text/vnd.net2phone.commcenter.command"},
#line 308 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"drc", "video/x-dirac"},
#line 1442 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wax", "audio/x-ms-wax"},
#line 811 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpt", "application/vnd.ms-project"},
#line 1089 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rnx", "text/plain"},
#line 812 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpx", "application/x-project"},
#line 1246 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"spx", "audio/ogg"},
#line 230 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"crt", "application/x-x509-ca-cert"},
#line 1001 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ppt", "application/vnd.ms-powerpoint"},
#line 1618 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"zirz", "application/vnd.zul"},
#line 1443 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wb1", "application/x-quattro-pro"},
#line 1243 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sppt", "application/vnd.sealed.ppt"},
#line 232 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"crx", "application/x-chrome-extension"},
#line 816 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mrcx", "application/marcxml+xml"},
#line 306 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dpx", "image/x-dpx"},
#line 1000 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ppsx", "application/vnd.openxmlformats-officedocument.presentationml.slideshow"},
#line 1086 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rnc", "application/relax-ng-compact-syntax"},
#line 798 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpc", "application/vnd.mophun.certificate"},
#line 1235 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"spc", "application/x-pkcs7-certificates"},
#line 806 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpl", "video/MP2T"},
#line 1239 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"spl", "application/x-futuresplash"},
#line 229 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"crl", "application/pkix-crl"},
#line 724 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mc1", "application/vnd.medcalcdata"},
#line 1332 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tpt", "application/vnd.trid.tpt"},
#line 166 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ccxml", "application/ccxml+xml"},
#line 1577 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xpt", "application/x-sas-xport"},
#line 1494 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wrd", "application/msword"},
#line 1600 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"y", "text/x-yacc"},
#line 1579 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xpx", "application/vnd.intercon.formnet"},
#line 225 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cpt", "application/x-mac-compactpro"},
#line 782 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mny", "application/x-msmoney"},
#line 1054 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ram", "audio/x-pn-realaudio"},
#line 50 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ads", "text/x-ada"},
#line 944 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pclxl", "application/vnd.hp-PCLXL"},
#line 1032 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pxn", "image/x-raw-logitech"},
#line 1003 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pptx", "application/vnd.openxmlformats-officedocument.presentationml.presentation"},
#line 1056 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ras", "image/x-cmu-raster"},
#line 576 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"indd", "application/x-adobe-indesign"},
#line 937 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"paw", "application/vnd.pawaafile"},
#line 42 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ad", "text/x-asciidoc"},
#line 818 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ms", "text/troff"},
#line 1489 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wps", "application/vnd.ms-works"},
#line 1331 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tpl", "application/vnd.groove-tool-template"},
#line 1483 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wp", "application/vnd.wordperfect"},
#line 1572 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xpl", "application/xproc+xml"},
#line 49 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"adp", "audio/adpcm"},
#line 1188 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"si", "text/vnd.wap.si"},
#line 1014 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ps", "application/postscript"},
#line 849 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nc", "application/x-netcdf"},
#line 698 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m2ts", "video/MP2T"},
#line 828 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"msp", "application/x-ms-installer"},
#line 1487 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wpd", "application/vnd.wordperfect"},
#line 1601 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"yaml", "text/x-yaml"},
#line 1345 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"twds", "application/vnd.SimTech-MindMapper"},
#line 1022 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"psp", "image/x-paintshoppro"},
#line 311 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dsp", "text/plain"},
#line 1344 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"twd", "application/vnd.SimTech-MindMapper"},
#line 1017 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"psd", "image/vnd.adobe.photoshop"},
#line 1595 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xwd", "image/x-xwindowdump"},
#line 861 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nnw", "application/vnd.noblenet-web"},
#line 1337 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ts", "video/MP2T"},
#line 1588 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xsm", "application/vnd.syncml+xml"},
#line 581 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"inx", "application/x-adobe-indesign-interchange"},
#line 685 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lwp", "application/vnd.lotus-wordpro"},
#line 173 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdmid", "application/cdmi-domain"},
#line 850 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ncx", "application/x-dtbncx+xml"},
#line 236 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"csm", "application/x-cu-seeme"},
#line 179 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdy", "application/vnd.cinderella"},
#line 234 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cs", "text/x-csharp"},
#line 697 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m2t", "video/MP2T"},
#line 239 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"css", "text/css"},
#line 1496 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wrl", "model/vrml"},
#line 1589 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xsp", "text/plain"},
#line 1338 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tsd", "application/timestamped-data"},
#line 1584 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xsd", "application/xml"},
#line 238 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"csp", "application/vnd.commonspace"},
#line 680 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lsp", "text/x-common-lisp"},
#line 556 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"idl", "text/x-idl"},
#line 557 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"idml", "application/vnd.adobe.indesign-idml-package"},
#line 1490 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wpt", "application/vnd.wordperfect"},
#line 829 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mst", "application/x-ms-installer"},
#line 1518 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xbap", "application/x-ms-xbap"},
#line 715 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"man", "text/troff"},
#line 387 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"f90", "text/x-fortran"},
#line 253 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dart", "application/vnd.dart"},
#line 1485 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wp6", "application/vnd.wordperfect"},
#line 1024 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pst", "application/vnd.ms-outlook-pst"},
#line 1621 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"zst", "application/zstd"},
#line 817 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mrw", "image/x-minolta-mrw"},
#line 104 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"axx", "application/x-axcrypt"},
#line 1488 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wpl", "application/vnd.ms-wpl"},
#line 827 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"msl", "application/vnd.Mobius.MSL"},
#line 61 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ait", "application/vnd.dvb.ait"},
#line 1260 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ssml", "application/ssml+xml"},
#line 710 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ma", "application/mathematica"},
#line 28 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aam", "application/x-authorware-map"},
#line 310 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dsc", "text/prs.lines.tag"},
#line 30 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aas", "application/x-authorware-seg"},
#line 312 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dssc", "application/dssc+der"},
#line 172 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdmic", "application/cdmi-container"},
#line 1257 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ssdl", "application/ssdl+xml"},
#line 391 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fbs", "image/vnd.fastbidsheet"},
#line 864 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"npx", "image/vnd.net-fpx"},
#line 240 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cst", "application/x-director"},
#line 885 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"odm", "application/vnd.oasis.opendocument.text-master"},
#line 1050 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"r", "text/x-rsrc"},
#line 887 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ods", "application/vnd.oasis.opendocument.spreadsheet"},
#line 1333 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tr", "text/troff"},
#line 1165 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sem", "application/vnd.sealed.eml"},
#line 1094 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rpm", "audio/x-pn-realaudio-plugin"},
#line 1061 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rct", "application/prs.nprend"},
#line 704 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m4", "text/plain"},
#line 1484 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wp5", "application/vnd.wordperfect"},
#line 448 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fxp", "application/vnd.adobe.fxp"},
#line 575 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"in", "text/plain"},
#line 231 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"crw", "image/x-canon-crw"},
#line 1095 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rpss", "application/vnd.nokia.radio-presets"},
#line 1585 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xsl", "application/xml"},
#line 927 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"p7r", "application/x-pkcs7-certreqresp"},
#line 886 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"odp", "application/vnd.oasis.opendocument.presentation"},
#line 1093 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rp9", "application/vnd.cloanto.rp9"},
#line 1609 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"z4", "application/x-zmachine"},
#line 237 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"csml", "chemical/x-csml"},
#line 820 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mscml", "application/mediaservercontrol+xml"},
#line 244 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cw", "application/prs.cww"},
#line 552 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"icm", "application/vnd.iccprofile"},
#line 842 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"myd", "application/x-mysql-misam-data"},
#line 1162 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sed", "text/x-sed"},
#line 1167 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"semd", "application/vnd.semd"},
#line 555 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ics", "text/calendar"},
#line 695 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m21", "application/mp21"},
#line 1047 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qxd", "application/vnd.Quark.QuarkXPress"},
#line 1059 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rbw", "application/x-ruby"},
#line 919 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"oxps", "application/vnd.ms-xpsdocument"},
#line 352 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ens", "application/x-endnote-style"},
#line 43 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ad.txt", "text/x-asciidoc"},
#line 1587 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xslt", "application/xslt+xml"},
#line 1578 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xpw", "application/vnd.intercon.formnet"},
#line 1497 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wsdd", "text/plain"},
#line 338 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"edm", "application/vnd.novadigm.EDM"},
#line 413 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fits", "application/fits"},
#line 742 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mets", "application/mets+xml"},
#line 424 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fnc", "application/vnd.frogans.fnc"},
#line 875 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"obd", "application/x-msbinder"},
#line 329 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dxr", "application/x-director"},
#line 23 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"@dxr", "application/x-director"},
#line 665 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"les", "application/vnd.hhe.lesson-player"},
#line 666 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"less", "text/x-less"},
#line 176 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdr", "application/coreldraw"},
#line 586 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"irm", "application/vnd.ibm.rights-management"},
#line 384 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"f4p", "video/mp4"},
#line 283 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dir", "application/x-director"},
#line 1617 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"zir", "application/vnd.zul"},
#line 1603 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"yin", "application/yin+xml"},
#line 1598 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xyz", "x-chemical/x-xyz"},
#line 1015 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ps1", "application/x-msdownload"},
#line 1141 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"scad", "application/x-openscad"},
#line 888 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"odt", "application/vnd.oasis.opendocument.text"},
#line 940 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pcap", "application/vnd.tcpdump.pcap"},
#line 27 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aac", "audio/aac"},
#line 412 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fit", "application/fits"},
#line 587 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"irp", "application/vnd.irepository.package+xml"},
#line 1096 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rpst", "application/vnd.nokia.radio-preset"},
#line 1049 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qxt", "application/vnd.Quark.QuarkXPress"},
#line 160 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cbr", "application/x-cbr"},
#line 375 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"exp", "text/x-expect"},
#line 809 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpn", "application/vnd.mophun.application"},
#line 34 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ac", "text/plain"},
#line 1438 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"warc", "application/warc"},
#line 880 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"odc", "application/vnd.oasis.opendocument.chart-template"},
#line 274 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dex", "application/x-dex"},
#line 1158 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sdoc", "application/vnd.sealed.doc"},
#line 920 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"oxt", "application/vnd.openofficeorg.extension"},
#line 449 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fxpl", "application/vnd.adobe.fxp"},
#line 1486 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wp61", "application/vnd.wordperfect"},
#line 1307 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tcap", "application/vnd.3gpp2.tcap"},
#line 1036 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qam", "application/vnd.epson.quickanime"},
#line 1169 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"seml", "application/vnd.sealed.eml"},
#line 723 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mbox", "application/mbox"},
#line 353 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ent", "text/plain"},
#line 1048 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qxl", "application/vnd.Quark.QuarkXPress"},
#line 1498 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wsdl", "application/wsdl+xml"},
#line 1313 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tex", "application/x-tex"},
#line 874 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"oas", "application/vnd.fujitsu.oasys"},
#line 550 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"icc", "application/vnd.iccprofile"},
#line 339 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"edx", "application/vnd.novadigm.EDX"},
#line 423 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fn", "text/plain"},
#line 1057 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"raw", "image/x-raw-panasonic"},
#line 994 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ppam", "application/vnd.ms-powerpoint.addin.macroEnabled.12"},
#line 813 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpy", "application/vnd.ibm.MiniPay"},
#line 717 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mar", "application/octet-stream"},
#line 1105 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rwz", "image/x-raw-rawzor"},
#line 1261 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ssw", "video/vnd.sealed.swf"},
#line 866 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nrw", "image/x-raw-nikon"},
#line 36 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"acc", "application/vnd.americandynamics.acc"},
#line 1098 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rs", "application/rls-services+xml"},
#line 1100 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rss", "application/rss+xml"},
#line 377 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ext", "application/vnd.novadigm.EXT"},
#line 867 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nsc", "application/x-conference"},
#line 313 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dsw", "text/plain"},
#line 393 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fcs", "application/vnd.isac.fcs"},
#line 180 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cel", "image/vnd.dgn"},
#line 33 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"abw", "application/x-abiword"},
#line 247 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cww", "application/prs.cww"},
#line 1316 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"text", "text/plain"},
#line 1521 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xcat", "text/plain"},
#line 1203 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"skm", "application/vnd.koan"},
#line 1099 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rsd", "application/rsd+xml"},
#line 767 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mks", "video/x-matroska"},
#line 758 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"minipsf1", "audio/x-psf"},
#line 342 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ei6", "application/vnd.pg.osasli"},
#line 1303 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tar", "application/x-tar"},
#line 1516 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xar", "application/vnd.xara"},
#line 78 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"arc", "application/x-freearc"},
#line 1284 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"svd", "application/vnd.svd"},
#line 154 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"car", "application/vnd.curl.car"},
#line 433 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"frm", "application/vnd.framemaker"},
#line 852 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nes", "application/x-nesrom"},
#line 1204 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"skp", "application/vnd.koan"},
#line 766 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mkd", "text/markdown"},
#line 979 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pls", "application/pls+xml"},
#line 1210 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sldm", "application/vnd.ms-powerpoint.slide.macroEnabled.12"},
#line 1202 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"skd", "application/vnd.koan"},
#line 1038 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qcp", "audio/vnd.qcelp"},
#line 1593 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xvm", "application/xv+xml"},
#line 796 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mp4s", "application/mp4"},
#line 771 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mlp", "application/vnd.dolby.mlp"},
#line 76 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"apt", "text/plain"},
#line 969 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pkd", "application/vnd.hbci"},
#line 1271 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"stm", "application/vnd.sealedmedia.softseal.html"},
#line 734 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mdtext", "text/markdown"},
#line 831 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mts", "video/MP2T"},
#line 732 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mdi", "image/vnd.ms-modi"},
#line 1031 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pwn", "application/vnd.3M.Post-it-Notes"},
#line 553 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"icns", "image/icns"},
#line 1033 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"py", "application/x-python"},
#line 264 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dcr", "application/x-director"},
#line 1550 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlm", "application/vnd.ms-excel"},
#line 317 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dts", "audio/vnd.dts"},
#line 1101 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rst", "text/plain"},
#line 1555 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlsm", "application/vnd.ms-excel.sheet.macroEnabled.12"},
#line 1553 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xls", "application/vnd.ms-excel"},
#line 684 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lvp", "audio/vnd.lucent.voice"},
#line 769 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ml", "text/x-ml"},
#line 1266 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"std", "application/vnd.sun.xml.draw.template"},
#line 1206 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sl", "text/vnd.wap.sl"},
#line 208 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cls", "text/x-vbasic"},
#line 25 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"a", "application/x-archive"},
#line 116 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bdm", "video/MP2T"},
#line 974 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pl", "text/x-perl"},
#line 1293 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sxi", "application/vnd.sun.xml.impress"},
#line 316 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dtd", "text/xml"},
#line 392 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fcdt", "application/vnd.adobe.formscentral.fcdt"},
#line 289 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dl", "video/x-dl"},
#line 1326 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tld", "text/plain"},
#line 1263 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"st", "application/vnd.sailingtracker.track"},
#line 1545 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xld", "application/vnd.ms-excel"},
#line 1205 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"skt", "application/vnd.koan"},
#line 1561 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlz", "application/x-xliff+zip"},
#line 206 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"clp", "application/x-msclip"},
#line 728 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mda", "application/x-msaccess"},
#line 1151 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sda", "application/vnd.stardivision.draw"},
#line 294 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dna", "application/vnd.dna"},
#line 1052 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ra", "audio/x-pn-realaudio"},
#line 1283 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"svc", "application/vnd.dvb.service"},
#line 1040 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qps", "application/vnd.publishare-delta-tree"},
#line 1213 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"slt", "application/vnd.epson.salt"},
#line 1558 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xltm", "application/vnd.ms-excel.template.macroEnabled.12"},
#line 87 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"asm", "text/x-asm"},
#line 81 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"as", "text/x-actionscript"},
#line 752 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"midi", "audio/midi"},
#line 721 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mb", "application/mathematica"},
#line 980 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"plt", "application/vnd.hp-HPGL"},
#line 56 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ai", "application/postscript"},
#line 1437 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"war", "application/x-tika-java-web-archive"},
#line 1212 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sldx", "application/vnd.openxmlformats-officedocument.presentationml.slide"},
#line 196 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cl", "text/x-common-lisp"},
#line 1207 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"slc", "application/vnd.wap.slc"},
#line 1069 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"res", "application/x-dtbresource+xml"},
#line 90 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"asp", "text/asp"},
#line 1185 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"shp", "application/x-shapefile"},
#line 976 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"plc", "application/vnd.Mobius.PLC"},
#line 1275 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"stx", "application/x-sas-transport"},
#line 962 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"php", "application/x-httpd-php"},
#line 305 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dpr", "text/x-pascal"},
#line 502 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"h++", "text/x-c++hdr"},
#line 290 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dll", "application/octet-stream"},
#line 1028 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ptx", "image/x-raw-pentax"},
#line 1066 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rep", "application/vnd.businessobjects"},
#line 1557 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlt", "application/vnd.ms-excel"},
#line 167 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cda", "application/x-cdf"},
#line 1594 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xvml", "application/xv+xml"},
#line 193 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cii", "application/vnd.anser-web-certificate-issue-initiation"},
#line 1265 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"stc", "application/vnd.sun.xml.calc.template"},
#line 1556 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlsx", "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet"},
#line 1467 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wks", "application/vnd.lotus-1-2-3"},
#line 355 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"enw", "application/x-endnote-refer"},
#line 190 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"chm", "application/vnd.ms-htmlhelp"},
#line 1270 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"stl", "application/vnd.ms-pki.stl"},
#line 1272 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"stml", "application/vnd.sealedmedia.softseal.html"},
#line 431 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fpx", "image/vnd.fpx"},
#line 830 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"msty", "application/vnd.muvee.style"},
#line 1201 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sj", "application/javascript"},
#line 358 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"eps", "application/postscript"},
#line 668 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lhs", "text/x-haskell"},
#line 846 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nar", "application/vnd.iptc.g2.newsmessage+xml"},
#line 1544 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlc", "application/vnd.ms-excel"},
#line 1575 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xpr", "application/vnd.is-xpr"},
#line 1549 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xll", "application/vnd.ms-excel"},
#line 1532 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xenc", "application/xenc+xml"},
#line 157 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cba", "application/x-cbr"},
#line 1012 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"prql", "application/prql"},
#line 1468 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wkz", "application/x-Wingz"},
#line 705 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m4a", "audio/mp4"},
#line 29 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aart", "text/plain"},
#line 749 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mht", "multipart/related"},
#line 682 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ltx", "application/x-latex"},
#line 1340 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ttc", "font/collection"},
#line 1559 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xltx", "application/vnd.openxmlformats-officedocument.spreadsheetml.template"},
#line 661 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"latex", "application/x-latex"},
#line 92 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"asx", "video/x-ms-asf"},
#line 1241 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"spot", "text/vnd.in3d.spot"},
#line 1342 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ttl", "text/turtle"},
#line 1343 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ttml", "application/ttml+xml"},
#line 965 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pht", "application/x-httpd-php"},
#line 1247 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sql", "application/x-sql"},
#line 1025 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pt5", "application/x-pagemaker"},
#line 31 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"abs-linkmap", "text/plain"},
#line 80 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"arw", "image/x-raw-sony"},
#line 91 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aspx", "text/aspdotnet"},
#line 77 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ar", "application/x-archive"},
#line 1070 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rest", "text/x-rst"},
#line 506 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"h5", "application/x-hdf"},
#line 82 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"asc", "text/plain"},
#line 1214 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sm", "application/vnd.stepmania.stepchart"},
#line 1469 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wl", "application/vnd.wolfram.wl"},
#line 108 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bas", "text/x-basic"},
#line 543 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hx", "text/x-haxe"},
#line 101 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aw", "application/applixware"},
#line 1227 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sms", "application/vnd.3gpp.sms"},
#line 901 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"opml", "text/x-opml"},
#line 580 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"install", "text/plain"},
#line 981 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pm", "text/x-perl"},
#line 1583 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xsamples", "text/plain"},
#line 1502 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wvx", "video/x-ms-wvx"},
#line 1619 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"zmm", "application/vnd.HandHeld-Entertainment+xml"},
#line 951 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pen", "text/plain"},
#line 363 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"erl", "text/x-erlang"},
#line 1156 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sdkm", "application/vnd.solent.sdkm+xml"},
#line 293 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dms", "application/octet-stream"},
#line 1537 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xht", "application/xhtml+xml"},
#line 778 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mmp", "application/vnd.mindjet.mindmanager"},
#line 777 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mmmp", "application/vnd.mindjet.mindmanager"},
#line 1322 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"thmx", "application/vnd.openxmlformats-officedocument.presentationml.presentation"},
#line 1224 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smp", "audio/vnd.sealedmedia.softseal.mpeg"},
#line 645 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"knp", "application/vnd.Kinar"},
#line 775 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mmd", "application/vnd.chipnuts.karaoke-mmd"},
#line 1044 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qwd", "application/vnd.Quark.QuarkXPress"},
#line 22 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"@dir", "application/x-director"},
#line 606 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jisp", "application/vnd.jisp"},
#line 613 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jnlp", "application/x-java-jnlp-file"},
#line 467 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gim", "application/vnd.groove-identity-message"},
#line 952 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"perl", "text/x-perl"},
#line 630 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jx", "text/plain"},
#line 292 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dmp", "application/vnd.tcpdump.pcap"},
#line 1562 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xm", "audio/xm"},
#line 1072 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rexx", "text/x-rexx"},
#line 1071 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"restx", "text/x-rst"},
#line 1155 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sdkd", "application/vnd.solent.sdkm+xml"},
#line 750 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mhtml", "multipart/related"},
#line 1116 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s3m", "audio/s3m"},
#line 1186 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"shtml", "text/html"},
#line 1493 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wqd", "application/vnd.wqd"},
#line 544 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hxx", "text/x-c++hdr"},
#line 1055 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rar", "application/x-rar-compressed"},
#line 1112 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s1m", "audio/vnd.sealedmedia.softseal.mpeg"},
#line 832 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mus", "application/vnd.musician"},
#line 966 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"phtml", "application/x-httpd-php"},
#line 51 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aep", "application/vnd.audiograph"},
#line 1278 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sus", "application/vnd.sus-calendar"},
#line 922 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"p10", "application/pkcs10"},
#line 1566 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xmp", "application/rdf+xml"},
#line 255 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"data", "text/plain"},
#line 1398 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vbs", "application/x-msdownload"},
#line 510 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hbc", "application/vnd.hbci"},
#line 213 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cmp", "application/vnd.yellowriver-custom-menu"},
#line 1298 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sz", "application/x-snappy-framed"},
#line 1113 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s1p", "application/vnd.sealed.ppt"},
#line 324 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dwfx", "model/vnd.dwfx+xps"},
#line 1279 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"susp", "application/vnd.sus-calendar"},
#line 1409 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vis", "application/vnd.visionary"},
#line 210 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cmd", "application/x-msdownload"},
#line 110 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bat", "application/x-msdownload"},
#line 1045 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qwt", "application/vnd.Quark.QuarkXPress"},
#line 319 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dump", "application/octet-stream"},
#line 381 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"f", "text/x-fortran"},
#line 435 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fst", "image/vnd.fst"},
#line 60 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"air", "application/vnd.adobe.air-application-installer-package+zip"},
#line 1538 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xhtml", "application/xhtml+xml"},
#line 847 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nb", "application/mathematica"},
#line 597 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jam", "application/vnd.jam"},
#line 779 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mmpt", "application/vnd.mindjet.mindmanager"},
#line 13 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"3ds", "image/x-3ds"},
#line 1231 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"snf", "application/x-font-snf"},
#line 364 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"es", "application/ecmascript"},
#line 744 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mfm", "application/vnd.mfmp"},
#line 1513 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"x_t", "model/vnd.parasolid.transmit.text"},
#line 499 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gxt", "application/vnd.geonext"},
#line 459 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gdl", "model/vnd.gdl"},
#line 631 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jxl", "image/jxl"},
#line 731 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mdf", "application/x-msaccess"},
#line 1176 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sfs", "application/vnd.spotfire.sfs"},
#line 1154 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sdf", "application/vnd.Kinar"},
#line 955 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pfm", "application/x-font-type1"},
#line 434 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fsc", "application/vnd.fsc.weblaunch"},
#line 1221 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sml", "application/smil+xml"},
#line 1612 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"z7", "application/x-zmachine"},
#line 949 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pdf", "application/pdf"},
#line 88 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"asnd", "audio/vnd.adobe.soundbooth"},
#line 1505 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"x3d", "model/x3d+xml"},
#line 1599 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xz", "application/x-xz"},
#line 52 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aet", "application/vnd.adobe.aftereffects.template"},
#line 456 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gam", "application/x-tads"},
#line 636 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kdc", "image/x-raw-kodak"},
#line 596 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jad", "text/vnd.sun.j2me.app-descriptor"},
#line 983 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pml", "application/vnd.ctc-posml"},
#line 1274 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"stw", "application/vnd.sun.xml.writer.template"},
#line 918 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"owl", "application/rdf+xml"},
#line 1080 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rld", "application/resource-lists-diff+xml"},
#line 908 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ost", "application/vnd.ms-outlook-pst"},
#line 687 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lz", "application/x-lzip"},
#line 1328 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tmx", "application/x-tmx"},
#line 836 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mxf", "application/mxf"},
#line 838 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mxmf", "audio/vnd.nokia.mobile-xmf"},
#line 1510 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"x3dz", "model/x3d+xml"},
#line 307 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dra", "audio/vnd.dra"},
#line 47 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"adoc", "text/x-asciidoc"},
#line 1560 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlw", "application/vnd.ms-excel"},
#line 1319 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tfm", "application/x-tex-tfm"},
#line 58 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aifc", "audio/x-aiff"},
#line 214 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cmx", "image/x-cmx"},
#line 1462 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wk1", "application/vnd.lotus-1-2-3"},
#line 1470 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wm", "video/x-ms-wm"},
#line 327 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dxf", "image/vnd.dxf"},
#line 754 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mif", "application/vnd.mif"},
#line 260 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dbf", "application/x-dbf"},
#line 674 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"listafp", "application/vnd.ibm.modcap"},
#line 1526 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xdf", "application/xcap-diff+xml"},
#line 32 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"abs-menulinks", "text/plain"},
#line 184 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cfm", "text/x-coldfusion"},
#line 1078 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rl", "application/resource-lists+xml"},
#line 134 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bpm", "application/bizagi-modeler"},
#line 1565 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xml", "application/xml"},
#line 186 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cfs", "application/x-cfs-compressed"},
#line 169 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdf", "application/x-netcdf"},
#line 209 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cmc", "application/vnd.cosmocaller"},
#line 281 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dif", "application/dif+xml"},
#line 982 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pm5", "application/x-pagemaker"},
#line 1334 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tra", "application/vnd.trueapp"},
#line 212 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cml", "chemical/x-cml"},
#line 641 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kil", "application/x-killustrator"},
#line 1606 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"z1", "application/x-zmachine"},
#line 1571 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xpi", "application/x-xpinstall"},
#line 1433 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vxml", "application/voicexml+xml"},
#line 1472 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wmd", "application/x-ms-wmd"},
#line 1347 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"txf", "application/vnd.Mobius.TXF"},
#line 1041 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qpw", "application/x-quattro-pro"},
#line 1480 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wmz", "application/x-msmetafile"},
#line 993 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ppa", "application/vnd.ms-powerpoint"},
#line 507 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hal", "application/vnd.hal+xml"},
#line 508 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"haml", "text/x-haml"},
#line 222 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cpi", "video/MP2T"},
#line 131 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bpd", "application/vnd.hbci"},
#line 745 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mft", "application/rpki-manifest"},
#line 733 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mdo", "text/plain"},
#line 1187 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"shw", "application/x-corelpresentations"},
#line 1157 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sdo", "application/vnd.sealed.doc"},
#line 1323 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tif", "image/tiff"},
#line 1350 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tzx", "application/x-spectrum-tzx"},
#line 1541 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xif", "image/vnd.xiff"},
#line 1058 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rb", "application/x-ruby"},
#line 39 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"acfm", "application/x-font-adobe-metric"},
#line 48 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"adoc.txt", "text/x-asciidoc"},
#line 957 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pfx", "application/x-pkcs12"},
#line 192 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cif", "chemical/x-cif"},
#line 593 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ivp", "application/vnd.immervision-ivp"},
#line 658 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"l16", "audio/L16"},
#line 12 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"3dml", "text/vnd.in3d.3dml"},
#line 1079 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rlc", "image/vnd.fujixerox.edmics-rlc"},
#line 1170 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ser", "application/java-serialized-object"},
#line 1592 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xul", "application/vnd.mozilla.xul+xml"},
#line 1476 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wmls", "text/vnd.wap.wmlscript"},
#line 1211 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sldprt", "application/sldworks"},
#line 1103 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rtx", "text/richtext"},
#line 635 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kcm", "application/vnd.nervana"},
#line 273 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"der", "application/x-x509-ca-cert"},
#line 1434 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"w3d", "application/x-director"},
#line 1503 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wz", "application/x-Wingz"},
#line 1568 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xmt_txt", "model/vnd.parasolid.transmit.text"},
#line 720 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mathml", "application/mathml+xml"},
#line 1019 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"psf1", "audio/x-psf"},
#line 530 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hps", "application/vnd.hp-hps"},
#line 757 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"minipsf", "audio/x-psf"},
#line 455 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gac", "application/vnd.groove-account"},
#line 882 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"odft", "application/vnd.oasis.opendocument.formula-template"},
#line 1495 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wri", "application/x-mswrite"},
#line 1491 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wq1", "application/x-quattro-pro"},
#line 524 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hp", "text/x-c++hdr"},
#line 577 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ini", "text/x-ini"},
#line 488 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"grm", "text/plain"},
#line 1479 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wmx", "video/x-ms-wmx"},
#line 735 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"me", "text/troff"},
#line 1119 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"saf", "application/vnd.yamaha.smaf-audio"},
#line 351 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"enr", "application/x-endnote-refer"},
#line 1403 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vcs", "text/x-vcalendar"},
#line 527 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hpp", "text/plain"},
#line 973 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pkpass", "application/vnd.apple.pkpass"},
#line 1208 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sldasm", "application/sldworks"},
#line 1289 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"swi", "application/vnd.aristanetworks.swi"},
#line 147 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"c4f", "application/vnd.clonk.c4group"},
#line 623 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jpm", "image/jpm"},
#line 1533 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xer", "application/patch-ops-error+xml"},
#line 252 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"daf", "application/vnd.Mobius.DAF"},
#line 69 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ani", "application/octet-stream"},
#line 591 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"itp", "application/vnd.shana.informed.formtemplate"},
#line 786 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mos", "image/x-raw-leaf"},
#line 181 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cer", "application/pkix-cert"},
#line 1474 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wml", "text/vnd.wap.wml"},
#line 182 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cfc", "text/x-coldfusion"},
#line 686 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lyr", "application/x-esri-layer"},
#line 1107 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s11", "video/vnd.sealed.mpeg1"},
#line 987 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pom", "text/plain"},
#line 1400 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vcd", "application/x-cdlink"},
#line 185 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cfml", "text/x-coldfusion"},
#line 1607 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"z2", "application/x-zmachine"},
#line 331 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"e", "text/x-eiffel"},
#line 1164 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"seed", "application/vnd.fdsn.seed"},
#line 1543 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlam", "application/vnd.ms-excel.addin.macroEnabled.12"},
#line 1535 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xfdl", "application/vnd.xfdl"},
#line 1027 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ptid", "application/vnd.pvi.ptid1"},
#line 785 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mods", "application/mods+xml"},
#line 826 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"msi", "application/x-msdownload"},
#line 889 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"oex", "application/x-opera-extension"},
#line 376 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"exr", "image/aces"},
#line 784 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mod", "audio/x-mod"},
#line 63 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"al", "text/x-perl"},
#line 159 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cbor", "application/cbor"},
#line 730 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mde", "application/x-msaccess"},
#line 1195 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"silo", "model/mesh"},
#line 1287 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"swa", "application/x-director"},
#line 696 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m2a", "audio/mpeg"},
#line 198 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"class", "application/octet-stream"},
#line 152 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"caf", "audio/x-caf"},
#line 897 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"onetmp", "application/onenote"},
#line 986 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pod", "text/plain"},
#line 1363 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"urls", "text/uri-list"},
#line 1460 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wif", "application/watcherinfo+xml"},
#line 1081 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rm", "application/vnd.rn-realmedia"},
#line 390 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fbdoc", "application/vnd.framemaker"},
#line 902 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"oprc", "application/vnd.palm"},
#line 1349 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"types", "text/plain"},
#line 1084 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rms", "application/vnd.jcp.javame.midlet-rms"},
#line 121 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bin", "application/octet-stream"},
#line 44 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ada", "text/x-ada"},
#line 70 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"anpa", "text/vnd.iptc.anpa"},
#line 673 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"list3820", "application/vnd.ibm.modcap"},
#line 219 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"com", "application/x-msdownload"},
#line 990 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"potm", "application/vnd.ms-powerpoint.template.macroEnabled.12"},
#line 858 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nml", "application/vnd.enliven"},
#line 301 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dotm", "application/vnd.ms-word.template.macroEnabled.12"},
#line 1475 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wmlc", "application/vnd.wap.wmlc"},
#line 814 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mqy", "application/vnd.Mobius.MQY"},
#line 794 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mp4", "audio/mp4"},
#line 1477 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wmlsc", "application/vnd.wap.wmlscriptc"},
#line 819 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"msa", "application/vnd.msa-disk-image"},
#line 1083 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rmp", "audio/x-pn-realaudio-plugin"},
#line 942 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pcf", "application/x-font-pcf"},
#line 1570 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xop", "application/xop+xml"},
#line 298 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"docm", "application/vnd.ms-word.document.macroEnabled.12"},
#line 1574 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xport", "application/x-sas-xport"},
#line 191 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"chrt", "application/vnd.kde.kchart"},
#line 1404 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vcx", "application/vnd.vcx"},
#line 753 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mie", "application/x-mie"},
#line 755 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mime", "message/rfc822"},
#line 1604 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"yml", "text/x-yaml"},
#line 256 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dataless", "application/vnd.fdsn.seed"},
#line 217 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cod", "application/vnd.rim.cod"},
#line 75 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"apr", "application/vnd.lotus-approach"},
#line 171 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdmia", "application/cdmi-capability"},
#line 624 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jpx", "image/jpx"},
#line 790 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mp21", "application/mp21"},
#line 97 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"atx", "application/vnd.antix.game-component"},
#line 1074 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rhtml", "application/x-html+ruby"},
#line 1115 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s1w", "application/vnd.sealed.doc"},
#line 989 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pot", "application/vnd.ms-powerpoint"},
#line 877 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ocaml", "text/x-ocaml"},
#line 300 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dot", "application/msword"},
#line 1251 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"srf", "image/x-raw-sony"},
#line 1522 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xcf", "image/x-xcf"},
#line 86 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"asics", "application/vnd.etsi.asic-s+zip"},
#line 1302 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tao", "application/vnd.tao.intent-module-archive"},
#line 93 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"atc", "application/vnd.acucorp"},
#line 1008 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"prf", "application/pics-rules"},
#line 1233 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"soc", "application/sgml-open-catalog"},
#line 309 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"drf", "image/x-raw-kodak"},
#line 1146 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"scq", "application/scvp-cv-request"},
#line 479 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gpx", "application/gpx+xml"},
#line 1051 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"r3d", "image/x-raw-red"},
#line 62 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aj", "text/x-aspectj"},
#line 445 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fts", "application/fits"},
#line 664 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lbe", "application/vnd.llamagraphics.life-balance.exchange+xml"},
#line 532 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hs", "text/x-haskell"},
#line 297 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"doc", "application/msword"},
#line 1180 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sgm", "text/sgml"},
#line 442 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ft9", "image/x-freehand"},
#line 333 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ear", "application/x-tika-java-enterprise-archive"},
#line 649 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kpt", "application/vnd.kde.kpresenter"},
#line 856 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nitf", "application/vnd.nitf"},
#line 959 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pgm", "image/x-portable-graymap"},
#line 1417 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vrml", "model/vrml"},
#line 491 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"grxml", "application/srgs+xml"},
#line 1238 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"spf", "application/vnd.yamaha.smaf-phrase"},
#line 991 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"potx", "application/vnd.openxmlformats-officedocument.presentationml.template"},
#line 447 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fvt", "video/vnd.fvt"},
#line 747 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mgp", "application/vnd.osgeo.mapguide.package"},
#line 302 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dotx", "application/vnd.openxmlformats-officedocument.wordprocessingml.template"},
#line 625 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"js", "text/javascript"},
#line 1062 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rdf", "application/rdf+xml"},
#line 914 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"otm", "application/vnd.oasis.opendocument.text-master"},
#line 678 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lrf", "application/octet-stream"},
#line 436 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ft", "text/plain"},
#line 748 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mgz", "application/vnd.proteus.magazine"},
#line 135 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"br", "application/x-brotli"},
#line 574 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ims", "application/vnd.ms-ims"},
#line 1237 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"spdf", "application/vnd.sealedmedia.softseal.pdf"},
#line 916 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ots", "application/vnd.oasis.opendocument.spreadsheet-template"},
#line 961 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pgp", "application/octet-stream"},
#line 299 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"docx", "application/vnd.openxmlformats-officedocument.wordprocessingml.document"},
#line 884 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"odi", "application/vnd.oasis.opendocument.image-template"},
#line 843 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"myi", "application/x-mysql-misam-compressed-index"},
#line 628 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jsp", "text/x-jsp"},
#line 64 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"am", "text/plain"},
#line 1273 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"str", "application/vnd.pg.format"},
#line 1209 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"slddrw", "application/sldworks"},
#line 573 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"imp", "application/vnd.accpac.simply.imp"},
#line 915 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"otp", "application/vnd.oasis.opendocument.presentation-template"},
#line 420 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"flx", "text/vnd.fmi.flexstor"},
#line 773 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mmas", "application/vnd.mindjet.mindmanager"},
#line 188 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cgm", "image/cgm"},
#line 251 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dae", "model/vnd.collada+xml"},
#line 1042 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qt", "video/quicktime"},
#line 388 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fb", "application/vnd.framemaker"},
#line 112 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bay", "image/x-raw-casio"},
#line 650 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kpxx", "application/vnd.ds-keypoint"},
#line 1009 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pro", "text/x-prolog"},
#line 1552 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlr", "application/x-tika-msworks-spreadsheet"},
#line 542 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hwpx", "application/hwp+zip"},
#line 409 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fh9", "image/x-freehand"},
#line 1075 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rif", "application/reginfo+xml"},
#line 1229 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smzip", "application/vnd.stepmania.package"},
#line 415 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"flc", "video/x-flc"},
#line 772 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mmap", "application/vnd.mindjet.mindmanager"},
#line 655 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kwd", "application/vnd.kde.kword"},
#line 1244 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"spq", "application/scvp-vp-request"},
#line 1321 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tgz", "application/gzip"},
#line 568 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ihtml", "text/plain"},
#line 189 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"chat", "application/x-chat"},
#line 670 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"link66", "application/vnd.route66.link66+xml"},
#line 878 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"oda", "application/oda"},
#line 677 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lostxml", "application/lost+xml"},
#line 1311 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tei", "application/tei+xml"},
#line 1166 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sema", "application/vnd.sema"},
#line 74 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"application", "application/x-ms-application"},
#line 1517 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xargs", "text/plain"},
#line 437 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ft10", "image/x-freehand"},
#line 1034 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pya", "audio/vnd.ms-playready.media.pya"},
#line 443 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ftc", "application/vnd.fluxtime.clip"},
#line 1425 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vssm", "application/vnd.ms-visio.stencil.macroEnabled.12"},
#line 651 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ksp", "application/vnd.kde.kspread"},
#line 1240 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"spo", "application/x-spss"},
#line 1424 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vss", "application/vnd.visio"},
#line 117 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bed", "application/vnd.realvnc.bed"},
#line 595 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"j2c", "image/x-jp2-codestream"},
#line 1580 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xq", "application/xquery"},
#line 1420 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vsdm", "application/vnd.ms-visio.drawing.macroEnabled.12"},
#line 343 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"el", "text/x-emacs-lisp"},
#line 548 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ica", "application/x-ica"},
#line 73 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"applescript", "text/x-applescript"},
#line 106 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"azs", "application/vnd.airzip.filesecure.azs"},
#line 917 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ott", "application/vnd.oasis.opendocument.text-template"},
#line 1563 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xmap", "text/plain"},
#line 1179 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sgl", "application/vnd.stardivision.writer-global"},
#line 1181 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sgml", "text/sgml"},
#line 374 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"exi", "application/exi"},
#line 10 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {".htaccess", "text/plain"},
#line 1419 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vsd", "application/vnd.visio"},
#line 276 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dgc", "application/x-dgc-compressed"},
#line 441 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ft8", "image/x-freehand"},
#line 739 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"meta", "text/plain"},
#line 560 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ifm", "application/vnd.shana.informed.formdata"},
#line 406 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fh50", "image/x-freehand"},
#line 656 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kwt", "application/vnd.kde.kword"},
#line 1043 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qtl", "application/x-quicktimeplayer"},
#line 382 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"f4a", "audio/mp4"},
#line 1314 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"texi", "application/x-texinfo"},
#line 774 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mmat", "application/vnd.mindjet.mindmanager"},
#line 835 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mwf", "application/vnd.MFER"},
#line 371 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"evc", "audio/EVRC"},
#line 909 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"otc", "application/vnd.oasis.opendocument.chart-template"},
#line 1428 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vstm", "application/vnd.ms-visio.template.macroEnabled.12"},
#line 1288 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"swf", "application/x-shockwave-flash"},
#line 243 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"curl", "application/vnd.curl"},
#line 1220 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smil", "application/smil+xml"},
#line 579 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"inkml", "application/inkml+xml"},
#line 53 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"afm", "application/x-font-type1"},
#line 323 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dwf", "model/vnd.dwf"},
#line 513 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hdr", "application/envi.hdr"},
#line 46 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"adf", "application/x-amiga-disk-format"},
#line 1171 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"setpay", "application/set-payment-initiation"},
#line 400 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fh10", "image/x-freehand"},
#line 1053 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"raf", "image/x-fuji-raf"},
#line 410 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fhc", "image/x-freehand"},
#line 422 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fm", "application/vnd.framemaker"},
#line 344 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"elc", "application/octet-stream"},
#line 519 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hep", "application/x-hep"},
#line 1007 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pre", "application/vnd.lotus-freelance"},
#line 823 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"msf", "application/vnd.epson.msf"},
#line 1259 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ssf", "application/vnd.epson.ssf"},
#line 54 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"afp", "application/vnd.ibm.modcap"},
#line 369 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"etx", "text/x-setext"},
#line 569 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"iif", "application/vnd.shana.informed.interchange"},
#line 1018 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"psf", "application/x-font-linux-psf"},
#line 1427 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vst", "application/vnd.visio"},
#line 408 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fh8", "image/x-freehand"},
#line 1426 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vssx", "application/vnd.ms-visio.stencil"},
#line 1546 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlex", "text/plain"},
#line 1142 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"scala", "text/x-scala"},
#line 336 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ecelp9600", "audio/vnd.nuera.ecelp9600"},
#line 583 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ipa", "application/octet-stream"},
#line 57 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aif", "audio/x-aiff"},
#line 800 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpe", "video/mpeg"},
#line 1421 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vsdx", "application/vnd.ms-visio.drawing"},
#line 632 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"k25", "image/x-raw-kodak"},
#line 354 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"entity", "application/vnd.nervana"},
#line 1418 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vsc", "application/vnd.vidsoft.vidconference"},
#line 405 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fh5", "image/x-freehand"},
#line 1423 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vsl", "text/plain"},
#line 1582 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xroles", "text/plain"},
#line 1591 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xtest", "text/plain"},
#line 780 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mmr", "image/vnd.fujixerox.edmics-mmr"},
#line 1455 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"webm", "audio/webm"},
#line 322 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dvi", "application/x-dvi"},
#line 1590 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xspf", "application/xspf+xml"},
#line 503 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"h261", "video/H261"},
#line 726 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mcurl", "text/vnd.curl.mcurl"},
#line 450 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fzs", "application/vnd.fuzzysheet"},
#line 1429 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vstx", "application/vnd.ms-visio.template"},
#line 1148 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"scurl", "text/vnd.curl.scurl"},
#line 570 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"iiq", "image/x-raw-phaseone"},
#line 971 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pki", "application/pkixcmp"},
#line 1459 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wgt", "application/widget"},
#line 770 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mli", "text/x-ocaml"},
#line 946 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pcurl", "application/vnd.curl.pcurl"},
#line 457 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gbr", "application/rpki-ghostbusters"},
#line 266 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dcurl", "text/vnd.curl.dcurl"},
#line 833 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"musicxml", "application/vnd.recordare.musicxml+xml"},
#line 175 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdmiq", "application/cdmi-queue"},
#line 1457 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"webp", "image/webp"},
#line 1021 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pskcxml", "application/pskc+xml"},
#line 122 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bkm", "application/vnd.nervana"},
#line 348 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"emm", "application/vnd.ibm.electronic-media"},
#line 419 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"flw", "application/vnd.kde.kivio"},
#line 743 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mf", "text/plain"},
#line 765 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mka", "audio/matroska"},
#line 1268 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sti", "application/vnd.sun.xml.impress.template"},
#line 669 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"license", "text/plain"},
#line 1362 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uris", "text/uri-list"},
#line 394 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fdf", "application/vnd.fdf"},
#line 174 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdmio", "application/cdmi-object"},
#line 759 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mj2", "video/MJ2"},
#line 275 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dfac", "application/vnd.dreamfactory"},
#line 1026 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pti", "application/vnd.pvi.ptid1"},
#line 526 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hpid", "application/vnd.hp-hpid"},
#line 760 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mjp2", "video/MJ2"},
#line 350 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"emz", "application/x-msmetafile"},
#line 482 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gram", "application/srgs"},
#line 461 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gex", "application/vnd.geometry-explorer"},
#line 1439 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"warc.gz", "application/warc+gz"},
#line 1149 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sd2", "application/x-sas-data-v6"},
#line 795 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mp4a", "audio/mp4"},
#line 145 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"c11amz", "application/vnd.cluetrust.cartomobile-config-pkg"},
#line 514 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"he5", "application/x-hdf"},
#line 268 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dd2", "application/vnd.oma.dd2+xml"},
#line 1564 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xmind", "application/x-xmind"},
#line 207 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"clpi", "video/MP2T"},
#line 483 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gramps", "application/x-gramps-xml"},
#line 589 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"iso19139", "text/iso19139+xml"},
#line 438 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ft11", "image/x-freehand"},
#line 881 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"odf", "application/vnd.oasis.opendocument.formula-template"},
#line 541 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hvs", "application/vnd.yamaha.hv-script"},
#line 736 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mef", "image/x-raw-mamiya"},
#line 598 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jar", "application/java-archive"},
#line 1168 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"semf", "application/vnd.semf"},
#line 314 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dta", "application/x-stata-dta"},
#line 452 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"g2w", "application/vnd.geoplan"},
#line 1262 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sswf", "video/vnd.sealed.swf"},
#line 1542 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xla", "application/vnd.ms-excel"},
#line 950 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pef", "image/x-raw-pentax"},
#line 282 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"diff", "text/x-diff"},
#line 271 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"def", "text/plain"},
#line 378 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ez", "application/andrew-inset"},
#line 540 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hvp", "application/vnd.yamaha.hv-voice"},
#line 197 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cla", "application/vnd.claymore"},
#line 956 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pfr", "application/font-tdpfr"},
#line 729 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mdb", "application/x-msaccess"},
#line 539 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hvd", "application/vnd.yamaha.hv-dic"},
#line 924 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"p7b", "application/x-pkcs7-certificates"},
#line 272 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"deploy", "application/octet-stream"},
#line 337 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ecma", "application/ecmascript"},
#line 948 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pdb", "application/vnd.palm"},
#line 1536 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xgrm", "text/plain"},
#line 607 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jks", "application/x-java-keystore"},
#line 1258 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sse", "application/vnd.kodak-descriptor"},
#line 523 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hlp", "text/plain"},
#line 1324 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tiff", "image/tiff"},
#line 535 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"htm", "text/html"},
#line 1373 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvm", "video/vnd.dece.mobile"},
#line 1005 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pqa", "application/vnd.palm"},
#line 1097 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rq", "application/sparql-query"},
#line 1281 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sv4crc", "application/x-sv4crc"},
#line 1375 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvs", "video/vnd.dece.sd"},
#line 868 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nsf", "application/vnd.lotus-notes"},
#line 633 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kar", "audio/midi"},
#line 346 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"eml", "message/rfc822"},
#line 401 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fh11", "image/x-freehand"},
#line 144 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"c11amc", "application/vnd.cluetrust.cartomobile-config"},
#line 326 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dxb", "image/vnd.dxb"},
#line 1306 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tbz2", "application/x-gtar"},
#line 1190 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sib", "application/x-sibelius"},
#line 821 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mseed", "application/vnd.fdsn.mseed"},
#line 1039 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qfx", "application/vnd.intu.qfx"},
#line 1374 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvp", "video/vnd.dece.pd"},
#line 584 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ipfix", "application/ipfix"},
#line 360 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"epsi", "application/postscript"},
#line 258 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dbase", "application/x-dbf"},
#line 1368 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvd", "application/vnd.dece.data"},
#line 279 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dib", "image/bmp"},
#line 1394 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvz", "application/vnd.dece.zip"},
#line 1430 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vsw", "application/vnd.visio"},
#line 41 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"acutc", "application/vnd.acucorp"},
#line 932 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pages", "application/vnd.apple.pages"},
#line 1286 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"svgz", "image/svg+xml"},
#line 347 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"emlx", "message/x-emlx"},
#line 421 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fly", "text/vnd.fly"},
#line 107 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"azw", "application/vnd.amazon.ebook"},
#line 318 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dtshd", "audio/vnd.dts.hd"},
#line 1037 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qbo", "application/vnd.intu.qbo"},
#line 960 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pgn", "application/x-chess-pgn"},
#line 565 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"igm", "application/vnd.insors.igm"},
#line 277 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dgn", "image/x-vnd.dgn"},
#line 495 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gtm", "application/vnd.groove-tool-message"},
#line 566 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"igs", "model/iges"},
#line 608 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jl", "text/x-common-lisp"},
#line 320 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dv", "video/DV"},
#line 554 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ico", "image/vnd.microsoft.icon"},
#line 706 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m4b", "audio/mp4"},
#line 667 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lha", "application/octet-stream"},
#line 1182 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sh", "application/x-sh"},
#line 1011 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"properties", "text/x-java-properties"},
#line 1524 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xcfgz", "image/x-compressed-xcf"},
#line 1329 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"toast", "application/x-roxio-toast"},
#line 233 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cryptonote", "application/vnd.rig.cryptonote"},
#line 427 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fods", "application/vnd.oasis.opendocument.flat.spreadsheet"},
#line 1219 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smi", "application/smil+xml"},
#line 1325 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tk", "text/x-tcl"},
#line 1365 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"utz", "application/vnd.uiq.theme"},
#line 468 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gl", "video/x-gl"},
#line 1376 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvt", "application/vnd.dece.ttml+xml"},
#line 609 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jlt", "application/vnd.hp-jlyt"},
#line 638 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"keys", "text/plain"},
#line 501 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"h", "text/plain"},
#line 538 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"htx", "text/html"},
#line 1393 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvx", "application/vnd.dece.unspecified"},
#line 83 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"asciidoc", "text/x-asciidoc"},
#line 511 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hbci", "application/vnd.hbci"},
#line 426 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fodp", "application/vnd.oasis.opendocument.flat.presentation"},
#line 94 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"atom", "application/atom+xml"},
#line 1232 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"so", "application/octet-stream"},
#line 1317 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"textile", "text/plain"},
#line 1444 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wb2", "application/x-quattro-pro"},
#line 533 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"htc", "text/plain"},
#line 481 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gqs", "application/vnd.grafeq"},
#line 372 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"evy", "application/x-envoy"},
#line 654 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ktz", "application/vnd.kahootz"},
#line 296 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"do", "application/x-stata-do"},
#line 536 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"html", "text/html"},
#line 1356 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ulx", "application/x-glulx"},
#line 572 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"imap", "application/x-imagemap"},
#line 1450 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wdb", "application/vnd.ms-works"},
#line 903 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"opus", "audio/ogg"},
#line 127 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bmp", "image/bmp"},
#line 202 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"clkp", "application/vnd.crick.clicker.palette"},
#line 531 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hqx", "application/mac-binhex40"},
#line 1163 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"see", "application/vnd.seemail"},
#line 414 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"flac", "audio/flac"},
#line 567 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"igx", "application/vnd.micrografx.igx"},
#line 1569 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xo", "application/vnd.olpc-sugar"},
#line 764 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mk3d", "video/x-matroska"},
#line 537 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"htmlx", "text/html"},
#line 1405 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vda", "image/x-tga"},
#line 851 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nef", "image/x-raw-nikon"},
#line 1499 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wspolicy", "application/wspolicy+xml"},
#line 977 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"plf", "application/vnd.pocketlearn"},
#line 428 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fodt", "application/vnd.oasis.opendocument.flat.text"},
#line 151 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cab", "application/vnd.ms-cab-compressed"},
#line 701 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m3a", "audio/mpeg"},
#line 551 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ice", "x-conference/x-cooltalk"},
#line 564 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"igl", "application/vnd.igloader"},
#line 648 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kpr", "application/vnd.kde.kpresenter"},
#line 1396 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vb", "text/x-vbdotnet"},
#line 653 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ktx", "image/ktx"},
#line 1109 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s1a", "application/vnd.sealedmedia.softseal.pdf"},
#line 640 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kia", "application/vnd.kidspiration"},
#line 1267 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"stf", "application/vnd.wt.stf"},
#line 1248 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sr2", "image/x-raw-sony"},
#line 964 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"php4", "text/x-php"},
#line 139 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bup", "application/x-dvd-ifo"},
#line 140 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bz", "application/x-bzip"},
#line 1183 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"shar", "application/x-shar"},
#line 1531 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xegrm", "text/plain"},
#line 38 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ace", "application/x-ace-compressed"},
#line 1431 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vtt", "text/vtt"},
#line 72 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"appcache", "text/cache-manifest"},
#line 1461 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wk", "application/x-123"},
#line 1407 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vhd", "text/x-vhdl"},
#line 1547 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlf", "application/x-xliff+xml"},
#line 203 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"clkt", "application/vnd.crick.clicker.template"},
#line 1501 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wv", "application/vnd.wv.csp+wbxml"},
#line 404 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fh40", "image/x-freehand"},
#line 904 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"orf", "image/x-olympus-orf"},
#line 205 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"clkx", "application/vnd.crick.clicker"},
#line 223 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cpio", "application/x-cpio"},
#line 1465 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wk4", "application/vnd.lotus-1-2-3"},
#line 451 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"g", "text/plain"},
#line 1301 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"taglet", "application/vnd.mynfc"},
#line 781 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mng", "video/x-mng"},
#line 168 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdbcmsg", "application/vnd.contact.cmsg"},
#line 373 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"exe", "application/x-msdownload"},
#line 115 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bdf", "application/x-font-bdf"},
#line 398 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fgd", "application/x-director"},
#line 366 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"esa", "application/vnd.osgi.subsystem"},
#line 762 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mjpg", "video/x-motion-jpeg"},
#line 1341 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ttf", "font/ttf"},
#line 789 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mp2", "video/mpeg"},
#line 984 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"png", "image/png"},
#line 1023 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pspimage", "image/x-paintshoppro"},
#line 1318 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tfi", "application/thraud+xml"},
#line 295 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dng", "image/x-adobe-dng"},
#line 898 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"onetoc", "application/onenote"},
#line 892 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ogm", "video/x-ogm"},
#line 683 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lua", "text/x-lua"},
#line 226 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cr2", "image/x-canon-cr2"},
#line 953 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pfa", "application/x-font-type1"},
#line 681 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ltf", "application/vnd.frogans.ltf"},
#line 66 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"amfm", "application/x-font-adobe-metric"},
#line 690 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lzma", "application/x-lzma"},
#line 357 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"eot", "application/vnd.ms-fontobject"},
#line 509 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"handlers", "text/plain"},
#line 84 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"asf", "application/vnd.ms-asf"},
#line 1184 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"shf", "application/shf+xml"},
#line 900 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"opf", "application/oebps-package+xml"},
#line 841 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mxu", "video/vnd.mpegurl"},
#line 1507 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"x3dbz", "model/x3d+binary"},
#line 716 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"manifest", "text/plain"},
#line 362 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"erf", "image/x-epson-erf"},
#line 1292 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sxg", "application/vnd.sun.xml.writer.global"},
#line 516 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"heics", "image/heic-sequence"},
#line 791 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mp2a", "audio/mpeg"},
#line 1399 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vcard", "text/vcard"},
#line 1218 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smht", "application/vnd.sealed.mht"},
#line 1312 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"teicorpus", "application/tei+xml"},
#line 1193 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sig", "application/pgp-signature"},
#line 356 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"eol", "audio/vnd.digital-winds"},
#line 1471 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wma", "audio/x-ms-wma"},
#line 1412 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vm", "text/plain"},
#line 512 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hdf", "application/x-hdf"},
#line 99 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"avi", "video/x-msvideo"},
#line 643 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kmz", "application/vnd.google-earth.kmz"},
#line 68 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"amr", "audio/AMR"},
#line 1395 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"v", "text/x-verilog"},
#line 1408 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vhdl", "text/x-vhdl"},
#line 610 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jmx", "text/plain"},
#line 359 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"epsf", "application/postscript"},
#line 588 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"iso", "application/x-iso9660-image"},
#line 515 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"heic", "image/heic"},
#line 722 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mbk", "application/vnd.Mobius.MBK"},
#line 708 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m4u", "video/vnd.mpegurl"},
#line 500 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gz", "application/gzip"},
#line 637 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"key", "application/vnd.apple.keynote"},
#line 287 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"djv", "image/vnd.djvu"},
#line 1067 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"req", "application/vnd.nervana"},
#line 602 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jdf", "application/x-jeol-jdf"},
#line 1361 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uri", "text/uri-list"},
#line 458 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gca", "application/x-gca-compressed"},
#line 261 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dbk", "application/docbook+xml"},
#line 675 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lnk", "application/x-ms-shortcut"},
#line 894 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ogx", "application/ogg"},
#line 89 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aso", "application/vnd.accpac.simply.aso"},
#line 693 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m14", "application/x-msmediaview"},
#line 470 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gmx", "application/vnd.gmx"},
#line 1108 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s14", "video/vnd.sealed.mpeg4"},
#line 522 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hif", "image/heic"},
#line 1540 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xhvml", "application/xv+xml"},
#line 1453 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"webapp", "application/x-web-app-manifest+json"},
#line 334 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ecelp4800", "audio/vnd.nuera.ecelp4800"},
#line 242 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cu", "application/x-cu-seeme"},
#line 1466 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wkq", "application/x-quattro-pro"},
#line 397 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fg5", "application/vnd.fujitsu.oasysgp"},
#line 1304 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tbk", "application/x-toolbook"},
#line 469 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gml", "application/gml+xml"},
#line 776 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mmf", "application/vnd.smaf"},
#line 740 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"meta4", "application/metalink4+xml"},
#line 1216 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smf", "application/vnd.stardivision.math"},
#line 936 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"patch", "text/x-diff"},
#line 605 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jif", "image/jpeg"},
#line 712 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mag", "application/vnd.ecowin.chart"},
#line 1200 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"siv", "application/sieve"},
#line 496 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gtw", "model/vnd.gtw"},
#line 1354 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ufd", "application/vnd.ufdl"},
#line 150 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"c4u", "application/vnd.clonk.c4group"},
#line 1309 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tcsh", "application/x-csh"},
#line 558 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ief", "image/ief"},
#line 148 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"c4g", "application/vnd.clonk.c4group"},
#line 498 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gxf", "application/gxf"},
#line 642 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kml", "application/vnd.google-earth.kml+xml"},
#line 1132 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bpgm", "application/x-sas-program-data"},
#line 854 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ngdat", "application/vnd.nokia.n-gage.data"},
#line 869 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ntf", "application/vnd.nitf"},
#line 700 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m3", "text/x-modula"},
#line 1082 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rmi", "audio/midi"},
#line 466 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gif", "image/gif"},
#line 59 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aiff", "audio/x-aiff"},
#line 1174 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sfd-hdstx", "application/vnd.hydrostatix.sof-data"},
#line 688 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lz4", "application/x-lz4"},
#line 1127 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bdmd", "application/x-sas-dmdb"},
#line 906 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"osf", "application/vnd.yamaha.openscoreformat"},
#line 1608 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"z3", "application/x-zmachine"},
#line 130 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"boz", "application/x-bzip2"},
#line 1360 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"upa", "application/vnd.hbci"},
#line 709 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m4v", "video/vnd.objectvideo"},
#line 804 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpga", "audio/mpeg"},
#line 1525 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xconf", "text/x-config"},
#line 45 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"adb", "text/x-ada"},
#line 204 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"clkw", "application/vnd.crick.clicker.wordbank"},
#line 170 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cdkey", "application/vnd.mediastation.cdkey"},
#line 703 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m3u8", "application/vnd.apple.mpegurl"},
#line 1509 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"x3dvz", "model/x3d+vrml"},
#line 1133 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bput", "application/x-sas-putility"},
#line 1126 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bdat", "application/x-sas-data"},
#line 211 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cmdf", "chemical/x-cmdf"},
#line 1300 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"t3", "application/x-t3vm-image"},
#line 416 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fli", "video/x-fli"},
#line 21 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"7z", "application/x-7z-compressed"},
#line 1016 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"psb", "application/vnd.3gpp.pic-bw-small"},
#line 1222 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smo", "video/vnd.sealedmedia.softseal.mov"},
#line 1511 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"x3f", "image/x-raw-sigma"},
#line 1136 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sav", "application/x-spss"},
#line 367 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"esf", "application/vnd.epson.esf"},
#line 444 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fti", "application/vnd.anser-web-funds-transfer-initiation"},
#line 756 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"minigsf", "audio/x-psf"},
#line 129 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"box", "application/vnd.previewsystems.box"},
#line 1125 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bcat", "application/x-sas-catalog"},
#line 1114 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s1q", "video/vnd.sealedmedia.softseal.mov"},
#line 1355 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ufdl", "application/vnd.ufdl"},
#line 1150 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sd7", "application/x-sas-data"},
#line 1178 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sgi", "image/sgi"},
#line 1254 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sru", "application/sru+xml"},
#line 996 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ppj", "image/vnd.adobe.premiere"},
#line 931 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pack", "application/x-java-pack200"},
#line 1327 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tmo", "application/vnd.tmobile-livetv"},
#line 1144 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"schemas", "text/plain"},
#line 1102 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rtf", "application/rtf"},
#line 199 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"classpath", "text/plain"},
#line 621 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jpgm", "image/jpm"},
#line 913 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"oti", "application/vnd.oasis.opendocument.image-template"},
#line 1473 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wmf", "image/wmf"},
#line 822 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mseq", "application/vnd.mseq"},
#line 389 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fb2", "application/x-fictionbook+xml"},
#line 1189 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"si7", "application/x-sas-data-index"},
#line 67 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ami", "application/vnd.amiga.ami"},
#line 718 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"markdown", "text/markdown"},
#line 1534 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xfdf", "application/vnd.adobe.xfdf"},
#line 1088 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rng", "text/plain"},
#line 802 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpg", "video/mpeg"},
#line 646 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kom", "application/vnd.hbci"},
#line 187 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cgi", "text/x-cgi"},
#line 1092 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"roles", "text/plain"},
#line 304 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dpg", "application/vnd.dpgraph"},
#line 370 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"eva", "application/x-eva"},
#line 592 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ivf", "video/x-ivf"},
#line 644 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kne", "application/vnd.Kinar"},
#line 26 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"aab", "application/x-authorware-bin"},
#line 1586 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xslfo", "application/xslfo+xml"},
#line 1456 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"webmanifest", "application/manifest+json"},
#line 1320 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tga", "image/x-tga"},
#line 156 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cb7", "application/x-cbr"},
#line 475 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gp4", "application/x-guitar-pro"},
#line 803 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpg4", "audio/mp4"},
#line 825 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"msh", "model/mesh"},
#line 895 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"omdoc", "application/omdoc+xml"},
#line 485 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"grb1", "application/x-grib"},
#line 879 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"odb", "application/vnd.oasis.opendocument.base"},
#line 627 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jsonml", "application/jsonml+json"},
#line 525 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hpgl", "application/vnd.hp-HPGL"},
#line 1046 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"qxb", "application/vnd.Quark.QuarkXPress"},
#line 454 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"g3w", "application/vnd.geospace"},
#line 270 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"deb", "application/x-debian-package"},
#line 845 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"n3", "text/plain"},
#line 341 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"egrm", "text/plain"},
#line 1110 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s1e", "application/vnd.sealed.xls"},
#line 1401 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vcf", "text/x-vcard"},
#line 549 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"icb", "image/x-tga"},
#line 1441 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wav", "audio/vnd.wave"},
#line 446 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fv", "text/plain"},
#line 1118 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sa7", "application/x-sas-access"},
#line 1359 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uoml", "application/vnd.uoml+xml"},
#line 618 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jpf", "image/jpx"},
#line 1280 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sv4cpio", "application/x-sv4cpio"},
#line 1131 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bndx", "application/x-sas-data-index"},
#line 235 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"csh", "application/x-csh"},
#line 1445 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wb3", "application/x-quattro-pro"},
#line 399 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fh", "image/x-freehand"},
#line 383 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"f4b", "audio/mp4"},
#line 746 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mg", "text/x-modula"},
#line 463 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ggs", "application/vnd.geogebra.slides"},
#line 1416 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vox", "application/x-authorware-bin"},
#line 95 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"atomcat", "application/atomcat+xml"},
#line 1104 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rw2", "image/x-raw-panasonic"},
#line 425 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fo", "application/xslfo+xml"},
#line 325 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dwg", "image/vnd.dwg"},
#line 872 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"oa2", "application/vnd.fujitsu.oasys2"},
#line 714 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"maker", "application/vnd.framemaker"},
#line 626 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"json", "application/json"},
#line 429 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"for", "text/x-fortran"},
#line 824 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"msg", "application/vnd.ms-outlook"},
#line 505 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"h264", "video/H264"},
#line 578 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ink", "application/inkml+xml"},
#line 1140 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sc7", "application/x-sas-catalog"},
#line 55 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ahead", "application/vnd.ahead.space"},
#line 1090 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"roa", "application/rpki-roa"},
#line 37 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"accdb", "application/x-msaccess"},
#line 652 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ktr", "application/vnd.kahootz"},
#line 563 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"iges", "model/iges"},
#line 1315 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"texinfo", "application/x-texinfo"},
#line 464 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ggt", "application/vnd.geogebra.tool"},
#line 738 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mesh", "model/mesh"},
#line 1620 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"zoo", "application/x-zoo"},
#line 403 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fh4", "image/x-freehand"},
#line 1597 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xwelcome", "text/plain"},
#line 98 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"au", "audio/basic"},
#line 1249 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sr7", "application/x-sas-itemstor"},
#line 792 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mp3", "audio/mpeg"},
#line 699 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m2v", "video/mpeg"},
#line 1452 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"weba", "audio/webm"},
#line 853 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nfo", "text/x-nfo"},
#line 227 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cr3", "image/x-canon-cr3"},
#line 834 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mvb", "application/x-msmediaview"},
#line 246 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cwk", "application/x-appleworks"},
#line 16 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"3gp", "video/3gpp"},
#line 1030 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pvb", "application/vnd.3gpp.pic-bw-var"},
#line 518 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"heifs", "image/heif-sequence"},
#line 321 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dvb", "video/vnd.dvb.file"},
#line 17 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"3gpp", "video/3gpp"},
#line 1234 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sp7", "application/x-sas-putility"},
#line 349 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"emma", "application/emma+xml"},
#line 910 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"otf", "font/otf"},
#line 1458 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wg", "application/vnd.pmi.widget"},
#line 1364 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ustar", "application/x-ustar"},
#line 975 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"plb", "application/vnd.3gpp.pic-bw-large"},
#line 487 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gre", "application/vnd.geometry-explorer"},
#line 1129 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bitm", "application/x-sas-itemstor"},
#line 417 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"flo", "application/vnd.micrografx.flo"},
#line 432 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"frame", "application/vnd.framemaker"},
#line 1602 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"yang", "application/yang"},
#line 65 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"amf", "application/x-amf"},
#line 876 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"obj", "application/x-tgif"},
#line 492 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gsf", "application/x-font-ghostscript"},
#line 616 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jpe", "image/jpeg"},
#line 1336 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"troff", "text/troff"},
#line 546 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"i3", "text/x-modula"},
#line 120 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bibtex", "application/x-bibtex-text-file"},
#line 1122 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bacs", "application/x-sas-access"},
#line 1339 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"tsv", "text/tab-separated-values"},
#line 315 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dtb", "application/x-dtbook+xml"},
#line 1010 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"project", "text/plain"},
#line 1123 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7baud", "application/x-sas-audit"},
#line 1554 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlsb", "application/vnd.ms-excel.sheet.binary.macroEnabled.12"},
#line 883 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"odg", "application/vnd.oasis.opendocument.graphics"},
#line 741 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"metalink", "application/metalink+xml"},
#line 241 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"csv", "text/csv"},
#line 411 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fig", "application/x-xfig"},
#line 1567 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xmt_bin", "model/vnd.parasolid.transmit.binary"},
#line 102 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"awb", "audio/AMR-WB"},
#line 1372 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvi", "image/vnd.dece.graphic"},
#line 1422 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vsf", "application/vnd.vsf"},
#line 582 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"iota", "application/vnd.astraea-software.iota"},
#line 105 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"azf", "application/vnd.airzip.filesecure.azf"},
#line 79 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"arj", "application/x-arj"},
#line 1463 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wk2", "application/vnd.lotus-1-2-3"},
#line 40 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"acu", "application/vnd.acucobol"},
#line 761 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mjpeg", "video/x-motion-jpeg"},
#line 220 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"conf", "text/plain"},
#line 1367 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uva", "audio/vnd.dece.audio"},
#line 119 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bib", "application/x-bibtex-text-file"},
#line 1060 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rcprofile", "application/vnd.ipunplugged.rcprofile"},
#line 972 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pkipath", "application/pkix-pkipath"},
#line 136 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"brotli", "application/x-brotli"},
#line 1064 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"readme", "text/plain"},
#line 85 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"asice", "application/vnd.etsi.asic-e+zip"},
#line 547 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ibooks", "application/x-ibooks+zip"},
#line 600 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jb2", "image/x-jbig2"},
#line 1256 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ss7", "application/x-sas-program-data"},
#line 1035 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pyv", "video/vnd.ms-playready.media.pyv"},
#line 1358 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"unityweb", "application/vnd.unity"},
#line 647 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kon", "application/vnd.kde.kontour"},
#line 1406 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vf", "application/x-tex-virtual-font"},
#line 335 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ecelp7470", "audio/vnd.nuera.ecelp7470"},
#line 114 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bcpio", "application/x-bcpio"},
#line 126 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bmi", "application/vnd.bmi"},
#line 1500 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wtb", "application/vnd.webturbo"},
#line 1492 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wq2", "application/x-quattro-pro"},
#line 561 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ifo", "application/x-dvd-ifo"},
#line 865 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nroff", "text/troff"},
#line 385 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"f4v", "video/mp4"},
#line 934 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"parquet", "application/vnd.apache.parquet"},
#line 1539 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xhtml2", "application/xhtml+xml"},
#line 11 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"123", "application/vnd.lotus-1-2-3"},
#line 629 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"junit", "text/plain"},
#line 978 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"plj", "audio/vnd.everad.plj"},
#line 100 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"avif", "image/avif"},
#line 245 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cwiki", "text/plain"},
#line 585 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ipk", "application/vnd.shana.informed.package"},
#line 1512 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"x_b", "model/vnd.parasolid.transmit.binary"},
#line 923 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"p12", "application/x-pkcs12"},
#line 521 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hh", "text/plain"},
#line 1285 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"svg", "image/svg+xml"},
#line 345 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"emf", "image/emf"},
#line 529 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hprof.txt", "application/vnd.java.hprof.text"},
#line 71 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"apk", "application/vnd.android.package-archive"},
#line 396 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fff", "image/x-raw-imacon"},
#line 899 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"onetoc2", "application/onenote"},
#line 386 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"f77", "text/x-fortran"},
#line 970 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pkg", "application/octet-stream"},
#line 200 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"clj", "text/x-clojure"},
#line 1504 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"x32", "application/x-authorware-bin"},
#line 460 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"geo", "application/vnd.dynageo"},
#line 1277 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sub", "image/vnd.dvb.subtitle"},
#line 1385 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvm", "video/vnd.dece.mobile"},
#line 1029 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pub", "application/x-mspublisher"},
#line 497 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gv", "text/vnd.graphviz"},
#line 562 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ig", "text/x-modula"},
#line 1387 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvs", "video/vnd.dece.sd"},
#line 14 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"3fr", "image/x-hasselblad-3fr"},
#line 257 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"davmount", "application/davmount+xml"},
#line 1386 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvp", "video/vnd.dece.pd"},
#line 1330 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"torrent", "application/x-bittorrent"},
#line 545 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"i2g", "application/vnd.intergeo"},
#line 330 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dylib", "application/octet-stream"},
#line 1380 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvd", "application/vnd.dece.data"},
#line 1392 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvz", "application/vnd.dece.zip"},
#line 905 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"org", "application/vnd.lotus-organizer"},
#line 1506 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"x3db", "model/x3d+binary"},
#line 35 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ac3", "audio/ac3"},
#line 1596 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xweb", "text/plain"},
#line 954 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pfb", "application/x-font-type1"},
#line 474 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"go", "text/x-go"},
#line 768 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mkv", "video/x-matroska"},
#line 941 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pcapng", "application/vnd.tcpdump.pcapng"},
#line 1269 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"stk", "application/hyperstudio"},
#line 332 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"e57", "model/e57"},
#line 890 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"oga", "audio/ogg"},
#line 494 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gtar", "application/x-gtar"},
#line 1369 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvf", "application/vnd.dece.data"},
#line 1217 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smh", "application/vnd.sealed.mht"},
#line 109 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bash", "application/x-sh"},
#line 1352 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uc2", "application/x-uc2-compressed"},
#line 1388 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvt", "application/vnd.dece.ttml+xml"},
#line 797 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mp4v", "video/mp4"},
#line 1391 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvx", "application/vnd.dece.unspecified"},
#line 1065 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"reg", "application/x-msdownload"},
#line 103 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"awk", "text/x-awk"},
#line 603 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jfi", "image/jpeg"},
#line 1415 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vor", "application/vnd.stardivision.writer"},
#line 520 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hfa", "application/x-erdas-hfa"},
#line 873 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"oa3", "application/vnd.fujitsu.oasys3"},
#line 1111 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"s1h", "application/vnd.sealedmedia.softseal.html"},
#line 801 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpeg", "video/mpeg"},
#line 1548 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xliff", "application/x-xliff+xml"},
#line 611 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jng", "video/x-jng"},
#line 615 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jp2", "image/jp2"},
#line 96 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"atomsvc", "application/atomsvc+xml"},
#line 783 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mobi", "application/x-mobipocket-ebook"},
#line 484 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"grb", "application/x-grib"},
#line 480 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gqf", "application/vnd.grafeq"},
#line 857 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nlu", "application/vnd.neurolanguage.nlu"},
#line 111 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bau", "application/vnd.openofficeorg.autotext"},
#line 473 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gnumeric", "application/x-gnumeric"},
#line 124 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bleep", "application/x-bleeper"},
#line 689 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"lzh", "application/octet-stream"},
#line 1130 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bmdb", "application/x-sas-mddb"},
#line 465 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ghf", "application/vnd.groove-help"},
#line 871 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"nzb", "application/x-nzb"},
#line 291 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dmg", "application/x-apple-diskimage"},
#line 1226 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smpg", "video/vnd.sealed.mpeg4"},
#line 1282 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sv7", "application/x-sas-view"},
#line 288 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"djvu", "image/vnd.djvu"},
#line 599 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"java", "text/x-java-source"},
#line 702 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m3u", "audio/x-mpegurl"},
#line 1366 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uu", "text/x-uuencode"},
#line 1310 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"teacher", "application/vnd.smart.teacher"},
#line 216 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cob", "text/x-cobol"},
#line 1264 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"st7", "application/x-sas-audit"},
#line 517 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"heif", "image/heif"},
#line 1454 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"webarchive", "application/x-webarchive"},
#line 1228 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smv", "audio/SMV"},
#line 430 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fp7", "application/x-filemaker"},
#line 1481 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"woff", "font/woff"},
#line 870 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"numbers", "application/vnd.apple.numbers"},
#line 1175 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sfdu", "application/x-sfdu"},
#line 1397 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vbk", "audio/vnd.nortel.vbk"},
#line 963 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"php3", "text/x-php"},
#line 113 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bck", "application/x-VMSBACKUP"},
#line 614 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"joda", "application/vnd.joost.joda-archive"},
#line 694 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m1v", "video/mpeg"},
#line 1464 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wk3", "application/vnd.lotus-1-2-3"},
#line 958 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"pgb", "image/vnd.globalgraphics.pgb"},
#line 453 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"g3", "image/g3fax"},
#line 183 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"cfg", "text/x-config"},
#line 132 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bpg", "image/x-bpg"},
#line 1410 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"viv", "video/vnd.vivo"},
#line 477 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gph", "application/vnd.FloGraphIt"},
#line 594 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ivu", "application/vnd.immervision-ivu"},
#line 1134 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7butl", "application/x-sas-utility"},
#line 439 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ft12", "image/x-freehand"},
#line 1068 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"request", "application/vnd.nervana"},
#line 1177 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sfv", "text/x-sfv"},
#line 1508 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"x3dv", "model/x3d+vrml"},
#line 137 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bsh", "text/plain"},
#line 133 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bpk", "application/octet-stream"},
#line 20 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"4th", "text/x-forth"},
#line 19 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"3mf", "application/vnd.ms-package.3dmanufacturing-3dmodel+xml"},
#line 1225 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smp3", "audio/vnd.sealedmedia.softseal.mpeg"},
#line 138 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"btif", "image/prs.btif"},
#line 1478 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"wmv", "audio/x-ms-wmv"},
#line 1020 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"psflib", "audio/x-psf"},
#line 1402 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vcg", "application/vnd.groove-vcard"},
#line 1215 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sm7", "application/x-sas-mddb"},
#line 402 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fh12", "image/x-freehand"},
#line 1091 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"roff", "text/troff"},
#line 619 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jpg", "image/jpeg"},
#line 528 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"hprof", "application/vnd.java.hprof "},
#line 692 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"m13", "application/x-msmediaview"},
#line 559 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ifb", "text/calendar"},
#line 476 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gpg", "application/octet-stream"},
#line 737 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"memgraph", "application/x-memgraph"},
#line 590 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"itk", "text/x-tcl"},
#line 340 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"efif", "application/vnd.picsel"},
#line 863 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"notice", "text/plain"},
#line 1276 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"su7", "application/x-sas-utility"},
#line 912 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"oth", "application/vnd.oasis.opendocument.text-web"},
#line 365 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"es3", "application/vnd.eszigno3+xml"},
#line 805 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mpkg", "application/vnd.apple.installer+xml"},
#line 676 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"log", "text/plain"},
#line 1411 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vivo", "video/vnd.vivo"},
#line 1135 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bvew", "application/x-sas-view"},
#line 639 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"kfo", "application/vnd.kde.kformula"},
#line 490 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"grv", "application/vnd.groove-injector"},
#line 1581 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xquery", "application/xquery"},
#line 634 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"karbon", "application/vnd.kde.karbon"},
#line 259 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dbase3", "application/x-dbf"},
#line 1173 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sf7", "application/x-sas-fdb"},
#line 787 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mov", "video/quicktime"},
#line 1353 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"udeb", "application/x-debian-package"},
#line 793 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"mp3g", "video/mpeg"},
#line 1523 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xcfbz2", "image/x-compressed-xcf"},
#line 123 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"blb", "application/x-blorb"},
#line 379 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ez2", "application/vnd.ezpix-album"},
#line 471 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gnucash", "application/x-gnucash"},
#line 911 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"otg", "application/vnd.oasis.opendocument.graphics-template"},
#line 1551 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"xlog", "text/plain"},
#line 418 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"flv", "video/x-flv"},
#line 713 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"makefile", "text/x-makefile"},
#line 1073 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rgb", "image/x-rgb"},
#line 118 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bh2", "application/vnd.fujitsu.oasysprs"},
#line 571 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"imagemap", "application/x-imagemap"},
#line 1128 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bfdb", "application/x-sas-fdb"},
#line 612 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jnilib", "application/x-java-jnilib"},
#line 395 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fe_launch", "application/vnd.denovo.fcselayout-link"},
#line 1172 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"setreg", "application/set-registration-initiation"},
#line 604 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jfif", "image/jpeg"},
#line 504 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"h263", "video/H263"},
#line 440 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ft7", "image/x-freehand"},
#line 141 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"bz2", "application/x-bzip2"},
#line 1371 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvh", "video/vnd.dece.hd"},
#line 1384 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvi", "image/vnd.dece.graphic"},
#line 988 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"portpkg", "application/vnd.macports.portpkg"},
#line 493 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gslib", "audio/x-psf"},
#line 361 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"epub", "application/epub+zip"},
#line 368 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"et3", "application/vnd.eszigno3+xml"},
#line 407 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"fh7", "image/x-freehand"},
#line 1379 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvva", "audio/vnd.dece.audio"},
#line 1223 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"smov", "video/vnd.sealedmedia.softseal.mov"},
#line 1351 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"u32", "application/x-authorware-bin"},
#line 1377 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvu", "video/vnd.uvvu.mp4"},
#line 1370 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvg", "image/vnd.dece.graphic"},
#line 486 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"grb2", "application/x-grib"},
#line 278 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"dgnlib", "image/vnd.dgn"},
#line 1378 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvv", "video/vnd.dece.video"},
#line 1432 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vtu", "model/vnd.vtu"},
#line 617 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jpeg", "image/jpeg"},
#line 201 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"clkk", "application/vnd.crick.clicker.keyboard"},
#line 380 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ez3", "application/vnd.ezpix-package"},
#line 1381 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvf", "application/vnd.dece.data"},
#line 844 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"n-gage", "application/vnd.nokia.n-gage.symbian.install"},
#line 1357 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"umj", "application/vnd.umajin"},
#line 489 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"groovy", "text/x-groovy"},
#line 620 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jpg2", "image/jp2"},
#line 891 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ogg", "audio/ogg"},
#line 1124 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"sas7bbak", "application/x-sas-backup"},
#line 788 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"movie", "video/x-sgi-movie"},
#line 1414 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vob", "video/x-ms-vob"},
#line 893 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ogv", "video/ogg"},
#line 534 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"htke", "application/vnd.kenameaapp"},
#line 1085 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"rmvb", "application/vnd.rn-realmedia-vbr"},
#line 472 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gnumakefile", "text/x-makefile"},
#line 1413 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"vmdk", "application/x-vmdk"},
#line 601 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jbig2", "image/x-jbig2"},
#line 462 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"ggb", "application/vnd.geogebra.file"},
#line 15 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"3g2", "video/3gpp2"},
#line 18 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"3gpp2", "video/3gpp2"},
#line 1482 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"woff2", "font/woff2"},
#line 896 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"onepkg", "application/onenote"},
#line 478 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"gpkg", "application/x-geopackage"},
#line 125 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"blorb", "application/x-blorb"},
#line 622 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"jpgv", "video/JPEG"},
#line 218 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"coffee", "text/x-coffeescript"},
#line 221 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"config", "text/x-config"},
#line 907 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"osfpvg", "application/vnd.yamaha.openscoreformat.osfpvg+xml"},
#line 862 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"notebook", "application/x-smarttech-notebook"},
#line 1383 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvh", "video/vnd.dece.hd"},
#line 128 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"book", "application/vnd.framemaker"},
#line 1389 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvu", "video/vnd.uvvu.mp4"},
#line 1382 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
      {"uvvg", "image/vnd.dece.graphic"},
#line 1390 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/extensions.gperf"
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
