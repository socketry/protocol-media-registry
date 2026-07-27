/* ANSI-C code produced by gperf version 3.0.3 */
/* Command-line: /Library/Developer/CommandLineTools/usr/bin/gperf -Ct --output-file /Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.h /Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf  */
/* Computed positions: -k'1,6-11,13-27,29,32-33,39,47,65,69,$' */

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

#line 8 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
struct MediaTypeRecord { const char *name; const char *encoding; const char *extensions; };
/* maximum key range = 76251, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
record_hash (register const char *str, register unsigned int len)
{
  static const unsigned int asso_values[] =
    {
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369,     0, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369,  7771,    25,   590,    10,  2760,     0,   125,
       1130,  2410,    25,    30,    80,     0,    25,    15, 76369, 76369,
      76369, 76369, 76369, 76369, 76369,    55,     5,    10,     5,     0,
         85,    35,     5,    50,     0,     5,     0,    25,    10,    30,
          0,    10,    45,    20,    35,     0,    50,    15,     0,     0,
      76369, 76369, 76369, 76369, 76369,     0, 76369,    15,  3388,    10,
         30,    70,  1715,  2570, 11152,     5,  9577, 12787,    50,    45,
          0,    10,   195,  8056,  1040,     0,   100,  5136,   245,  8119,
        430, 13647,   338,     0, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369, 76369,
      76369, 76369, 76369, 76369, 76369, 76369, 76369
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[68]];
      /*FALLTHROUGH*/
      case 68:
      case 67:
      case 66:
      case 65:
        hval += asso_values[(unsigned char)str[64]+1];
      /*FALLTHROUGH*/
      case 64:
      case 63:
      case 62:
      case 61:
      case 60:
      case 59:
      case 58:
      case 57:
      case 56:
      case 55:
      case 54:
      case 53:
      case 52:
      case 51:
      case 50:
      case 49:
      case 48:
      case 47:
        hval += asso_values[(unsigned char)str[46]];
      /*FALLTHROUGH*/
      case 46:
      case 45:
      case 44:
      case 43:
      case 42:
      case 41:
      case 40:
      case 39:
        hval += asso_values[(unsigned char)str[38]];
      /*FALLTHROUGH*/
      case 38:
      case 37:
      case 36:
      case 35:
      case 34:
      case 33:
        hval += asso_values[(unsigned char)str[32]];
      /*FALLTHROUGH*/
      case 32:
        hval += asso_values[(unsigned char)str[31]];
      /*FALLTHROUGH*/
      case 31:
      case 30:
      case 29:
        hval += asso_values[(unsigned char)str[28]];
      /*FALLTHROUGH*/
      case 28:
      case 27:
        hval += asso_values[(unsigned char)str[26]];
      /*FALLTHROUGH*/
      case 26:
        hval += asso_values[(unsigned char)str[25]];
      /*FALLTHROUGH*/
      case 25:
        hval += asso_values[(unsigned char)str[24]];
      /*FALLTHROUGH*/
      case 24:
        hval += asso_values[(unsigned char)str[23]];
      /*FALLTHROUGH*/
      case 23:
        hval += asso_values[(unsigned char)str[22]];
      /*FALLTHROUGH*/
      case 22:
        hval += asso_values[(unsigned char)str[21]];
      /*FALLTHROUGH*/
      case 21:
        hval += asso_values[(unsigned char)str[20]];
      /*FALLTHROUGH*/
      case 20:
        hval += asso_values[(unsigned char)str[19]+1];
      /*FALLTHROUGH*/
      case 19:
        hval += asso_values[(unsigned char)str[18]];
      /*FALLTHROUGH*/
      case 18:
        hval += asso_values[(unsigned char)str[17]];
      /*FALLTHROUGH*/
      case 17:
        hval += asso_values[(unsigned char)str[16]];
      /*FALLTHROUGH*/
      case 16:
        hval += asso_values[(unsigned char)str[15]];
      /*FALLTHROUGH*/
      case 15:
        hval += asso_values[(unsigned char)str[14]];
      /*FALLTHROUGH*/
      case 14:
        hval += asso_values[(unsigned char)str[13]];
      /*FALLTHROUGH*/
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      /*FALLTHROUGH*/
      case 12:
      case 11:
        hval += asso_values[(unsigned char)str[10]];
      /*FALLTHROUGH*/
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      /*FALLTHROUGH*/
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      /*FALLTHROUGH*/
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

const struct MediaTypeRecord *
lookup_record (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 3128,
      MIN_WORD_LENGTH = 7,
      MAX_WORD_LENGTH = 84,
      MIN_HASH_VALUE = 118,
      MAX_HASH_VALUE = 76368
    };

  static const struct MediaTypeRecord wordlist[] =
    {
#line 2805 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/css", "8bit", "css"},
#line 2809 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/dns", "quoted-printable", 0},
#line 2794 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/RED", "quoted-printable", 0},
#line 398 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/nss", "base64", 0},
#line 48 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/PDX", "base64", 0},
#line 281 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ion", "base64", 0},
#line 28 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/DCD", "base64", 0},
#line 2795 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/asciidoc", "quoted-printable", 0},
#line 190 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dns", "base64", 0},
#line 47 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ODX", "base64", 0},
#line 130 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cdni", "base64", 0},
#line 149 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cms", "base64", 0},
#line 51 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/STEP", "base64", 0},
#line 2800 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/cmcd", "quoted-printable", 0},
#line 404 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/oda", "base64", "oda"},
#line 136 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cid", "base64", 0},
#line 20 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/AML", "base64", 0},
#line 187 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/did", "base64", 0},
#line 573 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/solids", "base64", 0},
#line 55 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/acad", "base64", 0},
#line 56 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/access", "base64", "mdf mda mdb mde"},
#line 23 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ATXML", "base64", 0},
#line 25 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/CEA", "base64", 0},
#line 26 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/CESR", "base64", 0},
#line 30 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/DIT", "base64", 0},
#line 148 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cmcd", "base64", 0},
#line 49 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/SLA", "base64", 0},
#line 184 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dicom", "base64", "dcm"},
#line 568 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/smil", "8bit", "smi smil"},
#line 29 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/DII", "base64", 0},
#line 46 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/MF4", "base64", 0},
#line 162 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cose", "base64", 0},
#line 45 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/LXF", "base64", 0},
#line 22 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ATFX", "base64", 0},
#line 397 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/node", "base64", 0},
#line 2858 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/t140", "quoted-printable", 0},
#line 390 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/nasdata", "base64", 0},
#line 2840 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/plain", "quoted-printable", "txt asc c cc h hh cpp hpp dat hlp conf def in list log rst text textile install keys license notice readme abs-linkmap abs-menulinks aart ac am apt bsh classpath cnd cwiki data dcl dsp dsw egrm ent ft fn fv grm g .htaccess handlers htc ihtml jmx junit jx manifest m4 mf meta mdo n3 pen pod pom project rng rnx roles schemas tld types vm vsl wsdd xargs xcat xegrm xgrm xlex xlog xmap xroles xsamples xsp xtest xweb xwelcome"},
#line 565 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sipc", "base64", 0},
#line 53 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/VMSBACKUP", "base64", "bck"},
#line 2901 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.sosi", "quoted-printable", 0},
#line 2868 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.a", "quoted-printable", 0},
#line 622 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/toml", "base64", 0},
#line 21 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ATF", "base64", 0},
#line 642 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vc", "base64", 0},
#line 364 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mipc", "base64", 0},
#line 552 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/set", "base64", 0},
#line 33 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EDIFACT", "base64", 0},
#line 200 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dvcs", "base64", 0},
#line 374 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mp4", "base64", "mp4 mpg4 mp4s"},
#line 648 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vda", "base64", 0},
#line 566 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/slate", "base64", 0},
#line 411 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/onenote", "base64", "onepkg onetmp onetoc onetoc2"},
#line 794 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.aia", "base64", 0},
#line 2796 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/asp", "quoted-printable", "asp"},
#line 953 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dna", "base64", "dna"},
#line 1384 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nimn", "base64", 0},
#line 1242 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.las", "base64", 0},
#line 52 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/TETRA_ISI", "base64", 0},
#line 116 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cals1840", "base64", 0},
#line 1720 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sss-cod", "base64", 0},
#line 1272 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mcd", "base64", "mcd"},
#line 1252 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.loom", "base64", 0},
#line 653 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vemmi", "base64", 0},
#line 536 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sdp", "base64", "sdp"},
#line 2806 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/csv", "8bit", "csv"},
#line 875 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ciedi", "base64", 0},
#line 560 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sieve", "base64", "siv"},
#line 1273 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mdl", "base64", 0},
#line 746 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.MFER", "base64", "mwf"},
#line 869 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cel", "base64", 0},
#line 1291 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.modl", "base64", 0},
#line 2913 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vtt", "quoted-printable", "vtt"},
#line 1263 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.maml", "base64", 0},
#line 2810 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/ecmascript", "quoted-printable", "es ecma"},
#line 2307 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/zstd", "base64", "zst"},
#line 1692 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.semd", "base64", "semd"},
#line 282 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/iotp", "base64", 0},
#line 223 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/exi", "base64", "exi"},
#line 3002 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/xml", "8bit", "xml dtd xsd"},
#line 2903 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.tps", "quoted-printable", 0},
#line 1769 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.tml", "base64", 0},
#line 804 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.android.ota", "base64", 0},
#line 1689 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.seemail", "base64", "see"},
#line 2797 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/aspdotnet", "quoted-printable", "aspx"},
#line 2866 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.IPTC.NITF", "quoted-printable", 0},
#line 2284 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xml", "8bit", "xml xsl xsd"},
#line 284 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ipp", "base64", 0},
#line 1747 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.svd", "base64", "svd"},
#line 1602 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.palm", "base64", "prc pdb pqa oprc"},
#line 1680 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sealed.doc", "base64", "sdoc sdo s1w"},
#line 1609 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pcos", "base64", 0},
#line 275 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/index.cmd", "base64", 0},
#line 1884 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vp", "base64", 0},
#line 416 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/oxps", "base64", "oxps"},
#line 222 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/excel", "base64", "xls xlt"},
#line 2891 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.in3d.spot", "quoted-printable", "spot"},
#line 2892 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.iptc.anpa", "quoted-printable", "anpa"},
#line 265 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/i-deas", "base64", 0},
#line 1275 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.medcalcdata", "base64", "mc1"},
#line 2831 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/livescript", "quoted-printable", 0},
#line 903 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.commonspace", "base64", "csp"},
#line 2305 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/zip", "base64", "zip zipx"},
#line 127 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cdmi-domain", "base64", "cdmid"},
#line 1681 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sealed.eml", "base64", "seml sem"},
#line 1245 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.laszip", "base64", 0},
#line 1851 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xcdn", "base64", 0},
#line 1614 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.picsel", "base64", "efif"},
#line 917 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ctc-posml", "base64", "pml"},
#line 1723 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.stardivision.calc", "base64", "sdc"},
#line 1683 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sealed.net", "base64", 0},
#line 2814 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/example", "quoted-printable", 0},
#line 655 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.1000minds.decision-model+xml", "base64", 0},
#line 115 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cals-1840", "base64", 0},
#line 278 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/index.vnd", "base64", 0},
#line 1729 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.stardivision.writer-global", "base64", "sgl"},
#line 93 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/atomcat+xml", "8bit", "atomcat"},
#line 1411 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ntt-local.content-share", "base64", 0},
#line 2865 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.DMClientScript", "quoted-printable", 0},
#line 803 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.android.axml", "base64", 0},
#line 2807 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/csv-schema", "quoted-printable", 0},
#line 221 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/example", "base64", 0},
#line 1687 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sealedmedia.softseal.html", "base64", "stml stm s1h"},
#line 121 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cccex", "base64", 0},
#line 274 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/index", "base64", 0},
#line 2954 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-ini", "quoted-printable", "ini"},
#line 2924 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-c", "quoted-printable", "c cc cpp cxx dic h hh"},
#line 1414 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ntt-local.sip-ta_remote", "base64", 0},
#line 1686 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sealed.xls", "base64", "sxls sxl s1e"},
#line 2939 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-d", "quoted-printable", "d"},
#line 1415 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ntt-local.sip-ta_tcp_stream", "base64", 0},
#line 2856 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/spdx", "quoted-printable", 0},
#line 1010 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.epson.salt", "base64", "slt"},
#line 96 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/atomsvc+xml", "8bit", "atomsvc"},
#line 2916 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-ada", "quoted-printable", "ada adb ads"},
#line 2160 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas", "base64", "sas"},
#line 2178 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sc", "base64", 0},
#line 32 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EDI-consent", "base64", 0},
#line 2981 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-scala", "quoted-printable", "scala"},
#line 2918 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-asciidoc", "quoted-printable", "asciidoc adoc ad ad.txt adoc.txt"},
#line 2919 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-asm", "quoted-printable", "asm s"},
#line 2036 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ica", "base64", "ica"},
#line 496 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/riscos", "base64", 0},
#line 1911 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-STEP", "base64", 0},
#line 2958 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-less", "quoted-printable", "less"},
#line 2983 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-sed", "quoted-printable", "sed"},
#line 2968 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-ocaml", "quoted-printable", "ocaml mli"},
#line 2953 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-idl", "quoted-printable", "idl"},
#line 1613 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.piaccess.application-licence", "base64", 0},
#line 2072 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mac", "base64", "bin"},
#line 2964 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-ml", "quoted-printable", "ml"},
#line 333 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/marc", "base64", "mrc"},
#line 1684 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sealed.ppt", "base64", "sppt spp s1p"},
#line 2037 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ideas", "base64", 0},
#line 1910 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-SLA", "base64", 0},
#line 1978 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-elc", "base64", "elc"},
#line 1967 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-doom", "base64", "wad"},
#line 2205 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tads", "base64", "gam"},
#line 2988 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-tcl", "quoted-printable", "itk tcl tk"},
#line 1002 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.eln+zip", "base64", 0},
#line 114 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/call-completion", "base64", 0},
#line 19 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/A2L", "base64", 0},
#line 1912 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-VMSBACKUP", "base64", "bck"},
#line 1604 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.paos.xml", "base64", 0},
#line 2096 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mie", "base64", "mie"},
#line 415 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/oscore", "base64", 0},
#line 2192 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-spss", "base64", "sav sbs sps spo spp"},
#line 2190 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-solids", "base64", 0},
#line 1516 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.opentimestamps.ots", "base64", 0},
#line 1915 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-access", "base64", "mdf mda mdb mde"},
#line 2207 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tcl", "8bit", "tcl"},
#line 2140 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-pds", "base64", 0},
#line 1959 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-cpio", "base64", "cpio"},
#line 2970 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-pascal", "quoted-printable", "p pas pp dpr"},
#line 2179 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-set", "base64", 0},
#line 550 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sereal", "base64", "srl"},
#line 165 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cose-x509", "base64", 0},
#line 1974 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-dvi", "base64", "dvi"},
#line 2285 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xml-dtd", "8bit", "dtd"},
#line 2864 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vcard", "quoted-printable", "vcard"},
#line 2969 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-opml", "quoted-printable", "opml"},
#line 2197 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-stata-do", "base64", "do"},
#line 1719 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sri", "base64", 0},
#line 867 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.canon-lips", "base64", 0},
#line 71 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-endpointcost+json", "base64", 0},
#line 111 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/c2pa", "base64", 0},
#line 1986 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-eva", "base64", "eva"},
#line 2845 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/prs.texi", "quoted-printable", 0},
#line 549 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sep-exi", "base64", 0},
#line 1855 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xmi+xml", "base64", 0},
#line 805 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.android.package-archive", "base64", "apk"},
#line 2266 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-zoo", "base64", "zoo"},
#line 615 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/timestamped-data", "base64", "tsd"},
#line 2984 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-setext", "quoted-printable", "etx"},
#line 1801 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.vcx", "base64", "vcx"},
#line 2136 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-openscad", "base64", "scad"},
#line 2198 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-stata-dta", "base64", "dta"},
#line 866 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.canon-cpdl", "base64", 0},
#line 2263 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-zim", "base64", 0},
#line 2068 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-lz4", "base64", "lz4"},
#line 1256 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.lotus-notes", "base64", "nsf"},
#line 2147 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-plist", "base64", 0},
#line 366 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mmt-aei+xml", "base64", 0},
#line 2071 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-lzma", "base64", "lzma"},
#line 2935 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-component", "8bit", "htc"},
#line 157 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/coap-payload", "base64", 0},
#line 2907 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.vri", "quoted-printable", 0},
#line 1279 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mermaid", "base64", 0},
#line 2260 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-xmind", "base64", "xmind"},
#line 417 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/p21", "base64", 0},
#line 181 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dec-dx", "base64", 0},
#line 373 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mp21", "base64", "m21 mp21"},
#line 1359 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-wpl", "base64", "wpl"},
#line 2811 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/encaprtp", "quoted-printable", 0},
#line 2835 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/nfo", "quoted-printable", 0},
#line 876 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cinderella", "base64", "cdy"},
#line 1497 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.omads-email+xml", "base64", 0},
#line 1987 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-excel", "base64", 0},
#line 2161 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-access", "base64", "sa7 sas7bacs"},
#line 2511 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"font/collection", "base64", "ttc"},
#line 210 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/efi", "base64", 0},
#line 2070 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-lzip", "base64", "lz"},
#line 226 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/express", "base64", 0},
#line 2106 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ms-nls", "base64", 0},
#line 233 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/fits", "base64", "fits fit fts"},
#line 1770 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.tmobile-livetv", "base64", "tmo"},
#line 551 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/session-info", "base64", 0},
#line 2276 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xcap-ns+xml", "base64", 0},
#line 1626 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.preminet", "base64", 0},
#line 1728 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.stardivision.writer", "base64", "sdw vor"},
#line 1724 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.stardivision.chart", "base64", "sds"},
#line 1618 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pocketlearn", "base64", "plf"},
#line 1710 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.smintio.portals.archive", "base64", 0},
#line 2945 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-expect", "quoted-printable", "exp"},
#line 2852 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/rtx", "quoted-printable", 0},
#line 2959 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-lex", "quoted-printable", "l"},
#line 879 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.claymore", "base64", "cla"},
#line 996 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ecowin.series", "base64", 0},
#line 1726 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.stardivision.impress", "base64", "sdd"},
#line 2274 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xcap-el+xml", "base64", 0},
#line 1964 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-dex", "base64", "dex"},
#line 517 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rtx", "base64", 0},
#line 1772 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.trid.tpt", "base64", "tpt"},
#line 2226 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tmx", "base64", "tmx"},
#line 2092 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-matlab-data", "base64", "mat"},
#line 2938 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-csrc", "quoted-printable", "c"},
#line 775 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.aether.imp", "base64", 0},
#line 2208 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tex", "8bit", "tex"},
#line 2893 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.latex-z", "quoted-printable", 0},
#line 1301 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.motorola.iprm", "base64", 0},
#line 998 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ecowin.seriesupdate", "base64", 0},
#line 1209 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.isac.fcs", "base64", "fcs"},
#line 1322 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-lrm", "base64", "lrm"},
#line 2870 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.ascii-art", "quoted-printable", 0},
#line 2987 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-stsrc", "quoted-printable", "st"},
#line 2934 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-common-lisp", "quoted-printable", "cl jl lisp lsp"},
#line 2064 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-latex", "8bit", "ltx latex"},
#line 182 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/deflate", "base64", 0},
#line 2262 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-xz", "base64", "xz"},
#line 2162 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-audit", "base64", "st7 sas7baud"},
#line 772 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.adobe.partial-upload", "base64", 0},
#line 145 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/clr", "base64", 0},
#line 2943 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-emacs-lisp", "quoted-printable", "el"},
#line 2131 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-nesrom", "base64", "nes"},
#line 2906 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.vcf", "quoted-printable", 0},
#line 2799 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/calendar", "quoted-printable", "ics ifb"},
#line 2978 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-rst", "quoted-printable", "rest rst restx"},
#line 1667 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.rn-realmedia", "base64", "rm"},
#line 334 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/marcxml+xml", "base64", "mrcx"},
#line 1055 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fdsn.seed", "base64", "dataless seed"},
#line 357 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mediaservercontrol+xml", "base64", "mscml"},
#line 827 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apple.steering-list", "base64", 0},
#line 1926 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-asprs", "base64", "las laz"},
#line 1630 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.psfs", "base64", 0},
#line 2995 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-vcard", "8bit", "vcf"},
#line 942 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dece.data", "base64", "uvd uvf uvvd uvvf"},
#line 1054 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fdsn.mseed", "base64", "mseed"},
#line 50 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ST2110-41", "base64", 0},
#line 44 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/H224", "base64", 0},
#line 1773 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.triscape.mxs", "base64", "mxs"},
#line 1953 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-clariscad", "base64", 0},
#line 2813 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/event-stream", "8bit", 0},
#line 611 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/texinfo", "base64", 0},
#line 2157 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-rpm", "base64", "rpm"},
#line 1167 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ieee.1905", "base64", 0},
#line 2971 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-perl", "quoted-printable", "pl pm al perl"},
#line 402 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ocsp-response", "base64", 0},
#line 1515 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openstreetmap.data+xml", "base64", 0},
#line 1674 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sar", "base64", 0},
#line 2203 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sv4crc", "base64", "sv4crc"},
#line 782 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.modca", "base64", 0},
#line 2123 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-msterminal", "base64", "trm"},
#line 167 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/csrattrs", "base64", 0},
#line 2193 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-spss-sav", "base64", "sav"},
#line 2833 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/mizar", "quoted-printable", 0},
#line 72 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-endpointcostparams+json", "base64", 0},
#line 2141 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-perl", "8bit", "pl pm"},
#line 2846 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/raptorfec", "quoted-printable", 0},
#line 2837 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/parameters", "quoted-printable", 0},
#line 86 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/applefile", "base64", 0},
#line 2149 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-prt", "base64", "prt"},
#line 1258 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.lotus-screencam", "base64", "scm"},
#line 380 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/msc-ivr+xml", "base64", 0},
#line 2915 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-actionscript", "quoted-printable", "as"},
#line 1688 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sealedmedia.softseal.pdf", "base64", "spdf spd s1a"},
#line 2941 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-ecmascript", "quoted-printable", 0},
#line 1853 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xfdl", "base64", "xfdl"},
#line 1357 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-wordml", "base64", 0},
#line 906 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cosmocaller", "base64", "cmc"},
#line 1655 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.rainstor.data", "base64", 0},
#line 2541 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/icns", "base64", "icns"},
#line 2358 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/LPC", "base64", 0},
#line 2369 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/QCELP", "base64", 0},
#line 1977 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ecmascript", "8bit", 0},
#line 2359 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/MELP", "base64", 0},
#line 2319 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/CN", "base64", 0},
#line 2399 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/iLBC", "base64", 0},
#line 269 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/iges", "base64", 0},
#line 1267 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.marlin.drm.license+xml", "base64", 0},
#line 2385 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/asc", "base64", 0},
#line 2367 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/PCMU", "base64", 0},
#line 2377 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/UEMCLIP", "base64", 0},
#line 2853 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/sgml", "quoted-printable", "sgml sgm"},
#line 2357 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/L8", "base64", 0},
#line 2380 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/aac", "base64", "aac"},
#line 2370 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/RED", "base64", 0},
#line 73 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-endpointprop+json", "base64", 0},
#line 641 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/v3c", "base64", 0},
#line 2388 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/dls", "base64", 0},
#line 2966 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-nfo", "quoted-printable", "nfo"},
#line 2520 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/aces", "base64", "exr"},
#line 1672 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.s3sms", "base64", 0},
#line 529 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/scvp-cv-response", "base64", "scs"},
#line 2336 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVS", "base64", 0},
#line 2403 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/midi", "base64", "kar mid midi rmi"},
#line 2373 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/SMV0", "base64", 0},
#line 2724 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/JT", "base64", 0},
#line 557 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sgml", "base64", "sgml"},
#line 2321 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/DV", "base64", 0},
#line 2351 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/GSM", "base64", 0},
#line 2325 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRC0", "base64", 0},
#line 2362 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/MELP600", "base64", 0},
#line 2328 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRCB0", "base64", 0},
#line 1195 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ipld.car", "base64", 0},
#line 2323 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRC", "base64", "evc"},
#line 2327 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRCB", "base64", 0},
#line 2331 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRCNW0", "base64", 0},
#line 988 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dzr", "base64", 0},
#line 2334 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRCWB0", "base64", 0},
#line 2333 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRCWB", "base64", 0},
#line 2725 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/e57", "base64", "e57"},
#line 2330 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRCNW", "base64", 0},
#line 2364 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/MPA", "base64", 0},
#line 2371 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/SMV", "base64", "smv"},
#line 2365 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/PCMA", "base64", 0},
#line 2360 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/MELP1200", "base64", 0},
#line 2322 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/DVI4", "base64", 0},
#line 2212 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-texnicard", "base64", 0},
#line 283 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ipfix", "base64", "ipfix"},
#line 2312 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/AMR", "base64", "amr"},
#line 1304 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-PrintDeviceCapabilities+xml", "base64", 0},
#line 2376 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/TSVCIS", "base64", 0},
#line 2338 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G719", "base64", 0},
#line 1266 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.marlin.drm.conftoken+xml", "base64", 0},
#line 2315 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/ATRAC-X", "base64", 0},
#line 2378 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/VDVI", "base64", 0},
#line 2112 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-msaccess", "base64", "mda mdb mde mdf accdb"},
#line 986 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dxr", "base64", 0},
#line 1606 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.patentdive", "base64", 0},
#line 2738 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/stl", "base64", 0},
#line 2566 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/pdc", "base64", 0},
#line 2329 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRCB1", "base64", 0},
#line 2374 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/TETRA_ACELP", "base64", 0},
#line 2156 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-roxio-toast", "base64", "toast"},
#line 945 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dece.zip", "base64", "uvvz uvz"},
#line 2890 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.in3d.3dml", "quoted-printable", "3dml"},
#line 2429 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/tone", "base64", 0},
#line 1957 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-coredump", "base64", 0},
#line 2917 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-applescript", "quoted-printable", "applescript"},
#line 2523 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/avcs", "base64", 0},
#line 2375 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/TETRA_ACELP_BB", "base64", 0},
#line 2522 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/avci", "base64", 0},
#line 2426 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/t140c", "base64", 0},
#line 531 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/scvp-vp-response", "base64", "spp"},
#line 2731 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/mtl", "base64", 0},
#line 2885 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.gml", "quoted-printable", 0},
#line 2354 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/L16", "base64", "l16"},
#line 2406 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/mp4", "base64", "mp4 mpg4 f4a f4b mp4a m4a m4b"},
#line 2434 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.CELP", "base64", 0},
#line 3023 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/JPEG", "base64", "jpgv"},
#line 547 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sensml-exi", "base64", 0},
#line 994 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ecowin.filerequest", "base64", 0},
#line 2585 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.dgn", "base64", "dgn dgnlib cel"},
#line 3032 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/VP9", "base64", 0},
#line 2454 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dts", "base64", "dts"},
#line 2433 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.4SB", "base64", 0},
#line 3031 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/VP8", "base64", 0},
#line 3009 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/BMPEG", "base64", 0},
#line 3012 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/DV", "base64", "dv"},
#line 2609 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.sld", "base64", 0},
#line 2317 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/BV16", "base64", 0},
#line 2382 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/adpcm", "base64", "adp"},
#line 2453 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dra", "base64", "dra"},
#line 3029 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/MPV", "base64", 0},
#line 2326 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRC1", "base64", 0},
#line 3034 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/dl", "base64", "dl"},
#line 770 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.adobe.fxp", "base64", "fxp fxpl"},
#line 2751 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.mts", "base64", "mts"},
#line 2332 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRCNW1", "base64", 0},
#line 3011 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/CelB", "base64", 0},
#line 3033 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/daala", "base64", 0},
#line 2335 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRCWB1", "base64", 0},
#line 126 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cdmi-container", "base64", "cdmic"},
#line 2741 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.cld", "base64", 0},
#line 2040 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-install-instructions", "base64", "install"},
#line 789 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.age", "base64", 0},
#line 2420 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/scip", "base64", 0},
#line 31 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EDI-X12", "base64", 0},
#line 3025 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/MP1S", "base64", 0},
#line 2137 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-opera-extension", "base64", "oex"},
#line 238 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/fractals", "base64", 0},
#line 1956 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-conference", "base64", "nsc"},
#line 2977 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-rsrc", "quoted-printable", "r"},
#line 2564 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/naplps", "base64", 0},
#line 778 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.cmoca-cmresource", "base64", 0},
#line 2438 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.cisco.nse", "base64", 0},
#line 2444 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dlna.adts", "base64", 0},
#line 995 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ecowin.fileupdate", "base64", 0},
#line 2502 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/xm", "base64", "xm"},
#line 3048 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/mp4", "base64", "mp4 mpg4 f4v f4p mp4v"},
#line 3010 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/BT656", "base64", 0},
#line 788 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.modca-pagesegment", "base64", 0},
#line 2985 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-sfv", "quoted-printable", "sfv"},
#line 3036 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/evc", "base64", 0},
#line 1264 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mapbox-vector-tile", "base64", 0},
#line 2174 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-transport", "base64", "stx"},
#line 3008 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/AV1", "base64", 0},
#line 2734 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/step", "base64", 0},
#line 1481 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.dcdc", "base64", 0},
#line 2206 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tar", "base64", "tar"},
#line 932 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.d3m-dataset", "base64", 0},
#line 1480 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.dcd", "base64", 0},
#line 771 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.adobe.indesign-idml-package", "base64", "idml"},
#line 3061 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/scip", "base64", 0},
#line 2368 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/PCMU-WB", "base64", 0},
#line 1309 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-excel", "base64", "xls xlt xla xlc xlm xlw xll xld"},
#line 3067 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.CCTV", "base64", 0},
#line 2763 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/x.stl-ascii", "base64", 0},
#line 2582 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.clip", "base64", 0},
#line 1968 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-dosexec", "base64", "exe"},
#line 258 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/gzip", "base64", "gz tgz"},
#line 2366 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/PCMA-WB", "base64", 0},
#line 2372 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/SMV-QCP", "base64", 0},
#line 3013 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/FFV1", "base64", 0},
#line 3073 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.dece.sd", "base64", "uvs uvvs"},
#line 2324 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/EVRC-QCP", "base64", 0},
#line 3051 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/nv", "base64", 0},
#line 1611 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pg.osasli", "base64", "ei6"},
#line 2379 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/VMR-WB", "base64", 0},
#line 3065 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vc1", "base64", 0},
#line 2313 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/AMR-WB", "base64", "awb"},
#line 1917 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-activemime", "base64", 0},
#line 2975 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-rexx", "quoted-printable", "rexx"},
#line 1916 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ace-compressed", "base64", "ace"},
#line 2352 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/GSM-EFR", "base64", 0},
#line 2440 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.cns.anp1", "base64", 0},
#line 2394 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/encaprtp", "base64", 0},
#line 1112 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.geospace", "base64", "g3w"},
#line 2994 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-vcalendar", "8bit", "vcs"},
#line 1909 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-7z-compressed", "base64", "7z"},
#line 2757 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.sap.vds", "base64", 0},
#line 1657 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.rar", "base64", 0},
#line 2252 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-x509-cert", "base64", "crt"},
#line 279 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/inf", "base64", 0},
#line 2363 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/MP4A-LATM", "base64", "m4a"},
#line 2424 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/sp-midi", "base64", 0},
#line 2513 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"font/sfnt", "base64", 0},
#line 1447 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oipf.contentaccessdownload+xml", "base64", 0},
#line 952 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dm.delegation+xml", "base64", 0},
#line 2337 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G711-0", "base64", 0},
#line 1448 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oipf.contentaccessstreaming+xml", "base64", 0},
#line 2531 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/example", "base64", 0},
#line 2073 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mac-compactpro", "base64", "cpt"},
#line 3072 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.dece.pd", "base64", "uvp uvvp"},
#line 2395 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/example", "base64", 0},
#line 1994 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-dos", "base64", 0},
#line 3062 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/smpte291", "base64", 0},
#line 522 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sbe", "base64", 0},
#line 2726 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/example", "base64", 0},
#line 3071 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.dece.mp4", "base64", 0},
#line 2948 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-go", "quoted-printable", "go"},
#line 2927 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-cgi", "quoted-printable", "cgi"},
#line 1375 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nato.openxmlformats-package.iepd+zip", "base64", 0},
#line 192 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dns-message", "base64", 0},
#line 1351 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-wmdrm.lic-resp", "base64", 0},
#line 3028 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/MP4V-ES", "base64", 0},
#line 767 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.adobe.air-application-installer-package+zip", "base64", "air"},
#line 180 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dca-rft", "base64", 0},
#line 581 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/srgs", "base64", "gram"},
#line 1171 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.immervision-ivp", "base64", "ivp"},
#line 2600 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.ms-modi", "base64", "mdi"},
#line 3035 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/encaprtp", "base64", 0},
#line 2869 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.abc", "quoted-printable", 0},
#line 391 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/netcdf", "base64", "nc cdf"},
#line 3103 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.vivo", "base64", "viv vivo"},
#line 2103 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ms-compress-szdd", "base64", 0},
#line 2636 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-icon", "base64", "ico"},
#line 1110 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.geonext", "base64", "gxt"},
#line 423 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pdf", "base64", "pdf ai"},
#line 277 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/index.response", "base64", 0},
#line 2857 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/strings", "quoted-printable", 0},
#line 1041 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.evolv.ecig.settings", "base64", 0},
#line 825 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apple.pages", "base64", "pages"},
#line 2479 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-aac", "base64", "aac"},
#line 1443 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.obn", "base64", 0},
#line 2529 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/dpx", "base64", 0},
#line 389 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/n-triples", "base64", 0},
#line 2314 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/ATRAC-ADVANCED-LOSSLESS", "base64", 0},
#line 2488 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-midi", "base64", "mid midi kar"},
#line 95 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/atomicmail", "base64", 0},
#line 1057 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ffsns", "base64", 0},
#line 858 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.bmi", "base64", "bmi"},
#line 74 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-endpointpropparams+json", "base64", 0},
#line 2486 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-m4a", "base64", 0},
#line 2404 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/midi-clip", "base64", 0},
#line 3037 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/example", "base64", 0},
#line 2355 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/L20", "base64", 0},
#line 2489 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-mod", "base64", "mod"},
#line 1356 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-word2006ml", "base64", 0},
#line 376 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mpeg4-iod", "base64", 0},
#line 1116 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gmx", "base64", "gmx"},
#line 1287 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mif", "base64", "mif"},
#line 2361 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/MELP2400", "base64", 0},
#line 2384 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/aptx", "base64", 0},
#line 2356 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/L24", "base64", 0},
#line 2350 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G729E", "base64", 0},
#line 2598 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.mix", "base64", 0},
#line 1173 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ims.imsccv1p1", "base64", 0},
#line 2349 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G729D", "base64", 0},
#line 1691 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sema", "base64", "sema"},
#line 2347 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G729", "base64", 0},
#line 2425 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/speex", "base64", "spx"},
#line 3074 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.dece.video", "base64", "uvv uvvv"},
#line 2264 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-zip-compressed", "base64", "zip"},
#line 2884 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.gist.mx", "quoted-printable", 0},
#line 2346 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G728", "base64", 0},
#line 654 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vividence.scriptfile", "base64", 0},
#line 1722 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sss-ntf", "base64", 0},
#line 2947 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-fortran", "quoted-printable", "f f77 f90 for"},
#line 2506 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"chemical/x-cml", "base64", "cml"},
#line 2507 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"chemical/x-csml", "base64", "csml"},
#line 1094 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.genozip", "base64", 0},
#line 1721 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sss-dtf", "base64", 0},
#line 632 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tzif", "base64", 0},
#line 201 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dxf", "base64", 0},
#line 2733 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/prc", "base64", 0},
#line 387 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mxf", "base64", "mxf"},
#line 756 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.RenLearn.rlprint", "base64", 0},
#line 2473 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.vmx.cvsd", "base64", 0},
#line 650 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vec-package", "base64", 0},
#line 2413 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/prs.sid", "base64", 0},
#line 2004 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-speedo", "base64", 0},
#line 1354 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-word.document.macroEnabled.12", "base64", "docm"},
#line 2353 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/GSM-HR-08", "base64", 0},
#line 2653 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-pict", "base64", "pct pic pict"},
#line 2528 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/dicom-rle", "base64", 0},
#line 2015 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-freearc", "base64", "arc"},
#line 1819 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.vsf", "base64", "vsf"},
#line 2480 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-adpcm", "base64", 0},
#line 1679 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sealed.csf", "base64", 0},
#line 1013 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.erofs", "base64", 0},
#line 2387 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/clearmode", "base64", 0},
#line 1813 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.vidsoft.vidconference", "8bit", "vsc"},
#line 3107 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-dl", "base64", "dl"},
#line 476 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.xsf+xml", "base64", 0},
#line 3026 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/MP2P", "base64", 0},
#line 2816 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/flexfec", "quoted-printable", 0},
#line 227 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/fastinfoset", "base64", 0},
#line 1353 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-wmdrm.meter-resp", "base64", 0},
#line 2500 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-sap", "base64", "sap"},
#line 1954 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-compress", "base64", "z Z"},
#line 2348 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G7291", "base64", 0},
#line 2250 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-x509-ca-cert", "base64", "crt der"},
#line 2570 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/prs.pti", "base64", 0},
#line 3027 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/MP2T", "base64", "ts mts m2ts cpi clpi mpl mpls bdm m2t"},
#line 1355 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-word.template.macroEnabled.12", "base64", "dotm"},
#line 234 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/flexfec", "base64", 0},
#line 2762 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vrml", "base64", "wrl vrml"},
#line 1633 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pvi.ptid1", "base64", "pti ptid"},
#line 1296 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.motorola.flexsuite.fis", "base64", 0},
#line 2256 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-x509-next-ca-cert", "base64", 0},
#line 1381 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.netfpx", "base64", 0},
#line 2483 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-dec-adpcm", "base64", 0},
#line 1299 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.motorola.flexsuite.ttc", "base64", 0},
#line 1295 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.motorola.flexsuite.adsi", "base64", 0},
#line 1593 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.orange.indata", "base64", 0},
#line 3018 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/H264", "base64", "h264"},
#line 2114 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mscardfile", "base64", "crd"},
#line 3021 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/H265", "base64", 0},
#line 3030 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/SMPTE292M", "base64", 0},
#line 1300 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.motorola.flexsuite.wem", "base64", 0},
#line 2105 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ms-installer", "base64", "msi msp mst"},
#line 2039 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-imagemap", "8bit", "imagemap imap"},
#line 2605 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.radiance", "base64", 0},
#line 1492 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.poc.invocation-descriptor+xml", "base64", 0},
#line 1294 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.motorola.flexsuite", "base64", 0},
#line 600 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tamp-error", "base64", 0},
#line 657 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3M.Post-it-Notes", "base64", "pwn"},
#line 1955 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-compressed", "base64", "z Z"},
#line 1661 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.rego", "base64", 0},
#line 2142 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-pgp", "base64", 0},
#line 1011 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.epson.ssf", "base64", "ssf"},
#line 1187 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.insors.igm", "base64", "igm"},
#line 3022 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/H266", "base64", 0},
#line 2211 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-texinfo", "8bit", "texinfo texi"},
#line 1666 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.rim.cod", "base64", "cod"},
#line 1194 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ipfs.ipns-record", "base64", 0},
#line 1008 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.epson.msf", "base64", "msf"},
#line 2268 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x400.bp", "base64", 0},
#line 1060 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.filmit.zfc", "base64", 0},
#line 471 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.nprend", "base64", "rnd rct"},
#line 1007 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.epson.esf", "base64", "esf"},
#line 1764 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.tao.intent-module-archive", "base64", "tao"},
#line 3126 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-msvideo", "base64", "avi"},
#line 1379 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nebumind.line", "base64", 0},
#line 1913 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-Wingz", "base64", "wz wkz"},
#line 1093 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.genomatix.tuxedo", "base64", "txd"},
#line 1297 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.motorola.flexsuite.gotap", "base64", 0},
#line 352 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbox", "base64", "mbox"},
#line 776 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.afplinedata", "base64", 0},
#line 3014 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/H261", "base64", "h261"},
#line 1255 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.lotus-freelance", "base64", "pre"},
#line 1591 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-package.relationships+xml", "base64", 0},
#line 2027 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-gzip", "base64", "gz"},
#line 1589 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-package.core-properties+xml", "base64", 0},
#line 1268 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.marlin.drm.mdcf", "base64", 0},
#line 2471 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.rip", "base64", "rip"},
#line 235 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/font-sfnt", "base64", "otf ttf"},
#line 2492 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-ms-wma", "base64", "wma"},
#line 1376 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ncd.control", "base64", 0},
#line 2422 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/sofa", "base64", 0},
#line 2428 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/telephone-event", "base64", 0},
#line 2923 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-basic", "quoted-printable", "bas"},
#line 3108 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-dv", "base64", "dv"},
#line 1659 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.recordare.musicxml", "base64", "mxl"},
#line 85 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/appledouble", "base64", 0},
#line 1660 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.recordare.musicxml+xml", "base64", "musicxml"},
#line 3132 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-smv", "base64", "smv"},
#line 1127 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gridmp", "base64", 0},
#line 2396 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/flac", "base64", "flac"},
#line 2532 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/fits", "base64", 0},
#line 3116 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-m4v", "base64", "m4v"},
#line 2930 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-cobol", "quoted-printable", "cbl cob"},
#line 2345 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G726-40", "base64", 0},
#line 2465 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.nuera.ecelp7470", "base64", "ecelp7470"},
#line 2842 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/prs.fallenstein.rst", "quoted-printable", "rst"},
#line 2464 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.nuera.ecelp4800", "base64", "ecelp4800"},
#line 1310 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-excel.addin.macroEnabled.12", "base64", "xlam"},
#line 1946 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-cdf", "base64", "cda"},
#line 2097 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mif", "base64", "mif"},
#line 2343 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G726-24", "base64", 0},
#line 2045 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-iso9660-image", "base64", "iso"},
#line 2849 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/rtf", "8bit", "rtf"},
#line 1920 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-amf", "base64", "amf"},
#line 1973 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-dvd-ifo", "base64", "ifo bup"},
#line 2775 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/example", "base64", 0},
#line 3137 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"x-world/x-vrml", "base64", "wrl vrml"},
#line 891 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.collabio.xodocuments.document", "base64", 0},
#line 2466 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.nuera.ecelp9600", "base64", "ecelp9600"},
#line 2627 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-cmx", "base64", "cmx"},
#line 2042 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-isatab", "base64", 0},
#line 2942 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-eiffel", "quoted-printable", "e"},
#line 515 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rtf", "base64", "rtf"},
#line 1979 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-elf", "base64", 0},
#line 469 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.implied-structure", "base64", 0},
#line 140 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/clariscad", "base64", 0},
#line 769 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.adobe.formscentral.fcdt", "base64", "fcdt"},
#line 327 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mac-binhex40", "8bit", "hqx"},
#line 3122 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-ms-wm", "base64", "wm"},
#line 796 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.airzip.filesecure.azs", "base64", "azs"},
#line 2503 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"chemical/x-cdx", "base64", "cdx"},
#line 2778 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/mixed", "8bit", 0},
#line 1514 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openprinttag", "base64", 0},
#line 892 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.collabio.xodocuments.document-template", "base64", 0},
#line 2342 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G726-16", "base64", 0},
#line 2418 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/rtx", "base64", 0},
#line 1932 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-bat", "base64", "bat cmd"},
#line 2416 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/rtp-midi", "base64", 0},
#line 2991 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-vbasic", "quoted-printable", "cls frm"},
#line 1707 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.smaf", "base64", "mmf"},
#line 1933 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-bcpio", "base64", "bcpio"},
#line 1200 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.iptc.g2.conceptitem+xml", "base64", 0},
#line 2251 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-x509-ca-ra-cert", "base64", 0},
#line 1387 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nitf", "base64", "nitf ntf"},
#line 1693 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.semf", "base64", "semf"},
#line 2651 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-pcx", "base64", "pcx"},
#line 2645 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-ms-bmp", "base64", "bmp"},
#line 2693 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-xpixmap", "8bit", "xpm"},
#line 2629 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-dpx", "base64", "dpx"},
#line 1199 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.iptc.g2.catalogitem+xml", "base64", 0},
#line 3020 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/H264-SVC", "base64", 0},
#line 1180 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ims.lti.v2.toolsettings+json", "base64", 0},
#line 3019 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/H264-RCDO", "base64", 0},
#line 2834 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/n3", "quoted-printable", "n3"},
#line 1040 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.evolv.ecig.profile", "base64", 0},
#line 896 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.collabio.xodocuments.spreadsheet-template", "base64", 0},
#line 2044 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-isatab-investigation", "base64", 0},
#line 834 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.as207960.vas.config+uper", "base64", 0},
#line 1176 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ims.lis.v2.result+json", "base64", 0},
#line 2877 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.esmertec.theme-descriptor", "quoted-printable", 0},
#line 895 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.collabio.xodocuments.spreadsheet", "base64", 0},
#line 784 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.modca-formdef", "base64", 0},
#line 1204 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.iptc.g2.packageitem+xml", "base64", 0},
#line 2074 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-macbase64", "base64", "bin"},
#line 2593 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.fst", "base64", "fst"},
#line 2493 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-ms-wmv", "base64", "wmv"},
#line 2685 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-targa", "base64", "tga"},
#line 341 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbms-associated-procedure-description+xml", "base64", 0},
#line 2267 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x400-bp", "base64", 0},
#line 2881 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.flatland.3dml", "quoted-printable", 0},
#line 3060 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/rtx", "base64", 0},
#line 1001 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.efi.iso", "base64", 0},
#line 1668 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.rn-realmedia-vbr", "base64", "rmvb"},
#line 1323 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-office.activeX+xml", "base64", 0},
#line 2441 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.cns.inf1", "base64", 0},
#line 779 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.foca-charset", "base64", 0},
#line 2992 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-vbdotnet", "quoted-printable", "vb"},
#line 1975 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-dxf", "base64", 0},
#line 1316 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-excel.template.macroEnabled.12", "base64", "xltm"},
#line 1493 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.poc.optimized-progress-report+xml", "base64", 0},
#line 61 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/activemessage", "base64", 0},
#line 3106 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-dirac", "base64", "drc"},
#line 2209 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tex-tfm", "base64", "tfm"},
#line 377 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mpeg4-iod-xmt", "base64", 0},
#line 1948 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-cfs-compressed", "base64", "cfs"},
#line 2993 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-vbscript", "quoted-printable", "vbs"},
#line 3123 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-ms-wmv", "base64", "wmv"},
#line 3079 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.fvt", "base64", "fvt"},
#line 243 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/geofeed+csv", "base64", 0},
#line 2745 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.flatland.3dml", "base64", 0},
#line 2512 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"font/otf", "base64", "otf"},
#line 2320 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/DAT12", "base64", 0},
#line 2419 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/s3m", "base64", "s3m"},
#line 1298 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.motorola.flexsuite.kmr", "base64", 0},
#line 3024 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/MJ2", "base64", "mj2 mjp2"},
#line 459 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.alvestrand.titrax-sheet", "base64", 0},
#line 880 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cloanto.rp9", "base64", "rp9"},
#line 1943 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-bzip", "base64", "bz tbz"},
#line 2491 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-ms-wax", "base64", "wax"},
#line 2253 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-x509-dsa-parameters", "base64", 0},
#line 2278 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xcon-conference-info-diff+xml", "base64", 0},
#line 2340 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G7221", "base64", 0},
#line 1188 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.intercon.formnet", "base64", "xpw xpx"},
#line 2792 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/x-zip", "base64", 0},
#line 2574 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/t38", "base64", 0},
#line 1128 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.groove-account", "base64", "gac"},
#line 2427 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/t38", "base64", 0},
#line 229 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/fdf", "base64", 0},
#line 1849 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xara", "base64", "xar"},
#line 2165 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-data", "base64", "sd7 sas7bdat"},
#line 2514 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"font/ttf", "base64", "ttf"},
#line 2572 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/sgi", "base64", "sgi"},
#line 1732 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.street-stream", "base64", 0},
#line 1670 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.rs-274x", "base64", 0},
#line 1014 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.espass-espass+zip", "base64", 0},
#line 2316 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/ATRAC3", "base64", 0},
#line 3054 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/pointer", "base64", 0},
#line 1658 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.realvnc.bed", "base64", "bed"},
#line 1210 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.iso11783-10+zip", "base64", 0},
#line 268 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ibe-pp-data", "base64", 0},
#line 2850 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/rtp-enc-aescm128", "quoted-printable", 0},
#line 2526 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/cgm", "base64", "cgm"},
#line 2839 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/ping", "8bit", 0},
#line 2844 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/prs.prop.logic", "quoted-printable", 0},
#line 2729 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/iges", "base64", "igs iges"},
#line 1168 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.igloader", "base64", "igl"},
#line 2189 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-snappy-framed", "base64", "sz"},
#line 1132 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.groove-tool-message", "base64", "gtm"},
#line 570 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/smpte336m", "base64", 0},
#line 2781 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/related", "base64", "mht mhtml"},
#line 1271 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.maxmind.maxmind-db", "base64", 0},
#line 3066 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vc2", "base64", 0},
#line 1489 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.poc.detailed-progress-report+xml", "base64", 0},
#line 2695 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/CPIM", "base64", 0},
#line 2153 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-rar-compressed", "base64", "rar"},
#line 2708 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/mls", "base64", 0},
#line 2756 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.rosette.annotated-data-model", "base64", 0},
#line 453 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/problem+xml", "base64", 0},
#line 3124 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-ms-wmx", "base64", "wmx"},
#line 2976 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-robots", "quoted-printable", 0},
#line 1308 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-cab-compressed", "base64", "cab"},
#line 2485 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-flac", "base64", "flac"},
#line 3095 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.planar", "base64", 0},
#line 1053 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fdf", "base64", "fdf"},
#line 2592 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.fpx", "base64", "fpx"},
#line 893 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.collabio.xodocuments.presentation", "base64", 0},
#line 2871 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.curl", "quoted-printable", "curl"},
#line 766 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.adobe.aftereffects.template", "base64", "aet"},
#line 119 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cbor", "base64", "cbor"},
#line 1490 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.poc.final-report+xml", "base64", 0},
#line 3039 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/gl", "base64", "gl"},
#line 2132 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-netcdf", "base64", "nc cdf"},
#line 2780 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/parallel", "8bit", 0},
#line 2979 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-rtf", "8bit", "rtf"},
#line 285 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/isup", "base64", 0},
#line 2258 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-xliff+xml", "base64", "xlf xliff"},
#line 894 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.collabio.xodocuments.presentation-template", "base64", 0},
#line 1496 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.xcap-directory+xml", "base64", 0},
#line 2158 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-rtf", "base64", "rtf"},
#line 2746 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.gdl", "base64", "gdl"},
#line 2280 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xfdf", "base64", 0},
#line 3125 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-ms-wvx", "base64", "wvx"},
#line 1133 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.groove-tool-template", "base64", "tpl"},
#line 1182 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.informedcontrol.rms+xml", "base64", 0},
#line 3111 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-fli", "base64", "fli"},
#line 1412 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ntt-local.file-transfer", "base64", 0},
#line 3110 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-flc", "base64", "flc"},
#line 2232 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-troff-ms", "base64", "ms"},
#line 1386 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nintendo.snes.rom", "base64", 0},
#line 2230 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-troff-man", "8bit", "man"},
#line 2717 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/sip", "base64", 0},
#line 2259 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-xliff+zip", "base64", "xlz"},
#line 2894 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.longform", "quoted-printable", 0},
#line 1389 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.noblenet-sealer", "base64", "nns"},
#line 833 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.as207960.vas.config+jer", "base64", 0},
#line 3040 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/iso.segment", "base64", "m4s"},
#line 745 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.Kinar", "base64", "kne knp sdf"},
#line 2603 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.net.fpx", "base64", 0},
#line 2412 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/parityfec", "base64", 0},
#line 2389 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/dsr-es201108", "base64", 0},
#line 2414 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/raptorfec", "base64", 0},
#line 1685 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sealed.tiff", "base64", 0},
#line 2025 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-gtar", "base64", "gtar tgz tbz2 tbz"},
#line 2841 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/provenance-notation", "quoted-printable", 0},
#line 2231 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-troff-me", "base64", "me"},
#line 1174 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ims.imsccv1p2", "base64", 0},
#line 1189 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.intergeo", "base64", "i2g"},
#line 160 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/conference-info+xml", "base64", 0},
#line 2254 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-x509-ec-parameters", "base64", 0},
#line 902 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.commerce-battelle", "base64", 0},
#line 1553 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.externalLink+xml", "base64", 0},
#line 1768 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.tmd.mediaflex.api+xml", "base64", 0},
#line 1548 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.calcChain+xml", "base64", 0},
#line 482 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/raptorfec", "base64", 0},
#line 1520 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.drawing+xml", "base64", 0},
#line 1877 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.zul", "base64", "zir zirz"},
#line 2932 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-coffescript", "8bit", "coffee"},
#line 2017 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-gca-compressed", "base64", "gca"},
#line 1569 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.userNames+xml", "base64", 0},
#line 1965 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-dgc-compressed", "base64", "dgc"},
#line 802 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.amundsen.maze+xml", "base64", 0},
#line 1568 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.template.main+xml", "base64", 0},
#line 1567 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.template", "base64", "xltx"},
#line 1130 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.groove-identity-message", "base64", "gim"},
#line 1521 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.drawingml.chart+xml", "base64", 0},
#line 1178 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ims.lti.v2.toolproxy+json", "base64", 0},
#line 109 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/bleeper", "base64", "bleep"},
#line 1572 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.theme+xml", "base64", 0},
#line 1573 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.themeOverride+xml", "base64", 0},
#line 2931 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-coffeescript", "quoted-printable", "coffee"},
#line 963 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dtg.local", "base64", 0},
#line 2400 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/ip-mr_v2.5", "base64", 0},
#line 1938 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-bittorrent", "base64", "torrent"},
#line 1179 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ims.lti.v2.toolproxy.id+json", "base64", 0},
#line 1559 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.revisionLog+xml", "base64", 0},
#line 1558 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.revisionHeaders+xml", "base64", 0},
#line 2788 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/x-parallel", "base64", 0},
#line 1495 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.scidm.messages+xml", "base64", 0},
#line 1806 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.veraison.tsm-report+json", "base64", 0},
#line 1519 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.customXmlProperties+xml", "base64", 0},
#line 3053 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/parityfec", "base64", 0},
#line 3056 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/raptorfec", "base64", 0},
#line 485 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/reginfo+xml", "base64", "rif"},
#line 2720 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/vnd.si.simp", "base64", 0},
#line 475 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.vcfbzip2", "base64", 0},
#line 159 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/concise-problem-details+cbor", "base64", 0},
#line 2339 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G722", "base64", 0},
#line 1529 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.comments+xml", "base64", 0},
#line 2386 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/basic", "base64", "au snd"},
#line 774 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.adobe.xfdf", "base64", "xfdf"},
#line 1571 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.worksheet+xml", "base64", 0},
#line 1453 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oipf.pae.gem", "base64", 0},
#line 1527 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.extended-properties+xml", "base64", 0},
#line 2619 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-3ds", "base64", "3ds"},
#line 935 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.data-vision.rdz", "base64", "rdz"},
#line 1523 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.drawingml.diagramColors+xml", "base64", 0},
#line 2116 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-msdos-program", "base64", "cmd bat com exe reg ps1 vbs"},
#line 890 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.coffeescript", "base64", 0},
#line 3109 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-f4v", "base64", "f4v"},
#line 947 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.desmume.movie", "base64", 0},
#line 1528 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.commentAuthors+xml", "base64", 0},
#line 1534 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.presentation", "base64", "pptx thmx"},
#line 2542 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/ief", "base64", "ief"},
#line 1552 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.dialogsheet+xml", "base64", 0},
#line 1539 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.slideMaster+xml", "base64", 0},
#line 3112 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-flv", "base64", "flv"},
#line 1536 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.slide", "base64", "sldx"},
#line 2836 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/org", "quoted-printable", 0},
#line 1542 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.slideshow.main+xml", "base64", 0},
#line 1113 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gerber", "base64", 0},
#line 2565 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/nitf", "base64", "ntf nitf"},
#line 2940 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-diff", "quoted-printable", "diff patch"},
#line 1530 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.handoutMaster+xml", "base64", 0},
#line 2530 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/emf", "base64", "emf"},
#line 1540 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.slideUpdateInfo+xml", "base64", 0},
#line 1537 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.slide+xml", "base64", 0},
#line 2023 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-gramps-xml", "base64", "gramps"},
#line 2960 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-log", "quoted-printable", "log"},
#line 2167 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-data-v6", "base64", "sd2"},
#line 1535 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.presentation.main+xml", "base64", 0},
#line 886 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cmmf-encoder-configuration+json", "base64", 0},
#line 2961 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-lua", "quoted-printable", "lua"},
#line 1292 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mophun.application", "base64", "mpn"},
#line 1544 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.tags+xml", "base64", 0},
#line 2699 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/example", "base64", 0},
#line 1282 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.micrografx.flo", "base64", "flo"},
#line 2965 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-modula", "quoted-printable", "m3 i3 mg ig"},
#line 2933 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-coldfusion", "quoted-printable", "cfm cfml cfc"},
#line 2860 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/troff", "8bit", "t tr roff troff man me ms nroff"},
#line 1557 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.queryTable+xml", "base64", 0},
#line 2172 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-program-data", "base64", "ss7 sas7bpgm"},
#line 625 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/trig", "base64", 0},
#line 3077 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.dlna.mpeg-tts", "base64", 0},
#line 2166 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-data-index", "base64", "si7 sas7bndx"},
#line 2524 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/avif", "base64", "avif"},
#line 345 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbms-msk-response+xml", "base64", 0},
#line 1257 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.lotus-organizer", "base64", "org"},
#line 795 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.airzip.filesecure.azf", "base64", "azf"},
#line 2610 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.svf", "base64", 0},
#line 2686 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-tga", "base64", "tga icb vda"},
#line 2094 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mbtiles", "base64", 0},
#line 1533 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.presProps+xml", "base64", 0},
#line 1115 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.globalplatform.card-content-mgt-response", "base64", 0},
#line 2590 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.dxf", "base64", "dxf"},
#line 2602 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.net-fpx", "base64", "npx"},
#line 1134 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.groove-vcard", "base64", "vcg"},
#line 2575 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/targa", "base64", "tga"},
#line 1114 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.globalplatform.card-content-mgt", "base64", 0},
#line 2743 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.dwf", "base64", "dwf"},
#line 1678 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sealed.3df", "base64", 0},
#line 564 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/simpleSymbolContainer", "base64", 0},
#line 2580 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.airzip.accelerator.azv", "base64", 0},
#line 2525 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/bmp", "base64", "bmp dib"},
#line 257 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/gxf", "base64", "gxf"},
#line 451 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pro_eng", "base64", 0},
#line 1765 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.tcpdump.pcap", "base64", "cap dmp pcap"},
#line 780 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.foca-codedfont", "base64", 0},
#line 1452 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oipf.mippvcontrolmessage+xml", "base64", 0},
#line 590 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/stratum", "base64", 0},
#line 2782 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/report", "base64", 0},
#line 2769 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/x3d-vrml", "base64", 0},
#line 1945 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-cbr", "base64", "cb7 cba cbr cbt cbz"},
#line 2687 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-vnd.dgn", "base64", "dgn"},
#line 2861 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/turtle", "quoted-printable", "ttl"},
#line 527 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/scitt-statement+cose", "base64", 0},
#line 2752 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.opengex", "base64", 0},
#line 783 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.modca-cmtable", "base64", 0},
#line 3113 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-gl", "base64", "gl"},
#line 3130 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-ogm", "base64", "ogm"},
#line 474 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.sclt", "base64", 0},
#line 367 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mmt-usd+xml", "base64", 0},
#line 2467 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.octel.sbc", "base64", 0},
#line 1675 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sbm.cid", "base64", 0},
#line 924 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.curl", "base64", "curl"},
#line 2843 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/prs.lines.tag", "quoted-printable", "dsc"},
#line 2119 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-msmetafile", "base64", "emf emz wmf wmz"},
#line 1409 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.novadigm.EDX", "base64", "edx"},
#line 605 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tamp-update", "base64", 0},
#line 934 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dart", "base64", "dart"},
#line 1500 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.omaloc-supl-init", "base64", 0},
#line 2397 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/flexfec", "base64", 0},
#line 2789 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/x-tar", "base64", 0},
#line 1408 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.novadigm.EDM", "base64", "edm"},
#line 1410 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.novadigm.EXT", "base64", "ext"},
#line 2390 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/dsr-es202050", "base64", 0},
#line 2883 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.fmi.flexstor", "quoted-printable", "flx"},
#line 633 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tzif-leap", "base64", 0},
#line 2714 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/partial", "8bit", 0},
#line 1547 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.viewProps+xml", "base64", 0},
#line 1746 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sus-calendar", "base64", "sus susp"},
#line 777 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.afplinedata-pagedef", "base64", 0},
#line 2113 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-msbinder", "base64", "obd"},
#line 421 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/passport", "base64", 0},
#line 2783 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/signed", "base64", 0},
#line 2344 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G726-32", "base64", 0},
#line 920 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cups-postscript", "base64", 0},
#line 951 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dir-bi.plate-dl-nosuffix", "base64", 0},
#line 921 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cups-ppd", "base64", "ppd"},
#line 2604 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.pco.b16", "base64", 0},
#line 1472 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.smartcard-trigger+xml", "base64", 0},
#line 1464 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.imd+xml", "base64", 0},
#line 3038 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/flexfec", "base64", 0},
#line 2998 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-vnd.flatland.3dml", "quoted-printable", 0},
#line 2773 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/digest", "8bit", 0},
#line 2584 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.dece.graphic", "base64", "uvg uvi uvvg uvvi"},
#line 2895 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.motorola.reflex", "quoted-printable", 0},
#line 3131 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-sgi-movie", "base64", "movie"},
#line 3070 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.dece.mobile", "base64", "uvm uvvm"},
#line 2583 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.cns.inf2", "base64", 0},
#line 11 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/1ob", "base64", 0},
#line 1993 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-bdf", "base64", "bdf"},
#line 764 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.acucorp", "7bit", "atc acutc"},
#line 1799 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uri-map", "base64", 0},
#line 966 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.ait", "base64", "ait"},
#line 1610 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pg.format", "base64", "str"},
#line 346 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbms-protection-description+xml", "base64", 0},
#line 2261 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-xpinstall", "base64", "xpi"},
#line 1039 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.eudora.data", "base64", 0},
#line 2863 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/uri-list", "quoted-printable", "uri uris urls"},
#line 2003 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-snf", "base64", "snf"},
#line 1284 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.microsoft.portable-executable", "base64", 0},
#line 1163 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ibm.modcap", "base64", "afp list3820 listafp"},
#line 1805 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.veraison.tsm-report+cbor", "base64", 0},
#line 2646 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-niff", "base64", 0},
#line 3017 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/H263-2000", "base64", 0},
#line 2631 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-emf-compressed", "base64", "emz"},
#line 2611 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.tencent.tap", "base64", 0},
#line 2481 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-aiff", "base64", "aif aifc aiff"},
#line 2482 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-caf", "base64", "caf"},
#line 1908 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-123", "base64", "wk"},
#line 428 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pics-rules", "base64", "prf"},
#line 2862 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/ulpfec", "quoted-printable", 0},
#line 2213 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tgif", "base64", "obj"},
#line 939 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dbf", "base64", 0},
#line 2504 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"chemical/x-cif", "base64", "cif"},
#line 3016 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/H263-1998", "base64", 0},
#line 1061 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fints", "base64", 0},
#line 2000 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-otf", "base64", "otf"},
#line 2306 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/zlib", "base64", 0},
#line 2630 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-emf", "base64", 0},
#line 2484 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-dec-basic", "base64", 0},
#line 636 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ulpfec", "base64", 0},
#line 2779 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/multilingual", "base64", 0},
#line 656 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.1ob", "base64", 0},
#line 606 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tamp-update-confirm", "base64", 0},
#line 1944 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-bzip2", "base64", "boz bz2 tbz2"},
#line 1469 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.sgdd+xml", "base64", 0},
#line 2505 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"chemical/x-cmdf", "base64", "cmdf"},
#line 1513 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openofficeorg.extension", "base64", "oxt"},
#line 1918 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-adobe-indesign", "base64", "indd"},
#line 403 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/octet-stream", "base64", "bin dms lha lzh class ani pgp gpg so dll dylib bpk deploy dist distz dump elc lrf mar pkg ipa"},
#line 1377 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ncd.reference", "base64", 0},
#line 2047 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-itunes-ipa", "base64", "ipa"},
#line 2498 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-psf", "base64", "psf1 psflib minipsf minipsf1 gslib minigsf"},
#line 1777 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ufdl", "base64", "ufd ufdl"},
#line 1509 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openblox.game+xml", "base64", 0},
#line 2944 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-erlang", "quoted-printable", "erl"},
#line 2722 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/x-emlx", "base64", "emlx"},
#line 1205 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.iptc.g2.planningitem+xml", "base64", 0},
#line 859 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.bpf", "base64", 0},
#line 781 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.foca-codepage", "base64", 0},
#line 2475 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vorbis", "base64", "ogg"},
#line 2229 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-troff", "base64", "t tr roff"},
#line 1274 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mdl-mbsdf", "base64", 0},
#line 2318 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/BV32", "base64", 0},
#line 2014 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-fractals", "base64", 0},
#line 2880 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.ficlab.flt", "quoted-printable", 0},
#line 60 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ace-trl+cbor", "base64", 0},
#line 2973 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-prolog", "quoted-printable", "pro"},
#line 2698 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/disposition-notification", "base64", 0},
#line 386 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/multipart-core", "base64", 0},
#line 2621 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-bmp", "base64", "bmp"},
#line 1705 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sirtx.vmv0", "base64", 0},
#line 2381 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/ac3", "base64", "ac3"},
#line 347 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbms-reception-report+xml", "base64", 0},
#line 2996 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-verilog", "quoted-printable", "v"},
#line 2692 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-xcf", "base64", "xcf"},
#line 1605 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pasti-stx-disk-image", "base64", 0},
#line 786 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.modca-objectcontainer", "base64", 0},
#line 2393 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/eac3", "base64", 0},
#line 2683 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-sony-sr2", "base64", "sr2"},
#line 2691 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-xbm", "7bit", "xbm"},
#line 1444 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ocf+cbor", "base64", 0},
#line 3114 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-ivf", "base64", "ivf"},
#line 2623 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-canon-cr2", "base64", "cr2"},
#line 1067 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.freelog.comic", "base64", 0},
#line 2776 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/form-data", "base64", 0},
#line 1551 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.connections+xml", "base64", 0},
#line 1087 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fut-misnet", "base64", 0},
#line 2577 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/tiff-fx", "base64", 0},
#line 1564 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.styles+xml", "base64", 0},
#line 1565 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.table+xml", "base64", 0},
#line 933 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.d3m-problem", "base64", 0},
#line 976 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.iptv.alfec-enhancement", "base64", 0},
#line 2415 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/rtp-enc-aescm128", "base64", 0},
#line 1491 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.poc.groups+xml", "base64", 0},
#line 1385 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nintendo.nitro.rom", "base64", 0},
#line 170 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cu-seeme", "base64", "cu"},
#line 408 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ogg", "base64", "ogx"},
#line 82 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-updatestreamcontrol+json", "base64", 0},
#line 2786 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/x-gzip", "base64", 0},
#line 1307 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-asf", "base64", "asf"},
#line 1531 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.notesMaster+xml", "base64", 0},
#line 1532 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.notesSlide+xml", "base64", 0},
#line 2196 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-staroffice-template", "base64", "vor"},
#line 2431 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/usac", "base64", 0},
#line 1477 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.cab-pcc+xml", "base64", 0},
#line 2936 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-config", "quoted-printable", "config conf cfg xconf"},
#line 2576 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/tiff", "base64", "tiff tif"},
#line 2785 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/voice-message", "base64", 0},
#line 1962 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-dbf", "base64", "dbf dbase dbase3"},
#line 1124 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gp3", "base64", 0},
#line 3099 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.sealed.mpeg4", "base64", "smpg s14"},
#line 3058 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/rtp-enc-aescm128", "base64", 0},
#line 2690 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-xbitmap", "7bit", "xbm"},
#line 158 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/commonground", "base64", 0},
#line 2233 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-u-star", "base64", 0},
#line 2038 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-idl-save-file", "base64", 0},
#line 24 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/CDFX+XML", "base64", 0},
#line 3120 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-ms-asf", "base64", "asf asx"},
#line 2568 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/png", "base64", "png"},
#line 400 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/oblivious-dns-message", "base64", 0},
#line 2963 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-matlab", "quoted-printable", 0},
#line 2521 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/apng", "base64", 0},
#line 2411 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/opus", "base64", "opus"},
#line 1162 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ibm.electronic-media", "base64", "emm"},
#line 2423 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/soundfont", "base64", 0},
#line 1467 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.provisioningtrigger", "base64", 0},
#line 860 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.bpf3", "base64", 0},
#line 2702 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/global", "base64", 0},
#line 2819 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/grammar-ref-list", "quoted-printable", 0},
#line 1303 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-3mfdocument", "base64", 0},
#line 2588 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.dwg", "base64", "dwg"},
#line 2408 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/mpeg", "base64", "mpga mp2 mp3 m2a m3a mp2a"},
#line 3098 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.sealed.mpeg1", "base64", "s11"},
#line 2802 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/cql", "quoted-printable", 0},
#line 2644 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-mrsid-image", "base64", "sid"},
#line 2391 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/dsr-es202211", "base64", 0},
#line 1900 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/won", "base64", 0},
#line 2758 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.usda", "base64", 0},
#line 2134 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-nzb", "base64", "nzb"},
#line 580 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sql", "base64", 0},
#line 2310 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/3gpp", "base64", 0},
#line 643 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vc+cose", "base64", 0},
#line 904 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.contact.cmsg", "base64", "cdbcmsg"},
#line 2748 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.gs.gdl", "base64", 0},
#line 1891 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/wasm", "8bit", "wasm"},
#line 171 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cwl", "base64", 0},
#line 985 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.service", "base64", "svc"},
#line 2457 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dvb.file", "base64", 0},
#line 1098 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gentoo.eclass", "base64", 0},
#line 1899 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/wita", "base64", 0},
#line 1463 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.drm-trigger+xml", "base64", 0},
#line 1711 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.snesdev-page-table", "base64", 0},
#line 3049 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/mpeg", "base64", "mp2 mp3g mpe mpeg mpg m1v m2v"},
#line 2257 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-xfig", "base64", "fig"},
#line 174 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cwt", "base64", 0},
#line 1100 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gentoo.manifest", "base64", 0},
#line 1775 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.truedoc", "base64", 0},
#line 2801 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/comma-separated-values", "8bit", "csv"},
#line 2235 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ustar", "base64", "ustar"},
#line 1175 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ims.imsccv1p3", "base64", 0},
#line 401 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ocsp-request", "base64", 0},
#line 1885 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vp+cose", "base64", 0},
#line 1590 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-package.digital-signature-xmlsignature+xml", "base64", 0},
#line 897 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.collection+json", "base64", 0},
#line 2908 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.wap.si", "quoted-printable", "si"},
#line 199 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dssc+xml", "base64", "xdssc"},
#line 1462 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.associated-procedure-parameter+xml", "base64", 0},
#line 124 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cda+xml", "base64", 0},
#line 186 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dicom+xml", "base64", 0},
#line 3005 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/3gpp", "base64", "3gp 3gpp"},
#line 410 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/omdoc+xml", "base64", "omdoc"},
#line 785 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.modca-mediummap", "base64", 0},
#line 2442 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dece.audio", "base64", "uva uvva"},
#line 584 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ssdl+xml", "base64", "ssdl"},
#line 368 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mods+xml", "base64", "mods"},
#line 406 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/odm+xml", "base64", 0},
#line 331 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mads+xml", "base64", "mads"},
#line 586 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ssml+xml", "base64", "ssml"},
#line 569 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/smil+xml", "8bit", "smi smil sml"},
#line 396 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/nlsml+xml", "base64", 0},
#line 286 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/its+xml", "base64", 0},
#line 1471 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.simple-symbol-container", "base64", 0},
#line 2168 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-dmdb", "base64", "s7m sas7bdmd"},
#line 2614 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.xiff", "base64", "xif"},
#line 168 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/csta+xml", "base64", 0},
#line 540 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/senml+xml", "base64", 0},
#line 1834 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wmc", "base64", 0},
#line 2909 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.wap.sl", "quoted-printable", "sl"},
#line 2191 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-spectrum-tzx", "base64", "tzx"},
#line 3078 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.dvb.file", "base64", "dvb"},
#line 189 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dita+xml", "base64", 0},
#line 323 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/lost+xml", "base64", "lostxml"},
#line 212 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/elm+xml", "base64", 0},
#line 92 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/atom+xml", "8bit", "atom"},
#line 1378 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nearst.inv+json", "base64", 0},
#line 342 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbms-deregister+xml", "base64", 0},
#line 213 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/emma+xml", "base64", "emma"},
#line 610 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tei+xml", "base64", "tei teicorpus"},
#line 2723 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/3mf", "base64", 0},
#line 524 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/scaip+xml", "base64", 0},
#line 54 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/aas+zip", "base64", 0},
#line 113 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/calendar+xml", "base64", 0},
#line 1253 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.lotus-1-2-3", "base64", "wks 123 wk1 wk2 wk3 wk4"},
#line 1096 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gentoo.catmetadata+xml", "base64", 0},
#line 2171 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-mddb", "base64", "sm7 sas7bmdb"},
#line 2867 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.IPTC.NewsML", "quoted-printable", 0},
#line 1172 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.immervision-ivu", "base64", "ivu"},
#line 361 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mets+xml", "base64", "mets"},
#line 572 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/soap+xml", "base64", 0},
#line 117 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cap+xml", "base64", 0},
#line 1161 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ibm.afplinedata", "base64", 0},
#line 2822 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/iso19139+xml", "quoted-printable", "iso19139"},
#line 2100 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-monotone-source-repo", "base64", 0},
#line 1939 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-bleeper", "base64", "bleep"},
#line 443 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pls+xml", "base64", "pls"},
#line 1574 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.vmlDrawing", "base64", 0},
#line 2341 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/G723", "base64", 0},
#line 166 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cpl+xml", "base64", 0},
#line 122 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ccmp+xml", "base64", 0},
#line 1560 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.sharedStrings+xml", "base64", 0},
#line 2534 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/gif", "base64", "gif"},
#line 548 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sep+xml", "base64", 0},
#line 2597 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.microsoft.icon", "base64", "ico"},
#line 2652 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-pentax-pef", "base64", "pef"},
#line 925 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.curl.car", "base64", "car"},
#line 630 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ttml+xml", "base64", "ttml"},
#line 214 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/emotionml+xml", "base64", 0},
#line 649 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vec+xml", "base64", 0},
#line 359 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/metalink+xml", "base64", "metalink"},
#line 83 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-updatestreamparams+json", "base64", 0},
#line 2684 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-sony-srf", "base64", "srf"},
#line 360 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/metalink4+xml", "base64", "meta4"},
#line 1961 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-cu-seeme", "base64", "csm cu"},
#line 2787 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/x-mixed-replace", "base64", 0},
#line 2747 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.gs-gdl", "base64", 0},
#line 218 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/epp+xml", "base64", 0},
#line 1734 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sun.xml.calc", "base64", "sxc"},
#line 1293 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mophun.certificate", "base64", "mpc"},
#line 1676 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sbm.mid2", "base64", 0},
#line 1778 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uic.dosipas.v1", "base64", 0},
#line 1766 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.tcpdump.pcapng", "base64", "pcapng"},
#line 123 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ccxml+xml", "base64", "ccxml"},
#line 2279 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xenc+xml", "base64", "xenc"},
#line 2269 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xacml+xml", "base64", 0},
#line 2022 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-gnumeric", "base64", "gnumeric"},
#line 2494 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-oggflac", "base64", 0},
#line 3015 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/H263", "base64", "h263"},
#line 1774 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.trueapp", "base64", "tra"},
#line 2270 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xaml+xml", "base64", "xaml"},
#line 2495 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-oggpcm", "base64", 0},
#line 2754 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.parasolid.transmit.text", "quoted-printable", "x_t xmt_txt"},
#line 1413 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ntt-local.ogw_remote-access", "base64", 0},
#line 375 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mpeg4-generic", "base64", 0},
#line 2293 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xslt+xml", "base64", "xslt"},
#line 823 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apple.mpegurl", "base64", "m3u8"},
#line 532 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sd-cwt", "base64", 0},
#line 198 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dssc+der", "base64", "dssc"},
#line 2579 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.adobe.premiere", "base64", "ppj"},
#line 2289 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xop+xml", "base64", "xop"},
#line 763 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.acucobol", "base64", "acu"},
#line 3006 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/3gpp-tt", "base64", 0},
#line 2295 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xv+xml", "base64", "mxml xhvml xvm xvml"},
#line 936 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.datalog", "base64", 0},
#line 2632 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-epson-erf", "base64", "erf"},
#line 1738 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sun.xml.impress", "base64", "sxi"},
#line 1517 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openvpi.dspx+json", "base64", 0},
#line 3118 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-mng", "base64", "mng"},
#line 744 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.HandHeld-Entertainment+xml", "base64", "zmm"},
#line 2170 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-itemstor", "base64", "sr7 sas7bitm"},
#line 424 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pem-certificate-chain", "base64", 0},
#line 2986 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-sql", "quoted-printable", "sql"},
#line 1735 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sun.xml.calc.template", "base64", "stc"},
#line 1716 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.spotfire.dxp", "base64", "dxp"},
#line 1283 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.micrografx.igx", "base64", "igx"},
#line 155 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/coap-eap", "base64", 0},
#line 2194 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sql", "base64", "sql"},
#line 1889 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/warc", "base64", "warc"},
#line 2288 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xmpp+xml", "base64", 0},
#line 1879 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/voicexml+xml", "base64", "vxml"},
#line 1901 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/word", "base64", "doc dot"},
#line 108 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/bizagi-modeler", "base64", "bpm"},
#line 820 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apple.installer+xml", "base64", "mpkg"},
#line 2111 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ms-xbap", "base64", "xbap"},
#line 3128 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-ogguvs", "base64", 0},
#line 978 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.notif-container+xml", "base64", 0},
#line 382 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/msword", "base64", "doc dot wrd"},
#line 1342 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-visio.stencil", "base64", "vssx"},
#line 2409 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/mpeg4-generic", "base64", 0},
#line 384 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/msword5", "base64", 0},
#line 1196 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ipld.dag-cbor", "base64", 0},
#line 944 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dece.unspecified", "base64", "uvvx uvx"},
#line 1739 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sun.xml.impress.template", "base64", "sti"},
#line 1796 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.listcmd", "base64", 0},
#line 2005 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-sunos-news", "base64", 0},
#line 1525 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.drawingml.diagramLayout+xml", "base64", 0},
#line 2117 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-msdownload", "base64", "exe com cmd bat dll msi reg ps1 vbs"},
#line 2115 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-msclip", "base64", "clp"},
#line 514 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rss+xml", "base64", "rss"},
#line 458 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prql", "base64", "prql"},
#line 773 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.adobe.xdp+xml", "base64", "xdp"},
#line 1794 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.list", "base64", 0},
#line 1966 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-director", "base64", "dcr @dir @dxr cct cst cxt dir dxr fgd swa w3d"},
#line 512 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rsd+xml", "base64", "rsd"},
#line 2876 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.dvb.subtitle", "quoted-printable", "sub"},
#line 513 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rsl+xml", "base64", 0},
#line 596 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tamp-apex-update", "base64", 0},
#line 824 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apple.numbers", "base64", "numbers"},
#line 497 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rlmi+xml", "base64", 0},
#line 1362 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mseq", "base64", "mseq"},
#line 2620 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-adobe-dng", "base64", "dng"},
#line 3050 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/mpeg4-generic", "base64", 0},
#line 1790 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.cacheop", "base64", 0},
#line 2234 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-uc2-compressed", "base64", "uc2"},
#line 1339 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-tnef", "base64", 0},
#line 1380 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nervana", "base64", "ent entity req request bkm kcm"},
#line 1786 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.alert", "base64", 0},
#line 299 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/json", "8bit", "json"},
#line 154 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cnrp+xml", "base64", 0},
#line 958 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.doremir.scorecloud-binary-document", "base64", 0},
#line 971 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.ipdcesgaccess", "base64", 0},
#line 922 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cups-raster", "base64", 0},
#line 647 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vcard+xml", "base64", 0},
#line 973 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.ipdcesgpdd", "base64", 0},
#line 983 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.notif-init+xml", "base64", 0},
#line 215 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/encaprtp", "base64", 0},
#line 2020 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-glulx", "base64", "ulx"},
#line 1344 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-visio.template", "base64", "vstx"},
#line 1003 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.emclient.accessrequest+xml", "base64", 0},
#line 1524 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.drawingml.diagramData+xml", "base64", 0},
#line 2589 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.dxb", "base64", "dxb"},
#line 294 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jose", "base64", 0},
#line 1191 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.intertrust.nncp", "base64", 0},
#line 2430 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/ulpfec", "base64", 0},
#line 2654 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-portable-anymap", "base64", "pnm"},
#line 1779 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uic.dosipas.v2", "base64", 0},
#line 2241 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-wacz", "base64", 0},
#line 1662 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.relpipe", "base64", 0},
#line 356 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/media_control+xml", "base64", 0},
#line 852 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.bint.med-content", "base64", 0},
#line 1941 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-bplist", "base64", 0},
#line 2109 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ms-wmd", "base64", "wmd"},
#line 991 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ecip.rlp", "base64", 0},
#line 2760 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.valve.source.compiled-map", "base64", 0},
#line 2496 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-pn-realaudio", "base64", "ra ram"},
#line 418 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/p21+zip", "base64", 0},
#line 1211 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.jam", "base64", "jam"},
#line 2499 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-realaudio", "base64", "ra"},
#line 919 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cups-pdf", "base64", 0},
#line 2290 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xproc+xml", "base64", "xpl"},
#line 456 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/provenance+xml", "base64", 0},
#line 3064 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/ulpfec", "base64", 0},
#line 1000 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.efi.img", "base64", 0},
#line 538 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/senml+cbor", "base64", 0},
#line 188 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dif+xml", "base64", "dif"},
#line 228 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/fastsoap", "base64", 0},
#line 2624 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-canon-cr3", "base64", "cr3"},
#line 817 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.api+json", "base64", 0},
#line 141 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/clf+xml", "base64", 0},
#line 2392 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/dsr-es202212", "base64", 0},
#line 2101 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ms-application", "base64", "application"},
#line 912 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.criticaltools.wbs+xml", "base64", "wbs"},
#line 1815 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.visio", "base64", "vsd vst vsw vss"},
#line 1566 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.tableSingleCells+xml", "base64", 0},
#line 1737 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sun.xml.draw.template", "base64", "std"},
#line 579 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/spirits-event+xml", "base64", 0},
#line 2110 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ms-wmz", "base64", "wmz"},
#line 842 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.avistar+xml", "base64", 0},
#line 328 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mac-compactpro", "base64", "cpt"},
#line 2533 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/g3fax", "base64", "g3"},
#line 2169 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-fdb", "base64", "sf7 sas7bfdb"},
#line 1717 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.spotfire.sfs", "base64", "sfs"},
#line 230 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/fdt+xml", "base64", 0},
#line 2823 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/javascript", "quoted-printable", "js mjs cjs"},
#line 898 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.collection.doc+json", "base64", 0},
#line 2490 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-mpegurl", "base64", "m3u"},
#line 321 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/load-control+xml", "base64", 0},
#line 300 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/json-nd", "base64", 0},
#line 1468 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.sgboot", "base64", 0},
#line 2824 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/javascript1.0", "quoted-printable", 0},
#line 2311 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/3gpp2", "base64", 0},
#line 2739 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/u3d", "base64", 0},
#line 2245 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-word", "base64", "doc dot"},
#line 118 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/captive+json", "base64", 0},
#line 464 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.implied-document+xml", "base64", 0},
#line 1804 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.vel+json", "base64", 0},
#line 2803 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/cql-expression", "quoted-printable", 0},
#line 1501 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oms.cellular-cose-content+cbor", "base64", 0},
#line 429 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pidf+xml", "base64", 0},
#line 2828 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/javascript1.4", "quoted-printable", 0},
#line 1004 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.enliven", "base64", "nml"},
#line 132 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cea-2018+xml", "base64", 0},
#line 1433 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.presentation", "base64", "odp"},
#line 1616 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pmtiles", "base64", 0},
#line 2410 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/ogg", "base64", "oga ogg spx opus"},
#line 2124 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-msword", "base64", "doc dot wrd"},
#line 1280 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mfmp", "base64", "mfm"},
#line 2164 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-catalog", "base64", "sc7 sas7bcat"},
#line 1427 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.formula", "base64", "odf"},
#line 256 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/grib", "base64", 0},
#line 1434 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.presentation-template", "base64", "otp"},
#line 1423 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.database", "base64", "odb"},
#line 511 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rs-metadata+xml", "base64", 0},
#line 1795 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.list-wbxml", "base64", 0},
#line 1265 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.marlin.drm.actiontoken+xml", "base64", 0},
#line 992 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.eclipse.ditto+json", "base64", 0},
#line 225 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/explicit-registration-response+jwt", "base64", 0},
#line 1442 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.tika.flat.document", "base64", 0},
#line 1420 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.base", "base64", "odb"},
#line 326 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/lpf+zip", "base64", 0},
#line 3007 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/3gpp2", "base64", "3g2 3gpp2"},
#line 1435 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.spreadsheet", "base64", "ods"},
#line 2825 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/javascript1.1", "quoted-printable", 0},
#line 2154 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-remote_printing", "base64", 0},
#line 1429 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.graphics", "base64", "odg"},
#line 1437 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.text", "base64", "odt"},
#line 1426 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.flat.text", "base64", "fodt"},
#line 2292 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xslfo+xml", "base64", "xslfo fo"},
#line 1814 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.vimina.vma", "base64", 0},
#line 1607 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.patientecommsdoc", "base64", 0},
#line 2508 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"chemical/x-pdb", "base64", "pdb"},
#line 1343 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-visio.stencil.macroEnabled.12", "base64", "vssm"},
#line 1425 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.flat.spreadsheet", "base64", "fods"},
#line 1424 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.flat.presentation", "base64", "fodp"},
#line 1035 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.timestamp-token", "base64", 0},
#line 1321 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-ims", "base64", "ims"},
#line 970 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.ipdcdftnotifaccess", "base64", 0},
#line 3052 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/ogg", "base64", "ogg ogv"},
#line 2612 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.valve.source.texture", "base64", 0},
#line 1440 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.text-template", "base64", "ott"},
#line 94 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/atomdeleted+xml", "8bit", 0},
#line 974 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.ipdcroaming", "base64", 0},
#line 1771 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.tri.onesource", "base64", 0},
#line 2405 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/mobile-xmf", "base64", 0},
#line 1428 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.formula-template", "base64", "odf odft"},
#line 1430 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.graphics-template", "base64", "otg"},
#line 1919 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-adobe-indesign-interchange", "base64", "inx"},
#line 2569 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/prs.btif", "base64", "btif"},
#line 2294 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xspf+xml", "base64", "xspf"},
#line 2026 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-guitar-pro", "base64", "gp4"},
#line 984 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.pfr", "base64", 0},
#line 1259 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.lotus-wordpro", "base64", "lwp"},
#line 1047 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.f-secure.mobile", "base64", 0},
#line 2914 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/wgsl", "quoted-printable", 0},
#line 943 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dece.ttml+xml", "base64", "uvt uvvt"},
#line 1498 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.omads-file+xml", "base64", 0},
#line 972 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.ipdcesgaccess2", "base64", 0},
#line 3133 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"x-chemical/x-pdb", "base64", "pdb"},
#line 2818 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/gff3", "quoted-printable", 0},
#line 829 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.arastra.swi", "base64", "swi"},
#line 1499 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.omads-folder+xml", "base64", 0},
#line 289 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/java-vm", "base64", "class"},
#line 1345 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-visio.template.macroEnabled.12", "base64", "vstm"},
#line 491 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/resolve-response+jwt", "base64", 0},
#line 2830 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/jscript", "quoted-printable", 0},
#line 2046 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-itunes-bplist", "base64", 0},
#line 1858 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xmpie.plan", "base64", 0},
#line 975 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.iptv.alfec-base", "base64", 0},
#line 2957 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-jsp", "quoted-printable", "jsp"},
#line 2735 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/step+xml", "base64", 0},
#line 835 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.as207960.vas.tap+jer", "base64", 0},
#line 836 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.as207960.vas.tap+uper", "base64", 0},
#line 1458 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.olpc-sugar", "base64", "xo"},
#line 2817 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/fwdred", "quoted-printable", 0},
#line 1056 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fdsn.stationxml+xml", "base64", 0},
#line 1562 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.sheet.main+xml", "base64", 0},
#line 1897 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/widget", "base64", "wgt"},
#line 1570 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.volatileDependencies+xml", "base64", 0},
#line 1563 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.sheetMetadata+xml", "base64", 0},
#line 250 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/gml+xml", "base64", "gml"},
#line 273 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/imagemap", "8bit", "imagemap imap"},
#line 1561 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.sheet", "base64", "xlsx"},
#line 1556 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.pivotTable+xml", "base64", 0},
#line 837 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.astraea-software.iota", "base64", "iota"},
#line 1436 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.spreadsheet-template", "base64", "ots"},
#line 1549 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.chartsheet+xml", "base64", 0},
#line 1111 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.geoplan", "base64", "g2w"},
#line 253 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/gnap-binding-rotation-jws", "base64", 0},
#line 330 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/macwriteii", "base64", 0},
#line 1439 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.text-master-template", "base64", 0},
#line 414 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/opc-nodeset+xml", "base64", 0},
#line 254 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/gnap-binding-rotation-jwsd", "base64", 0},
#line 2202 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sv4cpio", "base64", "sv4cpio"},
#line 558 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sgml-open-catalog", "base64", "soc"},
#line 495 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rif+xml", "base64", 0},
#line 494 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rfc+xml", "base64", 0},
#line 484 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rdf+xml", "8bit", "rdf owl xmp"},
#line 208 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ecmascript", "base64", "ecma es"},
#line 1656 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.rapid", "base64", 0},
#line 2736 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/step+zip", "base64", 0},
#line 2854 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/shaclc", "quoted-printable", 0},
#line 1860 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xmpie.xlim", "base64", 0},
#line 2829 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/jcr-cnd", "quoted-printable", 0},
#line 1018 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.asic-s+zip", "base64", "asics"},
#line 288 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/java-serialized-object", "base64", "ser"},
#line 2477 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/wav", "base64", "wav"},
#line 1455 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oipf.spdlist+xml", "base64", 0},
#line 1017 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.asic-e+zip", "base64", "asice"},
#line 1193 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.intu.qfx", "base64", "qfx"},
#line 3121 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-ms-vob", "base64", "vob"},
#line 518 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/samlassertion+xml", "base64", 0},
#line 272 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/im-iscomposing+xml", "base64", 0},
#line 1450 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oipf.dae.svg+xml", "base64", 0},
#line 445 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/postscript", "8bit", "eps ps ai epsf epsi"},
#line 2821 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/html", "8bit", "html htm htmlx shtml htx"},
#line 1166 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.iccprofile", "base64", "icc icm"},
#line 1058 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fgb", "base64", 0},
#line 1997 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-libgrx", "base64", 0},
#line 1037 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.tsl.der", "base64", 0},
#line 2772 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/byteranges", "base64", 0},
#line 1475 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.cab-address-book+xml", "base64", 0},
#line 1034 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.simservs+xml", "base64", 0},
#line 2177 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-xport", "base64", "xpt xport"},
#line 2887 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.hans", "quoted-printable", 0},
#line 335 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mathcad", "base64", "mcd"},
#line 1822 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wap.sic", "base64", "sic"},
#line 2474 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.wave", "base64", "wav"},
#line 2742 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.collada+xml", "base64", "dae"},
#line 2024 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-grib", "base64", "grb grb1 grb2"},
#line 2750 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.moml+xml", "base64", 0},
#line 1422 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.chart-template", "base64", "odc otc"},
#line 206 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/eat-ucs+cbor", "base64", 0},
#line 2715 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/rfc822", "8bit", "eml mime"},
#line 1421 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.chart", "base64", "odc"},
#line 1823 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wap.slc", "base64", "slc"},
#line 1438 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.text-master", "base64", "odm otm"},
#line 1809 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.veritone.aion+json", "base64", 0},
#line 465 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.implied-executable", "base64", 0},
#line 2704 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/global-disposition-notification", "base64", 0},
#line 2469 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.qcelp", "base64", "qcp"},
#line 1745 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.superfile.super", "base64", 0},
#line 2990 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-uuencode", "quoted-printable", "uu"},
#line 1364 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.msign", "base64", 0},
#line 1840 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wordlift", "base64", 0},
#line 383 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/msword2", "base64", 0},
#line 1244 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.las.las+xml", "base64", "lasxml"},
#line 1730 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.stepmania.package", "base64", "smzip"},
#line 604 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tamp-status-response", "base64", 0},
#line 1153 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hsl", "base64", 0},
#line 255 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/gpx+xml", "base64", "gpx"},
#line 247 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/geoxacml+xml", "base64", 0},
#line 1998 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-linux-psf", "base64", "psf"},
#line 969 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.esgcontainer", "base64", 0},
#line 1958 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-corelpresentations", "base64", "shw"},
#line 2899 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.senx.warpscript", "quoted-printable", 0},
#line 801 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.amiga.ami", "base64", "ami"},
#line 260 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/hep", "base64", "hep"},
#line 220 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/eshop", "base64", 0},
#line 1142 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hdt", "base64", 0},
#line 2104 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ms-dos-executable", "base64", "exe"},
#line 2527 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/cmu-raster", "base64", 0},
#line 2718 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/sipfrag", "base64", 0},
#line 2874 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.curl.scurl", "quoted-printable", "scurl"},
#line 1488 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.pal+xml", "base64", 0},
#line 597 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tamp-apex-update-confirm", "base64", 0},
#line 262 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/http", "base64", 0},
#line 2872 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.curl.dcurl", "quoted-printable", "dcurl"},
#line 2275 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xcap-error+xml", "base64", 0},
#line 2790 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/x-ustar", "base64", 0},
#line 353 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/measured-component+cbor", "base64", 0},
#line 2873 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.curl.mcurl", "quoted-printable", "mcurl"},
#line 979 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.notif-generic+xml", "base64", 0},
#line 2929 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-clojure", "quoted-printable", "clj"},
#line 526 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/scitt-receipt+cose", "base64", 0},
#line 1031 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.overload-control-policy-dataset+xml", "base64", 0},
#line 1021 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.iptvdiscovery+xml", "base64", 0},
#line 1470 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.sgdu", "base64", 0},
#line 523 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sbml+xml", "base64", "sbml"},
#line 1701 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.shp", "base64", 0},
#line 571 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/soap+fastinfoset", "base64", 0},
#line 1456 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oipf.ueprofile+xml", "base64", 0},
#line 1125 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gpxsee.map+xml", "base64", 0},
#line 1373 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nato.bindingdataobject+json", "base64", 0},
#line 1798 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.signal", "base64", 0},
#line 2277 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xcon-conference-info+xml", "base64", 0},
#line 1980 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-endnote-refer", "base64", "enw enr"},
#line 1682 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sealed.mht", "base64", "smht smh"},
#line 1374 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nato.bindingdataobject+xml", "base64", 0},
#line 2107 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ms-owner", "base64", 0},
#line 582 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/srgs+xml", "base64", "grxml"},
#line 270 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/illustrator", "base64", "ai"},
#line 27 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/CSTAdata+xml", "base64", 0},
#line 317 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/lgr+xml", "base64", 0},
#line 2855 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/shex", "quoted-printable", 0},
#line 1512 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openofficeorg.autotext", "base64", "bau"},
#line 107 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/beep+xml", "base64", 0},
#line 457 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/provided-claims+jwt", "base64", 0},
#line 489 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/reports+json", "base64", 0},
#line 1992 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-adobe-metric", "base64", "afm acfm amfm"},
#line 3089 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.mpegurl", "8bit", "mxu m4u"},
#line 2007 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-ttf", "base64", "ttc ttf"},
#line 1136 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hal+xml", "base64", "hal"},
#line 1192 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.intu.qbo", "base64", "qbo"},
#line 2626 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-cmu-raster", "base64", "ras"},
#line 2148 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-project", "base64", "mpx"},
#line 1844 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wt.stf", "base64", "stf"},
#line 519 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/samlmetadata+xml", "base64", 0},
#line 2546 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jais", "base64", 0},
#line 2737 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/step-xml+zip", "base64", 0},
#line 2545 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jaii", "base64", 0},
#line 412 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/onix-message+xml", "base64", 0},
#line 2283 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xliff+xml", "base64", 0},
#line 2547 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jls", "base64", 0},
#line 1508 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.onvif.metadata", "base64", 0},
#line 381 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/msc-mixer+xml", "base64", 0},
#line 1148 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hp-PCL", "base64", "pcl"},
#line 1149 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hp-PCLXL", "base64", "pclxl"},
#line 2065 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-lha", "base64", 0},
#line 2501 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-wav", "base64", "wav"},
#line 1346 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-windows.devicepairing", "base64", 0},
#line 1810 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.vertifile.pvf", "base64", 0},
#line 2950 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-haml", "quoted-printable", "haml"},
#line 2812 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/enriched", "quoted-printable", 0},
#line 1940 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-blorb", "base64", "blb blorb"},
#line 1702 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.shx", "base64", 0},
#line 1147 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hp-HPGL", "base64", "plt hpgl"},
#line 394 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/news-message-id", "base64", 0},
#line 57 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ace+cbor", "base64", 0},
#line 110 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/bufr", "base64", 0},
#line 2982 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-scheme", "quoted-printable", "scm"},
#line 224 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/expect-ct-report+json", "base64", 0},
#line 620 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/toc+cbor", "base64", 0},
#line 2622 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-bpg", "base64", "bpg"},
#line 2058 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-javascript", "8bit", "js mjs"},
#line 652 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vec-package+zip", "base64", 0},
#line 1949 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-chat", "base64", "chat"},
#line 982 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.notif-ia-registration-response+xml", "base64", 0},
#line 2067 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-lotus-123", "base64", "wks"},
#line 1151 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hp-hps", "base64", "hps"},
#line 1505 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.onepagertat", "base64", 0},
#line 981 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.notif-ia-registration-request+xml", "base64", 0},
#line 980 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.notif-ia-msglist+xml", "base64", 0},
#line 2552 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jpm", "base64", "jpm jpgm"},
#line 2236 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-vhd", "base64", 0},
#line 1503 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.onepagertamp", "base64", 0},
#line 2997 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-vhdl", "quoted-printable", "vhd vhdl"},
#line 1150 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hp-hpid", "base64", "hpid"},
#line 2826 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/javascript1.2", "quoted-printable", 0},
#line 1836 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wolfram.mathematica", "base64", 0},
#line 344 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbms-msk+xml", "base64", 0},
#line 2848 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/richtext", "8bit", "rtx"},
#line 1669 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.route66.link66+xml", "base64", "link66"},
#line 2937 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-csharp", "quoted-printable", "cs"},
#line 1181 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ims.lti.v2.toolsettings.simple+json", "base64", 0},
#line 1506 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.onepagertatp", "base64", 0},
#line 245 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/geopose+json", "base64", 0},
#line 1025 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.iptvsad-npvr+xml", "base64", 0},
#line 1103 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.geo+json", "base64", 0},
#line 217 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/envi.hdr", "base64", "hdr"},
#line 427 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pgp-signature", "base64", "asc sig"},
#line 1837 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wolfram.mathematica.package", "base64", 0},
#line 2558 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jxs", "base64", 0},
#line 2561 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jxss", "base64", 0},
#line 2560 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jxsi", "base64", 0},
#line 1914 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-abiword", "base64", "abw"},
#line 2559 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jxsc", "base64", 0},
#line 2029 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-hep", "base64", "hep"},
#line 1482 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.dd2+xml", "base64", "dd2"},
#line 2804 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/cql-identifier", "quoted-printable", 0},
#line 3087 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.motorola.video", "base64", 0},
#line 69 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-costmapfilter+json", "base64", 0},
#line 2972 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-php", "quoted-printable", "php php3 php4"},
#line 2952 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-haxe", "quoted-printable", "hx"},
#line 3043 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/jpm", "base64", "jpgm jpm"},
#line 1203 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.iptc.g2.newsmessage+xml", "base64", "nar"},
#line 2554 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jxl", "base64", "jxl"},
#line 1504 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.onepagertamx", "base64", 0},
#line 1507 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.onepagertatx", "base64", 0},
#line 1320 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-htmlhelp", "base64", "chm"},
#line 1841 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wordperfect", "base64", "wpd wp wp5 wp6 w60 wp61 wpt"},
#line 2660 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-canon", "base64", "crw"},
#line 2661 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-casio", "base64", "bay"},
#line 1597 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.osgi.dp", "base64", "dp"},
#line 845 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.banana-accounting", "base64", 0},
#line 1808 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.verimatrix.vcas", "base64", 0},
#line 2665 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-imacon", "base64", "fff"},
#line 1595 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.osgeo.mapguide.package", "base64", "mgp"},
#line 2013 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-foxmail", "base64", 0},
#line 2011 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-fossil-global-conf", "base64", 0},
#line 1372 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nato.bindingdataobject+cbor", "base64", 0},
#line 1744 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.supercard-pro-disk-image", "base64", 0},
#line 1431 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.image", "base64", "odi"},
#line 1349 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-windows.wsd.oob", "base64", 0},
#line 1971 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-dtbook+xml", "base64", "dtb"},
#line 2432 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.3gpp.iufp", "base64", 0},
#line 1432 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.image-template", "base64", "odi oti"},
#line 1365 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.multiad.creator", "base64", 0},
#line 926 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.curl.pcurl", "base64", "pcurl"},
#line 2180 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sfdu", "base64", "sfdu"},
#line 2076 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o", "base64", 0},
#line 310 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/kate", "base64", 0},
#line 435 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkcs8", "base64", "p8"},
#line 2670 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-minolta", "base64", "mrw"},
#line 3088 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.motorola.videop", "base64", 0},
#line 2662 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-epson", "base64", "erf"},
#line 2681 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-sigma-x3f", "base64", "x3f"},
#line 2771 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/appledouble", "8bit", 0},
#line 743 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.FloGraphIt", "base64", "gph"},
#line 562 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/simple-filter+xml", "base64", 0},
#line 1240 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.koan", "base64", "skd skm skp skt"},
#line 319 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/linkset", "base64", 0},
#line 431 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkcs10", "base64", "p10"},
#line 2460 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.lucent.voice", "base64", "lvp"},
#line 993 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ecowin.chart", "base64", "mag"},
#line 1118 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gnu.taler.merchant+json", "base64", 0},
#line 1502 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.onepager", "base64", 0},
#line 1483 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.drm.risd+xml", "base64", 0},
#line 1694 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.shade-save-file", "base64", 0},
#line 479 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/qsig", "base64", 0},
#line 1235 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kdl", "base64", 0},
#line 2091 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mathematica-old", "base64", 0},
#line 2060 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-jigdo", "base64", 0},
#line 2407 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/mpa-robust", "base64", 0},
#line 2553 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jpx", "base64", "jpx jpf"},
#line 325 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/lotus-123", "base64", "wks"},
#line 2066 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-lharc", "base64", 0},
#line 792 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ah-barcode", "base64", 0},
#line 2544 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/j2is", "base64", 0},
#line 1905 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/wordperfectd", "base64", "wpd"},
#line 2543 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/j2c", "base64", 0},
#line 1348 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-windows.printerpairing", "base64", 0},
#line 3044 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/jxsv", "base64", 0},
#line 131 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ce+cbor", "base64", 0},
#line 1617 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.poc.group-advertisement+xml", "base64", 0},
#line 1787 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.alert-wbxml", "base64", 0},
#line 1902 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/wordperfect", "base64", "wp"},
#line 1811 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.veryant.thin", "base64", 0},
#line 395 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/news-transmission", "base64", 0},
#line 1190 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.intertrust.digibox", "base64", 0},
#line 67 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-cdnifilter+json", "base64", 0},
#line 1459 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma-scws-config", "base64", 0},
#line 1197 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ipld.dag-json", "base64", 0},
#line 1305 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-PrintSchemaTicket+xml", "base64", 0},
#line 2586 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.djvu", "base64", "djvu djv"},
#line 2761 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.vtu", "base64", "vtu"},
#line 544 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sensml+cbor", "base64", 0},
#line 2709 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/news", "8bit", 0},
#line 2912 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.zoo.kcl", "quoted-printable", 0},
#line 2009 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-vfont", "base64", 0},
#line 1817 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.vividence.scriptfile", "base64", 0},
#line 870 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cendio.thinlinc.clientconf", "base64", 0},
#line 2744 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.dwfx+xps", "base64", "dwfx"},
#line 1829 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wfa.dpp", "base64", 0},
#line 1177 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ims.lti.v2.toolconsumerprofile+json", "base64", 0},
#line 1838 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wolfram.player", "base64", "nbp"},
#line 79 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-propmapparams+json", "base64", 0},
#line 1903 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/wordperfect5.1", "base64", "wp5 wp"},
#line 757 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.SimTech-MindMapper", "base64", "twd twds"},
#line 768 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.adobe.flash.movie", "base64", 0},
#line 732 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.sms", "base64", "sms"},
#line 88 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/applixware", "base64", "aw"},
#line 194 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dots+cbor", "base64", 0},
#line 931 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.d2l.coursepackage1p0+zip", "base64", 0},
#line 101 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/atsc-rsat+xml", "base64", 0},
#line 1904 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/wordperfect6.1", "base64", "wp6"},
#line 2770 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/alternative", "8bit", 0},
#line 146 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/clue+xml", "base64", 0},
#line 2398 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/fwdred", "base64", 0},
#line 2820 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/hl7v2", "quoted-printable", 0},
#line 885 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cmmf-efd+xml", "base64", 0},
#line 2767 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/x3d+vrml", "base64", "x3dv x3dvz"},
#line 1366 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.multiad.creator.cif", "base64", 0},
#line 2557 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jxrS", "base64", 0},
#line 59 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ace-groupcomm+cbor", "base64", 0},
#line 1338 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-spreadsheetml", "base64", 0},
#line 2707 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/imdn+xml", "base64", 0},
#line 2573 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/svg+xml", "8bit", "svg svgz"},
#line 2556 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jxrA", "base64", 0},
#line 1441 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oasis.opendocument.text-web", "base64", "oth"},
#line 2798 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/cache-manifest", "quoted-printable", "appcache manifest"},
#line 2296 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/yaml", "base64", 0},
#line 2768 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/x3d+xml", "base64", "x3d x3dz"},
#line 2402 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/mhas", "base64", 0},
#line 388 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/n-quads", "base64", 0},
#line 2063 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-koan", "base64", "skp skd skt skm"},
#line 369 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/moss-keys", "base64", 0},
#line 809 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.antix.game-component", "base64", "atx"},
#line 2535 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/heic", "base64", "heic hif"},
#line 1663 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.resilient.logic", "base64", 0},
#line 1350 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-wmdrm.lic-chlg-req", "base64", 0},
#line 442 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkixcmp", "base64", "pki"},
#line 2832 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/markdown", "quoted-printable", "markdown md mkd mdtext"},
#line 2784 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/vnd.bint.med-plus", "base64", 0},
#line 1785 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uoml+xml", "base64", "uoml"},
#line 1638 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.quarantainenet", "base64", 0},
#line 609 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/teep+cbor", "base64", 0},
#line 1709 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.smart.teacher", "base64", "teacher"},
#line 1288 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mindjet.mindmanager", "base64", "mmp mmap mmpt mmat mmmp mmas"},
#line 1254 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.lotus-approach", "base64", "apr"},
#line 2273 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xcap-diff+xml", "base64", "xdf"},
#line 679 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcdata-affiliation-command+xml", "base64", 0},
#line 1608 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pawaafile", "base64", "paw"},
#line 3102 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.uvvu.mp4", "base64", "uvu uvvu"},
#line 1947 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-cdlink", "base64", "vcd"},
#line 63 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/aif+cbor", "base64", 0},
#line 2677 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-red", "base64", "r3d"},
#line 2889 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.hgl", "quoted-printable", 0},
#line 2680 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-rgb", "base64", "rgb"},
#line 2519 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"haptics/ivs", "base64", 0},
#line 826 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apple.pkpass", "base64", "pkpass"},
#line 682 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcdata-payload", "base64", 0},
#line 2674 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-pentax", "base64", "ptx pef"},
#line 1985 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-esri-spatially-enabled-db", "base64", 0},
#line 717 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.s1ap", "base64", 0},
#line 684 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcdata-service-config+xml", "base64", 0},
#line 2962 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-makefile", "quoted-printable", "makefile gnumakefile"},
#line 1579 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.endnotes+xml", "base64", 0},
#line 810 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apache.arrow.file", "base64", 0},
#line 1753 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.symbian.install", "base64", "sis sisx"},
#line 671 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.access-transfer-events+xml", "base64", 0},
#line 2098 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mmm-digisonde", "base64", 0},
#line 351 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbms-user-service-description+xml", "base64", 0},
#line 681 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcdata-msgstore-ctrl-request+xml", "base64", 0},
#line 2455 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dts.hd", "base64", "dtshd"},
#line 1575 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.comments+xml", "base64", 0},
#line 454 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/protobuf", "base64", 0},
#line 677 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.lpp", "base64", 0},
#line 1546 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.template.main+xml", "base64", 0},
#line 1582 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.footnotes+xml", "base64", 0},
#line 2905 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.typst", "quoted-printable", 0},
#line 1580 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.fontTable+xml", "base64", 0},
#line 1545 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.template", "base64", "potx"},
#line 1541 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.slideshow", "base64", "ppsx"},
#line 2618 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/wmf", "base64", "wmf"},
#line 800 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.americandynamics.acc", "base64", "acc"},
#line 120 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cbor-seq", "base64", 0},
#line 2928 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-chdr", "quoted-printable", "h"},
#line 1578 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.document.main+xml", "base64", 0},
#line 1577 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.document.glossary+xml", "base64", 0},
#line 1169 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.imagemeter.folder+zip", "base64", 0},
#line 1762 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.syncml.ds.notification", "base64", 0},
#line 2183 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-shar", "8bit", "shar"},
#line 1576 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.document", "base64", "docx"},
#line 2478 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/webm", "base64", "weba webm"},
#line 1757 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.syncml.dm.notification", "base64", 0},
#line 438 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkix-cert", "base64", "cer"},
#line 1615 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pmi.widget", "base64", "wg"},
#line 2897 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.net2phone.commcenter.command", "quoted-printable", "ccc"},
#line 1522 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.drawingml.chartshapes+xml", "base64", 0},
#line 977 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.notif-aggregate-root+xml", "base64", 0},
#line 236 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/font-tdpfr", "base64", "pfr"},
#line 1761 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.syncml.dmtnds+xml", "base64", 0},
#line 724 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-location-info+xml", "base64", 0},
#line 452 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/problem+json", "base64", 0},
#line 710 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mid-call+xml", "base64", 0},
#line 1697 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.shana.informed.interchange", "base64", "iif"},
#line 2002 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-printer-metric", "base64", "pfm"},
#line 13 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/3gpp-ims+xml", "base64", 0},
#line 2900 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.si.uricatalogue", "quoted-printable", 0},
#line 3069 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.dece.hd", "base64", "uvh uvvh"},
#line 543 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/senml-exi", "base64", 0},
#line 1165 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ibm.secure-container", "base64", "sc"},
#line 1313 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-excel.sheet.4", "base64", 0},
#line 3105 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/webm", "base64", "webm"},
#line 583 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sru+xml", "base64", "sru"},
#line 955 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dolby.mlp", "base64", "mlp"},
#line 2617 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/webp", "base64", "webp"},
#line 1218 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.japannet-verification", "base64", 0},
#line 1239 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kidspiration", "base64", "kia"},
#line 1922 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-apple-diskimage", "base64", "dmg"},
#line 1466 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.notification+xml", "base64", 0},
#line 1830 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wfa.p2p", "base64", 0},
#line 738 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.vae-info+xml", "base64", 0},
#line 1698 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.shana.informed.package", "base64", "ipk"},
#line 703 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcvideo-location-info+xml", "base64", 0},
#line 2548 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jp2", "base64", "jp2 jpg2"},
#line 3129 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-oggyuv", "base64", 0},
#line 1871 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yaoweme", "base64", 0},
#line 3000 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-yacc", "quoted-printable", "y"},
#line 3080 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.hns.video", "base64", 0},
#line 3085 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.iptvforum.ttsavc", "base64", 0},
#line 2555 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jxr", "base64", 0},
#line 707 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcvideo-transmission-request+xml", "base64", 0},
#line 1117 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gnu.taler.exchange+json", "base64", 0},
#line 740 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp2.sms", "base64", 0},
#line 651 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vec-package+gzip", "base64", 0},
#line 695 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcptt-signed+xml", "base64", 0},
#line 164 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cose-key-set", "base64", 0},
#line 865 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cab-jscript", "base64", 0},
#line 704 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcvideo-mbms-usage-info+xml", "base64", 0},
#line 696 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcptt-ue-config+xml", "base64", 0},
#line 3001 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-yaml", "8bit", "yaml yml"},
#line 1479 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.cab-user-prefs+xml", "base64", 0},
#line 2476 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vorbis-config", "base64", 0},
#line 1012 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ericsson.quickcall", "base64", 0},
#line 735 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.state-and-event-info+xml", "base64", 0},
#line 2439 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.cmles.radio-events", "base64", 0},
#line 2069 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-lzh-compressed", "base64", "lha lzh"},
#line 204 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/eat-bun+cbor", "base64", 0},
#line 2078 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-core", "base64", 0},
#line 2515 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"font/woff", "base64", "woff"},
#line 2271 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xcap-att+xml", "base64", 0},
#line 2727 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/gltf+json", "base64", 0},
#line 1599 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.otps.ct-kip+xml", "base64", 0},
#line 1042 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.evolv.ecig.theme", "base64", 0},
#line 553 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/set-payment", "base64", 0},
#line 765 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.adobe.aftereffects.project", "base64", "aep"},
#line 462 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.cyn", "base64", 0},
#line 3094 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.objectvideo", "base64", "mp4 m4v"},
#line 888 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cncf.helm.chart.provenance.v1.prov", "base64", 0},
#line 2001 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-pcf", "base64", "pcf"},
#line 2946 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-forth", "quoted-printable", "4th"},
#line 873 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.chess-pgn", "base64", 0},
#line 1629 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.proteus.magazine", "base64", "mgz"},
#line 2967 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-objcsrc", "quoted-printable", "m"},
#line 2601 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.ms-photo", "base64", "wdp"},
#line 864 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.c3voc.schedule+xml", "base64", 0},
#line 1261 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.macports.portpkg", "base64", "portpkg"},
#line 1950 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-chess-pgn", "base64", "pgn"},
#line 2838 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/parityfec", "quoted-printable", 0},
#line 2087 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-preload", "base64", 0},
#line 1821 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wantverse", "base64", 0},
#line 17 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/3gppHal+json", "base64", 0},
#line 811 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apache.arrow.stream", "base64", 0},
#line 2827 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/javascript1.3", "quoted-printable", 0},
#line 1368 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.musician", "base64", "mus"},
#line 1983 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-erdas-hfa", "base64", "hfa"},
#line 962 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ds-keypoint", "base64", "kpxx"},
#line 2248 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-wordperfectd", "base64", "wpd"},
#line 2093 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-matroska", "base64", 0},
#line 439 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkix-crl", "base64", "crl"},
#line 2246 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-wordperfect", "base64", "wp"},
#line 741 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp2.tcap", "base64", "tcap"},
#line 1942 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-brotli", "base64", "br brotli"},
#line 1358 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-works", "base64", "wcm wdb wks wps"},
#line 1581 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.footer+xml", "base64", 0},
#line 3101 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.sealedmedia.softseal.mov", "base64", "smov smo s1q"},
#line 430 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pidf-diff+xml", "base64", 0},
#line 2689 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-wmf", "base64", 0},
#line 2182 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-shapefile", "base64", "shp"},
#line 3063 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/theora", "base64", 0},
#line 1800 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.valve.source.material", "base64", 0},
#line 997 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ecowin.seriesrequest", "base64", 0},
#line 1583 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.numbering+xml", "base64", 0},
#line 2247 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-wordperfect6.1", "base64", "wp6"},
#line 555 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/set-registration", "base64", 0},
#line 2221 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-ooxml", "base64", 0},
#line 793 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ahead.space", "base64", "ahead"},
#line 106 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/batch-SMTP", "base64", 0},
#line 1550 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.comments+xml", "base64", 0},
#line 699 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcs-location-user-config+xml", "base64", 0},
#line 486 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/relax-ng-compact-syntax", "base64", "rnc"},
#line 1451 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oipf.dae.xhtml+xml", "base64", 0},
#line 2516 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"font/woff2", "base64", "woff2"},
#line 432 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkcs12", "base64", 0},
#line 502 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/route-s-tsid+xml", "base64", 0},
#line 723 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-location-info+cbor", "base64", 0},
#line 1748 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.svr.receipt+json", "base64", 0},
#line 16 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/3gpp-media-delivery-metrics-report+json", "base64", 0},
#line 318 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/link-format", "base64", 0},
#line 554 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/set-payment-initiation", "base64", "setpay"},
#line 1852 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xecrets-encrypted", "base64", 0},
#line 1976 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ebu-stl", "base64", 0},
#line 2678 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-sigma", "base64", "x3f"},
#line 1988 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-executable", "base64", 0},
#line 698 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcptt-user-profile+xml", "base64", 0},
#line 1445 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oci.image.manifest.v1+json", "base64", 0},
#line 2125 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mswrite", "base64", "wri"},
#line 1715 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.solent.sdkm+xml", "base64", "sdkd sdkm"},
#line 207 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/eat-ucs+json", "base64", 0},
#line 2041 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-internet-archive", "base64", "arc"},
#line 1383 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nila.protobuf-bundle+zip", "base64", 0},
#line 2688 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-win-bmp", "base64", 0},
#line 1214 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.japannet-payment-wakeup", "base64", 0},
#line 98 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/atsc-dynamic-event-message", "base64", 0},
#line 843 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.balsamiq.bmml+xml", "base64", 0},
#line 1064 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.font-fontforge-sfd", "base64", 0},
#line 2028 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-hdf", "base64", "hdf he5 h5"},
#line 2882 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.fly", "quoted-printable", "fly"},
#line 1315 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-excel.sheet.macroEnabled.12", "base64", "xlsm"},
#line 2032 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-httpresponse", "base64", 0},
#line 1038 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.eu.kasparian.car+json", "base64", 0},
#line 1584 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.settings+xml", "base64", 0},
#line 488 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/remote_printing", "base64", 0},
#line 927 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cyan.dean.root+xml", "base64", 0},
#line 1587 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.template.main+xml", "base64", 0},
#line 1586 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.template", "base64", "dotx"},
#line 709 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcvideo-user-profile+xml", "base64", 0},
#line 1212 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.japannet-directory-service", "base64", 0},
#line 3100 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.sealed.swf", "base64", "sswf ssw"},
#line 2102 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ms-asx", "base64", "asx"},
#line 1703 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sigrok.session", "base64", 0},
#line 737 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.v2x", "base64", 0},
#line 2195 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sqlite3", "base64", 0},
#line 10 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/1d-interleaved-parityfec", "base64", 0},
#line 1588 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.webSettings+xml", "base64", 0},
#line 2090 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mathcad", "base64", "mcd"},
#line 1131 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.groove-injector", "base64", "grv"},
#line 1923 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-appleworks", "base64", "cwk"},
#line 712 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.pfcp", "base64", 0},
#line 2155 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-research-info-systems", "base64", "ris"},
#line 528 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/scvp-cv-request", "base64", "scq"},
#line 2875 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.debian.copyright", "quoted-printable", 0},
#line 855 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.blueice.multipass", "base64", "mpm"},
#line 832 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.artsquare", "base64", 0},
#line 706 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcvideo-service-config+xml", "base64", 0},
#line 1473 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.sprov+xml", "base64", 0},
#line 683 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcdata-regroup+xml", "base64", 0},
#line 1068 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.frogans.fnc", "base64", "fnc"},
#line 556 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/set-registration-initiation", "base64", "setreg"},
#line 1324 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-officetheme", "base64", "thmx"},
#line 2089 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-maker", "base64", "frm maker frame fm fb book fbdoc"},
#line 2220 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-old-excel", "base64", 0},
#line 530 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/scvp-vp-request", "base64", "spq"},
#line 726 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-mbs-usage-info+xml", "base64", 0},
#line 1695 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.shana.informed.formdata", "base64", "ifm"},
#line 2886 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.graphviz", "quoted-printable", "gv"},
#line 990 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ecdis-update", "base64", 0},
#line 1631 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pt.mundusmundi", "base64", 0},
#line 1390 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.noblenet-web", "base64", "nnw"},
#line 664 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.5gnas", "base64", 0},
#line 490 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/reputon+json", "base64", 0},
#line 3076 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.directv.mpeg-tts", "base64", 0},
#line 2242 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-wais-source", "base64", "src"},
#line 2896 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.ms-mediapackage", "quoted-printable", 0},
#line 147 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/clue_info+xml", "base64", 0},
#line 2187 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-silverlight-app", "base64", "xap"},
#line 1951 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-chrome-extension", "base64", "crx"},
#line 487 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/remote-printing", "base64", 0},
#line 202 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/eat+cwt", "base64", 0},
#line 2151 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-quattro-pro", "base64", "wq1 wq2 wkq qpw wb1 wb2 wb3"},
#line 702 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcvideo-info+xml", "base64", 0},
#line 689 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcptt-floor-request+xml", "base64", 0},
#line 700 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcvideo-affiliation-command+xml", "base64", 0},
#line 1696 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.shana.informed.formtemplate", "base64", "itp"},
#line 685 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcdata-signalling", "base64", 0},
#line 2562 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/ktx", "base64", "ktx"},
#line 450 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/private-token-response", "base64", 0},
#line 2667 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-leaf", "base64", "mos"},
#line 2659 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-adobe", "base64", "dng"},
#line 3041 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/jpeg2000", "base64", 0},
#line 734 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.srvcc-ext+xml", "base64", 0},
#line 1215 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.japannet-registration", "base64", 0},
#line 623 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/toolbook", "base64", "tbk"},
#line 675 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.gtpc", "base64", 0},
#line 697 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcptt-ue-init-config+xml", "base64", 0},
#line 2436 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.audiokoz", "base64", 0},
#line 694 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcptt-service-config+xml", "base64", 0},
#line 1361 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.msa-disk-image", "base64", "msa"},
#line 691 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcptt-location-info+xml", "base64", 0},
#line 1302 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mozilla.xul+xml", "base64", "xul"},
#line 594 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/swid+xml", "base64", 0},
#line 711 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.ngap", "base64", 0},
#line 722 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-info+xml", "base64", 0},
#line 178 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dashdelta", "base64", 0},
#line 1842 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wqd", "base64", "wqd"},
#line 2926 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-c++src", "quoted-printable", "cpp cxx cc c c++"},
#line 1906 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/wsdl+xml", "base64", "wsdl"},
#line 237 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/font-woff", "base64", "woff woff2"},
#line 662 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp-prose-pc8+xml", "base64", 0},
#line 1370 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mynfc", "base64", "taglet"},
#line 104 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/automationml-amlx+zip", "base64", 0},
#line 1478 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.cab-subs-invite+xml", "base64", 0},
#line 2599 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.mozilla.apng", "base64", 0},
#line 2487 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-matroska", "base64", "mka"},
#line 336 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mathematica", "base64", "ma mb nb"},
#line 196 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/drafting", "base64", 0},
#line 2910 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.wap.wml", "quoted-printable", "wml"},
#line 2401 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/matroska", "base64", "mka"},
#line 798 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.amazon.ebook", "base64", "azw"},
#line 1120 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.google-earth.kmz", "8bit", "kmz"},
#line 1129 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.groove-help", "base64", "ghf"},
#line 506 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rpki-manifest", "base64", "mft"},
#line 1311 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-excel.sheet.2", "base64", 0},
#line 1833 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wmap", "base64", 0},
#line 884 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cmmf-configuration-information+json", "base64", 0},
#line 2649 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-paintshoppro", "base64", "psp pspimage"},
#line 1097 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gentoo.ebuild", "base64", 0},
#line 701 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcvideo-affiliation-info+xml", "base64", 0},
#line 2204 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-t3vm-image", "base64", "t3"},
#line 1818 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.vocalshaper.vsp4", "base64", 0},
#line 2510 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"drawing/dwf", "base64", "dwf"},
#line 940 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dcmp+xml", "base64", 0},
#line 1208 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.is-xpr", "base64", "xpr"},
#line 1043 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.exstream-empower+zip", "base64", 0},
#line 2706 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/http", "base64", 0},
#line 1708 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.smart.notebook", "base64", 0},
#line 889 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cncf.helm.config.v1+json", "base64", 0},
#line 193 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/docbook+xml", "base64", "dbk"},
#line 3117 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-matroska", "base64", "mk3d mks mkv"},
#line 1319 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-fontobject", "base64", "eot"},
#line 3046 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/matroska", "base64", 0},
#line 863 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.bzip3", "base64", 0},
#line 354 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/measured-component+json", "base64", 0},
#line 1854 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xfdl.webform", "base64", 0},
#line 787 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.afpc.modca-overlay", "base64", 0},
#line 2759 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.usdz+zip", "base64", 0},
#line 1028 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.iptvueprofile+xml", "base64", 0},
#line 1725 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.stardivision.draw", "base64", "sda"},
#line 2606 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.sealed.png", "base64", 0},
#line 444 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/poc-settings+xml", "base64", 0},
#line 2144 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-pkcs7-certificates", "base64", "p7b spc"},
#line 1907 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/wspolicy+xml", "base64", "wspolicy"},
#line 3042 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/jpeg2000-scl", "base64", 0},
#line 965 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dtg.local.html", "base64", 0},
#line 128 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cdmi-object", "base64", "cdmio"},
#line 2956 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-java-source", "quoted-printable", "java"},
#line 3136 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"x-drawing/dwf", "base64", "dwf"},
#line 881 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.clonk.c4group", "base64", "c4d c4f c4g c4p c4u"},
#line 413 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/onix-message-short+xml", "base64", 0},
#line 1634 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pwg-multiplexed", "base64", 0},
#line 1846 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wv.csp+xml", "8bit", 0},
#line 799 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.amazon.mobi8-ebook", "base64", 0},
#line 2537 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/heif", "base64", "heif hif"},
#line 1139 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hcl-bireports", "base64", 0},
#line 1236 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kenameaapp", "base64", "htke"},
#line 97 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/atsc-dwd+xml", "base64", 0},
#line 882 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cluetrust.cartomobile-config", "base64", "c11amc"},
#line 1847 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wv.ssp+xml", "8bit", 0},
#line 337 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mathematica-old", "base64", 0},
#line 839 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.aumtrix.aum", "base64", 0},
#line 663 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp-v2x-local-service-information", "base64", 0},
#line 2571 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/pwg-raster", "base64", 0},
#line 2847 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/rfc822-headers", "quoted-printable", 0},
#line 2139 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-parquet", "base64", "parquet"},
#line 2222 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-ooxml-protected", "base64", 0},
#line 191 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dns+json", "base64", 0},
#line 316 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ld+json", "base64", 0},
#line 405 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/odm+json", "base64", 0},
#line 58 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ace+json", "base64", 0},
#line 2472 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.sealedmedia.softseal.mpeg", "base64", "smp3 smp s1m"},
#line 608 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/td+json", "base64", 0},
#line 844 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.balsamiq.bmpr", "base64", 0},
#line 618 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tm+json", "base64", 0},
#line 2716 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/s-http", "base64", 0},
#line 211 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/elm+json", "base64", 0},
#line 112 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/calendar+json", "base64", 0},
#line 185 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dicom+json", "base64", 0},
#line 1048 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.faf+yaml", "base64", 0},
#line 721 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-group-doc+xml", "base64", 0},
#line 2549 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jpeg", "base64", "jpeg jpg jpe jfif jif jfi"},
#line 525 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/scim+json", "base64", 0},
#line 2638 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-jp2-codestream", "base64", "j2c"},
#line 539 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/senml+json", "base64", 0},
#line 492 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/resource-lists+xml", "base64", "rl"},
#line 2272 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xcap-caps+xml", "base64", 0},
#line 2143 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-pkcs12", "base64", "p12 pfx"},
#line 2633 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-freehand", "base64", "fh fh4 fh5 fh7 fhc fh40 fh50 fh8 fh9 fh10 fh11 fh12 ft7 ft8 ft9 ft10 ft11 ft12"},
#line 956 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dolby.mobile.1", "base64", 0},
#line 43 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EmergencyCallData.eCall.MSD", "base64", 0},
#line 1246 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ldev.productlicensing", "base64", 0},
#line 41 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EmergencyCallData.VEDS+xml", "base64", 0},
#line 425 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pgp-encrypted", "7bit", "pgp gpg"},
#line 1281 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.micro+json", "base64", 0},
#line 470 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.mayfile", "base64", 0},
#line 601 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tamp-sequence-adjust", "base64", 0},
#line 350 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbms-schedule+xml", "base64", 0},
#line 151 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cmw+cose", "base64", 0},
#line 2567 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/pjpeg", "base64", 0},
#line 1069 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.frogans.ltf", "base64", "ltf"},
#line 1690 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.seis+json", "base64", 0},
#line 678 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mc-signalling-ear", "base64", 0},
#line 478 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pvd+json", "base64", 0},
#line 169 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/csvm+json", "base64", 0},
#line 1880 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/voucher+cose", "base64", 0},
#line 1286 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.miele+json", "base64", 0},
#line 309 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jwt", "base64", 0},
#line 1269 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mason+json", "base64", 0},
#line 42 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EmergencyCallData.cap+xml", "base64", 0},
#line 1198 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ipld.raw", "base64", 0},
#line 1736 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sun.xml.draw", "base64", "sxd"},
#line 878 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.citationstyles.style+xml", "base64", 0},
#line 3075 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.directv.mpeg", "base64", 0},
#line 2239 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-vnd.datapackage+json", "base64", 0},
#line 135 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cfw", "base64", 0},
#line 2656 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-portable-bitmap", "base64", "pbm"},
#line 1835 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wmf.bootstrap", "base64", 0},
#line 841 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.avalon+json", "base64", 0},
#line 1999 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-opentype", "base64", "otf"},
#line 607 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/taxii+json", "base64", 0},
#line 631 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tve-trigger", "base64", 0},
#line 2509 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"chemical/x-xyz", "base64", "xyz"},
#line 899 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.collection.next+json", "base64", 0},
#line 1797 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.listcmd-wbxml", "base64", 0},
#line 589 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/stix+json", "base64", 0},
#line 1673 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sailingtracker.track", "base64", "st"},
#line 1791 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.cacheop-wbxml", "base64", 0},
#line 1223 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.jisp", "base64", "jisp"},
#line 2217 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-msoffice", "base64", 0},
#line 1760 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.syncml.dmtnds+wbxml", "base64", 0},
#line 2878 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.exchangeable", "quoted-printable", 0},
#line 1066 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.framemaker", "base64", "frm maker frame fm fb book fbdoc"},
#line 665 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.5gsa2x", "base64", 0},
#line 35 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EmergencyCallData.Control+xml", "base64", 0},
#line 3081 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.iptvforum.1dparityfec-1010", "base64", 0},
#line 954 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.document+json", "base64", 0},
#line 1848 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xacml+json", "base64", 0},
#line 1270 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.maxar.archive.3tz+zip", "base64", 0},
#line 2563 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/ktx2", "base64", 0},
#line 62 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/activity+json", "base64", 0},
#line 66 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-cdni+json", "base64", 0},
#line 34 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EmergencyCallData.Comment+xml", "base64", 0},
#line 576 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/spdx+json", "base64", 0},
#line 370 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/moss-signature", "base64", 0},
#line 705 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcvideo-regroup+xml", "base64", 0},
#line 2218 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-msoffice-embedded", "base64", 0},
#line 1783 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.umajin", "base64", "umj"},
#line 1743 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sun.xml.writer.template", "base64", "stw"},
#line 967 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.dvbisl+xml", "base64", 0},
#line 808 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.anser-web-funds-transfer-initiation", "base64", "fti"},
#line 2240 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-vnd.datapackage+zip", "base64", 0},
#line 3127 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-oggrgb", "base64", 0},
#line 1033 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.sci+xml", "base64", 0},
#line 667 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.5gsv2x", "base64", 0},
#line 2012 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-fossil-repository", "base64", 0},
#line 1016 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.aoc+xml", "base64", 0},
#line 3086 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.iptvforum.ttsmpeg2", "base64", 0},
#line 1206 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ipunplugged.rcprofile", "base64", "rcprofile"},
#line 1029 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.mcid+xml", "base64", 0},
#line 2713 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/ohttp-res", "base64", 0},
#line 420 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/parityfec", "base64", 0},
#line 752 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.Mobius.PLC", "base64", "plc"},
#line 950 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.digitalstack.document+zip", "base64", 0},
#line 2639 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-jp2-container", "base64", 0},
#line 750 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.Mobius.MQY", "base64", "mqy"},
#line 749 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.Mobius.MBK", "base64", "mbk"},
#line 751 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.Mobius.MSL", "base64", "msl"},
#line 1812 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ves.encrypted", "base64", 0},
#line 2497 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/x-pn-realaudio-plugin", "base64", "rmp rpm"},
#line 1036 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.tsl+xml", "base64", 0},
#line 3134 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"x-chemical/x-xyz", "base64", "xyz"},
#line 533 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sd-jwt", "base64", 0},
#line 1020 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.iptvcommand+xml", "base64", 0},
#line 748 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.Mobius.DIS", "base64", "dis"},
#line 1484 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.group-usage-list+xml", "base64", 0},
#line 3115 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-jng", "base64", "jng"},
#line 1984 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-esri-layer", "base64", "lyr"},
#line 624 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/trickle-ice-sdpfrag", "base64", 0},
#line 68 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-costmap+json", "base64", 0},
#line 634 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/uccs+cbor", "base64", 0},
#line 1059 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ficlab.flb+zip", "base64", 0},
#line 3093 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.nokia.videovoip", "base64", 0},
#line 2238 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-vnd.datapackage+gz", "base64", 0},
#line 807 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.anser-web-certificate-issue-initiation", "base64", "cii"},
#line 493 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/resource-lists-diff+xml", "base64", "rld"},
#line 1331 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-powerpoint", "base64", "ppt pps pot ppz ppa"},
#line 1969 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-drafting", "base64", 0},
#line 753 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.Mobius.TXF", "base64", "txf"},
#line 1032 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.pstn+xml", "base64", 0},
#line 747 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.Mobius.DAF", "base64", "daf"},
#line 957 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dolby.mobile.2", "base64", 0},
#line 1107 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.geogebra.slides", "base64", "ggs"},
#line 2766 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/x3d+fastinfoset", "base64", 0},
#line 1526 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.drawingml.diagramStyle+xml", "base64", 0},
#line 964 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dtg.local.flash", "base64", 0},
#line 2297 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/yang", "base64", "yang"},
#line 646 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vcard+json", "base64", 0},
#line 38 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EmergencyCallData.ProviderInfo+xml", "base64", 0},
#line 1026 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.iptvservice+xml", "base64", 0},
#line 39 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EmergencyCallData.ServiceInfo+xml", "base64", 0},
#line 483 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rdap+json", "base64", 0},
#line 1108 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.geogebra.tool", "base64", "ggt"},
#line 2201 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-subrip", "base64", "srt"},
#line 2637 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-jbig2", "base64", "jb2 jbig2"},
#line 645 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vc+sd-jwt", "base64", 0},
#line 271 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/illustrator+ps", "base64", 0},
#line 666 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.5gsa2x-local-service-information", "base64", 0},
#line 205 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/eat-bun+json", "base64", 0},
#line 938 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dataresource+json", "base64", 0},
#line 2607 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.sealedmedia.softseal.gif", "base64", 0},
#line 179 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/davmount+xml", "base64", "davmount"},
#line 1921 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-amiga-disk-format", "base64", "adf"},
#line 1741 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sun.xml.writer", "base64", "sxw"},
#line 1887 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vp+sd-jwt", "base64", 0},
#line 1024 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.iptvsad-cod+xml", "base64", 0},
#line 508 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rpki-roa", "base64", "roa"},
#line 2793 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/1d-interleaved-parityfec", "quoted-printable", 0},
#line 2309 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/32kadpcm", "base64", 0},
#line 2146 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-pki-message", "base64", 0},
#line 1585 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.wordprocessingml.styles+xml", "base64", 0},
#line 64 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/aif+json", "base64", 0},
#line 535 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sdf+json", "base64", 0},
#line 668 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.5gsv2x-local-service-information", "base64", 0},
#line 3083 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.iptvforum.2dparityfec-1010", "base64", 0},
#line 3082 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.iptvforum.1dparityfec-2005", "base64", 0},
#line 2774 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/encrypted", "base64", 0},
#line 349 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbms-register-response+xml", "base64", 0},
#line 2186 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sibelius", "base64", "sib"},
#line 1312 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-excel.sheet.3", "base64", 0},
#line 2459 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.hns.audio", "base64", 0},
#line 1183 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.informix-visionary", "base64", 0},
#line 2456 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dts.uhd", "base64", 0},
#line 1927 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-atari-floppy-disk-image", "base64", 0},
#line 498 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rls-services+xml", "base64", "rs"},
#line 2122 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-msschedule", "base64", "scd"},
#line 561 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/signed-exchange", "base64", 0},
#line 1006 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.eprints.data+xml", "base64", 0},
#line 2135 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-object", "base64", 0},
#line 602 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tamp-sequence-adjust-confirm", "base64", 0},
#line 303 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/json-seq", "base64", 0},
#line 2859 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/tab-separated-values", "quoted-printable", "tsv"},
#line 2223 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-staroffice", "base64", 0},
#line 1388 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.noblenet-directory", "base64", "nnd"},
#line 686 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcdata-ue-config+xml", "base64", 0},
#line 446 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/powerpoint", "base64", "ppt pps pot"},
#line 816 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apexlang", "base64", 0},
#line 2018 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-geopackage", "base64", "gpkg"},
#line 1677 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.scribus", "base64", 0},
#line 1023 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.iptvsad-bc+xml", "base64", 0},
#line 2199 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-stuffit", "base64", "sit"},
#line 3091 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.nokia.interleaved-multimedia", "base64", "nim"},
#line 1474 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.stkm", "base64", 0},
#line 2108 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ms-shortcut", "base64", "lnk"},
#line 1518 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.custom-properties+xml", "base64", 0},
#line 1465 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.bcast.ltkm", "base64", 0},
#line 176 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dash+xml", "base64", "mpd"},
#line 725 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-mbms-usage-info+xml", "base64", 0},
#line 1713 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.software602.filler.form+xml", "base64", 0},
#line 1832 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.windows.devicepairing", "base64", 0},
#line 3119 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/x-motion-jpeg", "base64", "mjpg mjpeg"},
#line 1825 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wap.wmlc", "base64", "wmlc"},
#line 259 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/held+xml", "base64", 0},
#line 2286 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xml-external-parsed-entity", "base64", 0},
#line 393 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/news-groupinfo", "base64", 0},
#line 2057 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-java-vm", "base64", "class"},
#line 1446 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oftn.l10n+json", "base64", 0},
#line 1898 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/winhlp", "base64", "hlp"},
#line 84 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/andrew-inset", "base64", "ez"},
#line 276 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/index.obj", "base64", 0},
#line 1543 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.tableStyles+xml", "base64", 0},
#line 36 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EmergencyCallData.DeviceInfo+xml", "base64", 0},
#line 718 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-app-comm-requirements-info+xml", "base64", 0},
#line 2595 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.fujixerox.edmics-rlc", "base64", "rlc"},
#line 1538 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.presentationml.slideLayout+xml", "base64", 0},
#line 378 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mrb-consumer+xml", "base64", 0},
#line 1334 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-powerpoint.slide.macroEnabled.12", "base64", "sldm"},
#line 81 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-tipsparams+json", "base64", 0},
#line 1332 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-powerpoint.addin.macroEnabled.12", "base64", "ppam"},
#line 1336 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-powerpoint.template.macroEnabled.12", "base64", "potm"},
#line 693 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcptt-regroup+xml", "base64", 0},
#line 1671 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ruckus.download", "base64", 0},
#line 1337 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-project", "base64", "mpp mpt"},
#line 1714 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.software602.filler.form-xml-zip", "base64", 0},
#line 1326 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-outlook-pst", "base64", "pst ost"},
#line 1104 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.geocube+xml", "8bit", 0},
#line 1145 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hl7cda+xml", "base64", 0},
#line 3047 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/matroska-3d", "base64", 0},
#line 1731 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.stepmania.stepchart", "base64", "sm"},
#line 2470 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.rhetorex.32kadpcm", "base64", 0},
#line 249 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/gltf-buffer", "base64", 0},
#line 78 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-propmap+json", "base64", 0},
#line 987 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dynageo", "base64", "geo"},
#line 241 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/geo+json", "base64", 0},
#line 1740 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sun.xml.math", "base64", "sxm"},
#line 1621 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.powerbuilder7", "base64", 0},
#line 1622 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.powerbuilder7-s", "base64", 0},
#line 1624 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.powerbuilder75-s", "base64", 0},
#line 473 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.rdf-xml-crypt", "base64", 0},
#line 1874 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.zoho-document.writer", "base64", 0},
#line 2281 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xhtml+xml", "8bit", "xht xhtml xhtml2"},
#line 1623 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.powerbuilder75", "base64", 0},
#line 1750 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sybyl.mol2", "base64", 0},
#line 1360 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-xpsdocument", "8bit", "xps oxps"},
#line 1749 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.swiftview-ics", "base64", 0},
#line 3057 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/raw", "base64", 0},
#line 1620 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.powerbuilder6-s", "base64", 0},
#line 507 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rpki-publication", "base64", 0},
#line 1045 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ezpix-album", "base64", "ez2"},
#line 1457 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oipf.userprofile+xml", "base64", 0},
#line 339 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mathml-content+xml", "base64", 0},
#line 3084 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.iptvforum.2dparityfec-2005", "base64", 0},
#line 2088 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-universal", "base64", 0},
#line 1890 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/warc+gz", "base64", "warc.gz"},
#line 2184 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sharedlib", "base64", 0},
#line 1619 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.powerbuilder6", "base64", "pbd"},
#line 2200 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-stuffitx", "base64", "sitx"},
#line 520 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sarif+json", "base64", 0},
#line 2448 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dolby.mps", "base64", 0},
#line 2587 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.dvb.subtitle", "base64", "sub"},
#line 75 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-error+json", "base64", 0},
#line 37 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EmergencyCallData.LegacyESN+json", "base64", 0},
#line 2696 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/bhttp", "base64", 0},
#line 1893 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/webbundle", "base64", 0},
#line 1201 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.iptc.g2.knowledgeitem+xml", "base64", 0},
#line 1972 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-dtbresource+xml", "base64", "res"},
#line 99 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/atsc-held+xml", "base64", 0},
#line 1839 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wolfram.wl", "base64", "wl"},
#line 150 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cmw+cbor", "base64", 0},
#line 1704 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.siren+json", "base64", 0},
#line 1202 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.iptc.g2.newsitem+xml", "base64", 0},
#line 1123 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gov.sk.xmldatacontainer+xml", "base64", 0},
#line 3045 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/lottie+json", "base64", 0},
#line 1792 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.channel", "base64", 0},
#line 1105 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.geogebra.file", "base64", "ggb"},
#line 2920 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-aspectj", "quoted-printable", "aj"},
#line 2647 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-nikon-nef", "base64", "nef"},
#line 2447 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dolby.mlp", "base64", 0},
#line 1186 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.innopath.wamp.notification", "base64", 0},
#line 577 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/spdx3+json", "base64", 0},
#line 1243 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.las.las+json", "base64", 0},
#line 246 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/geoxacml+json", "base64", 0},
#line 503 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/route-usd+xml", "base64", 0},
#line 687 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcdata-user-profile+xml", "base64", 0},
#line 1742 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sun.xml.writer.global", "base64", "sxg"},
#line 2463 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.nortel.vbk", "base64", "vbk"},
#line 2033 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-hwp", "base64", 0},
#line 2308 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/1d-interleaved-parityfec", "base64", 0},
#line 1461 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma-scws-http-response", "base64", 0},
#line 946 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.denovo.fcselayout-link", "base64", "fe_launch"},
#line 1088 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.futoin+cbor", "base64", 0},
#line 545 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sensml+json", "base64", 0},
#line 1217 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.japannet-setstore-wakeup", "base64", 0},
#line 1826 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wap.wmlscriptc", "base64", "wmlsc"},
#line 2594 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.fujixerox.edmics-mmr", "base64", "mmr"},
#line 2904 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.trolltech.linguist", "quoted-printable", 0},
#line 1510 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openblox.game-binary", "base64", 0},
#line 2210 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tex-virtual-font", "base64", "vf"},
#line 1963 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-debian-package", "base64", "deb udeb"},
#line 1367 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.music-niff", "base64", 0},
#line 1416 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nubaltec.nudoku-game", "base64", 0},
#line 1044 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.exstream-package", "base64", 0},
#line 1781 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uic.tlb-fcb", "base64", 0},
#line 129 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cdmi-queue", "base64", "cdmiq"},
#line 1981 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-endnote-style", "base64", "ens"},
#line 1487 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.lwm2m+tlv", "base64", 0},
#line 290 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/javascript", "8bit", "js mjs sj"},
#line 261 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/hl7v2+xml", "base64", 0},
#line 3004 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/1d-interleaved-parityfec", "base64", 0},
#line 142 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/client-authentication+jwt", "base64", 0},
#line 599 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tamp-community-update-confirm", "base64", 0},
#line 598 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tamp-community-update", "base64", 0},
#line 2287 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xml-patch+xml", "base64", 0},
#line 343 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbms-envelope+xml", "base64", 0},
#line 1170 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.imagemeter.image+zip", "base64", 0},
#line 1592 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oracle.resource+json", "base64", 0},
#line 1831 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wfa.wsc", "base64", 0},
#line 305 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jsonpath", "base64", 0},
#line 1347 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-windows.nwprinting.oob", "base64", 0},
#line 1251 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.logipipe.circuit+zip", "base64", 0},
#line 1896 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/whoispp-response", "base64", 0},
#line 1935 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-bentley-localization", "base64", 0},
#line 1109 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.geometry-explorer", "base64", "gex gre"},
#line 846 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.bbf.usp.error", "base64", 0},
#line 1135 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hal+json", "base64", 0},
#line 616 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tlsrpt+gzip", "base64", 0},
#line 65 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/akn+xml", "base64", 0},
#line 280 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/inkml+xml", "base64", "ink inkml"},
#line 2224 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-unix-dump", "base64", 0},
#line 1596 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.osgi.bundle", "base64", 0},
#line 559 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/shf+xml", "base64", "shf"},
#line 1925 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-arj", "base64", "arj"},
#line 1511 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openeye.oeb", "base64", 0},
#line 1991 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-filemaker", "base64", "fp7"},
#line 2282 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xhtml-voice+xml", "base64", 0},
#line 755 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.R74n.sandboxels+json", "base64", 0},
#line 1121 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gov.sk.e-form+xml", "base64", 0},
#line 812 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apache.parquet", "base64", "parquet"},
#line 3097 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.radgamettools.smacker", "base64", 0},
#line 2591 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.fastbidsheet", "base64", "fbs"},
#line 1095 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gentics.grd+json", "base64", 0},
#line 477 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pskc+xml", "base64", "pskcxml"},
#line 1485 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.lwm2m+cbor", "base64", 0},
#line 960 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dreamfactory", "base64", "dfac"},
#line 731 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-user-profile-info+xml", "base64", 0},
#line 2034 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-hwp-v5", "base64", 0},
#line 1022 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.iptvprofile+xml", "base64", 0},
#line 1369 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.muvee.style", "base64", "msty"},
#line 840 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.autopackage", "base64", 0},
#line 1924 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-archive", "base64", "ar a"},
#line 1122 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gov.sk.e-form+zip", "base64", 0},
#line 197 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dskpp+xml", "base64", 0},
#line 2682 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-sony-arw", "base64", "arw"},
#line 1063 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fluxtime.clip", "base64", "ftc"},
#line 2625 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-canon-crw", "base64", "crw"},
#line 680 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcdata-info+xml", "base64", 0},
#line 472 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.plucker", "base64", 0},
#line 593 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/swid+cbor", "base64", 0},
#line 1224 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.joost.joda-archive", "base64", "joda"},
#line 546 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sensml+xml", "base64", 0},
#line 2749 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.gtw", "base64", "gtw"},
#line 2451 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dolby.pl2z", "base64", 0},
#line 2643 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-minolta-mrw", "base64", "mrw"},
#line 1820 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.vuq", "base64", 0},
#line 133 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cellml+xml", "base64", 0},
#line 1665 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.rig.cryptonote", "base64", "cryptonote"},
#line 733 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.sms+xml", "base64", 0},
#line 161 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/coreldraw", "base64", "cdr"},
#line 1285 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.microsoft.windows.thumbnail-cache", "base64", 0},
#line 669 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.GMOP+xml", "base64", 0},
#line 2753 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.parasolid.transmit.binary", "base64", "x_b xmt_bin"},
#line 1333 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-powerpoint.presentation.macroEnabled.12", "base64", "pptm"},
#line 716 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.pinapp-info+xml", "base64", 0},
#line 1329 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-pki.stl", "base64", "stl"},
#line 2304 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/yin+xml", "base64", "yin"},
#line 595 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/syslog-msg", "base64", 0},
#line 918 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ctct.ws+xml", "base64", 0},
#line 617 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tlsrpt+json", "base64", 0},
#line 847 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.bbf.usp.msg", "base64", 0},
#line 1328 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-pki.seccat", "base64", "cat"},
#line 1759 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.syncml.dmddf+xml", "base64", 0},
#line 1878 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.zzazz.deck+xml", "base64", "zaz"},
#line 1875 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.zoho-presentation.show", "base64", 0},
#line 1995 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-framemaker", "base64", 0},
#line 2989 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-tika-text-based-message", "quoted-printable", 0},
#line 1341 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-visio.drawing.macroEnabled.12", "base64", "vsdm"},
#line 567 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sldworks", "base64", "sldprt sldasm slddrw"},
#line 1555 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.pivotCacheRecords+xml", "base64", 0},
#line 1554 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.openxmlformats-officedocument.spreadsheetml.pivotCacheDefinition+xml", "base64", 0},
#line 324 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/lostsync+xml", "base64", 0},
#line 1091 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.g3pix.g3fc", "base64", 0},
#line 2777 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/header-set", "base64", 0},
#line 437 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkix-attr-cert", "base64", "ac"},
#line 2138 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-pagemaker", "base64", "pm pm5 pt5"},
#line 232 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/fhir+xml", "base64", 0},
#line 591 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/suit-envelope+cose", "base64", 0},
#line 2265 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-zmachine", "base64", "z1 z2 z3 z4 z5 z6 z7 z8"},
#line 759 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.accpac.simply.aso", "base64", "aso"},
#line 887 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cncf.helm.chart.content.v1.tar+gzip", "base64", 0},
#line 2077 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-bundle", "base64", 0},
#line 3003 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/xml-external-parsed-entity", "quoted-printable", 0},
#line 1751 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sycle+xml", "base64", 0},
#line 1754 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.syncml+xml", "base64", "xsm"},
#line 1314 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-excel.sheet.binary.macroEnabled.12", "base64", "xlsb"},
#line 1756 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.syncml.dm+xml", "base64", "xdm"},
#line 2084 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-fvmlib", "base64", 0},
#line 1699 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.shootproof+json", "base64", 0},
#line 2062 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-killustrator", "base64", "kil"},
#line 1758 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.syncml.dmddf+wbxml", "base64", 0},
#line 670 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.SRVCC-info+xml", "base64", 0},
#line 2449 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dolby.pl2", "base64", 0},
#line 385 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mud+json", "base64", 0},
#line 2628 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-compressed-xcf", "base64", "xcfbz2 xcfgz"},
#line 2705 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/global-headers", "base64", 0},
#line 818 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.aplextor.warrp+json", "base64", 0},
#line 320 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/linkset+json", "base64", 0},
#line 144 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cloudevents-batch+json", "base64", 0},
#line 2673 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-panasonic", "base64", "raw rw2"},
#line 1126 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.grafeq", "base64", "gqf gqs"},
#line 499 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/roughtime-malfeasance+json", "base64", 0},
#line 806 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.anki", "base64", 0},
#line 1632 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.publishare-delta-tree", "base64", "qps"},
#line 2008 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-type1", "base64", "afm pfa pfb pfm"},
#line 760 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.accpac.simply.imp", "base64", "imp"},
#line 1402 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.ncd", "base64", 0},
#line 1712 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.softpres-ipf-disk-image", "base64", 0},
#line 2228 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-touhou", "base64", 0},
#line 2635 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-hasselblad-3fr", "base64", "3fr"},
#line 690 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcptt-info+xml", "base64", 0},
#line 930 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cyclonedx+xml", "base64", 0},
#line 853 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.biopax.rdf+xml", "base64", 0},
#line 291 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jcr-sql2", "base64", 0},
#line 673 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.crs+xml", "base64", 0},
#line 2083 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-executable", "base64", 0},
#line 1219 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.japannet-verification-wakeup", "base64", 0},
#line 183 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dialog-info+xml", "base64", 0},
#line 1371 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nacamar.ybrid+json", "base64", 0},
#line 1718 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sqlite3", "base64", 0},
#line 708 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcvideo-ue-config+xml", "base64", 0},
#line 1278 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.meridian-slingshot", "base64", 0},
#line 216 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/entity-statement+jwt", "base64", 0},
#line 1222 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.jcp.javame.midlet-rms", "base64", "rms"},
#line 797 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.amadeus+json", "base64", 0},
#line 905 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.coreos.ignition+json", "base64", 0},
#line 877 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cirpack.isdn-ext", "base64", 0},
#line 287 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/java-archive", "base64", "jar"},
#line 2955 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-java-properties", "quoted-printable", "properties"},
#line 1727 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.stardivision.math", "base64", "sdf smf"},
#line 2121 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mspublisher", "base64", "pub"},
#line 2613 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.wap.wbmp", "base64", "wbmp"},
#line 1807 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.verifier-attestation+jwt", "base64", 0},
#line 575 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sparql-results+xml", "base64", "srx"},
#line 1625 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pp.systemverify+xml", "base64", 0},
#line 2658 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-portable-pixmap", "base64", "ppm"},
#line 1393 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.conml+xml", "base64", 0},
#line 658 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp-prose+xml", "base64", 0},
#line 1106 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.geogebra.pinboard", "base64", 0},
#line 2181 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sh", "8bit", "sh bash"},
#line 1960 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-csh", "8bit", "csh tcsh"},
#line 2225 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-visio-ooxml", "base64", 0},
#line 761 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.acm.addressxfer+json", "base64", 0},
#line 433 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkcs7-mime", "base64", "p7m p7c"},
#line 501 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/route-apd+xml", "base64", 0},
#line 1340 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-visio.drawing", "base64", "vsdx"},
#line 1612 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.phbk+xml", "base64", 0},
#line 355 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/media-policy-dataset+xml", "base64", 0},
#line 70 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-directory+json", "base64", 0},
#line 1824 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wap.wbxml", "base64", "wbxml"},
#line 315 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/kpml-response+xml", "base64", 0},
#line 729 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-ue-config-info+xml", "base64", 0},
#line 2551 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jphc", "base64", 0},
#line 3096 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.radgamettools.bink", "base64", 0},
#line 2721 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/vnd.wfa.wsc", "base64", 0},
#line 1015 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.eszigno3+xml", "base64", "es3 et3"},
#line 828 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apple.unknown.13", "base64", 0},
#line 923 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cups-raw", "base64", 0},
#line 103 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/automationml-aml+xml", "base64", 0},
#line 362 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/microdata+json", "8bit", 0},
#line 2128 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mysql-misam-data", "base64", "myd"},
#line 1382 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.neurolanguage.nlu", "base64", "nlu"},
#line 692 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcptt-mbms-usage-info+xml", "base64", 0},
#line 1119 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.google-earth.kml+xml", "8bit", "kml"},
#line 1277 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.medicalholodeck.recordxr", "base64", 0},
#line 293 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jf2feed+json", "base64", 0},
#line 18 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/3gppHalForms+json", "base64", 0},
#line 1030 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.mheg5", "base64", 0},
#line 1101 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gentoo.pkgmetadata+xml", "base64", 0},
#line 2443 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.digital-winds", "7bit", "eol"},
#line 2129 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mysql-misam-index", "base64", 0},
#line 1398 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.landmarkcollection+xml", "base64", 0},
#line 592 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/suit-report+cose", "base64", 0},
#line 1788 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.bearer-choice", "base64", 0},
#line 1394 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.iSDS-radio-presets", "base64", 0},
#line 1407 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.radio-presets", "base64", "rpss"},
#line 1159 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hzn-3d-crossword", "base64", "x3d"},
#line 2127 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mysql-misam-compressed-index", "base64", "myi"},
#line 563 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/simple-message-summary", "base64", 0},
#line 1406 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.radio-preset", "base64", "rpst"},
#line 1318 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-excel.workspace.4", "base64", 0},
#line 815 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apache.thrift.json", "base64", 0},
#line 100 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/atsc-rdt+json", "base64", 0},
#line 659 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp-prose-pc3a+xml", "base64", 0},
#line 814 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apache.thrift.compact", "base64", 0},
#line 2031 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-httpd-php", "8bit", "phtml pht php"},
#line 332 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/manifest+json", "base64", "webmanifest"},
#line 1289 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.minisoft-hp3000-save", "base64", 0},
#line 2898 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.radisys.msml-basic-layout", "quoted-printable", 0},
#line 626 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/trust-chain+json", "base64", 0},
#line 1027 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.iptvsync+xml", "base64", 0},
#line 1397 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.landmark+xml", "base64", 0},
#line 2676 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-rawzor", "base64", "rwz"},
#line 422 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/patch-ops-error+xml", "base64", "xer"},
#line 1137 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hbci", "base64", "hbci hbc kom upa pkd bpd"},
#line 1931 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-axcrypt", "base64", "axx"},
#line 419 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/p2p-overlay+xml", "base64", 0},
#line 1776 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ubisoft.webplayer", "base64", 0},
#line 449 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/private-token-request", "base64", 0},
#line 1184 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.infotech.project", "base64", 0},
#line 313 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/kbl+xml", "base64", 0},
#line 1046 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ezpix-package", "base64", "ez3"},
#line 2145 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-pkcs7-certreqresp", "base64", "p7r"},
#line 1733 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sun.wadl+xml", "base64", 0},
#line 1164 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ibm.rights-management", "base64", "irm"},
#line 578 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/speculationrules+json", "8bit", 0},
#line 1216 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.japannet-registration-wakeup", "base64", 0},
#line 143 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cloudevents+json", "base64", 0},
#line 688 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.mcptt-affiliation-command+xml", "base64", 0},
#line 1763 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.tableschema+json", "base64", 0},
#line 1089 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.futoin+json", "base64", 0},
#line 466 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.implied-object+json", "base64", 0},
#line 1876 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.zoho.spreadsheetml.sheet", "base64", 0},
#line 916 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cryptomator.vault", "base64", 0},
#line 790 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.agtp.identity+json", "base64", 0},
#line 791 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.agtp.identity+yaml", "base64", 0},
#line 14 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/3gpp-mbs-object-manifest+json", "base64", 0},
#line 1454 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oipf.spdiscovery+xml", "base64", 0},
#line 2730 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/mesh", "base64", "msh mesh silo"},
#line 2951 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-haskell", "quoted-printable", "hs lhs"},
#line 2650 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-panasonic-raw", "base64", "raw"},
#line 2634 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-fuji-raf", "base64", "raf"},
#line 2888 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.hekaya", "quoted-printable", 0},
#line 219 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/epub+zip", "base64", "epub"},
#line 628 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/trust-mark-delegation+jwt", "base64", 0},
#line 2732 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/obj", "base64", 0},
#line 1065 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.foritech.container", "base64", 0},
#line 1226 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kahootz", "base64", "ktr ktz"},
#line 2244 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-webarchive", "base64", "webarchive"},
#line 949 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.digilite.prolights", "base64", 0},
#line 1050 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fafm+yaml", "base64", 0},
#line 1937 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-bibtex-text-file", "base64", "bib bibtex"},
#line 1642 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-audit+xml", "base64", 0},
#line 1644 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-audit-conn+xml", "base64", 0},
#line 1649 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-dialog-base+xml", "base64", 0},
#line 1652 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-dialog-group+xml", "base64", 0},
#line 1645 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-audit-dialog+xml", "base64", 0},
#line 1391 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.catalogs", "base64", 0},
#line 1646 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-audit-stream+xml", "base64", 0},
#line 1648 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-dialog+xml", "base64", 0},
#line 1653 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-dialog-speech+xml", "base64", 0},
#line 152 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cmw+json", "base64", 0},
#line 2581 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.blockfact.facti", "base64", 0},
#line 172 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cwl+json", "base64", 0},
#line 2437 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.blockfact.facta", "base64", 0},
#line 2540 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/hsj2", "base64", 0},
#line 959 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dpgraph", "base64", "dpg"},
#line 2671 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-nikon", "base64", "nef nrw"},
#line 461 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.cww", "base64", "cw cww"},
#line 1780 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uic.osdm+json", "base64", 0},
#line 91 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/at+jwt", "base64", 0},
#line 2035 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ibooks+zip", "base64", "ibooks"},
#line 1247 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.leap+json", "base64", 0},
#line 2452 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dolby.pulse.1", "base64", 0},
#line 203 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/eat+jwt", "base64", 0},
#line 348 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mbms-register+xml", "base64", 0},
#line 1651 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-dialog-fax-sendrecv+xml", "base64", 0},
#line 1654 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-dialog-transform+xml", "base64", 0},
#line 1395 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.iptv.config+xml", "base64", 0},
#line 644 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vc+jwt", "base64", 0},
#line 2694 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-xwindowdump", "base64", "xwd"},
#line 1888 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vq-rtcpxr", "base64", 0},
#line 714 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.pic-bw-small", "base64", "psb"},
#line 2675 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-phaseone", "base64", "iiq"},
#line 2974 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-python", "quoted-printable", "py"},
#line 1019 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.etsi.cug+xml", "base64", 0},
#line 1886 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vp+jwt", "base64", 0},
#line 2150 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-python", "8bit", "py"},
#line 2056 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-java-serialized-object", "base64", "ser"},
#line 480 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/quicktime", "base64", 0},
#line 463 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.hpub+zip", "base64", 0},
#line 3068 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.blockfact.factv", "base64", 0},
#line 80 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-tips+json", "base64", 0},
#line 619 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tnauthlist", "base64", 0},
#line 2655 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-portable-arbitrarymap", "base64", "pam"},
#line 40 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/EmergencyCallData.SubscriberInfo+xml", "base64", 0},
#line 739 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp2.bcmcsinfo+xml", "base64", 0},
#line 105 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/bacnet-xdd+zip", "base64", 0},
#line 3092 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.nokia.mp4vr", "base64", 0},
#line 1155 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hydrostatix.sof-data", "base64", "sfd-hdstx"},
#line 676 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.interworking-data", "base64", 0},
#line 264 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/hyperstudio", "base64", "stk"},
#line 2054 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-java-keystore", "base64", "jks"},
#line 1970 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-dtbncx+xml", "base64", "ncx"},
#line 1827 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wasmflow.wafl", "base64", 0},
#line 1317 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-excel.workspace.3", "base64", 0},
#line 1828 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.webturbo", "base64", "wtb"},
#line 2669 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-mamiya", "base64", "mef"},
#line 1637 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.qualcomm.brew-app-res", "base64", 0},
#line 509 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rpki-signed-tal", "base64", 0},
#line 2163 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-backup", "base64", "sas7bbak"},
#line 371 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mosskey-data", "base64", 0},
#line 2458 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.everad.plj", "base64", "plj"},
#line 2668 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-logitech", "base64", "pxn"},
#line 2061 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-kdelnk", "base64", 0},
#line 1417 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oai.workflows", "base64", 0},
#line 1418 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oai.workflows+json", "base64", 0},
#line 2086 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-object", "base64", 0},
#line 15 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/3gpp-mbs-user-service-descriptions+json", "base64", 0},
#line 1009 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.epson.quickanime", "base64", "qam"},
#line 1476 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.cab-feature-handler+xml", "base64", 0},
#line 2237 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-vmdk", "base64", "vmdk"},
#line 961 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.drive+json", "base64", 0},
#line 1051 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.familysearch.gedcom+zip", "base64", 0},
#line 1419 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oai.workflows+yaml", "base64", 0},
#line 2053 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-java-jnlp-file", "base64", "jnlp"},
#line 672 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.bsf+xml", "base64", 0},
#line 736 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.ussd+xml", "base64", 0},
#line 2608 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.sealedmedia.softseal.jpg", "base64", 0},
#line 1647 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-conf+xml", "base64", 0},
#line 742 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3lightssoftware.imagescal", "base64", 0},
#line 1643 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-audit-conf+xml", "base64", 0},
#line 715 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.pic-bw-var", "base64", "pvb"},
#line 295 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jose+json", "base64", 0},
#line 1996 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-ghostscript", "base64", "gsf"},
#line 298 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jscontact+json", "base64", 0},
#line 516 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rtploopback", "base64", 0},
#line 639 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/urc-targetdesc+xml", "base64", 0},
#line 660 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp-prose-pc3ach+xml", "base64", 0},
#line 156 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/coap-group+json", "base64", 0},
#line 730 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-unicast-info+xml", "base64", 0},
#line 2118 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-msmediaview", "base64", "m13 m14 mvb"},
#line 2079 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-dsym", "base64", 0},
#line 2051 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-java-archive", "base64", "jar"},
#line 822 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apple.keynote", "base64", "key"},
#line 762 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.acm.chatbot+json", "base64", 0},
#line 163 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cose-key", "base64", 0},
#line 1929 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-authorware-map", "base64", "aam"},
#line 868 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.capasystems-pg+json", "base64", 0},
#line 1990 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-fictionbook+xml", "base64", "fb2"},
#line 989 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.easykaraoke.cdgdownload", "base64", 0},
#line 2059 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-jeol-jdf", "base64", "jdf"},
#line 2664 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-hasselblad", "base64", "3fr"},
#line 2911 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.wap.wmlscript", "quoted-printable", "wmls"},
#line 2010 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-fossil-checkout", "base64", 0},
#line 1220 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.java.hprof ", "base64", "hprof"},
#line 251 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/gnap-binding-jws", "base64", 0},
#line 638 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/urc-ressheet+xml", "base64", 0},
#line 2518 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"haptics/hmpg", "base64", 0},
#line 252 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/gnap-binding-jwsd", "base64", 0},
#line 2648 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-olympus-orf", "base64", "orf"},
#line 1782 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uiq.theme", "base64", "utz"},
#line 2176 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-view", "base64", "sv7 sas7bvew"},
#line 1221 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.java.hprof.text", "base64", "hprof.txt"},
#line 1335 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-powerpoint.slideshow.macroEnabled.12", "base64", "ppsm"},
#line 2536 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/heic-sequence", "base64", "heics hif"},
#line 2383 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/amr-wb+", "base64", 0},
#line 263 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/hwp+zip", "base64", "hwpx"},
#line 12 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/3gpdash-qoe-report+xml", "base64", 0},
#line 296 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jrd+json", "base64", 0},
#line 948 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.deut+json", "base64", 0},
#line 2133 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ns-proxy-autoconfig", "base64", "pac"},
#line 510 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rpki-updown", "base64", 0},
#line 297 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jscalendar+json", "base64", 0},
#line 909 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.crick.clicker.palette", "base64", "clkp"},
#line 1603 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.panoply", "base64", 0},
#line 2421 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/silk", "base64", "sil"},
#line 720 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-data-delivery-info+xml", "base64", 0},
#line 1005 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.enphase.envoy", "base64", 0},
#line 910 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.crick.clicker.template", "base64", "clkt"},
#line 1082 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujixerox.HBPL", "base64", 0},
#line 727 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-network-QoS-management-info+xml", "base64", 0},
#line 1144 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hhe.lesson-player", "base64", "les"},
#line 1250 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.llamagraphics.life-balance.exchange+xml", "base64", "lbe"},
#line 1083 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujixerox.ddd", "base64", "ddd"},
#line 1080 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujixerox.ART-EX", "base64", 0},
#line 831 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.artisan+json", "base64", 0},
#line 1081 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujixerox.ART4", "base64", 0},
#line 2902 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.sun.j2me.app-descriptor", "8bit", "jad"},
#line 1400 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.n-gage.data", "base64", "ngdat"},
#line 713 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.pic-bw-large", "base64", "plb"},
#line 1225 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.jsk.isdn-ngn", "base64", 0},
#line 1989 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-fat-diskimage", "base64", 0},
#line 1982 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-envoy", "base64", "evy"},
#line 1845 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wv.csp+wbxml", "base64", "wv"},
#line 1049 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fafa+yaml", "base64", 0},
#line 1856 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xmpie.cpkg", "base64", 0},
#line 1803 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.vectorworks", "base64", 0},
#line 1857 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xmpie.dpkg", "base64", 0},
#line 1460 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma-scws-http-request", "base64", 0},
#line 1099 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gentoo.gpkg", "base64", 0},
#line 857 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.bluetooth.le.oob", "base64", 0},
#line 436 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkcs8-encrypted", "base64", 0},
#line 856 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.bluetooth.ep.oob", "base64", 0},
#line 2006 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-font-truetype", "base64", "ttf"},
#line 2130 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mysql-table-definition", "base64", 0},
#line 1859 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xmpie.ppkg", "base64", 0},
#line 468 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.implied-object+yaml", "base64", 0},
#line 440 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkix-keyinfo", "base64", 0},
#line 1230 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kde.kivio", "base64", "flw"},
#line 872 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.chemdraw+xml", "base64", "cdxml"},
#line 3055 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/quicktime", "base64", "qt mov"},
#line 937 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.datapackage+json", "base64", 0},
#line 848 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.bbf.usp.msg+json", "base64", 0},
#line 2043 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-isatab-assay", "base64", 0},
#line 1146 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hl7v2+xml", "base64", 0},
#line 907 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.crick.clicker", "base64", "clkx"},
#line 1793 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.channel-wbxml", "base64", 0},
#line 2663 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-fuji", "base64", "raf"},
#line 77 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-networkmapfilter+json", "base64", 0},
#line 1600 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oxli.countgraph", "base64", 0},
#line 1084 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujixerox.docuworks", "base64", "xdw"},
#line 314 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/kpml-request+xml", "base64", 0},
#line 2255 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-x509-key", "base64", 0},
#line 2808 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/directory", "quoted-printable", 0},
#line 968 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.dvb.dvbj", "base64", 0},
#line 340 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mathml-presentation+xml", "base64", 0},
#line 2538 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/heif-sequence", "base64", "heifs hif"},
#line 2173 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-putility", "base64", "sp7 sas7bput"},
#line 134 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cert-chain+cbor", "base64", 0},
#line 2126 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mysql-db", "base64", 0},
#line 2925 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-c++hdr", "quoted-printable", "hpp hxx hh h h++ hp"},
#line 173 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cwl+yaml", "base64", 0},
#line 2697 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/delivery-status", "base64", 0},
#line 614 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/timestamp-reply", "base64", 0},
#line 455 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/protobuf+json", "base64", 0},
#line 901 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.comicbook-rar", "base64", 0},
#line 999 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.edulith.edux+json", "base64", 0},
#line 1486 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.lwm2m+json", "base64", 0},
#line 500 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/roughtime-server+json", "base64", 0},
#line 1930 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-authorware-seg", "base64", "aas"},
#line 1352 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-wmdrm.meter-chlg-req", "base64", 0},
#line 883 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cluetrust.cartomobile-config-pkg", "base64", "c11amz"},
#line 2657 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-portable-graymap", "base64", "pgm"},
#line 1233 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kde.kspread", "base64", "ksp"},
#line 2120 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-msmoney", "base64", "mny"},
#line 1249 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.llamagraphics.life-balance.desktop", "base64", "lbd"},
#line 426 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pgp-keys", "7bit", 0},
#line 1866 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yamaha.remote-setup", "base64", 0},
#line 304 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jsonml+json", "base64", "jsonml"},
#line 2851 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/rtploopback", "quoted-printable", 0},
#line 2227 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-toolbook", "base64", "tbk"},
#line 2300 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/yang-data+xml", "base64", 0},
#line 637 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/urc-grpsheet+xml", "base64", 0},
#line 1867 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yamaha.smaf-audio", "base64", "saf"},
#line 541 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/senml-etch+cbor", "base64", 0},
#line 1085 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujixerox.docuworks.binder", "base64", "xbd"},
#line 1086 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujixerox.docuworks.container", "base64", 0},
#line 1213 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.japannet-jpnstore-wakeup", "base64", 0},
#line 1755 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.syncml.dm+wbxml", "base64", "bdm"},
#line 941 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.debian.binary-package", "base64", 0},
#line 1868 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yamaha.smaf-phrase", "base64", "spf"},
#line 448 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/private-token-issuer-directory", "base64", 0},
#line 1928 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-authorware-bin", "base64", "aab u32 vox x32"},
#line 2095 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-memgraph", "base64", "memgraph"},
#line 521 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sarif-external-properties+json", "base64", 0},
#line 1850 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.xarin.cpj", "base64", 0},
#line 2879 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/vnd.familysearch.gedcom", "quoted-printable", 0},
#line 1864 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yamaha.openscoreformat", "base64", "osf"},
#line 1327 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-package.3dmanufacturing-3dmodel+xml", "base64", "3mf"},
#line 1494 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oma.push", "base64", 0},
#line 329 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/macbinary", "base64", 0},
#line 830 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.aristanetworks.swi", "base64", "swi"},
#line 1664 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.restful+json", "base64", 0},
#line 2050 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-iwork-pages-sffpages", "base64", "pages"},
#line 1594 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.osa.netdeploy", "base64", 0},
#line 1154 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.httphone", "base64", 0},
#line 1882 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/voucher-cose+cbor", "base64", 0},
#line 1403 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.ncd+xml", "base64", 0},
#line 1392 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.conml+wbxml", "base64", 0},
#line 2052 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-java-jnilib", "base64", "jnilib"},
#line 2719 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/tracking-status", "base64", 0},
#line 195 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dpop+jwt", "base64", 0},
#line 2085 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-kext-bundle", "base64", 0},
#line 1865 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yamaha.openscoreformat.osfpvg+xml", "base64", "osfpvg"},
#line 2021 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-gnucash", "base64", "gnucash"},
#line 587 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/statuslist+cwt", "base64", 0},
#line 1232 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kde.kpresenter", "base64", "kpr kpt"},
#line 1405 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.pcd+xml", "base64", 0},
#line 1952 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-chrome-package", "base64", "crx"},
#line 537 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/secevent+jwt", "base64", 0},
#line 585 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sslkeylogfile", "base64", 0},
#line 138 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/city+json", "base64", 0},
#line 913 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cryptii.pipe+json", "base64", 0},
#line 861 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.businessobjects", "base64", "rep"},
#line 231 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/fhir+json", "base64", 0},
#line 1636 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pyon+json", "base64", 0},
#line 1075 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujitsu.oasys", "base64", "oas"},
#line 1079 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujitsu.oasysprs", "base64", "bh2"},
#line 407 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/oebps-package+xml", "base64", "opf"},
#line 1449 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.oipf.cspg-hexbinary", "base64", 0},
#line 1078 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujitsu.oasysgp", "base64", "fg5"},
#line 2921 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-assembly", "quoted-printable", "s asm"},
#line 1330 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-playready.initiator+xml", "base64", 0},
#line 2949 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-groovy", "quoted-printable", "groovy"},
#line 2672 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-olympus", "base64", "orf"},
#line 929 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cyclonedx+json", "base64", 0},
#line 1401 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.n-gage.symbian.install", "base64", "n-gage"},
#line 2640 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-kodak-dcr", "base64", "dcr"},
#line 819 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apothekende.reservation+json", "base64", 0},
#line 1325 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-outlook", "base64", "msg"},
#line 1635 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pwg-xhtml-print+xml", "base64", 0},
#line 1843 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.wrq-hp3000-labelled", "base64", 0},
#line 1138 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hc+json", "base64", 0},
#line 248 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ghostview", "base64", 0},
#line 1789 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.uplanet.bearer-choice-wbxml", "base64", 0},
#line 434 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkcs7-signature", "base64", "p7s"},
#line 854 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.blink-idb-value-wrapper", "base64", 0},
#line 635 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ujcs+json", "base64", 0},
#line 311 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/kb+cwt", "base64", 0},
#line 1185 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.infotech.project+xml", "base64", 0},
#line 1934 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-bentley-besqlite", "base64", 0},
#line 621 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/token-introspection+jwt", "base64", 0},
#line 1641 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml+xml", "base64", 0},
#line 719 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-data-delivery-info+cbor", "base64", 0},
#line 1640 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.moml+xml", "base64", 0},
#line 1090 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fuzzysheet", "base64", "fzs"},
#line 1076 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujitsu.oasys2", "base64", "oa2"},
#line 2075 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-macbinary", "base64", 0},
#line 338 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mathml+xml", "base64", "mathml"},
#line 629 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/trust-mark-status-response+jwt", "base64", 0},
#line 137 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cid-edhoc+cbor-seq", "base64", 0},
#line 640 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/urc-uisocketdesc+xml", "base64", 0},
#line 1767 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.think-cell.ppttc+json", "base64", 0},
#line 1227 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kde.karbon", "base64", "karbon"},
#line 2417 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/rtploopback", "base64", 0},
#line 1241 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kodak-descriptor", "base64", "sse"},
#line 379 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mrb-publish+xml", "base64", 0},
#line 2462 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.nokia.mobile-xmf", "base64", "mxmf"},
#line 2243 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-web-app-manifest+json", "base64", "webapp"},
#line 3059 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/rtploopback", "base64", 0},
#line 2055 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-java-pack200", "base64", "pack"},
#line 1650 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.radisys.msml-dialog-fax-detect+xml", "base64", 0},
#line 153 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cmw+jws", "base64", 0},
#line 1802 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.vd-study", "base64", 0},
#line 1160 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ibm.MiniPay", "base64", "mpy"},
#line 1077 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujitsu.oasys3", "base64", "oa3"},
#line 2080 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-dylib", "base64", 0},
#line 2303 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/yang-sid+json", "base64", 0},
#line 1870 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yamaha.tunnel-udpencap", "base64", 0},
#line 1102 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.gentoo.xpak", "base64", 0},
#line 2701 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/feedback-report", "base64", 0},
#line 728 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.seal-network-resource-info+cbor", "base64", 0},
#line 2578 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.adobe.photoshop", "base64", "psd"},
#line 542 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/senml-etch+json", "base64", 0},
#line 2712 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/ohttp-req", "base64", 0},
#line 1052 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fastcopy-disk-image", "base64", 0},
#line 900 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.comicbook+zip", "base64", 0},
#line 2740 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.bary", "base64", 0},
#line 2922 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-awk", "quoted-printable", "awk"},
#line 2550 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/jph", "base64", 0},
#line 1260 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.lukuid.package+zip", "base64", 0},
#line 2099 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mobipocket-ebook", "base64", "mobi prc"},
#line 2615 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.zbrush.dcx", "base64", "dcx"},
#line 1598 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.osgi.subsystem", "base64", "esa"},
#line 2081 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-dylib-stub", "base64", 0},
#line 2616 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.zbrush.pcx", "base64", "pcx"},
#line 2445 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dolby.heaac.1", "base64", 0},
#line 2764 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/x.stl-binary", "base64", "stl"},
#line 661 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp-prose-pc3ch+xml", "base64", 0},
#line 1872 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yellowriver-custom-menu", "base64", "cmp"},
#line 1881 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/voucher-cms+json", "base64", 0},
#line 2999 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-web-markdown", "quoted-printable", "md mdtext mkd markdown"},
#line 674 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.3gpp.current-location-discovery+xml", "base64", 0},
#line 2298 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/yang-data+cbor", "base64", 0},
#line 1396 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.landmark+wbxml", "base64", 0},
#line 2450 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dolby.pl2x", "base64", 0},
#line 1627 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.previewsystems.box", "base64", "box"},
#line 821 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apple.iwork", "base64", 0},
#line 914 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.crypto-shade-file", "base64", 0},
#line 2461 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.ms-playready.media.pya", "base64", "pya"},
#line 2249 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-www-form-urlencoded", "7bit", 0},
#line 2728 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/gltf-binary", "base64", 0},
#line 1231 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kde.kontour", "base64", "kon"},
#line 2517 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"haptics/hjif", "base64", 0},
#line 2815 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/fhirpath", "quoted-printable", 0},
#line 1306 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ms-artgalry", "base64", "cil"},
#line 3090 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.ms-playready.media.pyv", "base64", "pyv"},
#line 1363 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.msgpack", "base64", 0},
#line 1062 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.firemonkeys.cloudcell", "base64", 0},
#line 358 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/merge-patch+json", "base64", 0},
#line 1157 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hyper-item+json", "base64", 0},
#line 177 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/dash-patch+xml", "base64", 0},
#line 1399 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.n-gage.ac+xml", "base64", 0},
#line 1229 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kde.kformula", "base64", "kfo"},
#line 322 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/logout+jwt", "base64", 0},
#line 1276 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mediastation.cdkey", "base64", "cdkey"},
#line 242 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/geo+json-seq", "base64", 0},
#line 209 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/edhoc+cbor-seq", "base64", 0},
#line 2446 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.dolby.heaac.2", "base64", 0},
#line 447 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ppsp-tracker+json", "base64", 0},
#line 850 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.belightsoft.lhzd+zip", "base64", 0},
#line 851 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.belightsoft.lhzl+zip", "base64", 0},
#line 1158 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hyperdrive+json", "base64", 0},
#line 754 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.Quark.QuarkXPress", "8bit", "qxd qxt qwd qwt qxl qxb"},
#line 505 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rpki-ghostbusters", "base64", "gbr"},
#line 1207 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.irepository.package+xml", "base64", "irp"},
#line 2435 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.adobe.soundbooth", "base64", "asnd"},
#line 2219 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-msworks-spreadsheet", "base64", "xlr"},
#line 2703 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/global-delivery-status", "base64", 0},
#line 76 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/alto-networkmap+json", "base64", 0},
#line 2980 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"text/x-ruby", "quoted-printable", "rb"},
#line 3135 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"x-conference/x-cooltalk", "base64", "ice"},
#line 2049 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-iwork-numbers-sffnumbers", "base64", "numbers"},
#line 813 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.apache.thrift.binary", "base64", 0},
#line 1784 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.unity", "base64", "unityweb"},
#line 2159 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ruby", "8bit", "rb rbw"},
#line 2596 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/vnd.globalgraphics.pgb", "base64", "pgb"},
#line 1234 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kde.kword", "base64", "kwd kwt"},
#line 1894 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/webpush-options+json", "base64", 0},
#line 1752 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.syft+json", "base64", 0},
#line 874 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.chipnuts.karaoke-mmd", "base64", "mmd"},
#line 1248 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.liberty-request+xml", "base64", 0},
#line 2700 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/external-body", "8bit", 0},
#line 2016 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-futuresplash", "base64", "spl"},
#line 1816 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.visionary", "base64", "vis"},
#line 239 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/framework-attributes+xml", "base64", 0},
#line 365 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/missing-blocks+cbor-seq", "base64", 0},
#line 1152 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hp-jlyt", "base64", "jlt"},
#line 534 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sd-jwt+json", "base64", 0},
#line 612 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/thraud+xml", "base64", "tfi"},
#line 2791 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"multipart/x-www-form-urlencoded", "base64", 0},
#line 915 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cryptomator.encrypted", "base64", 0},
#line 102 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/auth-policy+xml", "8bit", 0},
#line 2019 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-ghostview", "base64", 0},
#line 292 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jcr-xpath", "base64", 0},
#line 1404 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.nokia.pcd+wbxml", "base64", 0},
#line 2175 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-sas-utility", "base64", "su7 sas7butl"},
#line 2299 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/yang-data+json", "base64", 0},
#line 1936 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-berkeley-db", "base64", 0},
#line 125 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cdmi-capability", "base64", "cdmia"},
#line 244 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/geopackage+sqlite3", "base64", 0},
#line 2679 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-sony", "base64", "arw srf sr2"},
#line 1892 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/watcherinfo+xml", "base64", "wif"},
#line 363 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mikey", "base64", 0},
#line 409 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ohttp-keys", "base64", 0},
#line 2468 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"audio/vnd.presonus.multitrack", "base64", 0},
#line 1238 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.keyman.kmx", "base64", 0},
#line 504 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/rpki-checklist", "base64", 0},
#line 175 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/cybercash", "base64", 0},
#line 1861 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yamaha.hv-dic", "base64", "hvd"},
#line 2215 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-java-enterprise-archive", "base64", "ear"},
#line 588 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/statuslist+jwt", "base64", 0},
#line 89 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/asyncapi+json", "base64", 0},
#line 871 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.century-systems.tcp_stream", "base64", 0},
#line 307 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jwk-set+json", "base64", 0},
#line 1863 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yamaha.hv-voice", "base64", "hvp"},
#line 467 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.implied-object+json-seq", "base64", 0},
#line 1628 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.project-graph", "base64", 0},
#line 1228 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.kde.kchart", "base64", "chrt"},
#line 372 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/mosskey-request", "base64", 0},
#line 838 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.audiograph", "base64", "aep"},
#line 1290 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.mitsubishi.misty-guard.trustweb", "base64", 0},
#line 2302 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/yang-patch+xml", "base64", 0},
#line 1862 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yamaha.hv-script", "base64", "hvs"},
#line 908 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.crick.clicker.keyboard", "base64", "clkk"},
#line 312 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/kb+jwt", "base64", 0},
#line 911 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.crick.clicker.wordbank", "base64", "clkw"},
#line 1140 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hdfgroup.hdf4", "base64", 0},
#line 1141 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hdfgroup.hdf5", "base64", 0},
#line 2291 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/xquery", "base64", "xq xquery"},
#line 1601 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.pagerduty+json", "base64", 0},
#line 2082 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-mach-o-dylinker", "base64", 0},
#line 481 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/quicktimeplayer", "base64", "qtl"},
#line 2755 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/vnd.pytha.pyox", "base64", 0},
#line 2642 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-kodak-kdc", "base64", "kdc"},
#line 613 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/timestamp-query", "base64", 0},
#line 1639 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.quobject-quoxdocument", "base64", 0},
#line 267 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ibe-pkg-reply+xml", "base64", 0},
#line 849 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.bekitzur-stech+json", "base64", 0},
#line 392 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/news-checkgroups", "base64", 0},
#line 240 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/futuresplash", "base64", "spl"},
#line 2641 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-kodak-k25", "base64", "k25"},
#line 1070 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fsc.weblaunch", "7bit", "fsc"},
#line 301 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/json-patch+json", "base64", 0},
#line 1706 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.sketchometry", "base64", 0},
#line 1092 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.ga4gh.passport+jwt", "base64", 0},
#line 574 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/sparql-query", "base64", "rq"},
#line 2765 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"model/x3d+binary", "base64", "x3db x3dbz"},
#line 90 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/asyncapi+yaml", "base64", 0},
#line 1156 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.hyper+json", "base64", 0},
#line 758 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.abdalsecuritygroup.lockbox", "base64", 0},
#line 266 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/ibe-key-request+xml", "base64", 0},
#line 1869 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.yamaha.through-ngn", "base64", 0},
#line 928 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.cybank", "base64", 0},
#line 1071 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujifilm.fb.docuworks", "base64", 0},
#line 1873 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.youtube.yt", "base64", 0},
#line 2214 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-iworks-protected", "base64", 0},
#line 1237 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.keyman.kmp+zip", "base64", 0},
#line 306 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jwk+json", "base64", 0},
#line 862 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.byu.uapi+json", "base64", 0},
#line 1143 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.heroku+json", "base64", 0},
#line 139 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/city+json-seq", "base64", 0},
#line 2188 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-smarttech-notebook", "base64", "notebook"},
#line 2152 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-quicktimeplayer", "base64", "qtl"},
#line 399 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/oauth-authz-req+jwt", "base64", 0},
#line 1073 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujifilm.fb.docuworks.container", "base64", 0},
#line 308 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/jwk-set+jwt", "base64", 0},
#line 302 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/json-patch-query+json", "base64", 0},
#line 3104 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"video/vnd.youtube.yt", "base64", 0},
#line 2711 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/ohttp-chunked-res", "base64", 0},
#line 627 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/trust-mark+jwt", "base64", 0},
#line 2539 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/hej2k", "base64", 0},
#line 2185 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-shockwave-flash", "base64", "swf"},
#line 2301 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/yang-patch+json", "base64", 0},
#line 603 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/tamp-status-query", "base64", 0},
#line 1072 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujifilm.fb.docuworks.binder", "base64", 0},
#line 2216 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-tika-java-web-archive", "base64", "war"},
#line 1074 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.fujifilm.fb.jfi+xml", "base64", 0},
#line 2666 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"image/x-raw-kodak", "base64", "k25 kdc dcs drf"},
#line 1262 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.majikah.bundle", "base64", 0},
#line 1883 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/voucher-jws+json", "base64", 0},
#line 2030 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-html+ruby", "8bit", "rhtml"},
#line 87 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/application/jwk-set+jwt", "base64", 0},
#line 460 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/prs.bwtc32key", "base64", 0},
#line 441 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/pkix-pkipath", "base64", "pkipath"},
#line 1895 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/whoispp-query", "base64", 0},
#line 1700 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/vnd.shopkick+json", "base64", 0},
#line 2710 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"message/ohttp-chunked-req", "base64", 0},
#line 2048 "/Users/samuel/Developer/socketry/protocol-media-data/ext/protocol/media/data/records.gperf"
      {"application/x-iwork-keynote-sffkey", "base64", "key"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = record_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register const struct MediaTypeRecord *resword;

          if (key < 12059)
            {
              if (key < 5532)
                {
                  switch (key - 118)
                    {
                      case 0:
                        resword = &wordlist[0];
                        goto compare;
                      case 20:
                        resword = &wordlist[1];
                        goto compare;
                      case 45:
                        resword = &wordlist[2];
                        goto compare;
                      case 52:
                        resword = &wordlist[3];
                        goto compare;
                      case 57:
                        resword = &wordlist[4];
                        goto compare;
                      case 67:
                        resword = &wordlist[5];
                        goto compare;
                      case 77:
                        resword = &wordlist[6];
                        goto compare;
                      case 80:
                        resword = &wordlist[7];
                        goto compare;
                      case 82:
                        resword = &wordlist[8];
                        goto compare;
                      case 87:
                        resword = &wordlist[9];
                        goto compare;
                      case 103:
                        resword = &wordlist[10];
                        goto compare;
                      case 107:
                        resword = &wordlist[11];
                        goto compare;
                      case 108:
                        resword = &wordlist[12];
                        goto compare;
                      case 116:
                        resword = &wordlist[13];
                        goto compare;
                      case 122:
                        resword = &wordlist[14];
                        goto compare;
                      case 127:
                        resword = &wordlist[15];
                        goto compare;
                      case 132:
                        resword = &wordlist[16];
                        goto compare;
                      case 147:
                        resword = &wordlist[17];
                        goto compare;
                      case 150:
                        resword = &wordlist[18];
                        goto compare;
                      case 153:
                        resword = &wordlist[19];
                        goto compare;
                      case 160:
                        resword = &wordlist[20];
                        goto compare;
                      case 169:
                        resword = &wordlist[21];
                        goto compare;
                      case 172:
                        resword = &wordlist[22];
                        goto compare;
                      case 173:
                        resword = &wordlist[23];
                        goto compare;
                      case 177:
                        resword = &wordlist[24];
                        goto compare;
                      case 178:
                        resword = &wordlist[25];
                        goto compare;
                      case 182:
                        resword = &wordlist[26];
                        goto compare;
                      case 199:
                        resword = &wordlist[27];
                        goto compare;
                      case 203:
                        resword = &wordlist[28];
                        goto compare;
                      case 207:
                        resword = &wordlist[29];
                        goto compare;
                      case 212:
                        resword = &wordlist[30];
                        goto compare;
                      case 213:
                        resword = &wordlist[31];
                        goto compare;
                      case 222:
                        resword = &wordlist[32];
                        goto compare;
                      case 228:
                        resword = &wordlist[33];
                        goto compare;
                      case 233:
                        resword = &wordlist[34];
                        goto compare;
                      case 241:
                        resword = &wordlist[35];
                        goto compare;
                      case 246:
                        resword = &wordlist[36];
                        goto compare;
                      case 257:
                        resword = &wordlist[37];
                        goto compare;
                      case 273:
                        resword = &wordlist[38];
                        goto compare;
                      case 278:
                        resword = &wordlist[39];
                        goto compare;
                      case 300:
                        resword = &wordlist[40];
                        goto compare;
                      case 307:
                        resword = &wordlist[41];
                        goto compare;
                      case 308:
                        resword = &wordlist[42];
                        goto compare;
                      case 312:
                        resword = &wordlist[43];
                        goto compare;
                      case 316:
                        resword = &wordlist[44];
                        goto compare;
                      case 318:
                        resword = &wordlist[45];
                        goto compare;
                      case 322:
                        resword = &wordlist[46];
                        goto compare;
                      case 331:
                        resword = &wordlist[47];
                        goto compare;
                      case 338:
                        resword = &wordlist[48];
                        goto compare;
                      case 342:
                        resword = &wordlist[49];
                        goto compare;
                      case 357:
                        resword = &wordlist[50];
                        goto compare;
                      case 359:
                        resword = &wordlist[51];
                        goto compare;
                      case 386:
                        resword = &wordlist[52];
                        goto compare;
                      case 391:
                        resword = &wordlist[53];
                        goto compare;
                      case 395:
                        resword = &wordlist[54];
                        goto compare;
                      case 401:
                        resword = &wordlist[55];
                        goto compare;
                      case 402:
                        resword = &wordlist[56];
                        goto compare;
                      case 406:
                        resword = &wordlist[57];
                        goto compare;
                      case 413:
                        resword = &wordlist[58];
                        goto compare;
                      case 432:
                        resword = &wordlist[59];
                        goto compare;
                      case 435:
                        resword = &wordlist[60];
                        goto compare;
                      case 456:
                        resword = &wordlist[61];
                        goto compare;
                      case 457:
                        resword = &wordlist[62];
                        goto compare;
                      case 469:
                        resword = &wordlist[63];
                        goto compare;
                      case 472:
                        resword = &wordlist[64];
                        goto compare;
                      case 490:
                        resword = &wordlist[65];
                        goto compare;
                      case 508:
                        resword = &wordlist[66];
                        goto compare;
                      case 514:
                        resword = &wordlist[67];
                        goto compare;
                      case 516:
                        resword = &wordlist[68];
                        goto compare;
                      case 517:
                        resword = &wordlist[69];
                        goto compare;
                      case 521:
                        resword = &wordlist[70];
                        goto compare;
                      case 522:
                        resword = &wordlist[71];
                        goto compare;
                      case 535:
                        resword = &wordlist[72];
                        goto compare;
                      case 542:
                        resword = &wordlist[73];
                        goto compare;
                      case 547:
                        resword = &wordlist[74];
                        goto compare;
                      case 551:
                        resword = &wordlist[75];
                        goto compare;
                      case 557:
                        resword = &wordlist[76];
                        goto compare;
                      case 558:
                        resword = &wordlist[77];
                        goto compare;
                      case 562:
                        resword = &wordlist[78];
                        goto compare;
                      case 565:
                        resword = &wordlist[79];
                        goto compare;
                      case 574:
                        resword = &wordlist[80];
                        goto compare;
                      case 586:
                        resword = &wordlist[81];
                        goto compare;
                      case 589:
                        resword = &wordlist[82];
                        goto compare;
                      case 605:
                        resword = &wordlist[83];
                        goto compare;
                      case 616:
                        resword = &wordlist[84];
                        goto compare;
                      case 620:
                        resword = &wordlist[85];
                        goto compare;
                      case 627:
                        resword = &wordlist[86];
                        goto compare;
                      case 642:
                        resword = &wordlist[87];
                        goto compare;
                      case 646:
                        resword = &wordlist[88];
                        goto compare;
                      case 647:
                        resword = &wordlist[89];
                        goto compare;
                      case 648:
                        resword = &wordlist[90];
                        goto compare;
                      case 657:
                        resword = &wordlist[91];
                        goto compare;
                      case 673:
                        resword = &wordlist[92];
                        goto compare;
                      case 686:
                        resword = &wordlist[93];
                        goto compare;
                      case 688:
                        resword = &wordlist[94];
                        goto compare;
                      case 734:
                        resword = &wordlist[95];
                        goto compare;
                      case 735:
                        resword = &wordlist[96];
                        goto compare;
                      case 745:
                        resword = &wordlist[97];
                        goto compare;
                      case 765:
                        resword = &wordlist[98];
                        goto compare;
                      case 774:
                        resword = &wordlist[99];
                        goto compare;
                      case 777:
                        resword = &wordlist[100];
                        goto compare;
                      case 784:
                        resword = &wordlist[101];
                        goto compare;
                      case 785:
                        resword = &wordlist[102];
                        goto compare;
                      case 800:
                        resword = &wordlist[103];
                        goto compare;
                      case 803:
                        resword = &wordlist[104];
                        goto compare;
                      case 804:
                        resword = &wordlist[105];
                        goto compare;
                      case 822:
                        resword = &wordlist[106];
                        goto compare;
                      case 824:
                        resword = &wordlist[107];
                        goto compare;
                      case 827:
                        resword = &wordlist[108];
                        goto compare;
                      case 850:
                        resword = &wordlist[109];
                        goto compare;
                      case 858:
                        resword = &wordlist[110];
                        goto compare;
                      case 869:
                        resword = &wordlist[111];
                        goto compare;
                      case 881:
                        resword = &wordlist[112];
                        goto compare;
                      case 903:
                        resword = &wordlist[113];
                        goto compare;
                      case 918:
                        resword = &wordlist[114];
                        goto compare;
                      case 954:
                        resword = &wordlist[115];
                        goto compare;
                      case 955:
                        resword = &wordlist[116];
                        goto compare;
                      case 966:
                        resword = &wordlist[117];
                        goto compare;
                      case 975:
                        resword = &wordlist[118];
                        goto compare;
                      case 990:
                        resword = &wordlist[119];
                        goto compare;
                      case 997:
                        resword = &wordlist[120];
                        goto compare;
                      case 1001:
                        resword = &wordlist[121];
                        goto compare;
                      case 1008:
                        resword = &wordlist[122];
                        goto compare;
                      case 1014:
                        resword = &wordlist[123];
                        goto compare;
                      case 1019:
                        resword = &wordlist[124];
                        goto compare;
                      case 1027:
                        resword = &wordlist[125];
                        goto compare;
                      case 1030:
                        resword = &wordlist[126];
                        goto compare;
                      case 1066:
                        resword = &wordlist[127];
                        goto compare;
                      case 1068:
                        resword = &wordlist[128];
                        goto compare;
                      case 1070:
                        resword = &wordlist[129];
                        goto compare;
                      case 1075:
                        resword = &wordlist[130];
                        goto compare;
                      case 1076:
                        resword = &wordlist[131];
                        goto compare;
                      case 1083:
                        resword = &wordlist[132];
                        goto compare;
                      case 1085:
                        resword = &wordlist[133];
                        goto compare;
                      case 1087:
                        resword = &wordlist[134];
                        goto compare;
                      case 1089:
                        resword = &wordlist[135];
                        goto compare;
                      case 1093:
                        resword = &wordlist[136];
                        goto compare;
                      case 1095:
                        resword = &wordlist[137];
                        goto compare;
                      case 1104:
                        resword = &wordlist[138];
                        goto compare;
                      case 1107:
                        resword = &wordlist[139];
                        goto compare;
                      case 1117:
                        resword = &wordlist[140];
                        goto compare;
                      case 1119:
                        resword = &wordlist[141];
                        goto compare;
                      case 1120:
                        resword = &wordlist[142];
                        goto compare;
                      case 1130:
                        resword = &wordlist[143];
                        goto compare;
                      case 1133:
                        resword = &wordlist[144];
                        goto compare;
                      case 1142:
                        resword = &wordlist[145];
                        goto compare;
                      case 1144:
                        resword = &wordlist[146];
                        goto compare;
                      case 1147:
                        resword = &wordlist[147];
                        goto compare;
                      case 1151:
                        resword = &wordlist[148];
                        goto compare;
                      case 1154:
                        resword = &wordlist[149];
                        goto compare;
                      case 1156:
                        resword = &wordlist[150];
                        goto compare;
                      case 1173:
                        resword = &wordlist[151];
                        goto compare;
                      case 1178:
                        resword = &wordlist[152];
                        goto compare;
                      case 1196:
                        resword = &wordlist[153];
                        goto compare;
                      case 1204:
                        resword = &wordlist[154];
                        goto compare;
                      case 1214:
                        resword = &wordlist[155];
                        goto compare;
                      case 1215:
                        resword = &wordlist[156];
                        goto compare;
                      case 1220:
                        resword = &wordlist[157];
                        goto compare;
                      case 1222:
                        resword = &wordlist[158];
                        goto compare;
                      case 1223:
                        resword = &wordlist[159];
                        goto compare;
                      case 1229:
                        resword = &wordlist[160];
                        goto compare;
                      case 1237:
                        resword = &wordlist[161];
                        goto compare;
                      case 1245:
                        resword = &wordlist[162];
                        goto compare;
                      case 1251:
                        resword = &wordlist[163];
                        goto compare;
                      case 1264:
                        resword = &wordlist[164];
                        goto compare;
                      case 1265:
                        resword = &wordlist[165];
                        goto compare;
                      case 1270:
                        resword = &wordlist[166];
                        goto compare;
                      case 1272:
                        resword = &wordlist[167];
                        goto compare;
                      case 1281:
                        resword = &wordlist[168];
                        goto compare;
                      case 1282:
                        resword = &wordlist[169];
                        goto compare;
                      case 1284:
                        resword = &wordlist[170];
                        goto compare;
                      case 1299:
                        resword = &wordlist[171];
                        goto compare;
                      case 1305:
                        resword = &wordlist[172];
                        goto compare;
                      case 1335:
                        resword = &wordlist[173];
                        goto compare;
                      case 1344:
                        resword = &wordlist[174];
                        goto compare;
                      case 1350:
                        resword = &wordlist[175];
                        goto compare;
                      case 1353:
                        resword = &wordlist[176];
                        goto compare;
                      case 1359:
                        resword = &wordlist[177];
                        goto compare;
                      case 1361:
                        resword = &wordlist[178];
                        goto compare;
                      case 1362:
                        resword = &wordlist[179];
                        goto compare;
                      case 1363:
                        resword = &wordlist[180];
                        goto compare;
                      case 1369:
                        resword = &wordlist[181];
                        goto compare;
                      case 1391:
                        resword = &wordlist[182];
                        goto compare;
                      case 1408:
                        resword = &wordlist[183];
                        goto compare;
                      case 1416:
                        resword = &wordlist[184];
                        goto compare;
                      case 1418:
                        resword = &wordlist[185];
                        goto compare;
                      case 1419:
                        resword = &wordlist[186];
                        goto compare;
                      case 1420:
                        resword = &wordlist[187];
                        goto compare;
                      case 1421:
                        resword = &wordlist[188];
                        goto compare;
                      case 1425:
                        resword = &wordlist[189];
                        goto compare;
                      case 1441:
                        resword = &wordlist[190];
                        goto compare;
                      case 1442:
                        resword = &wordlist[191];
                        goto compare;
                      case 1445:
                        resword = &wordlist[192];
                        goto compare;
                      case 1455:
                        resword = &wordlist[193];
                        goto compare;
                      case 1456:
                        resword = &wordlist[194];
                        goto compare;
                      case 1459:
                        resword = &wordlist[195];
                        goto compare;
                      case 1480:
                        resword = &wordlist[196];
                        goto compare;
                      case 1493:
                        resword = &wordlist[197];
                        goto compare;
                      case 1507:
                        resword = &wordlist[198];
                        goto compare;
                      case 1512:
                        resword = &wordlist[199];
                        goto compare;
                      case 1524:
                        resword = &wordlist[200];
                        goto compare;
                      case 1526:
                        resword = &wordlist[201];
                        goto compare;
                      case 1530:
                        resword = &wordlist[202];
                        goto compare;
                      case 1538:
                        resword = &wordlist[203];
                        goto compare;
                      case 1548:
                        resword = &wordlist[204];
                        goto compare;
                      case 1564:
                        resword = &wordlist[205];
                        goto compare;
                      case 1569:
                        resword = &wordlist[206];
                        goto compare;
                      case 1580:
                        resword = &wordlist[207];
                        goto compare;
                      case 1616:
                        resword = &wordlist[208];
                        goto compare;
                      case 1627:
                        resword = &wordlist[209];
                        goto compare;
                      case 1645:
                        resword = &wordlist[210];
                        goto compare;
                      case 1673:
                        resword = &wordlist[211];
                        goto compare;
                      case 1704:
                        resword = &wordlist[212];
                        goto compare;
                      case 1715:
                        resword = &wordlist[213];
                        goto compare;
                      case 1725:
                        resword = &wordlist[214];
                        goto compare;
                      case 1743:
                        resword = &wordlist[215];
                        goto compare;
                      case 1748:
                        resword = &wordlist[216];
                        goto compare;
                      case 1756:
                        resword = &wordlist[217];
                        goto compare;
                      case 1811:
                        resword = &wordlist[218];
                        goto compare;
                      case 1827:
                        resword = &wordlist[219];
                        goto compare;
                      case 1847:
                        resword = &wordlist[220];
                        goto compare;
                      case 1858:
                        resword = &wordlist[221];
                        goto compare;
                      case 1861:
                        resword = &wordlist[222];
                        goto compare;
                      case 1862:
                        resword = &wordlist[223];
                        goto compare;
                      case 1873:
                        resword = &wordlist[224];
                        goto compare;
                      case 1877:
                        resword = &wordlist[225];
                        goto compare;
                      case 1896:
                        resword = &wordlist[226];
                        goto compare;
                      case 1900:
                        resword = &wordlist[227];
                        goto compare;
                      case 1926:
                        resword = &wordlist[228];
                        goto compare;
                      case 1927:
                        resword = &wordlist[229];
                        goto compare;
                      case 1936:
                        resword = &wordlist[230];
                        goto compare;
                      case 1959:
                        resword = &wordlist[231];
                        goto compare;
                      case 1971:
                        resword = &wordlist[232];
                        goto compare;
                      case 1980:
                        resword = &wordlist[233];
                        goto compare;
                      case 1990:
                        resword = &wordlist[234];
                        goto compare;
                      case 1992:
                        resword = &wordlist[235];
                        goto compare;
                      case 1994:
                        resword = &wordlist[236];
                        goto compare;
                      case 2001:
                        resword = &wordlist[237];
                        goto compare;
                      case 2018:
                        resword = &wordlist[238];
                        goto compare;
                      case 2020:
                        resword = &wordlist[239];
                        goto compare;
                      case 2034:
                        resword = &wordlist[240];
                        goto compare;
                      case 2052:
                        resword = &wordlist[241];
                        goto compare;
                      case 2066:
                        resword = &wordlist[242];
                        goto compare;
                      case 2079:
                        resword = &wordlist[243];
                        goto compare;
                      case 2082:
                        resword = &wordlist[244];
                        goto compare;
                      case 2083:
                        resword = &wordlist[245];
                        goto compare;
                      case 2098:
                        resword = &wordlist[246];
                        goto compare;
                      case 2104:
                        resword = &wordlist[247];
                        goto compare;
                      case 2114:
                        resword = &wordlist[248];
                        goto compare;
                      case 2116:
                        resword = &wordlist[249];
                        goto compare;
                      case 2122:
                        resword = &wordlist[250];
                        goto compare;
                      case 2131:
                        resword = &wordlist[251];
                        goto compare;
                      case 2154:
                        resword = &wordlist[252];
                        goto compare;
                      case 2155:
                        resword = &wordlist[253];
                        goto compare;
                      case 2164:
                        resword = &wordlist[254];
                        goto compare;
                      case 2165:
                        resword = &wordlist[255];
                        goto compare;
                      case 2171:
                        resword = &wordlist[256];
                        goto compare;
                      case 2176:
                        resword = &wordlist[257];
                        goto compare;
                      case 2179:
                        resword = &wordlist[258];
                        goto compare;
                      case 2180:
                        resword = &wordlist[259];
                        goto compare;
                      case 2183:
                        resword = &wordlist[260];
                        goto compare;
                      case 2192:
                        resword = &wordlist[261];
                        goto compare;
                      case 2194:
                        resword = &wordlist[262];
                        goto compare;
                      case 2242:
                        resword = &wordlist[263];
                        goto compare;
                      case 2249:
                        resword = &wordlist[264];
                        goto compare;
                      case 2250:
                        resword = &wordlist[265];
                        goto compare;
                      case 2252:
                        resword = &wordlist[266];
                        goto compare;
                      case 2280:
                        resword = &wordlist[267];
                        goto compare;
                      case 2295:
                        resword = &wordlist[268];
                        goto compare;
                      case 2312:
                        resword = &wordlist[269];
                        goto compare;
                      case 2316:
                        resword = &wordlist[270];
                        goto compare;
                      case 2322:
                        resword = &wordlist[271];
                        goto compare;
                      case 2326:
                        resword = &wordlist[272];
                        goto compare;
                      case 2352:
                        resword = &wordlist[273];
                        goto compare;
                      case 2354:
                        resword = &wordlist[274];
                        goto compare;
                      case 2357:
                        resword = &wordlist[275];
                        goto compare;
                      case 2358:
                        resword = &wordlist[276];
                        goto compare;
                      case 2363:
                        resword = &wordlist[277];
                        goto compare;
                      case 2368:
                        resword = &wordlist[278];
                        goto compare;
                      case 2370:
                        resword = &wordlist[279];
                        goto compare;
                      case 2385:
                        resword = &wordlist[280];
                        goto compare;
                      case 2389:
                        resword = &wordlist[281];
                        goto compare;
                      case 2396:
                        resword = &wordlist[282];
                        goto compare;
                      case 2399:
                        resword = &wordlist[283];
                        goto compare;
                      case 2417:
                        resword = &wordlist[284];
                        goto compare;
                      case 2418:
                        resword = &wordlist[285];
                        goto compare;
                      case 2422:
                        resword = &wordlist[286];
                        goto compare;
                      case 2430:
                        resword = &wordlist[287];
                        goto compare;
                      case 2436:
                        resword = &wordlist[288];
                        goto compare;
                      case 2437:
                        resword = &wordlist[289];
                        goto compare;
                      case 2438:
                        resword = &wordlist[290];
                        goto compare;
                      case 2456:
                        resword = &wordlist[291];
                        goto compare;
                      case 2462:
                        resword = &wordlist[292];
                        goto compare;
                      case 2469:
                        resword = &wordlist[293];
                        goto compare;
                      case 2475:
                        resword = &wordlist[294];
                        goto compare;
                      case 2477:
                        resword = &wordlist[295];
                        goto compare;
                      case 2480:
                        resword = &wordlist[296];
                        goto compare;
                      case 2486:
                        resword = &wordlist[297];
                        goto compare;
                      case 2487:
                        resword = &wordlist[298];
                        goto compare;
                      case 2488:
                        resword = &wordlist[299];
                        goto compare;
                      case 2509:
                        resword = &wordlist[300];
                        goto compare;
                      case 2593:
                        resword = &wordlist[301];
                        goto compare;
                      case 2595:
                        resword = &wordlist[302];
                        goto compare;
                      case 2601:
                        resword = &wordlist[303];
                        goto compare;
                      case 2602:
                        resword = &wordlist[304];
                        goto compare;
                      case 2609:
                        resword = &wordlist[305];
                        goto compare;
                      case 2612:
                        resword = &wordlist[306];
                        goto compare;
                      case 2637:
                        resword = &wordlist[307];
                        goto compare;
                      case 2654:
                        resword = &wordlist[308];
                        goto compare;
                      case 2656:
                        resword = &wordlist[309];
                        goto compare;
                      case 2672:
                        resword = &wordlist[310];
                        goto compare;
                      case 2686:
                        resword = &wordlist[311];
                        goto compare;
                      case 2688:
                        resword = &wordlist[312];
                        goto compare;
                      case 2691:
                        resword = &wordlist[313];
                        goto compare;
                      case 2692:
                        resword = &wordlist[314];
                        goto compare;
                      case 2695:
                        resword = &wordlist[315];
                        goto compare;
                      case 2697:
                        resword = &wordlist[316];
                        goto compare;
                      case 2698:
                        resword = &wordlist[317];
                        goto compare;
                      case 2700:
                        resword = &wordlist[318];
                        goto compare;
                      case 2701:
                        resword = &wordlist[319];
                        goto compare;
                      case 2702:
                        resword = &wordlist[320];
                        goto compare;
                      case 2705:
                        resword = &wordlist[321];
                        goto compare;
                      case 2706:
                        resword = &wordlist[322];
                        goto compare;
                      case 2715:
                        resword = &wordlist[323];
                        goto compare;
                      case 2716:
                        resword = &wordlist[324];
                        goto compare;
                      case 2721:
                        resword = &wordlist[325];
                        goto compare;
                      case 2726:
                        resword = &wordlist[326];
                        goto compare;
                      case 2727:
                        resword = &wordlist[327];
                        goto compare;
                      case 2746:
                        resword = &wordlist[328];
                        goto compare;
                      case 2747:
                        resword = &wordlist[329];
                        goto compare;
                      case 2752:
                        resword = &wordlist[330];
                        goto compare;
                      case 2753:
                        resword = &wordlist[331];
                        goto compare;
                      case 2755:
                        resword = &wordlist[332];
                        goto compare;
                      case 2756:
                        resword = &wordlist[333];
                        goto compare;
                      case 2757:
                        resword = &wordlist[334];
                        goto compare;
                      case 2762:
                        resword = &wordlist[335];
                        goto compare;
                      case 2765:
                        resword = &wordlist[336];
                        goto compare;
                      case 2768:
                        resword = &wordlist[337];
                        goto compare;
                      case 2770:
                        resword = &wordlist[338];
                        goto compare;
                      case 2771:
                        resword = &wordlist[339];
                        goto compare;
                      case 2773:
                        resword = &wordlist[340];
                        goto compare;
                      case 2775:
                        resword = &wordlist[341];
                        goto compare;
                      case 2779:
                        resword = &wordlist[342];
                        goto compare;
                      case 2781:
                        resword = &wordlist[343];
                        goto compare;
                      case 2782:
                        resword = &wordlist[344];
                        goto compare;
                      case 2783:
                        resword = &wordlist[345];
                        goto compare;
                      case 2785:
                        resword = &wordlist[346];
                        goto compare;
                      case 2789:
                        resword = &wordlist[347];
                        goto compare;
                      case 2790:
                        resword = &wordlist[348];
                        goto compare;
                      case 2794:
                        resword = &wordlist[349];
                        goto compare;
                      case 2796:
                        resword = &wordlist[350];
                        goto compare;
                      case 2799:
                        resword = &wordlist[351];
                        goto compare;
                      case 2801:
                        resword = &wordlist[352];
                        goto compare;
                      case 2811:
                        resword = &wordlist[353];
                        goto compare;
                      case 2812:
                        resword = &wordlist[354];
                        goto compare;
                      case 2821:
                        resword = &wordlist[355];
                        goto compare;
                      case 2822:
                        resword = &wordlist[356];
                        goto compare;
                      case 2830:
                        resword = &wordlist[357];
                        goto compare;
                      case 2834:
                        resword = &wordlist[358];
                        goto compare;
                      case 2836:
                        resword = &wordlist[359];
                        goto compare;
                      case 2848:
                        resword = &wordlist[360];
                        goto compare;
                      case 2854:
                        resword = &wordlist[361];
                        goto compare;
                      case 2857:
                        resword = &wordlist[362];
                        goto compare;
                      case 2862:
                        resword = &wordlist[363];
                        goto compare;
                      case 2870:
                        resword = &wordlist[364];
                        goto compare;
                      case 2872:
                        resword = &wordlist[365];
                        goto compare;
                      case 2874:
                        resword = &wordlist[366];
                        goto compare;
                      case 2881:
                        resword = &wordlist[367];
                        goto compare;
                      case 2893:
                        resword = &wordlist[368];
                        goto compare;
                      case 2896:
                        resword = &wordlist[369];
                        goto compare;
                      case 2901:
                        resword = &wordlist[370];
                        goto compare;
                      case 2904:
                        resword = &wordlist[371];
                        goto compare;
                      case 2909:
                        resword = &wordlist[372];
                        goto compare;
                      case 2912:
                        resword = &wordlist[373];
                        goto compare;
                      case 2914:
                        resword = &wordlist[374];
                        goto compare;
                      case 2915:
                        resword = &wordlist[375];
                        goto compare;
                      case 2917:
                        resword = &wordlist[376];
                        goto compare;
                      case 2919:
                        resword = &wordlist[377];
                        goto compare;
                      case 2925:
                        resword = &wordlist[378];
                        goto compare;
                      case 2927:
                        resword = &wordlist[379];
                        goto compare;
                      case 2932:
                        resword = &wordlist[380];
                        goto compare;
                      case 2937:
                        resword = &wordlist[381];
                        goto compare;
                      case 2938:
                        resword = &wordlist[382];
                        goto compare;
                      case 2940:
                        resword = &wordlist[383];
                        goto compare;
                      case 2941:
                        resword = &wordlist[384];
                        goto compare;
                      case 2944:
                        resword = &wordlist[385];
                        goto compare;
                      case 2951:
                        resword = &wordlist[386];
                        goto compare;
                      case 2956:
                        resword = &wordlist[387];
                        goto compare;
                      case 2966:
                        resword = &wordlist[388];
                        goto compare;
                      case 2967:
                        resword = &wordlist[389];
                        goto compare;
                      case 2969:
                        resword = &wordlist[390];
                        goto compare;
                      case 2971:
                        resword = &wordlist[391];
                        goto compare;
                      case 2975:
                        resword = &wordlist[392];
                        goto compare;
                      case 2976:
                        resword = &wordlist[393];
                        goto compare;
                      case 2985:
                        resword = &wordlist[394];
                        goto compare;
                      case 2990:
                        resword = &wordlist[395];
                        goto compare;
                      case 2996:
                        resword = &wordlist[396];
                        goto compare;
                      case 2998:
                        resword = &wordlist[397];
                        goto compare;
                      case 3000:
                        resword = &wordlist[398];
                        goto compare;
                      case 3005:
                        resword = &wordlist[399];
                        goto compare;
                      case 3007:
                        resword = &wordlist[400];
                        goto compare;
                      case 3008:
                        resword = &wordlist[401];
                        goto compare;
                      case 3015:
                        resword = &wordlist[402];
                        goto compare;
                      case 3021:
                        resword = &wordlist[403];
                        goto compare;
                      case 3023:
                        resword = &wordlist[404];
                        goto compare;
                      case 3025:
                        resword = &wordlist[405];
                        goto compare;
                      case 3027:
                        resword = &wordlist[406];
                        goto compare;
                      case 3030:
                        resword = &wordlist[407];
                        goto compare;
                      case 3035:
                        resword = &wordlist[408];
                        goto compare;
                      case 3037:
                        resword = &wordlist[409];
                        goto compare;
                      case 3038:
                        resword = &wordlist[410];
                        goto compare;
                      case 3040:
                        resword = &wordlist[411];
                        goto compare;
                      case 3043:
                        resword = &wordlist[412];
                        goto compare;
                      case 3055:
                        resword = &wordlist[413];
                        goto compare;
                      case 3061:
                        resword = &wordlist[414];
                        goto compare;
                      case 3066:
                        resword = &wordlist[415];
                        goto compare;
                      case 3072:
                        resword = &wordlist[416];
                        goto compare;
                      case 3086:
                        resword = &wordlist[417];
                        goto compare;
                      case 3087:
                        resword = &wordlist[418];
                        goto compare;
                      case 3101:
                        resword = &wordlist[419];
                        goto compare;
                      case 3102:
                        resword = &wordlist[420];
                        goto compare;
                      case 3106:
                        resword = &wordlist[421];
                        goto compare;
                      case 3113:
                        resword = &wordlist[422];
                        goto compare;
                      case 3114:
                        resword = &wordlist[423];
                        goto compare;
                      case 3129:
                        resword = &wordlist[424];
                        goto compare;
                      case 3141:
                        resword = &wordlist[425];
                        goto compare;
                      case 3161:
                        resword = &wordlist[426];
                        goto compare;
                      case 3165:
                        resword = &wordlist[427];
                        goto compare;
                      case 3185:
                        resword = &wordlist[428];
                        goto compare;
                      case 3186:
                        resword = &wordlist[429];
                        goto compare;
                      case 3208:
                        resword = &wordlist[430];
                        goto compare;
                      case 3210:
                        resword = &wordlist[431];
                        goto compare;
                      case 3217:
                        resword = &wordlist[432];
                        goto compare;
                      case 3231:
                        resword = &wordlist[433];
                        goto compare;
                      case 3241:
                        resword = &wordlist[434];
                        goto compare;
                      case 3249:
                        resword = &wordlist[435];
                        goto compare;
                      case 3251:
                        resword = &wordlist[436];
                        goto compare;
                      case 3257:
                        resword = &wordlist[437];
                        goto compare;
                      case 3266:
                        resword = &wordlist[438];
                        goto compare;
                      case 3269:
                        resword = &wordlist[439];
                        goto compare;
                      case 3274:
                        resword = &wordlist[440];
                        goto compare;
                      case 3275:
                        resword = &wordlist[441];
                        goto compare;
                      case 3300:
                        resword = &wordlist[442];
                        goto compare;
                      case 3302:
                        resword = &wordlist[443];
                        goto compare;
                      case 3305:
                        resword = &wordlist[444];
                        goto compare;
                      case 3306:
                        resword = &wordlist[445];
                        goto compare;
                      case 3331:
                        resword = &wordlist[446];
                        goto compare;
                      case 3334:
                        resword = &wordlist[447];
                        goto compare;
                      case 3351:
                        resword = &wordlist[448];
                        goto compare;
                      case 3353:
                        resword = &wordlist[449];
                        goto compare;
                      case 3356:
                        resword = &wordlist[450];
                        goto compare;
                      case 3360:
                        resword = &wordlist[451];
                        goto compare;
                      case 3365:
                        resword = &wordlist[452];
                        goto compare;
                      case 3367:
                        resword = &wordlist[453];
                        goto compare;
                      case 3369:
                        resword = &wordlist[454];
                        goto compare;
                      case 3376:
                        resword = &wordlist[455];
                        goto compare;
                      case 3385:
                        resword = &wordlist[456];
                        goto compare;
                      case 3392:
                        resword = &wordlist[457];
                        goto compare;
                      case 3399:
                        resword = &wordlist[458];
                        goto compare;
                      case 3401:
                        resword = &wordlist[459];
                        goto compare;
                      case 3404:
                        resword = &wordlist[460];
                        goto compare;
                      case 3406:
                        resword = &wordlist[461];
                        goto compare;
                      case 3413:
                        resword = &wordlist[462];
                        goto compare;
                      case 3425:
                        resword = &wordlist[463];
                        goto compare;
                      case 3430:
                        resword = &wordlist[464];
                        goto compare;
                      case 3440:
                        resword = &wordlist[465];
                        goto compare;
                      case 3451:
                        resword = &wordlist[466];
                        goto compare;
                      case 3456:
                        resword = &wordlist[467];
                        goto compare;
                      case 3463:
                        resword = &wordlist[468];
                        goto compare;
                      case 3467:
                        resword = &wordlist[469];
                        goto compare;
                      case 3469:
                        resword = &wordlist[470];
                        goto compare;
                      case 3476:
                        resword = &wordlist[471];
                        goto compare;
                      case 3485:
                        resword = &wordlist[472];
                        goto compare;
                      case 3487:
                        resword = &wordlist[473];
                        goto compare;
                      case 3507:
                        resword = &wordlist[474];
                        goto compare;
                      case 3515:
                        resword = &wordlist[475];
                        goto compare;
                      case 3521:
                        resword = &wordlist[476];
                        goto compare;
                      case 3533:
                        resword = &wordlist[477];
                        goto compare;
                      case 3535:
                        resword = &wordlist[478];
                        goto compare;
                      case 3544:
                        resword = &wordlist[479];
                        goto compare;
                      case 3549:
                        resword = &wordlist[480];
                        goto compare;
                      case 3555:
                        resword = &wordlist[481];
                        goto compare;
                      case 3560:
                        resword = &wordlist[482];
                        goto compare;
                      case 3564:
                        resword = &wordlist[483];
                        goto compare;
                      case 3565:
                        resword = &wordlist[484];
                        goto compare;
                      case 3574:
                        resword = &wordlist[485];
                        goto compare;
                      case 3576:
                        resword = &wordlist[486];
                        goto compare;
                      case 3580:
                        resword = &wordlist[487];
                        goto compare;
                      case 3595:
                        resword = &wordlist[488];
                        goto compare;
                      case 3600:
                        resword = &wordlist[489];
                        goto compare;
                      case 3601:
                        resword = &wordlist[490];
                        goto compare;
                      case 3602:
                        resword = &wordlist[491];
                        goto compare;
                      case 3619:
                        resword = &wordlist[492];
                        goto compare;
                      case 3620:
                        resword = &wordlist[493];
                        goto compare;
                      case 3625:
                        resword = &wordlist[494];
                        goto compare;
                      case 3630:
                        resword = &wordlist[495];
                        goto compare;
                      case 3651:
                        resword = &wordlist[496];
                        goto compare;
                      case 3656:
                        resword = &wordlist[497];
                        goto compare;
                      case 3663:
                        resword = &wordlist[498];
                        goto compare;
                      case 3668:
                        resword = &wordlist[499];
                        goto compare;
                      case 3679:
                        resword = &wordlist[500];
                        goto compare;
                      case 3681:
                        resword = &wordlist[501];
                        goto compare;
                      case 3692:
                        resword = &wordlist[502];
                        goto compare;
                      case 3695:
                        resword = &wordlist[503];
                        goto compare;
                      case 3696:
                        resword = &wordlist[504];
                        goto compare;
                      case 3697:
                        resword = &wordlist[505];
                        goto compare;
                      case 3704:
                        resword = &wordlist[506];
                        goto compare;
                      case 3705:
                        resword = &wordlist[507];
                        goto compare;
                      case 3707:
                        resword = &wordlist[508];
                        goto compare;
                      case 3708:
                        resword = &wordlist[509];
                        goto compare;
                      case 3709:
                        resword = &wordlist[510];
                        goto compare;
                      case 3722:
                        resword = &wordlist[511];
                        goto compare;
                      case 3729:
                        resword = &wordlist[512];
                        goto compare;
                      case 3738:
                        resword = &wordlist[513];
                        goto compare;
                      case 3739:
                        resword = &wordlist[514];
                        goto compare;
                      case 3741:
                        resword = &wordlist[515];
                        goto compare;
                      case 3753:
                        resword = &wordlist[516];
                        goto compare;
                      case 3771:
                        resword = &wordlist[517];
                        goto compare;
                      case 3774:
                        resword = &wordlist[518];
                        goto compare;
                      case 3782:
                        resword = &wordlist[519];
                        goto compare;
                      case 3783:
                        resword = &wordlist[520];
                        goto compare;
                      case 3784:
                        resword = &wordlist[521];
                        goto compare;
                      case 3787:
                        resword = &wordlist[522];
                        goto compare;
                      case 3788:
                        resword = &wordlist[523];
                        goto compare;
                      case 3792:
                        resword = &wordlist[524];
                        goto compare;
                      case 3795:
                        resword = &wordlist[525];
                        goto compare;
                      case 3796:
                        resword = &wordlist[526];
                        goto compare;
                      case 3803:
                        resword = &wordlist[527];
                        goto compare;
                      case 3806:
                        resword = &wordlist[528];
                        goto compare;
                      case 3813:
                        resword = &wordlist[529];
                        goto compare;
                      case 3816:
                        resword = &wordlist[530];
                        goto compare;
                      case 3821:
                        resword = &wordlist[531];
                        goto compare;
                      case 3826:
                        resword = &wordlist[532];
                        goto compare;
                      case 3837:
                        resword = &wordlist[533];
                        goto compare;
                      case 3846:
                        resword = &wordlist[534];
                        goto compare;
                      case 3848:
                        resword = &wordlist[535];
                        goto compare;
                      case 3850:
                        resword = &wordlist[536];
                        goto compare;
                      case 3851:
                        resword = &wordlist[537];
                        goto compare;
                      case 3858:
                        resword = &wordlist[538];
                        goto compare;
                      case 3860:
                        resword = &wordlist[539];
                        goto compare;
                      case 3862:
                        resword = &wordlist[540];
                        goto compare;
                      case 3863:
                        resword = &wordlist[541];
                        goto compare;
                      case 3867:
                        resword = &wordlist[542];
                        goto compare;
                      case 3868:
                        resword = &wordlist[543];
                        goto compare;
                      case 3873:
                        resword = &wordlist[544];
                        goto compare;
                      case 3882:
                        resword = &wordlist[545];
                        goto compare;
                      case 3884:
                        resword = &wordlist[546];
                        goto compare;
                      case 3885:
                        resword = &wordlist[547];
                        goto compare;
                      case 3896:
                        resword = &wordlist[548];
                        goto compare;
                      case 3906:
                        resword = &wordlist[549];
                        goto compare;
                      case 3907:
                        resword = &wordlist[550];
                        goto compare;
                      case 3913:
                        resword = &wordlist[551];
                        goto compare;
                      case 3915:
                        resword = &wordlist[552];
                        goto compare;
                      case 3926:
                        resword = &wordlist[553];
                        goto compare;
                      case 3942:
                        resword = &wordlist[554];
                        goto compare;
                      case 3951:
                        resword = &wordlist[555];
                        goto compare;
                      case 3957:
                        resword = &wordlist[556];
                        goto compare;
                      case 3959:
                        resword = &wordlist[557];
                        goto compare;
                      case 3960:
                        resword = &wordlist[558];
                        goto compare;
                      case 3970:
                        resword = &wordlist[559];
                        goto compare;
                      case 3975:
                        resword = &wordlist[560];
                        goto compare;
                      case 3982:
                        resword = &wordlist[561];
                        goto compare;
                      case 3985:
                        resword = &wordlist[562];
                        goto compare;
                      case 3987:
                        resword = &wordlist[563];
                        goto compare;
                      case 3989:
                        resword = &wordlist[564];
                        goto compare;
                      case 3992:
                        resword = &wordlist[565];
                        goto compare;
                      case 4008:
                        resword = &wordlist[566];
                        goto compare;
                      case 4016:
                        resword = &wordlist[567];
                        goto compare;
                      case 4020:
                        resword = &wordlist[568];
                        goto compare;
                      case 4028:
                        resword = &wordlist[569];
                        goto compare;
                      case 4033:
                        resword = &wordlist[570];
                        goto compare;
                      case 4037:
                        resword = &wordlist[571];
                        goto compare;
                      case 4044:
                        resword = &wordlist[572];
                        goto compare;
                      case 4047:
                        resword = &wordlist[573];
                        goto compare;
                      case 4050:
                        resword = &wordlist[574];
                        goto compare;
                      case 4052:
                        resword = &wordlist[575];
                        goto compare;
                      case 4054:
                        resword = &wordlist[576];
                        goto compare;
                      case 4075:
                        resword = &wordlist[577];
                        goto compare;
                      case 4082:
                        resword = &wordlist[578];
                        goto compare;
                      case 4093:
                        resword = &wordlist[579];
                        goto compare;
                      case 4094:
                        resword = &wordlist[580];
                        goto compare;
                      case 4098:
                        resword = &wordlist[581];
                        goto compare;
                      case 4103:
                        resword = &wordlist[582];
                        goto compare;
                      case 4110:
                        resword = &wordlist[583];
                        goto compare;
                      case 4122:
                        resword = &wordlist[584];
                        goto compare;
                      case 4125:
                        resword = &wordlist[585];
                        goto compare;
                      case 4126:
                        resword = &wordlist[586];
                        goto compare;
                      case 4127:
                        resword = &wordlist[587];
                        goto compare;
                      case 4132:
                        resword = &wordlist[588];
                        goto compare;
                      case 4135:
                        resword = &wordlist[589];
                        goto compare;
                      case 4138:
                        resword = &wordlist[590];
                        goto compare;
                      case 4139:
                        resword = &wordlist[591];
                        goto compare;
                      case 4144:
                        resword = &wordlist[592];
                        goto compare;
                      case 4145:
                        resword = &wordlist[593];
                        goto compare;
                      case 4146:
                        resword = &wordlist[594];
                        goto compare;
                      case 4156:
                        resword = &wordlist[595];
                        goto compare;
                      case 4162:
                        resword = &wordlist[596];
                        goto compare;
                      case 4171:
                        resword = &wordlist[597];
                        goto compare;
                      case 4172:
                        resword = &wordlist[598];
                        goto compare;
                      case 4177:
                        resword = &wordlist[599];
                        goto compare;
                      case 4180:
                        resword = &wordlist[600];
                        goto compare;
                      case 4188:
                        resword = &wordlist[601];
                        goto compare;
                      case 4189:
                        resword = &wordlist[602];
                        goto compare;
                      case 4190:
                        resword = &wordlist[603];
                        goto compare;
                      case 4191:
                        resword = &wordlist[604];
                        goto compare;
                      case 4201:
                        resword = &wordlist[605];
                        goto compare;
                      case 4204:
                        resword = &wordlist[606];
                        goto compare;
                      case 4214:
                        resword = &wordlist[607];
                        goto compare;
                      case 4226:
                        resword = &wordlist[608];
                        goto compare;
                      case 4227:
                        resword = &wordlist[609];
                        goto compare;
                      case 4229:
                        resword = &wordlist[610];
                        goto compare;
                      case 4247:
                        resword = &wordlist[611];
                        goto compare;
                      case 4263:
                        resword = &wordlist[612];
                        goto compare;
                      case 4272:
                        resword = &wordlist[613];
                        goto compare;
                      case 4273:
                        resword = &wordlist[614];
                        goto compare;
                      case 4275:
                        resword = &wordlist[615];
                        goto compare;
                      case 4279:
                        resword = &wordlist[616];
                        goto compare;
                      case 4292:
                        resword = &wordlist[617];
                        goto compare;
                      case 4299:
                        resword = &wordlist[618];
                        goto compare;
                      case 4306:
                        resword = &wordlist[619];
                        goto compare;
                      case 4314:
                        resword = &wordlist[620];
                        goto compare;
                      case 4317:
                        resword = &wordlist[621];
                        goto compare;
                      case 4318:
                        resword = &wordlist[622];
                        goto compare;
                      case 4332:
                        resword = &wordlist[623];
                        goto compare;
                      case 4339:
                        resword = &wordlist[624];
                        goto compare;
                      case 4342:
                        resword = &wordlist[625];
                        goto compare;
                      case 4344:
                        resword = &wordlist[626];
                        goto compare;
                      case 4347:
                        resword = &wordlist[627];
                        goto compare;
                      case 4356:
                        resword = &wordlist[628];
                        goto compare;
                      case 4359:
                        resword = &wordlist[629];
                        goto compare;
                      case 4362:
                        resword = &wordlist[630];
                        goto compare;
                      case 4363:
                        resword = &wordlist[631];
                        goto compare;
                      case 4368:
                        resword = &wordlist[632];
                        goto compare;
                      case 4378:
                        resword = &wordlist[633];
                        goto compare;
                      case 4380:
                        resword = &wordlist[634];
                        goto compare;
                      case 4383:
                        resword = &wordlist[635];
                        goto compare;
                      case 4385:
                        resword = &wordlist[636];
                        goto compare;
                      case 4398:
                        resword = &wordlist[637];
                        goto compare;
                      case 4401:
                        resword = &wordlist[638];
                        goto compare;
                      case 4419:
                        resword = &wordlist[639];
                        goto compare;
                      case 4422:
                        resword = &wordlist[640];
                        goto compare;
                      case 4428:
                        resword = &wordlist[641];
                        goto compare;
                      case 4432:
                        resword = &wordlist[642];
                        goto compare;
                      case 4437:
                        resword = &wordlist[643];
                        goto compare;
                      case 4446:
                        resword = &wordlist[644];
                        goto compare;
                      case 4448:
                        resword = &wordlist[645];
                        goto compare;
                      case 4450:
                        resword = &wordlist[646];
                        goto compare;
                      case 4453:
                        resword = &wordlist[647];
                        goto compare;
                      case 4464:
                        resword = &wordlist[648];
                        goto compare;
                      case 4467:
                        resword = &wordlist[649];
                        goto compare;
                      case 4477:
                        resword = &wordlist[650];
                        goto compare;
                      case 4478:
                        resword = &wordlist[651];
                        goto compare;
                      case 4482:
                        resword = &wordlist[652];
                        goto compare;
                      case 4505:
                        resword = &wordlist[653];
                        goto compare;
                      case 4517:
                        resword = &wordlist[654];
                        goto compare;
                      case 4536:
                        resword = &wordlist[655];
                        goto compare;
                      case 4542:
                        resword = &wordlist[656];
                        goto compare;
                      case 4543:
                        resword = &wordlist[657];
                        goto compare;
                      case 4544:
                        resword = &wordlist[658];
                        goto compare;
                      case 4554:
                        resword = &wordlist[659];
                        goto compare;
                      case 4555:
                        resword = &wordlist[660];
                        goto compare;
                      case 4559:
                        resword = &wordlist[661];
                        goto compare;
                      case 4560:
                        resword = &wordlist[662];
                        goto compare;
                      case 4564:
                        resword = &wordlist[663];
                        goto compare;
                      case 4568:
                        resword = &wordlist[664];
                        goto compare;
                      case 4569:
                        resword = &wordlist[665];
                        goto compare;
                      case 4576:
                        resword = &wordlist[666];
                        goto compare;
                      case 4585:
                        resword = &wordlist[667];
                        goto compare;
                      case 4587:
                        resword = &wordlist[668];
                        goto compare;
                      case 4593:
                        resword = &wordlist[669];
                        goto compare;
                      case 4610:
                        resword = &wordlist[670];
                        goto compare;
                      case 4620:
                        resword = &wordlist[671];
                        goto compare;
                      case 4622:
                        resword = &wordlist[672];
                        goto compare;
                      case 4624:
                        resword = &wordlist[673];
                        goto compare;
                      case 4630:
                        resword = &wordlist[674];
                        goto compare;
                      case 4636:
                        resword = &wordlist[675];
                        goto compare;
                      case 4641:
                        resword = &wordlist[676];
                        goto compare;
                      case 4644:
                        resword = &wordlist[677];
                        goto compare;
                      case 4645:
                        resword = &wordlist[678];
                        goto compare;
                      case 4649:
                        resword = &wordlist[679];
                        goto compare;
                      case 4651:
                        resword = &wordlist[680];
                        goto compare;
                      case 4657:
                        resword = &wordlist[681];
                        goto compare;
                      case 4660:
                        resword = &wordlist[682];
                        goto compare;
                      case 4664:
                        resword = &wordlist[683];
                        goto compare;
                      case 4665:
                        resword = &wordlist[684];
                        goto compare;
                      case 4666:
                        resword = &wordlist[685];
                        goto compare;
                      case 4677:
                        resword = &wordlist[686];
                        goto compare;
                      case 4681:
                        resword = &wordlist[687];
                        goto compare;
                      case 4683:
                        resword = &wordlist[688];
                        goto compare;
                      case 4687:
                        resword = &wordlist[689];
                        goto compare;
                      case 4694:
                        resword = &wordlist[690];
                        goto compare;
                      case 4706:
                        resword = &wordlist[691];
                        goto compare;
                      case 4711:
                        resword = &wordlist[692];
                        goto compare;
                      case 4732:
                        resword = &wordlist[693];
                        goto compare;
                      case 4742:
                        resword = &wordlist[694];
                        goto compare;
                      case 4743:
                        resword = &wordlist[695];
                        goto compare;
                      case 4751:
                        resword = &wordlist[696];
                        goto compare;
                      case 4762:
                        resword = &wordlist[697];
                        goto compare;
                      case 4763:
                        resword = &wordlist[698];
                        goto compare;
                      case 4791:
                        resword = &wordlist[699];
                        goto compare;
                      case 4801:
                        resword = &wordlist[700];
                        goto compare;
                      case 4806:
                        resword = &wordlist[701];
                        goto compare;
                      case 4807:
                        resword = &wordlist[702];
                        goto compare;
                      case 4809:
                        resword = &wordlist[703];
                        goto compare;
                      case 4811:
                        resword = &wordlist[704];
                        goto compare;
                      case 4822:
                        resword = &wordlist[705];
                        goto compare;
                      case 4831:
                        resword = &wordlist[706];
                        goto compare;
                      case 4832:
                        resword = &wordlist[707];
                        goto compare;
                      case 4840:
                        resword = &wordlist[708];
                        goto compare;
                      case 4841:
                        resword = &wordlist[709];
                        goto compare;
                      case 4843:
                        resword = &wordlist[710];
                        goto compare;
                      case 4846:
                        resword = &wordlist[711];
                        goto compare;
                      case 4851:
                        resword = &wordlist[712];
                        goto compare;
                      case 4853:
                        resword = &wordlist[713];
                        goto compare;
                      case 4860:
                        resword = &wordlist[714];
                        goto compare;
                      case 4861:
                        resword = &wordlist[715];
                        goto compare;
                      case 4865:
                        resword = &wordlist[716];
                        goto compare;
                      case 4873:
                        resword = &wordlist[717];
                        goto compare;
                      case 4879:
                        resword = &wordlist[718];
                        goto compare;
                      case 4884:
                        resword = &wordlist[719];
                        goto compare;
                      case 4896:
                        resword = &wordlist[720];
                        goto compare;
                      case 4920:
                        resword = &wordlist[721];
                        goto compare;
                      case 4939:
                        resword = &wordlist[722];
                        goto compare;
                      case 4949:
                        resword = &wordlist[723];
                        goto compare;
                      case 4950:
                        resword = &wordlist[724];
                        goto compare;
                      case 4955:
                        resword = &wordlist[725];
                        goto compare;
                      case 4960:
                        resword = &wordlist[726];
                        goto compare;
                      case 4964:
                        resword = &wordlist[727];
                        goto compare;
                      case 4976:
                        resword = &wordlist[728];
                        goto compare;
                      case 4980:
                        resword = &wordlist[729];
                        goto compare;
                      case 4992:
                        resword = &wordlist[730];
                        goto compare;
                      case 5015:
                        resword = &wordlist[731];
                        goto compare;
                      case 5028:
                        resword = &wordlist[732];
                        goto compare;
                      case 5052:
                        resword = &wordlist[733];
                        goto compare;
                      case 5055:
                        resword = &wordlist[734];
                        goto compare;
                      case 5060:
                        resword = &wordlist[735];
                        goto compare;
                      case 5091:
                        resword = &wordlist[736];
                        goto compare;
                      case 5100:
                        resword = &wordlist[737];
                        goto compare;
                      case 5120:
                        resword = &wordlist[738];
                        goto compare;
                      case 5130:
                        resword = &wordlist[739];
                        goto compare;
                      case 5145:
                        resword = &wordlist[740];
                        goto compare;
                      case 5148:
                        resword = &wordlist[741];
                        goto compare;
                      case 5166:
                        resword = &wordlist[742];
                        goto compare;
                      case 5175:
                        resword = &wordlist[743];
                        goto compare;
                      case 5181:
                        resword = &wordlist[744];
                        goto compare;
                      case 5191:
                        resword = &wordlist[745];
                        goto compare;
                      case 5192:
                        resword = &wordlist[746];
                        goto compare;
                      case 5196:
                        resword = &wordlist[747];
                        goto compare;
                      case 5201:
                        resword = &wordlist[748];
                        goto compare;
                      case 5205:
                        resword = &wordlist[749];
                        goto compare;
                      case 5208:
                        resword = &wordlist[750];
                        goto compare;
                      case 5213:
                        resword = &wordlist[751];
                        goto compare;
                      case 5214:
                        resword = &wordlist[752];
                        goto compare;
                      case 5215:
                        resword = &wordlist[753];
                        goto compare;
                      case 5216:
                        resword = &wordlist[754];
                        goto compare;
                      case 5217:
                        resword = &wordlist[755];
                        goto compare;
                      case 5226:
                        resword = &wordlist[756];
                        goto compare;
                      case 5227:
                        resword = &wordlist[757];
                        goto compare;
                      case 5230:
                        resword = &wordlist[758];
                        goto compare;
                      case 5232:
                        resword = &wordlist[759];
                        goto compare;
                      case 5235:
                        resword = &wordlist[760];
                        goto compare;
                      case 5236:
                        resword = &wordlist[761];
                        goto compare;
                      case 5266:
                        resword = &wordlist[762];
                        goto compare;
                      case 5270:
                        resword = &wordlist[763];
                        goto compare;
                      case 5273:
                        resword = &wordlist[764];
                        goto compare;
                      case 5279:
                        resword = &wordlist[765];
                        goto compare;
                      case 5290:
                        resword = &wordlist[766];
                        goto compare;
                      case 5302:
                        resword = &wordlist[767];
                        goto compare;
                      case 5306:
                        resword = &wordlist[768];
                        goto compare;
                      case 5308:
                        resword = &wordlist[769];
                        goto compare;
                      case 5313:
                        resword = &wordlist[770];
                        goto compare;
                      case 5326:
                        resword = &wordlist[771];
                        goto compare;
                      case 5331:
                        resword = &wordlist[772];
                        goto compare;
                      case 5341:
                        resword = &wordlist[773];
                        goto compare;
                      case 5342:
                        resword = &wordlist[774];
                        goto compare;
                      case 5361:
                        resword = &wordlist[775];
                        goto compare;
                      case 5362:
                        resword = &wordlist[776];
                        goto compare;
                      case 5377:
                        resword = &wordlist[777];
                        goto compare;
                      case 5378:
                        resword = &wordlist[778];
                        goto compare;
                      case 5389:
                        resword = &wordlist[779];
                        goto compare;
                      case 5394:
                        resword = &wordlist[780];
                        goto compare;
                      case 5411:
                        resword = &wordlist[781];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 5532)
                    {
                      case 0:
                        resword = &wordlist[782];
                        goto compare;
                      case 10:
                        resword = &wordlist[783];
                        goto compare;
                      case 11:
                        resword = &wordlist[784];
                        goto compare;
                      case 19:
                        resword = &wordlist[785];
                        goto compare;
                      case 21:
                        resword = &wordlist[786];
                        goto compare;
                      case 44:
                        resword = &wordlist[787];
                        goto compare;
                      case 47:
                        resword = &wordlist[788];
                        goto compare;
                      case 49:
                        resword = &wordlist[789];
                        goto compare;
                      case 59:
                        resword = &wordlist[790];
                        goto compare;
                      case 65:
                        resword = &wordlist[791];
                        goto compare;
                      case 79:
                        resword = &wordlist[792];
                        goto compare;
                      case 102:
                        resword = &wordlist[793];
                        goto compare;
                      case 106:
                        resword = &wordlist[794];
                        goto compare;
                      case 110:
                        resword = &wordlist[795];
                        goto compare;
                      case 112:
                        resword = &wordlist[796];
                        goto compare;
                      case 126:
                        resword = &wordlist[797];
                        goto compare;
                      case 127:
                        resword = &wordlist[798];
                        goto compare;
                      case 133:
                        resword = &wordlist[799];
                        goto compare;
                      case 151:
                        resword = &wordlist[800];
                        goto compare;
                      case 158:
                        resword = &wordlist[801];
                        goto compare;
                      case 161:
                        resword = &wordlist[802];
                        goto compare;
                      case 168:
                        resword = &wordlist[803];
                        goto compare;
                      case 170:
                        resword = &wordlist[804];
                        goto compare;
                      case 181:
                        resword = &wordlist[805];
                        goto compare;
                      case 189:
                        resword = &wordlist[806];
                        goto compare;
                      case 221:
                        resword = &wordlist[807];
                        goto compare;
                      case 230:
                        resword = &wordlist[808];
                        goto compare;
                      case 241:
                        resword = &wordlist[809];
                        goto compare;
                      case 244:
                        resword = &wordlist[810];
                        goto compare;
                      case 247:
                        resword = &wordlist[811];
                        goto compare;
                      case 249:
                        resword = &wordlist[812];
                        goto compare;
                      case 257:
                        resword = &wordlist[813];
                        goto compare;
                      case 279:
                        resword = &wordlist[814];
                        goto compare;
                      case 287:
                        resword = &wordlist[815];
                        goto compare;
                      case 289:
                        resword = &wordlist[816];
                        goto compare;
                      case 300:
                        resword = &wordlist[817];
                        goto compare;
                      case 302:
                        resword = &wordlist[818];
                        goto compare;
                      case 316:
                        resword = &wordlist[819];
                        goto compare;
                      case 319:
                        resword = &wordlist[820];
                        goto compare;
                      case 339:
                        resword = &wordlist[821];
                        goto compare;
                      case 355:
                        resword = &wordlist[822];
                        goto compare;
                      case 372:
                        resword = &wordlist[823];
                        goto compare;
                      case 387:
                        resword = &wordlist[824];
                        goto compare;
                      case 400:
                        resword = &wordlist[825];
                        goto compare;
                      case 407:
                        resword = &wordlist[826];
                        goto compare;
                      case 415:
                        resword = &wordlist[827];
                        goto compare;
                      case 418:
                        resword = &wordlist[828];
                        goto compare;
                      case 421:
                        resword = &wordlist[829];
                        goto compare;
                      case 423:
                        resword = &wordlist[830];
                        goto compare;
                      case 425:
                        resword = &wordlist[831];
                        goto compare;
                      case 426:
                        resword = &wordlist[832];
                        goto compare;
                      case 435:
                        resword = &wordlist[833];
                        goto compare;
                      case 440:
                        resword = &wordlist[834];
                        goto compare;
                      case 447:
                        resword = &wordlist[835];
                        goto compare;
                      case 452:
                        resword = &wordlist[836];
                        goto compare;
                      case 459:
                        resword = &wordlist[837];
                        goto compare;
                      case 465:
                        resword = &wordlist[838];
                        goto compare;
                      case 479:
                        resword = &wordlist[839];
                        goto compare;
                      case 489:
                        resword = &wordlist[840];
                        goto compare;
                      case 490:
                        resword = &wordlist[841];
                        goto compare;
                      case 491:
                        resword = &wordlist[842];
                        goto compare;
                      case 494:
                        resword = &wordlist[843];
                        goto compare;
                      case 500:
                        resword = &wordlist[844];
                        goto compare;
                      case 501:
                        resword = &wordlist[845];
                        goto compare;
                      case 506:
                        resword = &wordlist[846];
                        goto compare;
                      case 511:
                        resword = &wordlist[847];
                        goto compare;
                      case 516:
                        resword = &wordlist[848];
                        goto compare;
                      case 526:
                        resword = &wordlist[849];
                        goto compare;
                      case 532:
                        resword = &wordlist[850];
                        goto compare;
                      case 545:
                        resword = &wordlist[851];
                        goto compare;
                      case 546:
                        resword = &wordlist[852];
                        goto compare;
                      case 552:
                        resword = &wordlist[853];
                        goto compare;
                      case 553:
                        resword = &wordlist[854];
                        goto compare;
                      case 554:
                        resword = &wordlist[855];
                        goto compare;
                      case 565:
                        resword = &wordlist[856];
                        goto compare;
                      case 568:
                        resword = &wordlist[857];
                        goto compare;
                      case 576:
                        resword = &wordlist[858];
                        goto compare;
                      case 577:
                        resword = &wordlist[859];
                        goto compare;
                      case 578:
                        resword = &wordlist[860];
                        goto compare;
                      case 579:
                        resword = &wordlist[861];
                        goto compare;
                      case 580:
                        resword = &wordlist[862];
                        goto compare;
                      case 587:
                        resword = &wordlist[863];
                        goto compare;
                      case 588:
                        resword = &wordlist[864];
                        goto compare;
                      case 597:
                        resword = &wordlist[865];
                        goto compare;
                      case 603:
                        resword = &wordlist[866];
                        goto compare;
                      case 611:
                        resword = &wordlist[867];
                        goto compare;
                      case 621:
                        resword = &wordlist[868];
                        goto compare;
                      case 642:
                        resword = &wordlist[869];
                        goto compare;
                      case 648:
                        resword = &wordlist[870];
                        goto compare;
                      case 653:
                        resword = &wordlist[871];
                        goto compare;
                      case 656:
                        resword = &wordlist[872];
                        goto compare;
                      case 662:
                        resword = &wordlist[873];
                        goto compare;
                      case 670:
                        resword = &wordlist[874];
                        goto compare;
                      case 676:
                        resword = &wordlist[875];
                        goto compare;
                      case 678:
                        resword = &wordlist[876];
                        goto compare;
                      case 681:
                        resword = &wordlist[877];
                        goto compare;
                      case 682:
                        resword = &wordlist[878];
                        goto compare;
                      case 684:
                        resword = &wordlist[879];
                        goto compare;
                      case 686:
                        resword = &wordlist[880];
                        goto compare;
                      case 701:
                        resword = &wordlist[881];
                        goto compare;
                      case 702:
                        resword = &wordlist[882];
                        goto compare;
                      case 704:
                        resword = &wordlist[883];
                        goto compare;
                      case 705:
                        resword = &wordlist[884];
                        goto compare;
                      case 711:
                        resword = &wordlist[885];
                        goto compare;
                      case 725:
                        resword = &wordlist[886];
                        goto compare;
                      case 731:
                        resword = &wordlist[887];
                        goto compare;
                      case 734:
                        resword = &wordlist[888];
                        goto compare;
                      case 738:
                        resword = &wordlist[889];
                        goto compare;
                      case 742:
                        resword = &wordlist[890];
                        goto compare;
                      case 746:
                        resword = &wordlist[891];
                        goto compare;
                      case 747:
                        resword = &wordlist[892];
                        goto compare;
                      case 753:
                        resword = &wordlist[893];
                        goto compare;
                      case 754:
                        resword = &wordlist[894];
                        goto compare;
                      case 759:
                        resword = &wordlist[895];
                        goto compare;
                      case 764:
                        resword = &wordlist[896];
                        goto compare;
                      case 766:
                        resword = &wordlist[897];
                        goto compare;
                      case 767:
                        resword = &wordlist[898];
                        goto compare;
                      case 770:
                        resword = &wordlist[899];
                        goto compare;
                      case 778:
                        resword = &wordlist[900];
                        goto compare;
                      case 779:
                        resword = &wordlist[901];
                        goto compare;
                      case 781:
                        resword = &wordlist[902];
                        goto compare;
                      case 787:
                        resword = &wordlist[903];
                        goto compare;
                      case 788:
                        resword = &wordlist[904];
                        goto compare;
                      case 793:
                        resword = &wordlist[905];
                        goto compare;
                      case 797:
                        resword = &wordlist[906];
                        goto compare;
                      case 798:
                        resword = &wordlist[907];
                        goto compare;
                      case 801:
                        resword = &wordlist[908];
                        goto compare;
                      case 805:
                        resword = &wordlist[909];
                        goto compare;
                      case 810:
                        resword = &wordlist[910];
                        goto compare;
                      case 814:
                        resword = &wordlist[911];
                        goto compare;
                      case 823:
                        resword = &wordlist[912];
                        goto compare;
                      case 827:
                        resword = &wordlist[913];
                        goto compare;
                      case 828:
                        resword = &wordlist[914];
                        goto compare;
                      case 848:
                        resword = &wordlist[915];
                        goto compare;
                      case 852:
                        resword = &wordlist[916];
                        goto compare;
                      case 856:
                        resword = &wordlist[917];
                        goto compare;
                      case 873:
                        resword = &wordlist[918];
                        goto compare;
                      case 875:
                        resword = &wordlist[919];
                        goto compare;
                      case 888:
                        resword = &wordlist[920];
                        goto compare;
                      case 924:
                        resword = &wordlist[921];
                        goto compare;
                      case 926:
                        resword = &wordlist[922];
                        goto compare;
                      case 934:
                        resword = &wordlist[923];
                        goto compare;
                      case 938:
                        resword = &wordlist[924];
                        goto compare;
                      case 939:
                        resword = &wordlist[925];
                        goto compare;
                      case 947:
                        resword = &wordlist[926];
                        goto compare;
                      case 950:
                        resword = &wordlist[927];
                        goto compare;
                      case 961:
                        resword = &wordlist[928];
                        goto compare;
                      case 964:
                        resword = &wordlist[929];
                        goto compare;
                      case 967:
                        resword = &wordlist[930];
                        goto compare;
                      case 977:
                        resword = &wordlist[931];
                        goto compare;
                      case 979:
                        resword = &wordlist[932];
                        goto compare;
                      case 991:
                        resword = &wordlist[933];
                        goto compare;
                      case 995:
                        resword = &wordlist[934];
                        goto compare;
                      case 996:
                        resword = &wordlist[935];
                        goto compare;
                      case 999:
                        resword = &wordlist[936];
                        goto compare;
                      case 1000:
                        resword = &wordlist[937];
                        goto compare;
                      case 1031:
                        resword = &wordlist[938];
                        goto compare;
                      case 1044:
                        resword = &wordlist[939];
                        goto compare;
                      case 1057:
                        resword = &wordlist[940];
                        goto compare;
                      case 1063:
                        resword = &wordlist[941];
                        goto compare;
                      case 1065:
                        resword = &wordlist[942];
                        goto compare;
                      case 1068:
                        resword = &wordlist[943];
                        goto compare;
                      case 1097:
                        resword = &wordlist[944];
                        goto compare;
                      case 1112:
                        resword = &wordlist[945];
                        goto compare;
                      case 1113:
                        resword = &wordlist[946];
                        goto compare;
                      case 1117:
                        resword = &wordlist[947];
                        goto compare;
                      case 1123:
                        resword = &wordlist[948];
                        goto compare;
                      case 1124:
                        resword = &wordlist[949];
                        goto compare;
                      case 1137:
                        resword = &wordlist[950];
                        goto compare;
                      case 1138:
                        resword = &wordlist[951];
                        goto compare;
                      case 1143:
                        resword = &wordlist[952];
                        goto compare;
                      case 1145:
                        resword = &wordlist[953];
                        goto compare;
                      case 1146:
                        resword = &wordlist[954];
                        goto compare;
                      case 1155:
                        resword = &wordlist[955];
                        goto compare;
                      case 1160:
                        resword = &wordlist[956];
                        goto compare;
                      case 1173:
                        resword = &wordlist[957];
                        goto compare;
                      case 1174:
                        resword = &wordlist[958];
                        goto compare;
                      case 1184:
                        resword = &wordlist[959];
                        goto compare;
                      case 1192:
                        resword = &wordlist[960];
                        goto compare;
                      case 1195:
                        resword = &wordlist[961];
                        goto compare;
                      case 1199:
                        resword = &wordlist[962];
                        goto compare;
                      case 1209:
                        resword = &wordlist[963];
                        goto compare;
                      case 1221:
                        resword = &wordlist[964];
                        goto compare;
                      case 1225:
                        resword = &wordlist[965];
                        goto compare;
                      case 1244:
                        resword = &wordlist[966];
                        goto compare;
                      case 1247:
                        resword = &wordlist[967];
                        goto compare;
                      case 1249:
                        resword = &wordlist[968];
                        goto compare;
                      case 1251:
                        resword = &wordlist[969];
                        goto compare;
                      case 1256:
                        resword = &wordlist[970];
                        goto compare;
                      case 1263:
                        resword = &wordlist[971];
                        goto compare;
                      case 1269:
                        resword = &wordlist[972];
                        goto compare;
                      case 1274:
                        resword = &wordlist[973];
                        goto compare;
                      case 1281:
                        resword = &wordlist[974];
                        goto compare;
                      case 1284:
                        resword = &wordlist[975];
                        goto compare;
                      case 1290:
                        resword = &wordlist[976];
                        goto compare;
                      case 1298:
                        resword = &wordlist[977];
                        goto compare;
                      case 1307:
                        resword = &wordlist[978];
                        goto compare;
                      case 1312:
                        resword = &wordlist[979];
                        goto compare;
                      case 1313:
                        resword = &wordlist[980];
                        goto compare;
                      case 1323:
                        resword = &wordlist[981];
                        goto compare;
                      case 1334:
                        resword = &wordlist[982];
                        goto compare;
                      case 1339:
                        resword = &wordlist[983];
                        goto compare;
                      case 1351:
                        resword = &wordlist[984];
                        goto compare;
                      case 1390:
                        resword = &wordlist[985];
                        goto compare;
                      case 1411:
                        resword = &wordlist[986];
                        goto compare;
                      case 1413:
                        resword = &wordlist[987];
                        goto compare;
                      case 1423:
                        resword = &wordlist[988];
                        goto compare;
                      case 1453:
                        resword = &wordlist[989];
                        goto compare;
                      case 1474:
                        resword = &wordlist[990];
                        goto compare;
                      case 1486:
                        resword = &wordlist[991];
                        goto compare;
                      case 1502:
                        resword = &wordlist[992];
                        goto compare;
                      case 1509:
                        resword = &wordlist[993];
                        goto compare;
                      case 1510:
                        resword = &wordlist[994];
                        goto compare;
                      case 1517:
                        resword = &wordlist[995];
                        goto compare;
                      case 1530:
                        resword = &wordlist[996];
                        goto compare;
                      case 1532:
                        resword = &wordlist[997];
                        goto compare;
                      case 1536:
                        resword = &wordlist[998];
                        goto compare;
                      case 1549:
                        resword = &wordlist[999];
                        goto compare;
                      case 1550:
                        resword = &wordlist[1000];
                        goto compare;
                      case 1562:
                        resword = &wordlist[1001];
                        goto compare;
                      case 1572:
                        resword = &wordlist[1002];
                        goto compare;
                      case 1574:
                        resword = &wordlist[1003];
                        goto compare;
                      case 1588:
                        resword = &wordlist[1004];
                        goto compare;
                      case 1589:
                        resword = &wordlist[1005];
                        goto compare;
                      case 1597:
                        resword = &wordlist[1006];
                        goto compare;
                      case 1606:
                        resword = &wordlist[1007];
                        goto compare;
                      case 1607:
                        resword = &wordlist[1008];
                        goto compare;
                      case 1610:
                        resword = &wordlist[1009];
                        goto compare;
                      case 1611:
                        resword = &wordlist[1010];
                        goto compare;
                      case 1632:
                        resword = &wordlist[1011];
                        goto compare;
                      case 1661:
                        resword = &wordlist[1012];
                        goto compare;
                      case 1700:
                        resword = &wordlist[1013];
                        goto compare;
                      case 1703:
                        resword = &wordlist[1014];
                        goto compare;
                      case 1705:
                        resword = &wordlist[1015];
                        goto compare;
                      case 1707:
                        resword = &wordlist[1016];
                        goto compare;
                      case 1725:
                        resword = &wordlist[1017];
                        goto compare;
                      case 1729:
                        resword = &wordlist[1018];
                        goto compare;
                      case 1735:
                        resword = &wordlist[1019];
                        goto compare;
                      case 1736:
                        resword = &wordlist[1020];
                        goto compare;
                      case 1765:
                        resword = &wordlist[1021];
                        goto compare;
                      case 1766:
                        resword = &wordlist[1022];
                        goto compare;
                      case 1775:
                        resword = &wordlist[1023];
                        goto compare;
                      case 1782:
                        resword = &wordlist[1024];
                        goto compare;
                      case 1783:
                        resword = &wordlist[1025];
                        goto compare;
                      case 1785:
                        resword = &wordlist[1026];
                        goto compare;
                      case 1805:
                        resword = &wordlist[1027];
                        goto compare;
                      case 1808:
                        resword = &wordlist[1028];
                        goto compare;
                      case 1809:
                        resword = &wordlist[1029];
                        goto compare;
                      case 1818:
                        resword = &wordlist[1030];
                        goto compare;
                      case 1827:
                        resword = &wordlist[1031];
                        goto compare;
                      case 1830:
                        resword = &wordlist[1032];
                        goto compare;
                      case 1838:
                        resword = &wordlist[1033];
                        goto compare;
                      case 1845:
                        resword = &wordlist[1034];
                        goto compare;
                      case 1848:
                        resword = &wordlist[1035];
                        goto compare;
                      case 1850:
                        resword = &wordlist[1036];
                        goto compare;
                      case 1853:
                        resword = &wordlist[1037];
                        goto compare;
                      case 1867:
                        resword = &wordlist[1038];
                        goto compare;
                      case 1874:
                        resword = &wordlist[1039];
                        goto compare;
                      case 1878:
                        resword = &wordlist[1040];
                        goto compare;
                      case 1882:
                        resword = &wordlist[1041];
                        goto compare;
                      case 1898:
                        resword = &wordlist[1042];
                        goto compare;
                      case 1899:
                        resword = &wordlist[1043];
                        goto compare;
                      case 1904:
                        resword = &wordlist[1044];
                        goto compare;
                      case 1914:
                        resword = &wordlist[1045];
                        goto compare;
                      case 1916:
                        resword = &wordlist[1046];
                        goto compare;
                      case 1927:
                        resword = &wordlist[1047];
                        goto compare;
                      case 1928:
                        resword = &wordlist[1048];
                        goto compare;
                      case 1940:
                        resword = &wordlist[1049];
                        goto compare;
                      case 1942:
                        resword = &wordlist[1050];
                        goto compare;
                      case 1943:
                        resword = &wordlist[1051];
                        goto compare;
                      case 1957:
                        resword = &wordlist[1052];
                        goto compare;
                      case 1961:
                        resword = &wordlist[1053];
                        goto compare;
                      case 1978:
                        resword = &wordlist[1054];
                        goto compare;
                      case 1983:
                        resword = &wordlist[1055];
                        goto compare;
                      case 2020:
                        resword = &wordlist[1056];
                        goto compare;
                      case 2035:
                        resword = &wordlist[1057];
                        goto compare;
                      case 2036:
                        resword = &wordlist[1058];
                        goto compare;
                      case 2065:
                        resword = &wordlist[1059];
                        goto compare;
                      case 2085:
                        resword = &wordlist[1060];
                        goto compare;
                      case 2087:
                        resword = &wordlist[1061];
                        goto compare;
                      case 2090:
                        resword = &wordlist[1062];
                        goto compare;
                      case 2097:
                        resword = &wordlist[1063];
                        goto compare;
                      case 2098:
                        resword = &wordlist[1064];
                        goto compare;
                      case 2112:
                        resword = &wordlist[1065];
                        goto compare;
                      case 2134:
                        resword = &wordlist[1066];
                        goto compare;
                      case 2155:
                        resword = &wordlist[1067];
                        goto compare;
                      case 2158:
                        resword = &wordlist[1068];
                        goto compare;
                      case 2168:
                        resword = &wordlist[1069];
                        goto compare;
                      case 2169:
                        resword = &wordlist[1070];
                        goto compare;
                      case 2172:
                        resword = &wordlist[1071];
                        goto compare;
                      case 2180:
                        resword = &wordlist[1072];
                        goto compare;
                      case 2184:
                        resword = &wordlist[1073];
                        goto compare;
                      case 2195:
                        resword = &wordlist[1074];
                        goto compare;
                      case 2202:
                        resword = &wordlist[1075];
                        goto compare;
                      case 2207:
                        resword = &wordlist[1076];
                        goto compare;
                      case 2213:
                        resword = &wordlist[1077];
                        goto compare;
                      case 2215:
                        resword = &wordlist[1078];
                        goto compare;
                      case 2231:
                        resword = &wordlist[1079];
                        goto compare;
                      case 2243:
                        resword = &wordlist[1080];
                        goto compare;
                      case 2247:
                        resword = &wordlist[1081];
                        goto compare;
                      case 2273:
                        resword = &wordlist[1082];
                        goto compare;
                      case 2278:
                        resword = &wordlist[1083];
                        goto compare;
                      case 2310:
                        resword = &wordlist[1084];
                        goto compare;
                      case 2337:
                        resword = &wordlist[1085];
                        goto compare;
                      case 2343:
                        resword = &wordlist[1086];
                        goto compare;
                      case 2349:
                        resword = &wordlist[1087];
                        goto compare;
                      case 2358:
                        resword = &wordlist[1088];
                        goto compare;
                      case 2370:
                        resword = &wordlist[1089];
                        goto compare;
                      case 2372:
                        resword = &wordlist[1090];
                        goto compare;
                      case 2383:
                        resword = &wordlist[1091];
                        goto compare;
                      case 2399:
                        resword = &wordlist[1092];
                        goto compare;
                      case 2403:
                        resword = &wordlist[1093];
                        goto compare;
                      case 2406:
                        resword = &wordlist[1094];
                        goto compare;
                      case 2424:
                        resword = &wordlist[1095];
                        goto compare;
                      case 2467:
                        resword = &wordlist[1096];
                        goto compare;
                      case 2476:
                        resword = &wordlist[1097];
                        goto compare;
                      case 2493:
                        resword = &wordlist[1098];
                        goto compare;
                      case 2506:
                        resword = &wordlist[1099];
                        goto compare;
                      case 2508:
                        resword = &wordlist[1100];
                        goto compare;
                      case 2512:
                        resword = &wordlist[1101];
                        goto compare;
                      case 2530:
                        resword = &wordlist[1102];
                        goto compare;
                      case 2540:
                        resword = &wordlist[1103];
                        goto compare;
                      case 2541:
                        resword = &wordlist[1104];
                        goto compare;
                      case 2543:
                        resword = &wordlist[1105];
                        goto compare;
                      case 2544:
                        resword = &wordlist[1106];
                        goto compare;
                      case 2548:
                        resword = &wordlist[1107];
                        goto compare;
                      case 2564:
                        resword = &wordlist[1108];
                        goto compare;
                      case 2572:
                        resword = &wordlist[1109];
                        goto compare;
                      case 2577:
                        resword = &wordlist[1110];
                        goto compare;
                      case 2579:
                        resword = &wordlist[1111];
                        goto compare;
                      case 2587:
                        resword = &wordlist[1112];
                        goto compare;
                      case 2593:
                        resword = &wordlist[1113];
                        goto compare;
                      case 2594:
                        resword = &wordlist[1114];
                        goto compare;
                      case 2627:
                        resword = &wordlist[1115];
                        goto compare;
                      case 2644:
                        resword = &wordlist[1116];
                        goto compare;
                      case 2656:
                        resword = &wordlist[1117];
                        goto compare;
                      case 2661:
                        resword = &wordlist[1118];
                        goto compare;
                      case 2672:
                        resword = &wordlist[1119];
                        goto compare;
                      case 2679:
                        resword = &wordlist[1120];
                        goto compare;
                      case 2689:
                        resword = &wordlist[1121];
                        goto compare;
                      case 2701:
                        resword = &wordlist[1122];
                        goto compare;
                      case 2703:
                        resword = &wordlist[1123];
                        goto compare;
                      case 2730:
                        resword = &wordlist[1124];
                        goto compare;
                      case 2742:
                        resword = &wordlist[1125];
                        goto compare;
                      case 2752:
                        resword = &wordlist[1126];
                        goto compare;
                      case 2756:
                        resword = &wordlist[1127];
                        goto compare;
                      case 2767:
                        resword = &wordlist[1128];
                        goto compare;
                      case 2768:
                        resword = &wordlist[1129];
                        goto compare;
                      case 2774:
                        resword = &wordlist[1130];
                        goto compare;
                      case 2794:
                        resword = &wordlist[1131];
                        goto compare;
                      case 2818:
                        resword = &wordlist[1132];
                        goto compare;
                      case 2828:
                        resword = &wordlist[1133];
                        goto compare;
                      case 2852:
                        resword = &wordlist[1134];
                        goto compare;
                      case 2854:
                        resword = &wordlist[1135];
                        goto compare;
                      case 2863:
                        resword = &wordlist[1136];
                        goto compare;
                      case 2867:
                        resword = &wordlist[1137];
                        goto compare;
                      case 2868:
                        resword = &wordlist[1138];
                        goto compare;
                      case 2884:
                        resword = &wordlist[1139];
                        goto compare;
                      case 2888:
                        resword = &wordlist[1140];
                        goto compare;
                      case 2893:
                        resword = &wordlist[1141];
                        goto compare;
                      case 2902:
                        resword = &wordlist[1142];
                        goto compare;
                      case 2925:
                        resword = &wordlist[1143];
                        goto compare;
                      case 2933:
                        resword = &wordlist[1144];
                        goto compare;
                      case 2951:
                        resword = &wordlist[1145];
                        goto compare;
                      case 2967:
                        resword = &wordlist[1146];
                        goto compare;
                      case 2980:
                        resword = &wordlist[1147];
                        goto compare;
                      case 2982:
                        resword = &wordlist[1148];
                        goto compare;
                      case 2991:
                        resword = &wordlist[1149];
                        goto compare;
                      case 2993:
                        resword = &wordlist[1150];
                        goto compare;
                      case 3007:
                        resword = &wordlist[1151];
                        goto compare;
                      case 3008:
                        resword = &wordlist[1152];
                        goto compare;
                      case 3013:
                        resword = &wordlist[1153];
                        goto compare;
                      case 3019:
                        resword = &wordlist[1154];
                        goto compare;
                      case 3020:
                        resword = &wordlist[1155];
                        goto compare;
                      case 3022:
                        resword = &wordlist[1156];
                        goto compare;
                      case 3024:
                        resword = &wordlist[1157];
                        goto compare;
                      case 3036:
                        resword = &wordlist[1158];
                        goto compare;
                      case 3043:
                        resword = &wordlist[1159];
                        goto compare;
                      case 3045:
                        resword = &wordlist[1160];
                        goto compare;
                      case 3048:
                        resword = &wordlist[1161];
                        goto compare;
                      case 3050:
                        resword = &wordlist[1162];
                        goto compare;
                      case 3055:
                        resword = &wordlist[1163];
                        goto compare;
                      case 3059:
                        resword = &wordlist[1164];
                        goto compare;
                      case 3064:
                        resword = &wordlist[1165];
                        goto compare;
                      case 3069:
                        resword = &wordlist[1166];
                        goto compare;
                      case 3073:
                        resword = &wordlist[1167];
                        goto compare;
                      case 3074:
                        resword = &wordlist[1168];
                        goto compare;
                      case 3079:
                        resword = &wordlist[1169];
                        goto compare;
                      case 3084:
                        resword = &wordlist[1170];
                        goto compare;
                      case 3090:
                        resword = &wordlist[1171];
                        goto compare;
                      case 3093:
                        resword = &wordlist[1172];
                        goto compare;
                      case 3105:
                        resword = &wordlist[1173];
                        goto compare;
                      case 3106:
                        resword = &wordlist[1174];
                        goto compare;
                      case 3107:
                        resword = &wordlist[1175];
                        goto compare;
                      case 3109:
                        resword = &wordlist[1176];
                        goto compare;
                      case 3110:
                        resword = &wordlist[1177];
                        goto compare;
                      case 3111:
                        resword = &wordlist[1178];
                        goto compare;
                      case 3112:
                        resword = &wordlist[1179];
                        goto compare;
                      case 3113:
                        resword = &wordlist[1180];
                        goto compare;
                      case 3114:
                        resword = &wordlist[1181];
                        goto compare;
                      case 3134:
                        resword = &wordlist[1182];
                        goto compare;
                      case 3144:
                        resword = &wordlist[1183];
                        goto compare;
                      case 3153:
                        resword = &wordlist[1184];
                        goto compare;
                      case 3154:
                        resword = &wordlist[1185];
                        goto compare;
                      case 3155:
                        resword = &wordlist[1186];
                        goto compare;
                      case 3157:
                        resword = &wordlist[1187];
                        goto compare;
                      case 3159:
                        resword = &wordlist[1188];
                        goto compare;
                      case 3163:
                        resword = &wordlist[1189];
                        goto compare;
                      case 3167:
                        resword = &wordlist[1190];
                        goto compare;
                      case 3170:
                        resword = &wordlist[1191];
                        goto compare;
                      case 3176:
                        resword = &wordlist[1192];
                        goto compare;
                      case 3183:
                        resword = &wordlist[1193];
                        goto compare;
                      case 3185:
                        resword = &wordlist[1194];
                        goto compare;
                      case 3187:
                        resword = &wordlist[1195];
                        goto compare;
                      case 3191:
                        resword = &wordlist[1196];
                        goto compare;
                      case 3192:
                        resword = &wordlist[1197];
                        goto compare;
                      case 3195:
                        resword = &wordlist[1198];
                        goto compare;
                      case 3199:
                        resword = &wordlist[1199];
                        goto compare;
                      case 3204:
                        resword = &wordlist[1200];
                        goto compare;
                      case 3208:
                        resword = &wordlist[1201];
                        goto compare;
                      case 3217:
                        resword = &wordlist[1202];
                        goto compare;
                      case 3226:
                        resword = &wordlist[1203];
                        goto compare;
                      case 3228:
                        resword = &wordlist[1204];
                        goto compare;
                      case 3232:
                        resword = &wordlist[1205];
                        goto compare;
                      case 3233:
                        resword = &wordlist[1206];
                        goto compare;
                      case 3234:
                        resword = &wordlist[1207];
                        goto compare;
                      case 3238:
                        resword = &wordlist[1208];
                        goto compare;
                      case 3243:
                        resword = &wordlist[1209];
                        goto compare;
                      case 3244:
                        resword = &wordlist[1210];
                        goto compare;
                      case 3245:
                        resword = &wordlist[1211];
                        goto compare;
                      case 3247:
                        resword = &wordlist[1212];
                        goto compare;
                      case 3253:
                        resword = &wordlist[1213];
                        goto compare;
                      case 3257:
                        resword = &wordlist[1214];
                        goto compare;
                      case 3266:
                        resword = &wordlist[1215];
                        goto compare;
                      case 3278:
                        resword = &wordlist[1216];
                        goto compare;
                      case 3279:
                        resword = &wordlist[1217];
                        goto compare;
                      case 3284:
                        resword = &wordlist[1218];
                        goto compare;
                      case 3313:
                        resword = &wordlist[1219];
                        goto compare;
                      case 3328:
                        resword = &wordlist[1220];
                        goto compare;
                      case 3334:
                        resword = &wordlist[1221];
                        goto compare;
                      case 3339:
                        resword = &wordlist[1222];
                        goto compare;
                      case 3354:
                        resword = &wordlist[1223];
                        goto compare;
                      case 3371:
                        resword = &wordlist[1224];
                        goto compare;
                      case 3413:
                        resword = &wordlist[1225];
                        goto compare;
                      case 3434:
                        resword = &wordlist[1226];
                        goto compare;
                      case 3448:
                        resword = &wordlist[1227];
                        goto compare;
                      case 3452:
                        resword = &wordlist[1228];
                        goto compare;
                      case 3463:
                        resword = &wordlist[1229];
                        goto compare;
                      case 3465:
                        resword = &wordlist[1230];
                        goto compare;
                      case 3474:
                        resword = &wordlist[1231];
                        goto compare;
                      case 3489:
                        resword = &wordlist[1232];
                        goto compare;
                      case 3490:
                        resword = &wordlist[1233];
                        goto compare;
                      case 3494:
                        resword = &wordlist[1234];
                        goto compare;
                      case 3495:
                        resword = &wordlist[1235];
                        goto compare;
                      case 3511:
                        resword = &wordlist[1236];
                        goto compare;
                      case 3513:
                        resword = &wordlist[1237];
                        goto compare;
                      case 3518:
                        resword = &wordlist[1238];
                        goto compare;
                      case 3522:
                        resword = &wordlist[1239];
                        goto compare;
                      case 3524:
                        resword = &wordlist[1240];
                        goto compare;
                      case 3527:
                        resword = &wordlist[1241];
                        goto compare;
                      case 3541:
                        resword = &wordlist[1242];
                        goto compare;
                      case 3560:
                        resword = &wordlist[1243];
                        goto compare;
                      case 3563:
                        resword = &wordlist[1244];
                        goto compare;
                      case 3564:
                        resword = &wordlist[1245];
                        goto compare;
                      case 3583:
                        resword = &wordlist[1246];
                        goto compare;
                      case 3590:
                        resword = &wordlist[1247];
                        goto compare;
                      case 3594:
                        resword = &wordlist[1248];
                        goto compare;
                      case 3595:
                        resword = &wordlist[1249];
                        goto compare;
                      case 3623:
                        resword = &wordlist[1250];
                        goto compare;
                      case 3631:
                        resword = &wordlist[1251];
                        goto compare;
                      case 3646:
                        resword = &wordlist[1252];
                        goto compare;
                      case 3662:
                        resword = &wordlist[1253];
                        goto compare;
                      case 3664:
                        resword = &wordlist[1254];
                        goto compare;
                      case 3665:
                        resword = &wordlist[1255];
                        goto compare;
                      case 3685:
                        resword = &wordlist[1256];
                        goto compare;
                      case 3687:
                        resword = &wordlist[1257];
                        goto compare;
                      case 3689:
                        resword = &wordlist[1258];
                        goto compare;
                      case 3696:
                        resword = &wordlist[1259];
                        goto compare;
                      case 3720:
                        resword = &wordlist[1260];
                        goto compare;
                      case 3747:
                        resword = &wordlist[1261];
                        goto compare;
                      case 3754:
                        resword = &wordlist[1262];
                        goto compare;
                      case 3771:
                        resword = &wordlist[1263];
                        goto compare;
                      case 3772:
                        resword = &wordlist[1264];
                        goto compare;
                      case 3788:
                        resword = &wordlist[1265];
                        goto compare;
                      case 3799:
                        resword = &wordlist[1266];
                        goto compare;
                      case 3816:
                        resword = &wordlist[1267];
                        goto compare;
                      case 3833:
                        resword = &wordlist[1268];
                        goto compare;
                      case 3849:
                        resword = &wordlist[1269];
                        goto compare;
                      case 3853:
                        resword = &wordlist[1270];
                        goto compare;
                      case 3868:
                        resword = &wordlist[1271];
                        goto compare;
                      case 3870:
                        resword = &wordlist[1272];
                        goto compare;
                      case 3894:
                        resword = &wordlist[1273];
                        goto compare;
                      case 3895:
                        resword = &wordlist[1274];
                        goto compare;
                      case 3902:
                        resword = &wordlist[1275];
                        goto compare;
                      case 3905:
                        resword = &wordlist[1276];
                        goto compare;
                      case 3915:
                        resword = &wordlist[1277];
                        goto compare;
                      case 3924:
                        resword = &wordlist[1278];
                        goto compare;
                      case 3942:
                        resword = &wordlist[1279];
                        goto compare;
                      case 3946:
                        resword = &wordlist[1280];
                        goto compare;
                      case 3950:
                        resword = &wordlist[1281];
                        goto compare;
                      case 3961:
                        resword = &wordlist[1282];
                        goto compare;
                      case 3974:
                        resword = &wordlist[1283];
                        goto compare;
                      case 3983:
                        resword = &wordlist[1284];
                        goto compare;
                      case 3993:
                        resword = &wordlist[1285];
                        goto compare;
                      case 4004:
                        resword = &wordlist[1286];
                        goto compare;
                      case 4016:
                        resword = &wordlist[1287];
                        goto compare;
                      case 4024:
                        resword = &wordlist[1288];
                        goto compare;
                      case 4028:
                        resword = &wordlist[1289];
                        goto compare;
                      case 4030:
                        resword = &wordlist[1290];
                        goto compare;
                      case 4038:
                        resword = &wordlist[1291];
                        goto compare;
                      case 4040:
                        resword = &wordlist[1292];
                        goto compare;
                      case 4046:
                        resword = &wordlist[1293];
                        goto compare;
                      case 4058:
                        resword = &wordlist[1294];
                        goto compare;
                      case 4073:
                        resword = &wordlist[1295];
                        goto compare;
                      case 4078:
                        resword = &wordlist[1296];
                        goto compare;
                      case 4087:
                        resword = &wordlist[1297];
                        goto compare;
                      case 4106:
                        resword = &wordlist[1298];
                        goto compare;
                      case 4124:
                        resword = &wordlist[1299];
                        goto compare;
                      case 4139:
                        resword = &wordlist[1300];
                        goto compare;
                      case 4155:
                        resword = &wordlist[1301];
                        goto compare;
                      case 4172:
                        resword = &wordlist[1302];
                        goto compare;
                      case 4188:
                        resword = &wordlist[1303];
                        goto compare;
                      case 4192:
                        resword = &wordlist[1304];
                        goto compare;
                      case 4202:
                        resword = &wordlist[1305];
                        goto compare;
                      case 4205:
                        resword = &wordlist[1306];
                        goto compare;
                      case 4221:
                        resword = &wordlist[1307];
                        goto compare;
                      case 4226:
                        resword = &wordlist[1308];
                        goto compare;
                      case 4229:
                        resword = &wordlist[1309];
                        goto compare;
                      case 4249:
                        resword = &wordlist[1310];
                        goto compare;
                      case 4254:
                        resword = &wordlist[1311];
                        goto compare;
                      case 4271:
                        resword = &wordlist[1312];
                        goto compare;
                      case 4285:
                        resword = &wordlist[1313];
                        goto compare;
                      case 4301:
                        resword = &wordlist[1314];
                        goto compare;
                      case 4320:
                        resword = &wordlist[1315];
                        goto compare;
                      case 4324:
                        resword = &wordlist[1316];
                        goto compare;
                      case 4328:
                        resword = &wordlist[1317];
                        goto compare;
                      case 4330:
                        resword = &wordlist[1318];
                        goto compare;
                      case 4331:
                        resword = &wordlist[1319];
                        goto compare;
                      case 4332:
                        resword = &wordlist[1320];
                        goto compare;
                      case 4337:
                        resword = &wordlist[1321];
                        goto compare;
                      case 4366:
                        resword = &wordlist[1322];
                        goto compare;
                      case 4380:
                        resword = &wordlist[1323];
                        goto compare;
                      case 4431:
                        resword = &wordlist[1324];
                        goto compare;
                      case 4437:
                        resword = &wordlist[1325];
                        goto compare;
                      case 4479:
                        resword = &wordlist[1326];
                        goto compare;
                      case 4481:
                        resword = &wordlist[1327];
                        goto compare;
                      case 4487:
                        resword = &wordlist[1328];
                        goto compare;
                      case 4523:
                        resword = &wordlist[1329];
                        goto compare;
                      case 4534:
                        resword = &wordlist[1330];
                        goto compare;
                      case 4537:
                        resword = &wordlist[1331];
                        goto compare;
                      case 4562:
                        resword = &wordlist[1332];
                        goto compare;
                      case 4563:
                        resword = &wordlist[1333];
                        goto compare;
                      case 4589:
                        resword = &wordlist[1334];
                        goto compare;
                      case 4594:
                        resword = &wordlist[1335];
                        goto compare;
                      case 4596:
                        resword = &wordlist[1336];
                        goto compare;
                      case 4609:
                        resword = &wordlist[1337];
                        goto compare;
                      case 4611:
                        resword = &wordlist[1338];
                        goto compare;
                      case 4618:
                        resword = &wordlist[1339];
                        goto compare;
                      case 4630:
                        resword = &wordlist[1340];
                        goto compare;
                      case 4660:
                        resword = &wordlist[1341];
                        goto compare;
                      case 4661:
                        resword = &wordlist[1342];
                        goto compare;
                      case 4671:
                        resword = &wordlist[1343];
                        goto compare;
                      case 4691:
                        resword = &wordlist[1344];
                        goto compare;
                      case 4738:
                        resword = &wordlist[1345];
                        goto compare;
                      case 4749:
                        resword = &wordlist[1346];
                        goto compare;
                      case 4755:
                        resword = &wordlist[1347];
                        goto compare;
                      case 4759:
                        resword = &wordlist[1348];
                        goto compare;
                      case 4763:
                        resword = &wordlist[1349];
                        goto compare;
                      case 4766:
                        resword = &wordlist[1350];
                        goto compare;
                      case 4767:
                        resword = &wordlist[1351];
                        goto compare;
                      case 4774:
                        resword = &wordlist[1352];
                        goto compare;
                      case 4776:
                        resword = &wordlist[1353];
                        goto compare;
                      case 4778:
                        resword = &wordlist[1354];
                        goto compare;
                      case 4781:
                        resword = &wordlist[1355];
                        goto compare;
                      case 4793:
                        resword = &wordlist[1356];
                        goto compare;
                      case 4800:
                        resword = &wordlist[1357];
                        goto compare;
                      case 4801:
                        resword = &wordlist[1358];
                        goto compare;
                      case 4810:
                        resword = &wordlist[1359];
                        goto compare;
                      case 4814:
                        resword = &wordlist[1360];
                        goto compare;
                      case 4830:
                        resword = &wordlist[1361];
                        goto compare;
                      case 4832:
                        resword = &wordlist[1362];
                        goto compare;
                      case 4833:
                        resword = &wordlist[1363];
                        goto compare;
                      case 4845:
                        resword = &wordlist[1364];
                        goto compare;
                      case 4850:
                        resword = &wordlist[1365];
                        goto compare;
                      case 4864:
                        resword = &wordlist[1366];
                        goto compare;
                      case 4872:
                        resword = &wordlist[1367];
                        goto compare;
                      case 4879:
                        resword = &wordlist[1368];
                        goto compare;
                      case 4881:
                        resword = &wordlist[1369];
                        goto compare;
                      case 4883:
                        resword = &wordlist[1370];
                        goto compare;
                      case 4884:
                        resword = &wordlist[1371];
                        goto compare;
                      case 4888:
                        resword = &wordlist[1372];
                        goto compare;
                      case 4890:
                        resword = &wordlist[1373];
                        goto compare;
                      case 4899:
                        resword = &wordlist[1374];
                        goto compare;
                      case 4905:
                        resword = &wordlist[1375];
                        goto compare;
                      case 4909:
                        resword = &wordlist[1376];
                        goto compare;
                      case 4918:
                        resword = &wordlist[1377];
                        goto compare;
                      case 4920:
                        resword = &wordlist[1378];
                        goto compare;
                      case 4929:
                        resword = &wordlist[1379];
                        goto compare;
                      case 4933:
                        resword = &wordlist[1380];
                        goto compare;
                      case 4943:
                        resword = &wordlist[1381];
                        goto compare;
                      case 4948:
                        resword = &wordlist[1382];
                        goto compare;
                      case 4952:
                        resword = &wordlist[1383];
                        goto compare;
                      case 4968:
                        resword = &wordlist[1384];
                        goto compare;
                      case 4972:
                        resword = &wordlist[1385];
                        goto compare;
                      case 4977:
                        resword = &wordlist[1386];
                        goto compare;
                      case 4984:
                        resword = &wordlist[1387];
                        goto compare;
                      case 4986:
                        resword = &wordlist[1388];
                        goto compare;
                      case 5007:
                        resword = &wordlist[1389];
                        goto compare;
                      case 5030:
                        resword = &wordlist[1390];
                        goto compare;
                      case 5031:
                        resword = &wordlist[1391];
                        goto compare;
                      case 5033:
                        resword = &wordlist[1392];
                        goto compare;
                      case 5056:
                        resword = &wordlist[1393];
                        goto compare;
                      case 5061:
                        resword = &wordlist[1394];
                        goto compare;
                      case 5076:
                        resword = &wordlist[1395];
                        goto compare;
                      case 5079:
                        resword = &wordlist[1396];
                        goto compare;
                      case 5080:
                        resword = &wordlist[1397];
                        goto compare;
                      case 5083:
                        resword = &wordlist[1398];
                        goto compare;
                      case 5084:
                        resword = &wordlist[1399];
                        goto compare;
                      case 5106:
                        resword = &wordlist[1400];
                        goto compare;
                      case 5114:
                        resword = &wordlist[1401];
                        goto compare;
                      case 5121:
                        resword = &wordlist[1402];
                        goto compare;
                      case 5133:
                        resword = &wordlist[1403];
                        goto compare;
                      case 5137:
                        resword = &wordlist[1404];
                        goto compare;
                      case 5143:
                        resword = &wordlist[1405];
                        goto compare;
                      case 5144:
                        resword = &wordlist[1406];
                        goto compare;
                      case 5149:
                        resword = &wordlist[1407];
                        goto compare;
                      case 5150:
                        resword = &wordlist[1408];
                        goto compare;
                      case 5151:
                        resword = &wordlist[1409];
                        goto compare;
                      case 5152:
                        resword = &wordlist[1410];
                        goto compare;
                      case 5153:
                        resword = &wordlist[1411];
                        goto compare;
                      case 5155:
                        resword = &wordlist[1412];
                        goto compare;
                      case 5156:
                        resword = &wordlist[1413];
                        goto compare;
                      case 5157:
                        resword = &wordlist[1414];
                        goto compare;
                      case 5176:
                        resword = &wordlist[1415];
                        goto compare;
                      case 5187:
                        resword = &wordlist[1416];
                        goto compare;
                      case 5194:
                        resword = &wordlist[1417];
                        goto compare;
                      case 5202:
                        resword = &wordlist[1418];
                        goto compare;
                      case 5214:
                        resword = &wordlist[1419];
                        goto compare;
                      case 5223:
                        resword = &wordlist[1420];
                        goto compare;
                      case 5231:
                        resword = &wordlist[1421];
                        goto compare;
                      case 5242:
                        resword = &wordlist[1422];
                        goto compare;
                      case 5248:
                        resword = &wordlist[1423];
                        goto compare;
                      case 5252:
                        resword = &wordlist[1424];
                        goto compare;
                      case 5266:
                        resword = &wordlist[1425];
                        goto compare;
                      case 5267:
                        resword = &wordlist[1426];
                        goto compare;
                      case 5286:
                        resword = &wordlist[1427];
                        goto compare;
                      case 5315:
                        resword = &wordlist[1428];
                        goto compare;
                      case 5324:
                        resword = &wordlist[1429];
                        goto compare;
                      case 5338:
                        resword = &wordlist[1430];
                        goto compare;
                      case 5344:
                        resword = &wordlist[1431];
                        goto compare;
                      case 5346:
                        resword = &wordlist[1432];
                        goto compare;
                      case 5355:
                        resword = &wordlist[1433];
                        goto compare;
                      case 5366:
                        resword = &wordlist[1434];
                        goto compare;
                      case 5368:
                        resword = &wordlist[1435];
                        goto compare;
                      case 5374:
                        resword = &wordlist[1436];
                        goto compare;
                      case 5385:
                        resword = &wordlist[1437];
                        goto compare;
                      case 5390:
                        resword = &wordlist[1438];
                        goto compare;
                      case 5397:
                        resword = &wordlist[1439];
                        goto compare;
                      case 5399:
                        resword = &wordlist[1440];
                        goto compare;
                      case 5416:
                        resword = &wordlist[1441];
                        goto compare;
                      case 5419:
                        resword = &wordlist[1442];
                        goto compare;
                      case 5426:
                        resword = &wordlist[1443];
                        goto compare;
                      case 5436:
                        resword = &wordlist[1444];
                        goto compare;
                      case 5507:
                        resword = &wordlist[1445];
                        goto compare;
                      case 5509:
                        resword = &wordlist[1446];
                        goto compare;
                      case 5521:
                        resword = &wordlist[1447];
                        goto compare;
                      case 5529:
                        resword = &wordlist[1448];
                        goto compare;
                      case 5565:
                        resword = &wordlist[1449];
                        goto compare;
                      case 5568:
                        resword = &wordlist[1450];
                        goto compare;
                      case 5595:
                        resword = &wordlist[1451];
                        goto compare;
                      case 5596:
                        resword = &wordlist[1452];
                        goto compare;
                      case 5610:
                        resword = &wordlist[1453];
                        goto compare;
                      case 5613:
                        resword = &wordlist[1454];
                        goto compare;
                      case 5619:
                        resword = &wordlist[1455];
                        goto compare;
                      case 5628:
                        resword = &wordlist[1456];
                        goto compare;
                      case 5635:
                        resword = &wordlist[1457];
                        goto compare;
                      case 5638:
                        resword = &wordlist[1458];
                        goto compare;
                      case 5641:
                        resword = &wordlist[1459];
                        goto compare;
                      case 5653:
                        resword = &wordlist[1460];
                        goto compare;
                      case 5659:
                        resword = &wordlist[1461];
                        goto compare;
                      case 5664:
                        resword = &wordlist[1462];
                        goto compare;
                      case 5673:
                        resword = &wordlist[1463];
                        goto compare;
                      case 5689:
                        resword = &wordlist[1464];
                        goto compare;
                      case 5690:
                        resword = &wordlist[1465];
                        goto compare;
                      case 5693:
                        resword = &wordlist[1466];
                        goto compare;
                      case 5702:
                        resword = &wordlist[1467];
                        goto compare;
                      case 5703:
                        resword = &wordlist[1468];
                        goto compare;
                      case 5709:
                        resword = &wordlist[1469];
                        goto compare;
                      case 5720:
                        resword = &wordlist[1470];
                        goto compare;
                      case 5726:
                        resword = &wordlist[1471];
                        goto compare;
                      case 5734:
                        resword = &wordlist[1472];
                        goto compare;
                      case 5736:
                        resword = &wordlist[1473];
                        goto compare;
                      case 5747:
                        resword = &wordlist[1474];
                        goto compare;
                      case 5748:
                        resword = &wordlist[1475];
                        goto compare;
                      case 5753:
                        resword = &wordlist[1476];
                        goto compare;
                      case 5773:
                        resword = &wordlist[1477];
                        goto compare;
                      case 5807:
                        resword = &wordlist[1478];
                        goto compare;
                      case 5816:
                        resword = &wordlist[1479];
                        goto compare;
                      case 5818:
                        resword = &wordlist[1480];
                        goto compare;
                      case 5826:
                        resword = &wordlist[1481];
                        goto compare;
                      case 5836:
                        resword = &wordlist[1482];
                        goto compare;
                      case 5837:
                        resword = &wordlist[1483];
                        goto compare;
                      case 5849:
                        resword = &wordlist[1484];
                        goto compare;
                      case 5872:
                        resword = &wordlist[1485];
                        goto compare;
                      case 5876:
                        resword = &wordlist[1486];
                        goto compare;
                      case 5881:
                        resword = &wordlist[1487];
                        goto compare;
                      case 5919:
                        resword = &wordlist[1488];
                        goto compare;
                      case 5923:
                        resword = &wordlist[1489];
                        goto compare;
                      case 5928:
                        resword = &wordlist[1490];
                        goto compare;
                      case 5948:
                        resword = &wordlist[1491];
                        goto compare;
                      case 5964:
                        resword = &wordlist[1492];
                        goto compare;
                      case 5971:
                        resword = &wordlist[1493];
                        goto compare;
                      case 5972:
                        resword = &wordlist[1494];
                        goto compare;
                      case 5974:
                        resword = &wordlist[1495];
                        goto compare;
                      case 5975:
                        resword = &wordlist[1496];
                        goto compare;
                      case 5988:
                        resword = &wordlist[1497];
                        goto compare;
                      case 5991:
                        resword = &wordlist[1498];
                        goto compare;
                      case 5993:
                        resword = &wordlist[1499];
                        goto compare;
                      case 5996:
                        resword = &wordlist[1500];
                        goto compare;
                      case 5999:
                        resword = &wordlist[1501];
                        goto compare;
                      case 6003:
                        resword = &wordlist[1502];
                        goto compare;
                      case 6007:
                        resword = &wordlist[1503];
                        goto compare;
                      case 6033:
                        resword = &wordlist[1504];
                        goto compare;
                      case 6039:
                        resword = &wordlist[1505];
                        goto compare;
                      case 6045:
                        resword = &wordlist[1506];
                        goto compare;
                      case 6046:
                        resword = &wordlist[1507];
                        goto compare;
                      case 6050:
                        resword = &wordlist[1508];
                        goto compare;
                      case 6052:
                        resword = &wordlist[1509];
                        goto compare;
                      case 6062:
                        resword = &wordlist[1510];
                        goto compare;
                      case 6079:
                        resword = &wordlist[1511];
                        goto compare;
                      case 6081:
                        resword = &wordlist[1512];
                        goto compare;
                      case 6082:
                        resword = &wordlist[1513];
                        goto compare;
                      case 6085:
                        resword = &wordlist[1514];
                        goto compare;
                      case 6090:
                        resword = &wordlist[1515];
                        goto compare;
                      case 6091:
                        resword = &wordlist[1516];
                        goto compare;
                      case 6094:
                        resword = &wordlist[1517];
                        goto compare;
                      case 6101:
                        resword = &wordlist[1518];
                        goto compare;
                      case 6102:
                        resword = &wordlist[1519];
                        goto compare;
                      case 6109:
                        resword = &wordlist[1520];
                        goto compare;
                      case 6110:
                        resword = &wordlist[1521];
                        goto compare;
                      case 6125:
                        resword = &wordlist[1522];
                        goto compare;
                      case 6131:
                        resword = &wordlist[1523];
                        goto compare;
                      case 6141:
                        resword = &wordlist[1524];
                        goto compare;
                      case 6146:
                        resword = &wordlist[1525];
                        goto compare;
                      case 6171:
                        resword = &wordlist[1526];
                        goto compare;
                      case 6172:
                        resword = &wordlist[1527];
                        goto compare;
                      case 6174:
                        resword = &wordlist[1528];
                        goto compare;
                      case 6179:
                        resword = &wordlist[1529];
                        goto compare;
                      case 6183:
                        resword = &wordlist[1530];
                        goto compare;
                      case 6188:
                        resword = &wordlist[1531];
                        goto compare;
                      case 6202:
                        resword = &wordlist[1532];
                        goto compare;
                      case 6208:
                        resword = &wordlist[1533];
                        goto compare;
                      case 6211:
                        resword = &wordlist[1534];
                        goto compare;
                      case 6226:
                        resword = &wordlist[1535];
                        goto compare;
                      case 6245:
                        resword = &wordlist[1536];
                        goto compare;
                      case 6250:
                        resword = &wordlist[1537];
                        goto compare;
                      case 6262:
                        resword = &wordlist[1538];
                        goto compare;
                      case 6309:
                        resword = &wordlist[1539];
                        goto compare;
                      case 6313:
                        resword = &wordlist[1540];
                        goto compare;
                      case 6320:
                        resword = &wordlist[1541];
                        goto compare;
                      case 6323:
                        resword = &wordlist[1542];
                        goto compare;
                      case 6364:
                        resword = &wordlist[1543];
                        goto compare;
                      case 6371:
                        resword = &wordlist[1544];
                        goto compare;
                      case 6375:
                        resword = &wordlist[1545];
                        goto compare;
                      case 6381:
                        resword = &wordlist[1546];
                        goto compare;
                      case 6394:
                        resword = &wordlist[1547];
                        goto compare;
                      case 6395:
                        resword = &wordlist[1548];
                        goto compare;
                      case 6401:
                        resword = &wordlist[1549];
                        goto compare;
                      case 6402:
                        resword = &wordlist[1550];
                        goto compare;
                      case 6409:
                        resword = &wordlist[1551];
                        goto compare;
                      case 6423:
                        resword = &wordlist[1552];
                        goto compare;
                      case 6429:
                        resword = &wordlist[1553];
                        goto compare;
                      case 6444:
                        resword = &wordlist[1554];
                        goto compare;
                      case 6446:
                        resword = &wordlist[1555];
                        goto compare;
                      case 6453:
                        resword = &wordlist[1556];
                        goto compare;
                      case 6457:
                        resword = &wordlist[1557];
                        goto compare;
                      case 6467:
                        resword = &wordlist[1558];
                        goto compare;
                      case 6469:
                        resword = &wordlist[1559];
                        goto compare;
                      case 6472:
                        resword = &wordlist[1560];
                        goto compare;
                      case 6473:
                        resword = &wordlist[1561];
                        goto compare;
                      case 6504:
                        resword = &wordlist[1562];
                        goto compare;
                      case 6525:
                        resword = &wordlist[1563];
                        goto compare;
                    }
                }
            }
          else
            {
              if (key < 20309)
                {
                  switch (key - 12059)
                    {
                      case 0:
                        resword = &wordlist[1564];
                        goto compare;
                      case 13:
                        resword = &wordlist[1565];
                        goto compare;
                      case 24:
                        resword = &wordlist[1566];
                        goto compare;
                      case 44:
                        resword = &wordlist[1567];
                        goto compare;
                      case 47:
                        resword = &wordlist[1568];
                        goto compare;
                      case 62:
                        resword = &wordlist[1569];
                        goto compare;
                      case 67:
                        resword = &wordlist[1570];
                        goto compare;
                      case 78:
                        resword = &wordlist[1571];
                        goto compare;
                      case 119:
                        resword = &wordlist[1572];
                        goto compare;
                      case 121:
                        resword = &wordlist[1573];
                        goto compare;
                      case 132:
                        resword = &wordlist[1574];
                        goto compare;
                      case 145:
                        resword = &wordlist[1575];
                        goto compare;
                      case 180:
                        resword = &wordlist[1576];
                        goto compare;
                      case 184:
                        resword = &wordlist[1577];
                        goto compare;
                      case 187:
                        resword = &wordlist[1578];
                        goto compare;
                      case 203:
                        resword = &wordlist[1579];
                        goto compare;
                      case 209:
                        resword = &wordlist[1580];
                        goto compare;
                      case 219:
                        resword = &wordlist[1581];
                        goto compare;
                      case 221:
                        resword = &wordlist[1582];
                        goto compare;
                      case 229:
                        resword = &wordlist[1583];
                        goto compare;
                      case 240:
                        resword = &wordlist[1584];
                        goto compare;
                      case 259:
                        resword = &wordlist[1585];
                        goto compare;
                      case 262:
                        resword = &wordlist[1586];
                        goto compare;
                      case 293:
                        resword = &wordlist[1587];
                        goto compare;
                      case 313:
                        resword = &wordlist[1588];
                        goto compare;
                      case 318:
                        resword = &wordlist[1589];
                        goto compare;
                      case 323:
                        resword = &wordlist[1590];
                        goto compare;
                      case 325:
                        resword = &wordlist[1591];
                        goto compare;
                      case 333:
                        resword = &wordlist[1592];
                        goto compare;
                      case 342:
                        resword = &wordlist[1593];
                        goto compare;
                      case 343:
                        resword = &wordlist[1594];
                        goto compare;
                      case 347:
                        resword = &wordlist[1595];
                        goto compare;
                      case 360:
                        resword = &wordlist[1596];
                        goto compare;
                      case 362:
                        resword = &wordlist[1597];
                        goto compare;
                      case 365:
                        resword = &wordlist[1598];
                        goto compare;
                      case 371:
                        resword = &wordlist[1599];
                        goto compare;
                      case 380:
                        resword = &wordlist[1600];
                        goto compare;
                      case 381:
                        resword = &wordlist[1601];
                        goto compare;
                      case 384:
                        resword = &wordlist[1602];
                        goto compare;
                      case 391:
                        resword = &wordlist[1603];
                        goto compare;
                      case 399:
                        resword = &wordlist[1604];
                        goto compare;
                      case 412:
                        resword = &wordlist[1605];
                        goto compare;
                      case 426:
                        resword = &wordlist[1606];
                        goto compare;
                      case 427:
                        resword = &wordlist[1607];
                        goto compare;
                      case 430:
                        resword = &wordlist[1608];
                        goto compare;
                      case 431:
                        resword = &wordlist[1609];
                        goto compare;
                      case 446:
                        resword = &wordlist[1610];
                        goto compare;
                      case 450:
                        resword = &wordlist[1611];
                        goto compare;
                      case 455:
                        resword = &wordlist[1612];
                        goto compare;
                      case 460:
                        resword = &wordlist[1613];
                        goto compare;
                      case 462:
                        resword = &wordlist[1614];
                        goto compare;
                      case 467:
                        resword = &wordlist[1615];
                        goto compare;
                      case 511:
                        resword = &wordlist[1616];
                        goto compare;
                      case 513:
                        resword = &wordlist[1617];
                        goto compare;
                      case 520:
                        resword = &wordlist[1618];
                        goto compare;
                      case 540:
                        resword = &wordlist[1619];
                        goto compare;
                      case 554:
                        resword = &wordlist[1620];
                        goto compare;
                      case 572:
                        resword = &wordlist[1621];
                        goto compare;
                      case 574:
                        resword = &wordlist[1622];
                        goto compare;
                      case 577:
                        resword = &wordlist[1623];
                        goto compare;
                      case 590:
                        resword = &wordlist[1624];
                        goto compare;
                      case 595:
                        resword = &wordlist[1625];
                        goto compare;
                      case 599:
                        resword = &wordlist[1626];
                        goto compare;
                      case 606:
                        resword = &wordlist[1627];
                        goto compare;
                      case 616:
                        resword = &wordlist[1628];
                        goto compare;
                      case 625:
                        resword = &wordlist[1629];
                        goto compare;
                      case 629:
                        resword = &wordlist[1630];
                        goto compare;
                      case 631:
                        resword = &wordlist[1631];
                        goto compare;
                      case 637:
                        resword = &wordlist[1632];
                        goto compare;
                      case 641:
                        resword = &wordlist[1633];
                        goto compare;
                      case 643:
                        resword = &wordlist[1634];
                        goto compare;
                      case 650:
                        resword = &wordlist[1635];
                        goto compare;
                      case 657:
                        resword = &wordlist[1636];
                        goto compare;
                      case 660:
                        resword = &wordlist[1637];
                        goto compare;
                      case 667:
                        resword = &wordlist[1638];
                        goto compare;
                      case 668:
                        resword = &wordlist[1639];
                        goto compare;
                      case 687:
                        resword = &wordlist[1640];
                        goto compare;
                      case 698:
                        resword = &wordlist[1641];
                        goto compare;
                      case 722:
                        resword = &wordlist[1642];
                        goto compare;
                      case 723:
                        resword = &wordlist[1643];
                        goto compare;
                      case 733:
                        resword = &wordlist[1644];
                        goto compare;
                      case 734:
                        resword = &wordlist[1645];
                        goto compare;
                      case 743:
                        resword = &wordlist[1646];
                        goto compare;
                      case 745:
                        resword = &wordlist[1647];
                        goto compare;
                      case 774:
                        resword = &wordlist[1648];
                        goto compare;
                      case 776:
                        resword = &wordlist[1649];
                        goto compare;
                      case 779:
                        resword = &wordlist[1650];
                        goto compare;
                      case 788:
                        resword = &wordlist[1651];
                        goto compare;
                      case 808:
                        resword = &wordlist[1652];
                        goto compare;
                      case 809:
                        resword = &wordlist[1653];
                        goto compare;
                      case 817:
                        resword = &wordlist[1654];
                        goto compare;
                      case 819:
                        resword = &wordlist[1655];
                        goto compare;
                      case 822:
                        resword = &wordlist[1656];
                        goto compare;
                      case 830:
                        resword = &wordlist[1657];
                        goto compare;
                      case 885:
                        resword = &wordlist[1658];
                        goto compare;
                      case 905:
                        resword = &wordlist[1659];
                        goto compare;
                      case 947:
                        resword = &wordlist[1660];
                        goto compare;
                      case 952:
                        resword = &wordlist[1661];
                        goto compare;
                      case 967:
                        resword = &wordlist[1662];
                        goto compare;
                      case 991:
                        resword = &wordlist[1663];
                        goto compare;
                      case 995:
                        resword = &wordlist[1664];
                        goto compare;
                      case 999:
                        resword = &wordlist[1665];
                        goto compare;
                      case 1003:
                        resword = &wordlist[1666];
                        goto compare;
                      case 1005:
                        resword = &wordlist[1667];
                        goto compare;
                      case 1029:
                        resword = &wordlist[1668];
                        goto compare;
                      case 1036:
                        resword = &wordlist[1669];
                        goto compare;
                      case 1038:
                        resword = &wordlist[1670];
                        goto compare;
                      case 1042:
                        resword = &wordlist[1671];
                        goto compare;
                      case 1058:
                        resword = &wordlist[1672];
                        goto compare;
                      case 1062:
                        resword = &wordlist[1673];
                        goto compare;
                      case 1074:
                        resword = &wordlist[1674];
                        goto compare;
                      case 1076:
                        resword = &wordlist[1675];
                        goto compare;
                      case 1082:
                        resword = &wordlist[1676];
                        goto compare;
                      case 1099:
                        resword = &wordlist[1677];
                        goto compare;
                      case 1129:
                        resword = &wordlist[1678];
                        goto compare;
                      case 1151:
                        resword = &wordlist[1679];
                        goto compare;
                      case 1153:
                        resword = &wordlist[1680];
                        goto compare;
                      case 1154:
                        resword = &wordlist[1681];
                        goto compare;
                      case 1155:
                        resword = &wordlist[1682];
                        goto compare;
                      case 1159:
                        resword = &wordlist[1683];
                        goto compare;
                      case 1160:
                        resword = &wordlist[1684];
                        goto compare;
                      case 1192:
                        resword = &wordlist[1685];
                        goto compare;
                      case 1193:
                        resword = &wordlist[1686];
                        goto compare;
                      case 1196:
                        resword = &wordlist[1687];
                        goto compare;
                      case 1209:
                        resword = &wordlist[1688];
                        goto compare;
                      case 1216:
                        resword = &wordlist[1689];
                        goto compare;
                      case 1223:
                        resword = &wordlist[1690];
                        goto compare;
                      case 1227:
                        resword = &wordlist[1691];
                        goto compare;
                      case 1231:
                        resword = &wordlist[1692];
                        goto compare;
                      case 1245:
                        resword = &wordlist[1693];
                        goto compare;
                      case 1261:
                        resword = &wordlist[1694];
                        goto compare;
                      case 1271:
                        resword = &wordlist[1695];
                        goto compare;
                      case 1276:
                        resword = &wordlist[1696];
                        goto compare;
                      case 1284:
                        resword = &wordlist[1697];
                        goto compare;
                      case 1304:
                        resword = &wordlist[1698];
                        goto compare;
                      case 1313:
                        resword = &wordlist[1699];
                        goto compare;
                      case 1317:
                        resword = &wordlist[1700];
                        goto compare;
                      case 1332:
                        resword = &wordlist[1701];
                        goto compare;
                      case 1337:
                        resword = &wordlist[1702];
                        goto compare;
                      case 1341:
                        resword = &wordlist[1703];
                        goto compare;
                      case 1347:
                        resword = &wordlist[1704];
                        goto compare;
                      case 1358:
                        resword = &wordlist[1705];
                        goto compare;
                      case 1412:
                        resword = &wordlist[1706];
                        goto compare;
                      case 1419:
                        resword = &wordlist[1707];
                        goto compare;
                      case 1428:
                        resword = &wordlist[1708];
                        goto compare;
                      case 1434:
                        resword = &wordlist[1709];
                        goto compare;
                      case 1442:
                        resword = &wordlist[1710];
                        goto compare;
                      case 1446:
                        resword = &wordlist[1711];
                        goto compare;
                      case 1453:
                        resword = &wordlist[1712];
                        goto compare;
                      case 1454:
                        resword = &wordlist[1713];
                        goto compare;
                      case 1455:
                        resword = &wordlist[1714];
                        goto compare;
                      case 1468:
                        resword = &wordlist[1715];
                        goto compare;
                      case 1473:
                        resword = &wordlist[1716];
                        goto compare;
                      case 1484:
                        resword = &wordlist[1717];
                        goto compare;
                      case 1487:
                        resword = &wordlist[1718];
                        goto compare;
                      case 1494:
                        resword = &wordlist[1719];
                        goto compare;
                      case 1505:
                        resword = &wordlist[1720];
                        goto compare;
                      case 1516:
                        resword = &wordlist[1721];
                        goto compare;
                      case 1522:
                        resword = &wordlist[1722];
                        goto compare;
                      case 1548:
                        resword = &wordlist[1723];
                        goto compare;
                      case 1552:
                        resword = &wordlist[1724];
                        goto compare;
                      case 1561:
                        resword = &wordlist[1725];
                        goto compare;
                      case 1563:
                        resword = &wordlist[1726];
                        goto compare;
                      case 1587:
                        resword = &wordlist[1727];
                        goto compare;
                      case 1597:
                        resword = &wordlist[1728];
                        goto compare;
                      case 1599:
                        resword = &wordlist[1729];
                        goto compare;
                      case 1604:
                        resword = &wordlist[1730];
                        goto compare;
                      case 1605:
                        resword = &wordlist[1731];
                        goto compare;
                      case 1620:
                        resword = &wordlist[1732];
                        goto compare;
                      case 1628:
                        resword = &wordlist[1733];
                        goto compare;
                      case 1633:
                        resword = &wordlist[1734];
                        goto compare;
                      case 1640:
                        resword = &wordlist[1735];
                        goto compare;
                      case 1648:
                        resword = &wordlist[1736];
                        goto compare;
                      case 1666:
                        resword = &wordlist[1737];
                        goto compare;
                      case 1667:
                        resword = &wordlist[1738];
                        goto compare;
                      case 1681:
                        resword = &wordlist[1739];
                        goto compare;
                      case 1691:
                        resword = &wordlist[1740];
                        goto compare;
                      case 1695:
                        resword = &wordlist[1741];
                        goto compare;
                      case 1701:
                        resword = &wordlist[1742];
                        goto compare;
                      case 1702:
                        resword = &wordlist[1743];
                        goto compare;
                      case 1710:
                        resword = &wordlist[1744];
                        goto compare;
                      case 1716:
                        resword = &wordlist[1745];
                        goto compare;
                      case 1721:
                        resword = &wordlist[1746];
                        goto compare;
                      case 1723:
                        resword = &wordlist[1747];
                        goto compare;
                      case 1732:
                        resword = &wordlist[1748];
                        goto compare;
                      case 1758:
                        resword = &wordlist[1749];
                        goto compare;
                      case 1780:
                        resword = &wordlist[1750];
                        goto compare;
                      case 1791:
                        resword = &wordlist[1751];
                        goto compare;
                      case 1798:
                        resword = &wordlist[1752];
                        goto compare;
                      case 1803:
                        resword = &wordlist[1753];
                        goto compare;
                      case 1812:
                        resword = &wordlist[1754];
                        goto compare;
                      case 1820:
                        resword = &wordlist[1755];
                        goto compare;
                      case 1828:
                        resword = &wordlist[1756];
                        goto compare;
                      case 1835:
                        resword = &wordlist[1757];
                        goto compare;
                      case 1873:
                        resword = &wordlist[1758];
                        goto compare;
                      case 1909:
                        resword = &wordlist[1759];
                        goto compare;
                      case 1912:
                        resword = &wordlist[1760];
                        goto compare;
                      case 1919:
                        resword = &wordlist[1761];
                        goto compare;
                      case 1930:
                        resword = &wordlist[1762];
                        goto compare;
                      case 1938:
                        resword = &wordlist[1763];
                        goto compare;
                      case 1942:
                        resword = &wordlist[1764];
                        goto compare;
                      case 1946:
                        resword = &wordlist[1765];
                        goto compare;
                      case 1957:
                        resword = &wordlist[1766];
                        goto compare;
                      case 1959:
                        resword = &wordlist[1767];
                        goto compare;
                      case 1963:
                        resword = &wordlist[1768];
                        goto compare;
                      case 1964:
                        resword = &wordlist[1769];
                        goto compare;
                      case 1974:
                        resword = &wordlist[1770];
                        goto compare;
                      case 1977:
                        resword = &wordlist[1771];
                        goto compare;
                      case 1981:
                        resword = &wordlist[1772];
                        goto compare;
                      case 1982:
                        resword = &wordlist[1773];
                        goto compare;
                      case 1987:
                        resword = &wordlist[1774];
                        goto compare;
                      case 1993:
                        resword = &wordlist[1775];
                        goto compare;
                      case 1996:
                        resword = &wordlist[1776];
                        goto compare;
                      case 2007:
                        resword = &wordlist[1777];
                        goto compare;
                      case 2013:
                        resword = &wordlist[1778];
                        goto compare;
                      case 2023:
                        resword = &wordlist[1779];
                        goto compare;
                      case 2027:
                        resword = &wordlist[1780];
                        goto compare;
                      case 2038:
                        resword = &wordlist[1781];
                        goto compare;
                      case 2048:
                        resword = &wordlist[1782];
                        goto compare;
                      case 2066:
                        resword = &wordlist[1783];
                        goto compare;
                      case 2068:
                        resword = &wordlist[1784];
                        goto compare;
                      case 2070:
                        resword = &wordlist[1785];
                        goto compare;
                      case 2085:
                        resword = &wordlist[1786];
                        goto compare;
                      case 2110:
                        resword = &wordlist[1787];
                        goto compare;
                      case 2123:
                        resword = &wordlist[1788];
                        goto compare;
                      case 2124:
                        resword = &wordlist[1789];
                        goto compare;
                      case 2131:
                        resword = &wordlist[1790];
                        goto compare;
                      case 2157:
                        resword = &wordlist[1791];
                        goto compare;
                      case 2158:
                        resword = &wordlist[1792];
                        goto compare;
                      case 2159:
                        resword = &wordlist[1793];
                        goto compare;
                      case 2177:
                        resword = &wordlist[1794];
                        goto compare;
                      case 2183:
                        resword = &wordlist[1795];
                        goto compare;
                      case 2188:
                        resword = &wordlist[1796];
                        goto compare;
                      case 2190:
                        resword = &wordlist[1797];
                        goto compare;
                      case 2206:
                        resword = &wordlist[1798];
                        goto compare;
                      case 2214:
                        resword = &wordlist[1799];
                        goto compare;
                      case 2219:
                        resword = &wordlist[1800];
                        goto compare;
                      case 2230:
                        resword = &wordlist[1801];
                        goto compare;
                      case 2245:
                        resword = &wordlist[1802];
                        goto compare;
                      case 2255:
                        resword = &wordlist[1803];
                        goto compare;
                      case 2269:
                        resword = &wordlist[1804];
                        goto compare;
                      case 2275:
                        resword = &wordlist[1805];
                        goto compare;
                      case 2280:
                        resword = &wordlist[1806];
                        goto compare;
                      case 2281:
                        resword = &wordlist[1807];
                        goto compare;
                      case 2285:
                        resword = &wordlist[1808];
                        goto compare;
                      case 2286:
                        resword = &wordlist[1809];
                        goto compare;
                      case 2287:
                        resword = &wordlist[1810];
                        goto compare;
                      case 2291:
                        resword = &wordlist[1811];
                        goto compare;
                      case 2296:
                        resword = &wordlist[1812];
                        goto compare;
                      case 2300:
                        resword = &wordlist[1813];
                        goto compare;
                      case 2309:
                        resword = &wordlist[1814];
                        goto compare;
                      case 2319:
                        resword = &wordlist[1815];
                        goto compare;
                      case 2320:
                        resword = &wordlist[1816];
                        goto compare;
                      case 2344:
                        resword = &wordlist[1817];
                        goto compare;
                      case 2350:
                        resword = &wordlist[1818];
                        goto compare;
                      case 2354:
                        resword = &wordlist[1819];
                        goto compare;
                      case 2355:
                        resword = &wordlist[1820];
                        goto compare;
                      case 2356:
                        resword = &wordlist[1821];
                        goto compare;
                      case 2381:
                        resword = &wordlist[1822];
                        goto compare;
                      case 2391:
                        resword = &wordlist[1823];
                        goto compare;
                      case 2393:
                        resword = &wordlist[1824];
                        goto compare;
                      case 2401:
                        resword = &wordlist[1825];
                        goto compare;
                      case 2404:
                        resword = &wordlist[1826];
                        goto compare;
                      case 2406:
                        resword = &wordlist[1827];
                        goto compare;
                      case 2435:
                        resword = &wordlist[1828];
                        goto compare;
                      case 2473:
                        resword = &wordlist[1829];
                        goto compare;
                      case 2498:
                        resword = &wordlist[1830];
                        goto compare;
                      case 2514:
                        resword = &wordlist[1831];
                        goto compare;
                      case 2516:
                        resword = &wordlist[1832];
                        goto compare;
                      case 2525:
                        resword = &wordlist[1833];
                        goto compare;
                      case 2530:
                        resword = &wordlist[1834];
                        goto compare;
                      case 2545:
                        resword = &wordlist[1835];
                        goto compare;
                      case 2555:
                        resword = &wordlist[1836];
                        goto compare;
                      case 2560:
                        resword = &wordlist[1837];
                        goto compare;
                      case 2576:
                        resword = &wordlist[1838];
                        goto compare;
                      case 2577:
                        resword = &wordlist[1839];
                        goto compare;
                      case 2580:
                        resword = &wordlist[1840];
                        goto compare;
                      case 2599:
                        resword = &wordlist[1841];
                        goto compare;
                      case 2601:
                        resword = &wordlist[1842];
                        goto compare;
                      case 2605:
                        resword = &wordlist[1843];
                        goto compare;
                      case 2623:
                        resword = &wordlist[1844];
                        goto compare;
                      case 2637:
                        resword = &wordlist[1845];
                        goto compare;
                      case 2648:
                        resword = &wordlist[1846];
                        goto compare;
                      case 2683:
                        resword = &wordlist[1847];
                        goto compare;
                      case 2698:
                        resword = &wordlist[1848];
                        goto compare;
                      case 2701:
                        resword = &wordlist[1849];
                        goto compare;
                      case 2707:
                        resword = &wordlist[1850];
                        goto compare;
                      case 2712:
                        resword = &wordlist[1851];
                        goto compare;
                      case 2728:
                        resword = &wordlist[1852];
                        goto compare;
                      case 2735:
                        resword = &wordlist[1853];
                        goto compare;
                      case 2741:
                        resword = &wordlist[1854];
                        goto compare;
                      case 2743:
                        resword = &wordlist[1855];
                        goto compare;
                      case 2747:
                        resword = &wordlist[1856];
                        goto compare;
                      case 2756:
                        resword = &wordlist[1857];
                        goto compare;
                      case 2761:
                        resword = &wordlist[1858];
                        goto compare;
                      case 2764:
                        resword = &wordlist[1859];
                        goto compare;
                      case 2782:
                        resword = &wordlist[1860];
                        goto compare;
                      case 2793:
                        resword = &wordlist[1861];
                        goto compare;
                      case 2802:
                        resword = &wordlist[1862];
                        goto compare;
                      case 2810:
                        resword = &wordlist[1863];
                        goto compare;
                      case 2821:
                        resword = &wordlist[1864];
                        goto compare;
                      case 2822:
                        resword = &wordlist[1865];
                        goto compare;
                      case 2843:
                        resword = &wordlist[1866];
                        goto compare;
                      case 2854:
                        resword = &wordlist[1867];
                        goto compare;
                      case 2855:
                        resword = &wordlist[1868];
                        goto compare;
                      case 2858:
                        resword = &wordlist[1869];
                        goto compare;
                      case 2875:
                        resword = &wordlist[1870];
                        goto compare;
                      case 2877:
                        resword = &wordlist[1871];
                        goto compare;
                      case 2879:
                        resword = &wordlist[1872];
                        goto compare;
                      case 2883:
                        resword = &wordlist[1873];
                        goto compare;
                      case 2893:
                        resword = &wordlist[1874];
                        goto compare;
                      case 2897:
                        resword = &wordlist[1875];
                        goto compare;
                      case 2907:
                        resword = &wordlist[1876];
                        goto compare;
                      case 2916:
                        resword = &wordlist[1877];
                        goto compare;
                      case 2929:
                        resword = &wordlist[1878];
                        goto compare;
                      case 2932:
                        resword = &wordlist[1879];
                        goto compare;
                      case 2938:
                        resword = &wordlist[1880];
                        goto compare;
                      case 2939:
                        resword = &wordlist[1881];
                        goto compare;
                      case 2957:
                        resword = &wordlist[1882];
                        goto compare;
                      case 2977:
                        resword = &wordlist[1883];
                        goto compare;
                      case 2994:
                        resword = &wordlist[1884];
                        goto compare;
                      case 2995:
                        resword = &wordlist[1885];
                        goto compare;
                      case 3006:
                        resword = &wordlist[1886];
                        goto compare;
                      case 3010:
                        resword = &wordlist[1887];
                        goto compare;
                      case 3017:
                        resword = &wordlist[1888];
                        goto compare;
                      case 3034:
                        resword = &wordlist[1889];
                        goto compare;
                      case 3043:
                        resword = &wordlist[1890];
                        goto compare;
                      case 3049:
                        resword = &wordlist[1891];
                        goto compare;
                      case 3090:
                        resword = &wordlist[1892];
                        goto compare;
                      case 3093:
                        resword = &wordlist[1893];
                        goto compare;
                      case 3118:
                        resword = &wordlist[1894];
                        goto compare;
                      case 3120:
                        resword = &wordlist[1895];
                        goto compare;
                      case 3121:
                        resword = &wordlist[1896];
                        goto compare;
                      case 3132:
                        resword = &wordlist[1897];
                        goto compare;
                      case 3144:
                        resword = &wordlist[1898];
                        goto compare;
                      case 3146:
                        resword = &wordlist[1899];
                        goto compare;
                      case 3147:
                        resword = &wordlist[1900];
                        goto compare;
                      case 3151:
                        resword = &wordlist[1901];
                        goto compare;
                      case 3171:
                        resword = &wordlist[1902];
                        goto compare;
                      case 3172:
                        resword = &wordlist[1903];
                        goto compare;
                      case 3173:
                        resword = &wordlist[1904];
                        goto compare;
                      case 3176:
                        resword = &wordlist[1905];
                        goto compare;
                      case 3193:
                        resword = &wordlist[1906];
                        goto compare;
                      case 3201:
                        resword = &wordlist[1907];
                        goto compare;
                      case 3205:
                        resword = &wordlist[1908];
                        goto compare;
                      case 3246:
                        resword = &wordlist[1909];
                        goto compare;
                      case 3265:
                        resword = &wordlist[1910];
                        goto compare;
                      case 3268:
                        resword = &wordlist[1911];
                        goto compare;
                      case 3285:
                        resword = &wordlist[1912];
                        goto compare;
                      case 3293:
                        resword = &wordlist[1913];
                        goto compare;
                      case 3306:
                        resword = &wordlist[1914];
                        goto compare;
                      case 3307:
                        resword = &wordlist[1915];
                        goto compare;
                      case 3313:
                        resword = &wordlist[1916];
                        goto compare;
                      case 3317:
                        resword = &wordlist[1917];
                        goto compare;
                      case 3322:
                        resword = &wordlist[1918];
                        goto compare;
                      case 3331:
                        resword = &wordlist[1919];
                        goto compare;
                      case 3336:
                        resword = &wordlist[1920];
                        goto compare;
                      case 3345:
                        resword = &wordlist[1921];
                        goto compare;
                      case 3353:
                        resword = &wordlist[1922];
                        goto compare;
                      case 3359:
                        resword = &wordlist[1923];
                        goto compare;
                      case 3366:
                        resword = &wordlist[1924];
                        goto compare;
                      case 3403:
                        resword = &wordlist[1925];
                        goto compare;
                      case 3411:
                        resword = &wordlist[1926];
                        goto compare;
                      case 3417:
                        resword = &wordlist[1927];
                        goto compare;
                      case 3433:
                        resword = &wordlist[1928];
                        goto compare;
                      case 3438:
                        resword = &wordlist[1929];
                        goto compare;
                      case 3444:
                        resword = &wordlist[1930];
                        goto compare;
                      case 3471:
                        resword = &wordlist[1931];
                        goto compare;
                      case 3473:
                        resword = &wordlist[1932];
                        goto compare;
                      case 3482:
                        resword = &wordlist[1933];
                        goto compare;
                      case 3485:
                        resword = &wordlist[1934];
                        goto compare;
                      case 3491:
                        resword = &wordlist[1935];
                        goto compare;
                      case 3511:
                        resword = &wordlist[1936];
                        goto compare;
                      case 3516:
                        resword = &wordlist[1937];
                        goto compare;
                      case 3525:
                        resword = &wordlist[1938];
                        goto compare;
                      case 3533:
                        resword = &wordlist[1939];
                        goto compare;
                      case 3536:
                        resword = &wordlist[1940];
                        goto compare;
                      case 3537:
                        resword = &wordlist[1941];
                        goto compare;
                      case 3541:
                        resword = &wordlist[1942];
                        goto compare;
                      case 3557:
                        resword = &wordlist[1943];
                        goto compare;
                      case 3567:
                        resword = &wordlist[1944];
                        goto compare;
                      case 3585:
                        resword = &wordlist[1945];
                        goto compare;
                      case 3610:
                        resword = &wordlist[1946];
                        goto compare;
                      case 3615:
                        resword = &wordlist[1947];
                        goto compare;
                      case 3622:
                        resword = &wordlist[1948];
                        goto compare;
                      case 3639:
                        resword = &wordlist[1949];
                        goto compare;
                      case 3653:
                        resword = &wordlist[1950];
                        goto compare;
                      case 3663:
                        resword = &wordlist[1951];
                        goto compare;
                      case 3668:
                        resword = &wordlist[1952];
                        goto compare;
                      case 3688:
                        resword = &wordlist[1953];
                        goto compare;
                      case 3690:
                        resword = &wordlist[1954];
                        goto compare;
                      case 3701:
                        resword = &wordlist[1955];
                        goto compare;
                      case 3726:
                        resword = &wordlist[1956];
                        goto compare;
                      case 3731:
                        resword = &wordlist[1957];
                        goto compare;
                      case 3745:
                        resword = &wordlist[1958];
                        goto compare;
                      case 3750:
                        resword = &wordlist[1959];
                        goto compare;
                      case 3774:
                        resword = &wordlist[1960];
                        goto compare;
                      case 3789:
                        resword = &wordlist[1961];
                        goto compare;
                      case 3790:
                        resword = &wordlist[1962];
                        goto compare;
                      case 3795:
                        resword = &wordlist[1963];
                        goto compare;
                      case 3804:
                        resword = &wordlist[1964];
                        goto compare;
                      case 3807:
                        resword = &wordlist[1965];
                        goto compare;
                      case 3815:
                        resword = &wordlist[1966];
                        goto compare;
                      case 3826:
                        resword = &wordlist[1967];
                        goto compare;
                      case 3827:
                        resword = &wordlist[1968];
                        goto compare;
                      case 3828:
                        resword = &wordlist[1969];
                        goto compare;
                      case 3830:
                        resword = &wordlist[1970];
                        goto compare;
                      case 3863:
                        resword = &wordlist[1971];
                        goto compare;
                      case 3873:
                        resword = &wordlist[1972];
                        goto compare;
                      case 3881:
                        resword = &wordlist[1973];
                        goto compare;
                      case 3883:
                        resword = &wordlist[1974];
                        goto compare;
                      case 3894:
                        resword = &wordlist[1975];
                        goto compare;
                      case 3898:
                        resword = &wordlist[1976];
                        goto compare;
                      case 3907:
                        resword = &wordlist[1977];
                        goto compare;
                      case 3924:
                        resword = &wordlist[1978];
                        goto compare;
                      case 3932:
                        resword = &wordlist[1979];
                        goto compare;
                      case 3957:
                        resword = &wordlist[1980];
                        goto compare;
                      case 3998:
                        resword = &wordlist[1981];
                        goto compare;
                      case 4000:
                        resword = &wordlist[1982];
                        goto compare;
                      case 4001:
                        resword = &wordlist[1983];
                        goto compare;
                      case 4034:
                        resword = &wordlist[1984];
                        goto compare;
                      case 4048:
                        resword = &wordlist[1985];
                        goto compare;
                      case 4059:
                        resword = &wordlist[1986];
                        goto compare;
                      case 4060:
                        resword = &wordlist[1987];
                        goto compare;
                      case 4066:
                        resword = &wordlist[1988];
                        goto compare;
                      case 4085:
                        resword = &wordlist[1989];
                        goto compare;
                      case 4117:
                        resword = &wordlist[1990];
                        goto compare;
                      case 4123:
                        resword = &wordlist[1991];
                        goto compare;
                      case 4132:
                        resword = &wordlist[1992];
                        goto compare;
                      case 4136:
                        resword = &wordlist[1993];
                        goto compare;
                      case 4185:
                        resword = &wordlist[1994];
                        goto compare;
                      case 4216:
                        resword = &wordlist[1995];
                        goto compare;
                      case 4217:
                        resword = &wordlist[1996];
                        goto compare;
                      case 4226:
                        resword = &wordlist[1997];
                        goto compare;
                      case 4232:
                        resword = &wordlist[1998];
                        goto compare;
                      case 4234:
                        resword = &wordlist[1999];
                        goto compare;
                      case 4259:
                        resword = &wordlist[2000];
                        goto compare;
                      case 4263:
                        resword = &wordlist[2001];
                        goto compare;
                      case 4283:
                        resword = &wordlist[2002];
                        goto compare;
                      case 4293:
                        resword = &wordlist[2003];
                        goto compare;
                      case 4306:
                        resword = &wordlist[2004];
                        goto compare;
                      case 4312:
                        resword = &wordlist[2005];
                        goto compare;
                      case 4318:
                        resword = &wordlist[2006];
                        goto compare;
                      case 4387:
                        resword = &wordlist[2007];
                        goto compare;
                      case 4388:
                        resword = &wordlist[2008];
                        goto compare;
                      case 4394:
                        resword = &wordlist[2009];
                        goto compare;
                      case 4400:
                        resword = &wordlist[2010];
                        goto compare;
                      case 4403:
                        resword = &wordlist[2011];
                        goto compare;
                      case 4429:
                        resword = &wordlist[2012];
                        goto compare;
                      case 4436:
                        resword = &wordlist[2013];
                        goto compare;
                      case 4449:
                        resword = &wordlist[2014];
                        goto compare;
                      case 4456:
                        resword = &wordlist[2015];
                        goto compare;
                      case 4460:
                        resword = &wordlist[2016];
                        goto compare;
                      case 4462:
                        resword = &wordlist[2017];
                        goto compare;
                      case 4477:
                        resword = &wordlist[2018];
                        goto compare;
                      case 4481:
                        resword = &wordlist[2019];
                        goto compare;
                      case 4500:
                        resword = &wordlist[2020];
                        goto compare;
                      case 4502:
                        resword = &wordlist[2021];
                        goto compare;
                      case 4506:
                        resword = &wordlist[2022];
                        goto compare;
                      case 4523:
                        resword = &wordlist[2023];
                        goto compare;
                      case 4531:
                        resword = &wordlist[2024];
                        goto compare;
                      case 4532:
                        resword = &wordlist[2025];
                        goto compare;
                      case 4547:
                        resword = &wordlist[2026];
                        goto compare;
                      case 4552:
                        resword = &wordlist[2027];
                        goto compare;
                      case 4557:
                        resword = &wordlist[2028];
                        goto compare;
                      case 4583:
                        resword = &wordlist[2029];
                        goto compare;
                      case 4586:
                        resword = &wordlist[2030];
                        goto compare;
                      case 4603:
                        resword = &wordlist[2031];
                        goto compare;
                      case 4611:
                        resword = &wordlist[2032];
                        goto compare;
                      case 4622:
                        resword = &wordlist[2033];
                        goto compare;
                      case 4626:
                        resword = &wordlist[2034];
                        goto compare;
                      case 4630:
                        resword = &wordlist[2035];
                        goto compare;
                      case 4635:
                        resword = &wordlist[2036];
                        goto compare;
                      case 4646:
                        resword = &wordlist[2037];
                        goto compare;
                      case 4656:
                        resword = &wordlist[2038];
                        goto compare;
                      case 4661:
                        resword = &wordlist[2039];
                        goto compare;
                      case 4676:
                        resword = &wordlist[2040];
                        goto compare;
                      case 4684:
                        resword = &wordlist[2041];
                        goto compare;
                      case 4707:
                        resword = &wordlist[2042];
                        goto compare;
                      case 4717:
                        resword = &wordlist[2043];
                        goto compare;
                      case 4737:
                        resword = &wordlist[2044];
                        goto compare;
                      case 4739:
                        resword = &wordlist[2045];
                        goto compare;
                      case 4742:
                        resword = &wordlist[2046];
                        goto compare;
                      case 4743:
                        resword = &wordlist[2047];
                        goto compare;
                      case 4750:
                        resword = &wordlist[2048];
                        goto compare;
                      case 4757:
                        resword = &wordlist[2049];
                        goto compare;
                      case 4769:
                        resword = &wordlist[2050];
                        goto compare;
                      case 4776:
                        resword = &wordlist[2051];
                        goto compare;
                      case 4790:
                        resword = &wordlist[2052];
                        goto compare;
                      case 4798:
                        resword = &wordlist[2053];
                        goto compare;
                      case 4815:
                        resword = &wordlist[2054];
                        goto compare;
                      case 4831:
                        resword = &wordlist[2055];
                        goto compare;
                      case 4838:
                        resword = &wordlist[2056];
                        goto compare;
                      case 4858:
                        resword = &wordlist[2057];
                        goto compare;
                      case 4875:
                        resword = &wordlist[2058];
                        goto compare;
                      case 4876:
                        resword = &wordlist[2059];
                        goto compare;
                      case 4877:
                        resword = &wordlist[2060];
                        goto compare;
                      case 4883:
                        resword = &wordlist[2061];
                        goto compare;
                      case 4891:
                        resword = &wordlist[2062];
                        goto compare;
                      case 4892:
                        resword = &wordlist[2063];
                        goto compare;
                      case 4920:
                        resword = &wordlist[2064];
                        goto compare;
                      case 4944:
                        resword = &wordlist[2065];
                        goto compare;
                      case 4945:
                        resword = &wordlist[2066];
                        goto compare;
                      case 4946:
                        resword = &wordlist[2067];
                        goto compare;
                      case 4948:
                        resword = &wordlist[2068];
                        goto compare;
                      case 4964:
                        resword = &wordlist[2069];
                        goto compare;
                      case 4969:
                        resword = &wordlist[2070];
                        goto compare;
                      case 4970:
                        resword = &wordlist[2071];
                        goto compare;
                      case 4987:
                        resword = &wordlist[2072];
                        goto compare;
                      case 5009:
                        resword = &wordlist[2073];
                        goto compare;
                      case 5014:
                        resword = &wordlist[2074];
                        goto compare;
                      case 5026:
                        resword = &wordlist[2075];
                        goto compare;
                      case 5037:
                        resword = &wordlist[2076];
                        goto compare;
                      case 5057:
                        resword = &wordlist[2077];
                        goto compare;
                      case 5072:
                        resword = &wordlist[2078];
                        goto compare;
                      case 5092:
                        resword = &wordlist[2079];
                        goto compare;
                      case 5103:
                        resword = &wordlist[2080];
                        goto compare;
                      case 5106:
                        resword = &wordlist[2081];
                        goto compare;
                      case 5110:
                        resword = &wordlist[2082];
                        goto compare;
                      case 5193:
                        resword = &wordlist[2083];
                        goto compare;
                      case 5206:
                        resword = &wordlist[2084];
                        goto compare;
                      case 5263:
                        resword = &wordlist[2085];
                        goto compare;
                      case 5264:
                        resword = &wordlist[2086];
                        goto compare;
                      case 5267:
                        resword = &wordlist[2087];
                        goto compare;
                      case 5298:
                        resword = &wordlist[2088];
                        goto compare;
                      case 5332:
                        resword = &wordlist[2089];
                        goto compare;
                      case 5342:
                        resword = &wordlist[2090];
                        goto compare;
                      case 5347:
                        resword = &wordlist[2091];
                        goto compare;
                      case 5352:
                        resword = &wordlist[2092];
                        goto compare;
                      case 5355:
                        resword = &wordlist[2093];
                        goto compare;
                      case 5373:
                        resword = &wordlist[2094];
                        goto compare;
                      case 5380:
                        resword = &wordlist[2095];
                        goto compare;
                      case 5382:
                        resword = &wordlist[2096];
                        goto compare;
                      case 5400:
                        resword = &wordlist[2097];
                        goto compare;
                      case 5407:
                        resword = &wordlist[2098];
                        goto compare;
                      case 5422:
                        resword = &wordlist[2099];
                        goto compare;
                      case 5441:
                        resword = &wordlist[2100];
                        goto compare;
                      case 5466:
                        resword = &wordlist[2101];
                        goto compare;
                      case 5482:
                        resword = &wordlist[2102];
                        goto compare;
                      case 5486:
                        resword = &wordlist[2103];
                        goto compare;
                      case 5487:
                        resword = &wordlist[2104];
                        goto compare;
                      case 5494:
                        resword = &wordlist[2105];
                        goto compare;
                      case 5502:
                        resword = &wordlist[2106];
                        goto compare;
                      case 5514:
                        resword = &wordlist[2107];
                        goto compare;
                      case 5553:
                        resword = &wordlist[2108];
                        goto compare;
                      case 5569:
                        resword = &wordlist[2109];
                        goto compare;
                      case 5579:
                        resword = &wordlist[2110];
                        goto compare;
                      case 5598:
                        resword = &wordlist[2111];
                        goto compare;
                      case 5603:
                        resword = &wordlist[2112];
                        goto compare;
                      case 5607:
                        resword = &wordlist[2113];
                        goto compare;
                      case 5618:
                        resword = &wordlist[2114];
                        goto compare;
                      case 5632:
                        resword = &wordlist[2115];
                        goto compare;
                      case 5649:
                        resword = &wordlist[2116];
                        goto compare;
                      case 5669:
                        resword = &wordlist[2117];
                        goto compare;
                      case 5676:
                        resword = &wordlist[2118];
                        goto compare;
                      case 5682:
                        resword = &wordlist[2119];
                        goto compare;
                      case 5686:
                        resword = &wordlist[2120];
                        goto compare;
                      case 5698:
                        resword = &wordlist[2121];
                        goto compare;
                      case 5720:
                        resword = &wordlist[2122];
                        goto compare;
                      case 5730:
                        resword = &wordlist[2123];
                        goto compare;
                      case 5741:
                        resword = &wordlist[2124];
                        goto compare;
                      case 5758:
                        resword = &wordlist[2125];
                        goto compare;
                      case 5788:
                        resword = &wordlist[2126];
                        goto compare;
                      case 5793:
                        resword = &wordlist[2127];
                        goto compare;
                      case 5794:
                        resword = &wordlist[2128];
                        goto compare;
                      case 5801:
                        resword = &wordlist[2129];
                        goto compare;
                      case 5802:
                        resword = &wordlist[2130];
                        goto compare;
                      case 5808:
                        resword = &wordlist[2131];
                        goto compare;
                      case 5821:
                        resword = &wordlist[2132];
                        goto compare;
                      case 5823:
                        resword = &wordlist[2133];
                        goto compare;
                      case 5835:
                        resword = &wordlist[2134];
                        goto compare;
                      case 5836:
                        resword = &wordlist[2135];
                        goto compare;
                      case 5851:
                        resword = &wordlist[2136];
                        goto compare;
                      case 5865:
                        resword = &wordlist[2137];
                        goto compare;
                      case 5866:
                        resword = &wordlist[2138];
                        goto compare;
                      case 5894:
                        resword = &wordlist[2139];
                        goto compare;
                      case 5930:
                        resword = &wordlist[2140];
                        goto compare;
                      case 5939:
                        resword = &wordlist[2141];
                        goto compare;
                      case 5940:
                        resword = &wordlist[2142];
                        goto compare;
                      case 5954:
                        resword = &wordlist[2143];
                        goto compare;
                      case 5960:
                        resword = &wordlist[2144];
                        goto compare;
                      case 5968:
                        resword = &wordlist[2145];
                        goto compare;
                      case 6000:
                        resword = &wordlist[2146];
                        goto compare;
                      case 6007:
                        resword = &wordlist[2147];
                        goto compare;
                      case 6020:
                        resword = &wordlist[2148];
                        goto compare;
                      case 6025:
                        resword = &wordlist[2149];
                        goto compare;
                      case 6028:
                        resword = &wordlist[2150];
                        goto compare;
                      case 6044:
                        resword = &wordlist[2151];
                        goto compare;
                      case 6051:
                        resword = &wordlist[2152];
                        goto compare;
                      case 6069:
                        resword = &wordlist[2153];
                        goto compare;
                      case 6070:
                        resword = &wordlist[2154];
                        goto compare;
                      case 6074:
                        resword = &wordlist[2155];
                        goto compare;
                      case 6086:
                        resword = &wordlist[2156];
                        goto compare;
                      case 6087:
                        resword = &wordlist[2157];
                        goto compare;
                      case 6096:
                        resword = &wordlist[2158];
                        goto compare;
                      case 6100:
                        resword = &wordlist[2159];
                        goto compare;
                      case 6131:
                        resword = &wordlist[2160];
                        goto compare;
                      case 6141:
                        resword = &wordlist[2161];
                        goto compare;
                      case 6143:
                        resword = &wordlist[2162];
                        goto compare;
                      case 6155:
                        resword = &wordlist[2163];
                        goto compare;
                      case 6191:
                        resword = &wordlist[2164];
                        goto compare;
                      case 6195:
                        resword = &wordlist[2165];
                        goto compare;
                      case 6219:
                        resword = &wordlist[2166];
                        goto compare;
                      case 6231:
                        resword = &wordlist[2167];
                        goto compare;
                      case 6234:
                        resword = &wordlist[2168];
                        goto compare;
                      case 6235:
                        resword = &wordlist[2169];
                        goto compare;
                      case 6241:
                        resword = &wordlist[2170];
                        goto compare;
                      case 6242:
                        resword = &wordlist[2171];
                        goto compare;
                      case 6244:
                        resword = &wordlist[2172];
                        goto compare;
                      case 6254:
                        resword = &wordlist[2173];
                        goto compare;
                      case 6259:
                        resword = &wordlist[2174];
                        goto compare;
                      case 6263:
                        resword = &wordlist[2175];
                        goto compare;
                      case 6268:
                        resword = &wordlist[2176];
                        goto compare;
                      case 6270:
                        resword = &wordlist[2177];
                        goto compare;
                      case 6271:
                        resword = &wordlist[2178];
                        goto compare;
                      case 6293:
                        resword = &wordlist[2179];
                        goto compare;
                      case 6297:
                        resword = &wordlist[2180];
                        goto compare;
                      case 6300:
                        resword = &wordlist[2181];
                        goto compare;
                      case 6304:
                        resword = &wordlist[2182];
                        goto compare;
                      case 6315:
                        resword = &wordlist[2183];
                        goto compare;
                      case 6355:
                        resword = &wordlist[2184];
                        goto compare;
                      case 6362:
                        resword = &wordlist[2185];
                        goto compare;
                      case 6374:
                        resword = &wordlist[2186];
                        goto compare;
                      case 6391:
                        resword = &wordlist[2187];
                        goto compare;
                      case 6395:
                        resword = &wordlist[2188];
                        goto compare;
                      case 6418:
                        resword = &wordlist[2189];
                        goto compare;
                      case 6449:
                        resword = &wordlist[2190];
                        goto compare;
                      case 6454:
                        resword = &wordlist[2191];
                        goto compare;
                      case 6476:
                        resword = &wordlist[2192];
                        goto compare;
                      case 6477:
                        resword = &wordlist[2193];
                        goto compare;
                      case 6484:
                        resword = &wordlist[2194];
                        goto compare;
                      case 6489:
                        resword = &wordlist[2195];
                        goto compare;
                      case 6497:
                        resword = &wordlist[2196];
                        goto compare;
                      case 6525:
                        resword = &wordlist[2197];
                        goto compare;
                      case 6545:
                        resword = &wordlist[2198];
                        goto compare;
                      case 6558:
                        resword = &wordlist[2199];
                        goto compare;
                      case 6560:
                        resword = &wordlist[2200];
                        goto compare;
                      case 6569:
                        resword = &wordlist[2201];
                        goto compare;
                      case 6573:
                        resword = &wordlist[2202];
                        goto compare;
                      case 6583:
                        resword = &wordlist[2203];
                        goto compare;
                      case 6584:
                        resword = &wordlist[2204];
                        goto compare;
                      case 6588:
                        resword = &wordlist[2205];
                        goto compare;
                      case 6593:
                        resword = &wordlist[2206];
                        goto compare;
                      case 6598:
                        resword = &wordlist[2207];
                        goto compare;
                      case 6607:
                        resword = &wordlist[2208];
                        goto compare;
                      case 6610:
                        resword = &wordlist[2209];
                        goto compare;
                      case 6612:
                        resword = &wordlist[2210];
                        goto compare;
                      case 6615:
                        resword = &wordlist[2211];
                        goto compare;
                      case 6630:
                        resword = &wordlist[2212];
                        goto compare;
                      case 6635:
                        resword = &wordlist[2213];
                        goto compare;
                      case 6648:
                        resword = &wordlist[2214];
                        goto compare;
                      case 6678:
                        resword = &wordlist[2215];
                        goto compare;
                      case 6694:
                        resword = &wordlist[2216];
                        goto compare;
                      case 6702:
                        resword = &wordlist[2217];
                        goto compare;
                      case 6709:
                        resword = &wordlist[2218];
                        goto compare;
                      case 6713:
                        resword = &wordlist[2219];
                        goto compare;
                      case 6717:
                        resword = &wordlist[2220];
                        goto compare;
                      case 6723:
                        resword = &wordlist[2221];
                        goto compare;
                      case 6728:
                        resword = &wordlist[2222];
                        goto compare;
                      case 6734:
                        resword = &wordlist[2223];
                        goto compare;
                      case 6742:
                        resword = &wordlist[2224];
                        goto compare;
                      case 6743:
                        resword = &wordlist[2225];
                        goto compare;
                      case 6750:
                        resword = &wordlist[2226];
                        goto compare;
                      case 6755:
                        resword = &wordlist[2227];
                        goto compare;
                      case 6758:
                        resword = &wordlist[2228];
                        goto compare;
                      case 6763:
                        resword = &wordlist[2229];
                        goto compare;
                      case 6783:
                        resword = &wordlist[2230];
                        goto compare;
                      case 6806:
                        resword = &wordlist[2231];
                        goto compare;
                      case 6817:
                        resword = &wordlist[2232];
                        goto compare;
                      case 6868:
                        resword = &wordlist[2233];
                        goto compare;
                      case 6895:
                        resword = &wordlist[2234];
                        goto compare;
                      case 6899:
                        resword = &wordlist[2235];
                        goto compare;
                      case 6914:
                        resword = &wordlist[2236];
                        goto compare;
                      case 6916:
                        resword = &wordlist[2237];
                        goto compare;
                      case 6924:
                        resword = &wordlist[2238];
                        goto compare;
                      case 6925:
                        resword = &wordlist[2239];
                        goto compare;
                      case 6933:
                        resword = &wordlist[2240];
                        goto compare;
                      case 6940:
                        resword = &wordlist[2241];
                        goto compare;
                      case 6945:
                        resword = &wordlist[2242];
                        goto compare;
                      case 6956:
                        resword = &wordlist[2243];
                        goto compare;
                      case 6969:
                        resword = &wordlist[2244];
                        goto compare;
                      case 6970:
                        resword = &wordlist[2245];
                        goto compare;
                      case 7007:
                        resword = &wordlist[2246];
                        goto compare;
                      case 7010:
                        resword = &wordlist[2247];
                        goto compare;
                      case 7031:
                        resword = &wordlist[2248];
                        goto compare;
                      case 7034:
                        resword = &wordlist[2249];
                        goto compare;
                      case 7067:
                        resword = &wordlist[2250];
                        goto compare;
                      case 7083:
                        resword = &wordlist[2251];
                        goto compare;
                      case 7089:
                        resword = &wordlist[2252];
                        goto compare;
                      case 7116:
                        resword = &wordlist[2253];
                        goto compare;
                      case 7155:
                        resword = &wordlist[2254];
                        goto compare;
                      case 7175:
                        resword = &wordlist[2255];
                        goto compare;
                      case 7186:
                        resword = &wordlist[2256];
                        goto compare;
                      case 7187:
                        resword = &wordlist[2257];
                        goto compare;
                      case 7202:
                        resword = &wordlist[2258];
                        goto compare;
                      case 7203:
                        resword = &wordlist[2259];
                        goto compare;
                      case 7214:
                        resword = &wordlist[2260];
                        goto compare;
                      case 7219:
                        resword = &wordlist[2261];
                        goto compare;
                      case 7229:
                        resword = &wordlist[2262];
                        goto compare;
                      case 7240:
                        resword = &wordlist[2263];
                        goto compare;
                      case 7268:
                        resword = &wordlist[2264];
                        goto compare;
                      case 7298:
                        resword = &wordlist[2265];
                        goto compare;
                      case 7307:
                        resword = &wordlist[2266];
                        goto compare;
                      case 7359:
                        resword = &wordlist[2267];
                        goto compare;
                      case 7364:
                        resword = &wordlist[2268];
                        goto compare;
                      case 7375:
                        resword = &wordlist[2269];
                        goto compare;
                      case 7388:
                        resword = &wordlist[2270];
                        goto compare;
                      case 7397:
                        resword = &wordlist[2271];
                        goto compare;
                      case 7406:
                        resword = &wordlist[2272];
                        goto compare;
                      case 7410:
                        resword = &wordlist[2273];
                        goto compare;
                      case 7414:
                        resword = &wordlist[2274];
                        goto compare;
                      case 7418:
                        resword = &wordlist[2275];
                        goto compare;
                      case 7420:
                        resword = &wordlist[2276];
                        goto compare;
                      case 7421:
                        resword = &wordlist[2277];
                        goto compare;
                      case 7427:
                        resword = &wordlist[2278];
                        goto compare;
                      case 7434:
                        resword = &wordlist[2279];
                        goto compare;
                      case 7459:
                        resword = &wordlist[2280];
                        goto compare;
                      case 7479:
                        resword = &wordlist[2281];
                        goto compare;
                      case 7482:
                        resword = &wordlist[2282];
                        goto compare;
                      case 7490:
                        resword = &wordlist[2283];
                        goto compare;
                      case 7514:
                        resword = &wordlist[2284];
                        goto compare;
                      case 7534:
                        resword = &wordlist[2285];
                        goto compare;
                      case 7537:
                        resword = &wordlist[2286];
                        goto compare;
                      case 7542:
                        resword = &wordlist[2287];
                        goto compare;
                      case 7555:
                        resword = &wordlist[2288];
                        goto compare;
                      case 7574:
                        resword = &wordlist[2289];
                        goto compare;
                      case 7580:
                        resword = &wordlist[2290];
                        goto compare;
                      case 7591:
                        resword = &wordlist[2291];
                        goto compare;
                      case 7596:
                        resword = &wordlist[2292];
                        goto compare;
                      case 7609:
                        resword = &wordlist[2293];
                        goto compare;
                      case 7610:
                        resword = &wordlist[2294];
                        goto compare;
                      case 7646:
                        resword = &wordlist[2295];
                        goto compare;
                      case 7654:
                        resword = &wordlist[2296];
                        goto compare;
                      case 7668:
                        resword = &wordlist[2297];
                        goto compare;
                      case 7669:
                        resword = &wordlist[2298];
                        goto compare;
                      case 7696:
                        resword = &wordlist[2299];
                        goto compare;
                      case 7722:
                        resword = &wordlist[2300];
                        goto compare;
                      case 7728:
                        resword = &wordlist[2301];
                        goto compare;
                      case 7759:
                        resword = &wordlist[2302];
                        goto compare;
                      case 7776:
                        resword = &wordlist[2303];
                        goto compare;
                      case 7777:
                        resword = &wordlist[2304];
                        goto compare;
                      case 7788:
                        resword = &wordlist[2305];
                        goto compare;
                      case 7789:
                        resword = &wordlist[2306];
                        goto compare;
                      case 7830:
                        resword = &wordlist[2307];
                        goto compare;
                      case 7831:
                        resword = &wordlist[2308];
                        goto compare;
                      case 7836:
                        resword = &wordlist[2309];
                        goto compare;
                      case 7849:
                        resword = &wordlist[2310];
                        goto compare;
                      case 7852:
                        resword = &wordlist[2311];
                        goto compare;
                      case 7854:
                        resword = &wordlist[2312];
                        goto compare;
                      case 7868:
                        resword = &wordlist[2313];
                        goto compare;
                      case 7874:
                        resword = &wordlist[2314];
                        goto compare;
                      case 7894:
                        resword = &wordlist[2315];
                        goto compare;
                      case 7937:
                        resword = &wordlist[2316];
                        goto compare;
                      case 7941:
                        resword = &wordlist[2317];
                        goto compare;
                      case 7942:
                        resword = &wordlist[2318];
                        goto compare;
                      case 7945:
                        resword = &wordlist[2319];
                        goto compare;
                      case 7966:
                        resword = &wordlist[2320];
                        goto compare;
                      case 7993:
                        resword = &wordlist[2321];
                        goto compare;
                      case 8005:
                        resword = &wordlist[2322];
                        goto compare;
                      case 8013:
                        resword = &wordlist[2323];
                        goto compare;
                      case 8024:
                        resword = &wordlist[2324];
                        goto compare;
                      case 8028:
                        resword = &wordlist[2325];
                        goto compare;
                      case 8030:
                        resword = &wordlist[2326];
                        goto compare;
                      case 8035:
                        resword = &wordlist[2327];
                        goto compare;
                      case 8069:
                        resword = &wordlist[2328];
                        goto compare;
                      case 8080:
                        resword = &wordlist[2329];
                        goto compare;
                      case 8103:
                        resword = &wordlist[2330];
                        goto compare;
                      case 8118:
                        resword = &wordlist[2331];
                        goto compare;
                      case 8129:
                        resword = &wordlist[2332];
                        goto compare;
                      case 8134:
                        resword = &wordlist[2333];
                        goto compare;
                      case 8152:
                        resword = &wordlist[2334];
                        goto compare;
                      case 8168:
                        resword = &wordlist[2335];
                        goto compare;
                      case 8170:
                        resword = &wordlist[2336];
                        goto compare;
                      case 8171:
                        resword = &wordlist[2337];
                        goto compare;
                      case 8177:
                        resword = &wordlist[2338];
                        goto compare;
                      case 8188:
                        resword = &wordlist[2339];
                        goto compare;
                      case 8195:
                        resword = &wordlist[2340];
                        goto compare;
                      case 8199:
                        resword = &wordlist[2341];
                        goto compare;
                      case 8205:
                        resword = &wordlist[2342];
                        goto compare;
                      case 8219:
                        resword = &wordlist[2343];
                        goto compare;
                      case 8238:
                        resword = &wordlist[2344];
                        goto compare;
                      case 8248:
                        resword = &wordlist[2345];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 20309)
                    {
                      case 0:
                        resword = &wordlist[2346];
                        goto compare;
                      case 27:
                        resword = &wordlist[2347];
                        goto compare;
                      case 37:
                        resword = &wordlist[2348];
                        goto compare;
                      case 44:
                        resword = &wordlist[2349];
                        goto compare;
                      case 49:
                        resword = &wordlist[2350];
                        goto compare;
                      case 53:
                        resword = &wordlist[2351];
                        goto compare;
                      case 54:
                        resword = &wordlist[2352];
                        goto compare;
                      case 66:
                        resword = &wordlist[2353];
                        goto compare;
                      case 67:
                        resword = &wordlist[2354];
                        goto compare;
                      case 78:
                        resword = &wordlist[2355];
                        goto compare;
                      case 91:
                        resword = &wordlist[2356];
                        goto compare;
                      case 101:
                        resword = &wordlist[2357];
                        goto compare;
                      case 135:
                        resword = &wordlist[2358];
                        goto compare;
                      case 146:
                        resword = &wordlist[2359];
                        goto compare;
                      case 156:
                        resword = &wordlist[2360];
                        goto compare;
                      case 172:
                        resword = &wordlist[2361];
                        goto compare;
                      case 179:
                        resword = &wordlist[2362];
                        goto compare;
                      case 183:
                        resword = &wordlist[2363];
                        goto compare;
                      case 189:
                        resword = &wordlist[2364];
                        goto compare;
                      case 190:
                        resword = &wordlist[2365];
                        goto compare;
                      case 229:
                        resword = &wordlist[2366];
                        goto compare;
                      case 235:
                        resword = &wordlist[2367];
                        goto compare;
                      case 259:
                        resword = &wordlist[2368];
                        goto compare;
                      case 275:
                        resword = &wordlist[2369];
                        goto compare;
                      case 277:
                        resword = &wordlist[2370];
                        goto compare;
                      case 311:
                        resword = &wordlist[2371];
                        goto compare;
                      case 336:
                        resword = &wordlist[2372];
                        goto compare;
                      case 338:
                        resword = &wordlist[2373];
                        goto compare;
                      case 345:
                        resword = &wordlist[2374];
                        goto compare;
                      case 359:
                        resword = &wordlist[2375];
                        goto compare;
                      case 375:
                        resword = &wordlist[2376];
                        goto compare;
                      case 380:
                        resword = &wordlist[2377];
                        goto compare;
                      case 384:
                        resword = &wordlist[2378];
                        goto compare;
                      case 391:
                        resword = &wordlist[2379];
                        goto compare;
                      case 407:
                        resword = &wordlist[2380];
                        goto compare;
                      case 424:
                        resword = &wordlist[2381];
                        goto compare;
                      case 429:
                        resword = &wordlist[2382];
                        goto compare;
                      case 497:
                        resword = &wordlist[2383];
                        goto compare;
                      case 503:
                        resword = &wordlist[2384];
                        goto compare;
                      case 511:
                        resword = &wordlist[2385];
                        goto compare;
                      case 544:
                        resword = &wordlist[2386];
                        goto compare;
                      case 548:
                        resword = &wordlist[2387];
                        goto compare;
                      case 555:
                        resword = &wordlist[2388];
                        goto compare;
                      case 562:
                        resword = &wordlist[2389];
                        goto compare;
                      case 568:
                        resword = &wordlist[2390];
                        goto compare;
                      case 602:
                        resword = &wordlist[2391];
                        goto compare;
                      case 617:
                        resword = &wordlist[2392];
                        goto compare;
                      case 629:
                        resword = &wordlist[2393];
                        goto compare;
                      case 643:
                        resword = &wordlist[2394];
                        goto compare;
                      case 646:
                        resword = &wordlist[2395];
                        goto compare;
                      case 647:
                        resword = &wordlist[2396];
                        goto compare;
                      case 654:
                        resword = &wordlist[2397];
                        goto compare;
                      case 664:
                        resword = &wordlist[2398];
                        goto compare;
                      case 665:
                        resword = &wordlist[2399];
                        goto compare;
                      case 695:
                        resword = &wordlist[2400];
                        goto compare;
                      case 696:
                        resword = &wordlist[2401];
                        goto compare;
                      case 698:
                        resword = &wordlist[2402];
                        goto compare;
                      case 731:
                        resword = &wordlist[2403];
                        goto compare;
                      case 736:
                        resword = &wordlist[2404];
                        goto compare;
                      case 740:
                        resword = &wordlist[2405];
                        goto compare;
                      case 742:
                        resword = &wordlist[2406];
                        goto compare;
                      case 745:
                        resword = &wordlist[2407];
                        goto compare;
                      case 778:
                        resword = &wordlist[2408];
                        goto compare;
                      case 784:
                        resword = &wordlist[2409];
                        goto compare;
                      case 790:
                        resword = &wordlist[2410];
                        goto compare;
                      case 802:
                        resword = &wordlist[2411];
                        goto compare;
                      case 824:
                        resword = &wordlist[2412];
                        goto compare;
                      case 828:
                        resword = &wordlist[2413];
                        goto compare;
                      case 870:
                        resword = &wordlist[2414];
                        goto compare;
                      case 900:
                        resword = &wordlist[2415];
                        goto compare;
                      case 902:
                        resword = &wordlist[2416];
                        goto compare;
                      case 920:
                        resword = &wordlist[2417];
                        goto compare;
                      case 933:
                        resword = &wordlist[2418];
                        goto compare;
                      case 940:
                        resword = &wordlist[2419];
                        goto compare;
                      case 945:
                        resword = &wordlist[2420];
                        goto compare;
                      case 948:
                        resword = &wordlist[2421];
                        goto compare;
                      case 961:
                        resword = &wordlist[2422];
                        goto compare;
                      case 982:
                        resword = &wordlist[2423];
                        goto compare;
                      case 984:
                        resword = &wordlist[2424];
                        goto compare;
                      case 1010:
                        resword = &wordlist[2425];
                        goto compare;
                      case 1013:
                        resword = &wordlist[2426];
                        goto compare;
                      case 1055:
                        resword = &wordlist[2427];
                        goto compare;
                      case 1067:
                        resword = &wordlist[2428];
                        goto compare;
                      case 1069:
                        resword = &wordlist[2429];
                        goto compare;
                      case 1078:
                        resword = &wordlist[2430];
                        goto compare;
                      case 1092:
                        resword = &wordlist[2431];
                        goto compare;
                      case 1096:
                        resword = &wordlist[2432];
                        goto compare;
                      case 1099:
                        resword = &wordlist[2433];
                        goto compare;
                      case 1111:
                        resword = &wordlist[2434];
                        goto compare;
                      case 1118:
                        resword = &wordlist[2435];
                        goto compare;
                      case 1121:
                        resword = &wordlist[2436];
                        goto compare;
                      case 1124:
                        resword = &wordlist[2437];
                        goto compare;
                      case 1134:
                        resword = &wordlist[2438];
                        goto compare;
                      case 1138:
                        resword = &wordlist[2439];
                        goto compare;
                      case 1181:
                        resword = &wordlist[2440];
                        goto compare;
                      case 1199:
                        resword = &wordlist[2441];
                        goto compare;
                      case 1211:
                        resword = &wordlist[2442];
                        goto compare;
                      case 1269:
                        resword = &wordlist[2443];
                        goto compare;
                      case 1275:
                        resword = &wordlist[2444];
                        goto compare;
                      case 1297:
                        resword = &wordlist[2445];
                        goto compare;
                      case 1310:
                        resword = &wordlist[2446];
                        goto compare;
                      case 1316:
                        resword = &wordlist[2447];
                        goto compare;
                      case 1336:
                        resword = &wordlist[2448];
                        goto compare;
                      case 1368:
                        resword = &wordlist[2449];
                        goto compare;
                      case 1371:
                        resword = &wordlist[2450];
                        goto compare;
                      case 1375:
                        resword = &wordlist[2451];
                        goto compare;
                      case 1385:
                        resword = &wordlist[2452];
                        goto compare;
                      case 1388:
                        resword = &wordlist[2453];
                        goto compare;
                      case 1396:
                        resword = &wordlist[2454];
                        goto compare;
                      case 1459:
                        resword = &wordlist[2455];
                        goto compare;
                      case 1462:
                        resword = &wordlist[2456];
                        goto compare;
                      case 1465:
                        resword = &wordlist[2457];
                        goto compare;
                      case 1554:
                        resword = &wordlist[2458];
                        goto compare;
                      case 1596:
                        resword = &wordlist[2459];
                        goto compare;
                      case 1602:
                        resword = &wordlist[2460];
                        goto compare;
                      case 1609:
                        resword = &wordlist[2461];
                        goto compare;
                      case 1623:
                        resword = &wordlist[2462];
                        goto compare;
                      case 1643:
                        resword = &wordlist[2463];
                        goto compare;
                      case 1706:
                        resword = &wordlist[2464];
                        goto compare;
                      case 1708:
                        resword = &wordlist[2465];
                        goto compare;
                      case 1741:
                        resword = &wordlist[2466];
                        goto compare;
                      case 1743:
                        resword = &wordlist[2467];
                        goto compare;
                      case 1791:
                        resword = &wordlist[2468];
                        goto compare;
                      case 1792:
                        resword = &wordlist[2469];
                        goto compare;
                      case 1798:
                        resword = &wordlist[2470];
                        goto compare;
                      case 1809:
                        resword = &wordlist[2471];
                        goto compare;
                      case 1849:
                        resword = &wordlist[2472];
                        goto compare;
                      case 1850:
                        resword = &wordlist[2473];
                        goto compare;
                      case 1863:
                        resword = &wordlist[2474];
                        goto compare;
                      case 1875:
                        resword = &wordlist[2475];
                        goto compare;
                      case 1889:
                        resword = &wordlist[2476];
                        goto compare;
                      case 1922:
                        resword = &wordlist[2477];
                        goto compare;
                      case 1935:
                        resword = &wordlist[2478];
                        goto compare;
                      case 1943:
                        resword = &wordlist[2479];
                        goto compare;
                      case 1951:
                        resword = &wordlist[2480];
                        goto compare;
                      case 1963:
                        resword = &wordlist[2481];
                        goto compare;
                      case 1973:
                        resword = &wordlist[2482];
                        goto compare;
                      case 1977:
                        resword = &wordlist[2483];
                        goto compare;
                      case 1986:
                        resword = &wordlist[2484];
                        goto compare;
                      case 1987:
                        resword = &wordlist[2485];
                        goto compare;
                      case 2002:
                        resword = &wordlist[2486];
                        goto compare;
                      case 2005:
                        resword = &wordlist[2487];
                        goto compare;
                      case 2008:
                        resword = &wordlist[2488];
                        goto compare;
                      case 2053:
                        resword = &wordlist[2489];
                        goto compare;
                      case 2064:
                        resword = &wordlist[2490];
                        goto compare;
                      case 2069:
                        resword = &wordlist[2491];
                        goto compare;
                      case 2080:
                        resword = &wordlist[2492];
                        goto compare;
                      case 2109:
                        resword = &wordlist[2493];
                        goto compare;
                      case 2119:
                        resword = &wordlist[2494];
                        goto compare;
                      case 2142:
                        resword = &wordlist[2495];
                        goto compare;
                      case 2165:
                        resword = &wordlist[2496];
                        goto compare;
                      case 2202:
                        resword = &wordlist[2497];
                        goto compare;
                      case 2220:
                        resword = &wordlist[2498];
                        goto compare;
                      case 2234:
                        resword = &wordlist[2499];
                        goto compare;
                      case 2237:
                        resword = &wordlist[2500];
                        goto compare;
                      case 2274:
                        resword = &wordlist[2501];
                        goto compare;
                      case 2275:
                        resword = &wordlist[2502];
                        goto compare;
                      case 2282:
                        resword = &wordlist[2503];
                        goto compare;
                      case 2318:
                        resword = &wordlist[2504];
                        goto compare;
                      case 2326:
                        resword = &wordlist[2505];
                        goto compare;
                      case 2360:
                        resword = &wordlist[2506];
                        goto compare;
                      case 2365:
                        resword = &wordlist[2507];
                        goto compare;
                      case 2378:
                        resword = &wordlist[2508];
                        goto compare;
                      case 2383:
                        resword = &wordlist[2509];
                        goto compare;
                      case 2400:
                        resword = &wordlist[2510];
                        goto compare;
                      case 2445:
                        resword = &wordlist[2511];
                        goto compare;
                      case 2450:
                        resword = &wordlist[2512];
                        goto compare;
                      case 2465:
                        resword = &wordlist[2513];
                        goto compare;
                      case 2482:
                        resword = &wordlist[2514];
                        goto compare;
                      case 2494:
                        resword = &wordlist[2515];
                        goto compare;
                      case 2501:
                        resword = &wordlist[2516];
                        goto compare;
                      case 2503:
                        resword = &wordlist[2517];
                        goto compare;
                      case 2530:
                        resword = &wordlist[2518];
                        goto compare;
                      case 2532:
                        resword = &wordlist[2519];
                        goto compare;
                      case 2535:
                        resword = &wordlist[2520];
                        goto compare;
                      case 2549:
                        resword = &wordlist[2521];
                        goto compare;
                      case 2603:
                        resword = &wordlist[2522];
                        goto compare;
                      case 2617:
                        resword = &wordlist[2523];
                        goto compare;
                      case 2625:
                        resword = &wordlist[2524];
                        goto compare;
                      case 2643:
                        resword = &wordlist[2525];
                        goto compare;
                      case 2675:
                        resword = &wordlist[2526];
                        goto compare;
                      case 2678:
                        resword = &wordlist[2527];
                        goto compare;
                      case 2698:
                        resword = &wordlist[2528];
                        goto compare;
                      case 2713:
                        resword = &wordlist[2529];
                        goto compare;
                      case 2726:
                        resword = &wordlist[2530];
                        goto compare;
                      case 2729:
                        resword = &wordlist[2531];
                        goto compare;
                      case 2746:
                        resword = &wordlist[2532];
                        goto compare;
                      case 2768:
                        resword = &wordlist[2533];
                        goto compare;
                      case 2769:
                        resword = &wordlist[2534];
                        goto compare;
                      case 2791:
                        resword = &wordlist[2535];
                        goto compare;
                      case 2803:
                        resword = &wordlist[2536];
                        goto compare;
                      case 2827:
                        resword = &wordlist[2537];
                        goto compare;
                      case 2830:
                        resword = &wordlist[2538];
                        goto compare;
                      case 2849:
                        resword = &wordlist[2539];
                        goto compare;
                      case 2861:
                        resword = &wordlist[2540];
                        goto compare;
                      case 2862:
                        resword = &wordlist[2541];
                        goto compare;
                      case 2868:
                        resword = &wordlist[2542];
                        goto compare;
                      case 2895:
                        resword = &wordlist[2543];
                        goto compare;
                      case 2921:
                        resword = &wordlist[2544];
                        goto compare;
                      case 2939:
                        resword = &wordlist[2545];
                        goto compare;
                      case 2982:
                        resword = &wordlist[2546];
                        goto compare;
                      case 2993:
                        resword = &wordlist[2547];
                        goto compare;
                      case 3007:
                        resword = &wordlist[2548];
                        goto compare;
                      case 3025:
                        resword = &wordlist[2549];
                        goto compare;
                      case 3042:
                        resword = &wordlist[2550];
                        goto compare;
                      case 3044:
                        resword = &wordlist[2551];
                        goto compare;
                      case 3099:
                        resword = &wordlist[2552];
                        goto compare;
                      case 3154:
                        resword = &wordlist[2553];
                        goto compare;
                      case 3156:
                        resword = &wordlist[2554];
                        goto compare;
                      case 3163:
                        resword = &wordlist[2555];
                        goto compare;
                      case 3177:
                        resword = &wordlist[2556];
                        goto compare;
                      case 3186:
                        resword = &wordlist[2557];
                        goto compare;
                      case 3197:
                        resword = &wordlist[2558];
                        goto compare;
                      case 3237:
                        resword = &wordlist[2559];
                        goto compare;
                      case 3245:
                        resword = &wordlist[2560];
                        goto compare;
                      case 3257:
                        resword = &wordlist[2561];
                        goto compare;
                      case 3264:
                        resword = &wordlist[2562];
                        goto compare;
                      case 3276:
                        resword = &wordlist[2563];
                        goto compare;
                      case 3286:
                        resword = &wordlist[2564];
                        goto compare;
                      case 3310:
                        resword = &wordlist[2565];
                        goto compare;
                      case 3325:
                        resword = &wordlist[2566];
                        goto compare;
                      case 3327:
                        resword = &wordlist[2567];
                        goto compare;
                      case 3328:
                        resword = &wordlist[2568];
                        goto compare;
                      case 3347:
                        resword = &wordlist[2569];
                        goto compare;
                      case 3410:
                        resword = &wordlist[2570];
                        goto compare;
                      case 3424:
                        resword = &wordlist[2571];
                        goto compare;
                      case 3428:
                        resword = &wordlist[2572];
                        goto compare;
                      case 3430:
                        resword = &wordlist[2573];
                        goto compare;
                      case 3446:
                        resword = &wordlist[2574];
                        goto compare;
                      case 3479:
                        resword = &wordlist[2575];
                        goto compare;
                      case 3502:
                        resword = &wordlist[2576];
                        goto compare;
                      case 3536:
                        resword = &wordlist[2577];
                        goto compare;
                      case 3549:
                        resword = &wordlist[2578];
                        goto compare;
                      case 3558:
                        resword = &wordlist[2579];
                        goto compare;
                      case 3627:
                        resword = &wordlist[2580];
                        goto compare;
                      case 3725:
                        resword = &wordlist[2581];
                        goto compare;
                      case 3780:
                        resword = &wordlist[2582];
                        goto compare;
                      case 3789:
                        resword = &wordlist[2583];
                        goto compare;
                      case 3793:
                        resword = &wordlist[2584];
                        goto compare;
                      case 3811:
                        resword = &wordlist[2585];
                        goto compare;
                      case 3837:
                        resword = &wordlist[2586];
                        goto compare;
                      case 3860:
                        resword = &wordlist[2587];
                        goto compare;
                      case 3870:
                        resword = &wordlist[2588];
                        goto compare;
                      case 3874:
                        resword = &wordlist[2589];
                        goto compare;
                      case 3882:
                        resword = &wordlist[2590];
                        goto compare;
                      case 3892:
                        resword = &wordlist[2591];
                        goto compare;
                      case 3925:
                        resword = &wordlist[2592];
                        goto compare;
                      case 3930:
                        resword = &wordlist[2593];
                        goto compare;
                      case 3932:
                        resword = &wordlist[2594];
                        goto compare;
                      case 3971:
                        resword = &wordlist[2595];
                        goto compare;
                      case 3988:
                        resword = &wordlist[2596];
                        goto compare;
                      case 4029:
                        resword = &wordlist[2597];
                        goto compare;
                      case 4053:
                        resword = &wordlist[2598];
                        goto compare;
                      case 4059:
                        resword = &wordlist[2599];
                        goto compare;
                      case 4150:
                        resword = &wordlist[2600];
                        goto compare;
                      case 4153:
                        resword = &wordlist[2601];
                        goto compare;
                      case 4207:
                        resword = &wordlist[2602];
                        goto compare;
                      case 4213:
                        resword = &wordlist[2603];
                        goto compare;
                      case 4215:
                        resword = &wordlist[2604];
                        goto compare;
                      case 4216:
                        resword = &wordlist[2605];
                        goto compare;
                      case 4226:
                        resword = &wordlist[2606];
                        goto compare;
                      case 4233:
                        resword = &wordlist[2607];
                        goto compare;
                      case 4268:
                        resword = &wordlist[2608];
                        goto compare;
                      case 4269:
                        resword = &wordlist[2609];
                        goto compare;
                      case 4270:
                        resword = &wordlist[2610];
                        goto compare;
                      case 4275:
                        resword = &wordlist[2611];
                        goto compare;
                      case 4283:
                        resword = &wordlist[2612];
                        goto compare;
                      case 4285:
                        resword = &wordlist[2613];
                        goto compare;
                      case 4366:
                        resword = &wordlist[2614];
                        goto compare;
                      case 4405:
                        resword = &wordlist[2615];
                        goto compare;
                      case 4412:
                        resword = &wordlist[2616];
                        goto compare;
                      case 4432:
                        resword = &wordlist[2617];
                        goto compare;
                      case 4436:
                        resword = &wordlist[2618];
                        goto compare;
                      case 4522:
                        resword = &wordlist[2619];
                        goto compare;
                      case 4550:
                        resword = &wordlist[2620];
                        goto compare;
                      case 4565:
                        resword = &wordlist[2621];
                        goto compare;
                      case 4578:
                        resword = &wordlist[2622];
                        goto compare;
                      case 4583:
                        resword = &wordlist[2623];
                        goto compare;
                      case 4594:
                        resword = &wordlist[2624];
                        goto compare;
                      case 4598:
                        resword = &wordlist[2625];
                        goto compare;
                      case 4643:
                        resword = &wordlist[2626];
                        goto compare;
                      case 4650:
                        resword = &wordlist[2627];
                        goto compare;
                      case 4667:
                        resword = &wordlist[2628];
                        goto compare;
                      case 4673:
                        resword = &wordlist[2629];
                        goto compare;
                      case 4693:
                        resword = &wordlist[2630];
                        goto compare;
                      case 4732:
                        resword = &wordlist[2631];
                        goto compare;
                      case 4783:
                        resword = &wordlist[2632];
                        goto compare;
                      case 4883:
                        resword = &wordlist[2633];
                        goto compare;
                      case 4890:
                        resword = &wordlist[2634];
                        goto compare;
                      case 4910:
                        resword = &wordlist[2635];
                        goto compare;
                      case 4925:
                        resword = &wordlist[2636];
                        goto compare;
                      case 4929:
                        resword = &wordlist[2637];
                        goto compare;
                      case 4988:
                        resword = &wordlist[2638];
                        goto compare;
                      case 4995:
                        resword = &wordlist[2639];
                        goto compare;
                      case 5005:
                        resword = &wordlist[2640];
                        goto compare;
                      case 5020:
                        resword = &wordlist[2641];
                        goto compare;
                      case 5044:
                        resword = &wordlist[2642];
                        goto compare;
                      case 5057:
                        resword = &wordlist[2643];
                        goto compare;
                      case 5079:
                        resword = &wordlist[2644];
                        goto compare;
                      case 5089:
                        resword = &wordlist[2645];
                        goto compare;
                      case 5094:
                        resword = &wordlist[2646];
                        goto compare;
                      case 5119:
                        resword = &wordlist[2647];
                        goto compare;
                      case 5179:
                        resword = &wordlist[2648];
                        goto compare;
                      case 5209:
                        resword = &wordlist[2649];
                        goto compare;
                      case 5253:
                        resword = &wordlist[2650];
                        goto compare;
                      case 5258:
                        resword = &wordlist[2651];
                        goto compare;
                      case 5289:
                        resword = &wordlist[2652];
                        goto compare;
                      case 5300:
                        resword = &wordlist[2653];
                        goto compare;
                      case 5310:
                        resword = &wordlist[2654];
                        goto compare;
                      case 5320:
                        resword = &wordlist[2655];
                        goto compare;
                      case 5330:
                        resword = &wordlist[2656];
                        goto compare;
                      case 5334:
                        resword = &wordlist[2657];
                        goto compare;
                      case 5361:
                        resword = &wordlist[2658];
                        goto compare;
                      case 5408:
                        resword = &wordlist[2659];
                        goto compare;
                      case 5411:
                        resword = &wordlist[2660];
                        goto compare;
                      case 5413:
                        resword = &wordlist[2661];
                        goto compare;
                      case 5441:
                        resword = &wordlist[2662];
                        goto compare;
                      case 5455:
                        resword = &wordlist[2663];
                        goto compare;
                      case 5463:
                        resword = &wordlist[2664];
                        goto compare;
                      case 5469:
                        resword = &wordlist[2665];
                        goto compare;
                      case 5477:
                        resword = &wordlist[2666];
                        goto compare;
                      case 5504:
                        resword = &wordlist[2667];
                        goto compare;
                      case 5646:
                        resword = &wordlist[2668];
                        goto compare;
                      case 5694:
                        resword = &wordlist[2669];
                        goto compare;
                      case 5705:
                        resword = &wordlist[2670];
                        goto compare;
                      case 5710:
                        resword = &wordlist[2671];
                        goto compare;
                      case 5717:
                        resword = &wordlist[2672];
                        goto compare;
                      case 5721:
                        resword = &wordlist[2673];
                        goto compare;
                      case 5737:
                        resword = &wordlist[2674];
                        goto compare;
                      case 5739:
                        resword = &wordlist[2675];
                        goto compare;
                      case 5757:
                        resword = &wordlist[2676];
                        goto compare;
                      case 5786:
                        resword = &wordlist[2677];
                        goto compare;
                      case 5809:
                        resword = &wordlist[2678];
                        goto compare;
                      case 5830:
                        resword = &wordlist[2679];
                        goto compare;
                      case 5862:
                        resword = &wordlist[2680];
                        goto compare;
                      case 5897:
                        resword = &wordlist[2681];
                        goto compare;
                      case 5918:
                        resword = &wordlist[2682];
                        goto compare;
                      case 5928:
                        resword = &wordlist[2683];
                        goto compare;
                      case 5971:
                        resword = &wordlist[2684];
                        goto compare;
                      case 6000:
                        resword = &wordlist[2685];
                        goto compare;
                      case 6062:
                        resword = &wordlist[2686];
                        goto compare;
                      case 6106:
                        resword = &wordlist[2687];
                        goto compare;
                      case 6112:
                        resword = &wordlist[2688];
                        goto compare;
                      case 6131:
                        resword = &wordlist[2689];
                        goto compare;
                      case 6156:
                        resword = &wordlist[2690];
                        goto compare;
                      case 6198:
                        resword = &wordlist[2691];
                        goto compare;
                      case 6210:
                        resword = &wordlist[2692];
                        goto compare;
                      case 6215:
                        resword = &wordlist[2693];
                        goto compare;
                      case 6241:
                        resword = &wordlist[2694];
                        goto compare;
                      case 6256:
                        resword = &wordlist[2695];
                        goto compare;
                      case 6283:
                        resword = &wordlist[2696];
                        goto compare;
                      case 6291:
                        resword = &wordlist[2697];
                        goto compare;
                      case 6369:
                        resword = &wordlist[2698];
                        goto compare;
                      case 6373:
                        resword = &wordlist[2699];
                        goto compare;
                      case 6392:
                        resword = &wordlist[2700];
                        goto compare;
                      case 6411:
                        resword = &wordlist[2701];
                        goto compare;
                      case 6432:
                        resword = &wordlist[2702];
                        goto compare;
                      case 6438:
                        resword = &wordlist[2703];
                        goto compare;
                      case 6452:
                        resword = &wordlist[2704];
                        goto compare;
                      case 6455:
                        resword = &wordlist[2705];
                        goto compare;
                      case 6477:
                        resword = &wordlist[2706];
                        goto compare;
                      case 6552:
                        resword = &wordlist[2707];
                        goto compare;
                      case 6594:
                        resword = &wordlist[2708];
                        goto compare;
                      case 6614:
                        resword = &wordlist[2709];
                        goto compare;
                      case 6615:
                        resword = &wordlist[2710];
                        goto compare;
                      case 6642:
                        resword = &wordlist[2711];
                        goto compare;
                      case 6660:
                        resword = &wordlist[2712];
                        goto compare;
                      case 6681:
                        resword = &wordlist[2713];
                        goto compare;
                      case 6696:
                        resword = &wordlist[2714];
                        goto compare;
                      case 6745:
                        resword = &wordlist[2715];
                        goto compare;
                      case 6747:
                        resword = &wordlist[2716];
                        goto compare;
                      case 6767:
                        resword = &wordlist[2717];
                        goto compare;
                      case 6775:
                        resword = &wordlist[2718];
                        goto compare;
                      case 6778:
                        resword = &wordlist[2719];
                        goto compare;
                      case 6779:
                        resword = &wordlist[2720];
                        goto compare;
                      case 6794:
                        resword = &wordlist[2721];
                        goto compare;
                      case 6796:
                        resword = &wordlist[2722];
                        goto compare;
                      case 6798:
                        resword = &wordlist[2723];
                        goto compare;
                      case 6799:
                        resword = &wordlist[2724];
                        goto compare;
                      case 6868:
                        resword = &wordlist[2725];
                        goto compare;
                      case 6869:
                        resword = &wordlist[2726];
                        goto compare;
                      case 6932:
                        resword = &wordlist[2727];
                        goto compare;
                      case 6956:
                        resword = &wordlist[2728];
                        goto compare;
                      case 6973:
                        resword = &wordlist[2729];
                        goto compare;
                      case 6995:
                        resword = &wordlist[2730];
                        goto compare;
                      case 7067:
                        resword = &wordlist[2731];
                        goto compare;
                      case 7070:
                        resword = &wordlist[2732];
                        goto compare;
                      case 7072:
                        resword = &wordlist[2733];
                        goto compare;
                      case 7078:
                        resword = &wordlist[2734];
                        goto compare;
                      case 7105:
                        resword = &wordlist[2735];
                        goto compare;
                      case 7116:
                        resword = &wordlist[2736];
                        goto compare;
                      case 7187:
                        resword = &wordlist[2737];
                        goto compare;
                      case 7201:
                        resword = &wordlist[2738];
                        goto compare;
                      case 7231:
                        resword = &wordlist[2739];
                        goto compare;
                      case 7255:
                        resword = &wordlist[2740];
                        goto compare;
                      case 7314:
                        resword = &wordlist[2741];
                        goto compare;
                      case 7344:
                        resword = &wordlist[2742];
                        goto compare;
                      case 7345:
                        resword = &wordlist[2743];
                        goto compare;
                      case 7388:
                        resword = &wordlist[2744];
                        goto compare;
                      case 7396:
                        resword = &wordlist[2745];
                        goto compare;
                      case 7408:
                        resword = &wordlist[2746];
                        goto compare;
                      case 7421:
                        resword = &wordlist[2747];
                        goto compare;
                      case 7427:
                        resword = &wordlist[2748];
                        goto compare;
                      case 7432:
                        resword = &wordlist[2749];
                        goto compare;
                      case 7467:
                        resword = &wordlist[2750];
                        goto compare;
                      case 7478:
                        resword = &wordlist[2751];
                        goto compare;
                      case 7499:
                        resword = &wordlist[2752];
                        goto compare;
                      case 7505:
                        resword = &wordlist[2753];
                        goto compare;
                      case 7538:
                        resword = &wordlist[2754];
                        goto compare;
                      case 7548:
                        resword = &wordlist[2755];
                        goto compare;
                      case 7587:
                        resword = &wordlist[2756];
                        goto compare;
                      case 7599:
                        resword = &wordlist[2757];
                        goto compare;
                      case 7603:
                        resword = &wordlist[2758];
                        goto compare;
                      case 7620:
                        resword = &wordlist[2759];
                        goto compare;
                      case 7623:
                        resword = &wordlist[2760];
                        goto compare;
                      case 7689:
                        resword = &wordlist[2761];
                        goto compare;
                      case 7730:
                        resword = &wordlist[2762];
                        goto compare;
                      case 7784:
                        resword = &wordlist[2763];
                        goto compare;
                      case 7830:
                        resword = &wordlist[2764];
                        goto compare;
                      case 7835:
                        resword = &wordlist[2765];
                        goto compare;
                      case 7858:
                        resword = &wordlist[2766];
                        goto compare;
                      case 7881:
                        resword = &wordlist[2767];
                        goto compare;
                      case 7886:
                        resword = &wordlist[2768];
                        goto compare;
                      case 8002:
                        resword = &wordlist[2769];
                        goto compare;
                      case 8016:
                        resword = &wordlist[2770];
                        goto compare;
                      case 8078:
                        resword = &wordlist[2771];
                        goto compare;
                      case 8087:
                        resword = &wordlist[2772];
                        goto compare;
                      case 8098:
                        resword = &wordlist[2773];
                        goto compare;
                      case 8105:
                        resword = &wordlist[2774];
                        goto compare;
                      case 8117:
                        resword = &wordlist[2775];
                        goto compare;
                      case 8134:
                        resword = &wordlist[2776];
                        goto compare;
                      case 8138:
                        resword = &wordlist[2777];
                        goto compare;
                      case 8161:
                        resword = &wordlist[2778];
                        goto compare;
                      case 8176:
                        resword = &wordlist[2779];
                        goto compare;
                      case 8218:
                        resword = &wordlist[2780];
                        goto compare;
                      case 8230:
                        resword = &wordlist[2781];
                        goto compare;
                      case 8245:
                        resword = &wordlist[2782];
                        goto compare;
                      case 8248:
                        resword = &wordlist[2783];
                        goto compare;
                      case 8264:
                        resword = &wordlist[2784];
                        goto compare;
                      case 8271:
                        resword = &wordlist[2785];
                        goto compare;
                      case 8367:
                        resword = &wordlist[2786];
                        goto compare;
                      case 8448:
                        resword = &wordlist[2787];
                        goto compare;
                      case 8472:
                        resword = &wordlist[2788];
                        goto compare;
                      case 8478:
                        resword = &wordlist[2789];
                        goto compare;
                      case 8482:
                        resword = &wordlist[2790];
                        goto compare;
                      case 8504:
                        resword = &wordlist[2791];
                        goto compare;
                      case 8561:
                        resword = &wordlist[2792];
                        goto compare;
                      case 8567:
                        resword = &wordlist[2793];
                        goto compare;
                      case 8616:
                        resword = &wordlist[2794];
                        goto compare;
                      case 8625:
                        resword = &wordlist[2795];
                        goto compare;
                      case 8636:
                        resword = &wordlist[2796];
                        goto compare;
                      case 8640:
                        resword = &wordlist[2797];
                        goto compare;
                      case 8656:
                        resword = &wordlist[2798];
                        goto compare;
                      case 8670:
                        resword = &wordlist[2799];
                        goto compare;
                      case 8682:
                        resword = &wordlist[2800];
                        goto compare;
                      case 8690:
                        resword = &wordlist[2801];
                        goto compare;
                      case 8772:
                        resword = &wordlist[2802];
                        goto compare;
                      case 8773:
                        resword = &wordlist[2803];
                        goto compare;
                      case 8801:
                        resword = &wordlist[2804];
                        goto compare;
                      case 8808:
                        resword = &wordlist[2805];
                        goto compare;
                      case 8812:
                        resword = &wordlist[2806];
                        goto compare;
                      case 8865:
                        resword = &wordlist[2807];
                        goto compare;
                      case 8891:
                        resword = &wordlist[2808];
                        goto compare;
                      case 8895:
                        resword = &wordlist[2809];
                        goto compare;
                      case 8935:
                        resword = &wordlist[2810];
                        goto compare;
                      case 8947:
                        resword = &wordlist[2811];
                        goto compare;
                      case 8951:
                        resword = &wordlist[2812];
                        goto compare;
                      case 8953:
                        resword = &wordlist[2813];
                        goto compare;
                      case 8984:
                        resword = &wordlist[2814];
                        goto compare;
                      case 9053:
                        resword = &wordlist[2815];
                        goto compare;
                      case 9104:
                        resword = &wordlist[2816];
                        goto compare;
                      case 9181:
                        resword = &wordlist[2817];
                        goto compare;
                      case 9232:
                        resword = &wordlist[2818];
                        goto compare;
                      case 9251:
                        resword = &wordlist[2819];
                        goto compare;
                      case 9293:
                        resword = &wordlist[2820];
                        goto compare;
                      case 9367:
                        resword = &wordlist[2821];
                        goto compare;
                      case 9394:
                        resword = &wordlist[2822];
                        goto compare;
                      case 9395:
                        resword = &wordlist[2823];
                        goto compare;
                      case 9485:
                        resword = &wordlist[2824];
                        goto compare;
                      case 9489:
                        resword = &wordlist[2825];
                        goto compare;
                      case 9491:
                        resword = &wordlist[2826];
                        goto compare;
                      case 9497:
                        resword = &wordlist[2827];
                        goto compare;
                      case 9502:
                        resword = &wordlist[2828];
                        goto compare;
                      case 9608:
                        resword = &wordlist[2829];
                        goto compare;
                      case 9618:
                        resword = &wordlist[2830];
                        goto compare;
                      case 9625:
                        resword = &wordlist[2831];
                        goto compare;
                      case 9642:
                        resword = &wordlist[2832];
                        goto compare;
                      case 9678:
                        resword = &wordlist[2833];
                        goto compare;
                      case 9717:
                        resword = &wordlist[2834];
                        goto compare;
                      case 9729:
                        resword = &wordlist[2835];
                        goto compare;
                      case 9738:
                        resword = &wordlist[2836];
                        goto compare;
                      case 9758:
                        resword = &wordlist[2837];
                        goto compare;
                      case 9781:
                        resword = &wordlist[2838];
                        goto compare;
                      case 9864:
                        resword = &wordlist[2839];
                        goto compare;
                      case 9948:
                        resword = &wordlist[2840];
                        goto compare;
                      case 9953:
                        resword = &wordlist[2841];
                        goto compare;
                      case 9972:
                        resword = &wordlist[2842];
                        goto compare;
                      case 9996:
                        resword = &wordlist[2843];
                        goto compare;
                      case 10005:
                        resword = &wordlist[2844];
                        goto compare;
                      case 10020:
                        resword = &wordlist[2845];
                        goto compare;
                      case 10038:
                        resword = &wordlist[2846];
                        goto compare;
                      case 10119:
                        resword = &wordlist[2847];
                        goto compare;
                      case 10199:
                        resword = &wordlist[2848];
                        goto compare;
                      case 10225:
                        resword = &wordlist[2849];
                        goto compare;
                      case 10235:
                        resword = &wordlist[2850];
                        goto compare;
                      case 10243:
                        resword = &wordlist[2851];
                        goto compare;
                      case 10251:
                        resword = &wordlist[2852];
                        goto compare;
                      case 10255:
                        resword = &wordlist[2853];
                        goto compare;
                      case 10298:
                        resword = &wordlist[2854];
                        goto compare;
                      case 10301:
                        resword = &wordlist[2855];
                        goto compare;
                      case 10319:
                        resword = &wordlist[2856];
                        goto compare;
                      case 10389:
                        resword = &wordlist[2857];
                        goto compare;
                      case 10408:
                        resword = &wordlist[2858];
                        goto compare;
                      case 10492:
                        resword = &wordlist[2859];
                        goto compare;
                      case 10507:
                        resword = &wordlist[2860];
                        goto compare;
                      case 10534:
                        resword = &wordlist[2861];
                        goto compare;
                      case 10545:
                        resword = &wordlist[2862];
                        goto compare;
                      case 10562:
                        resword = &wordlist[2863];
                        goto compare;
                      case 10587:
                        resword = &wordlist[2864];
                        goto compare;
                      case 10588:
                        resword = &wordlist[2865];
                        goto compare;
                      case 10611:
                        resword = &wordlist[2866];
                        goto compare;
                      case 10619:
                        resword = &wordlist[2867];
                        goto compare;
                      case 10620:
                        resword = &wordlist[2868];
                        goto compare;
                      case 10639:
                        resword = &wordlist[2869];
                        goto compare;
                      case 10650:
                        resword = &wordlist[2870];
                        goto compare;
                      case 10664:
                        resword = &wordlist[2871];
                        goto compare;
                      case 10666:
                        resword = &wordlist[2872];
                        goto compare;
                      case 10754:
                        resword = &wordlist[2873];
                        goto compare;
                      case 10865:
                        resword = &wordlist[2874];
                        goto compare;
                      case 10887:
                        resword = &wordlist[2875];
                        goto compare;
                      case 10900:
                        resword = &wordlist[2876];
                        goto compare;
                      case 10942:
                        resword = &wordlist[2877];
                        goto compare;
                      case 10956:
                        resword = &wordlist[2878];
                        goto compare;
                      case 10990:
                        resword = &wordlist[2879];
                        goto compare;
                      case 10999:
                        resword = &wordlist[2880];
                        goto compare;
                      case 11000:
                        resword = &wordlist[2881];
                        goto compare;
                      case 11012:
                        resword = &wordlist[2882];
                        goto compare;
                      case 11022:
                        resword = &wordlist[2883];
                        goto compare;
                      case 11050:
                        resword = &wordlist[2884];
                        goto compare;
                      case 11080:
                        resword = &wordlist[2885];
                        goto compare;
                      case 11095:
                        resword = &wordlist[2886];
                        goto compare;
                      case 11118:
                        resword = &wordlist[2887];
                        goto compare;
                      case 11138:
                        resword = &wordlist[2888];
                        goto compare;
                      case 11150:
                        resword = &wordlist[2889];
                        goto compare;
                      case 11172:
                        resword = &wordlist[2890];
                        goto compare;
                      case 11213:
                        resword = &wordlist[2891];
                        goto compare;
                      case 11318:
                        resword = &wordlist[2892];
                        goto compare;
                      case 11322:
                        resword = &wordlist[2893];
                        goto compare;
                      case 11376:
                        resword = &wordlist[2894];
                        goto compare;
                      case 11436:
                        resword = &wordlist[2895];
                        goto compare;
                      case 11439:
                        resword = &wordlist[2896];
                        goto compare;
                      case 11464:
                        resword = &wordlist[2897];
                        goto compare;
                      case 11565:
                        resword = &wordlist[2898];
                        goto compare;
                      case 11633:
                        resword = &wordlist[2899];
                        goto compare;
                      case 11643:
                        resword = &wordlist[2900];
                        goto compare;
                      case 11667:
                        resword = &wordlist[2901];
                        goto compare;
                      case 11748:
                        resword = &wordlist[2902];
                        goto compare;
                      case 11752:
                        resword = &wordlist[2903];
                        goto compare;
                      case 11771:
                        resword = &wordlist[2904];
                        goto compare;
                      case 11812:
                        resword = &wordlist[2905];
                        goto compare;
                      case 11817:
                        resword = &wordlist[2906];
                        goto compare;
                      case 11860:
                        resword = &wordlist[2907];
                        goto compare;
                      case 11867:
                        resword = &wordlist[2908];
                        goto compare;
                      case 11878:
                        resword = &wordlist[2909];
                        goto compare;
                      case 11883:
                        resword = &wordlist[2910];
                        goto compare;
                      case 11884:
                        resword = &wordlist[2911];
                        goto compare;
                      case 11902:
                        resword = &wordlist[2912];
                        goto compare;
                      case 11997:
                        resword = &wordlist[2913];
                        goto compare;
                      case 12033:
                        resword = &wordlist[2914];
                        goto compare;
                      case 12097:
                        resword = &wordlist[2915];
                        goto compare;
                      case 12133:
                        resword = &wordlist[2916];
                        goto compare;
                      case 12139:
                        resword = &wordlist[2917];
                        goto compare;
                      case 12157:
                        resword = &wordlist[2918];
                        goto compare;
                      case 12190:
                        resword = &wordlist[2919];
                        goto compare;
                      case 12331:
                        resword = &wordlist[2920];
                        goto compare;
                      case 12443:
                        resword = &wordlist[2921];
                        goto compare;
                      case 12451:
                        resword = &wordlist[2922];
                        goto compare;
                      case 12453:
                        resword = &wordlist[2923];
                        goto compare;
                      case 12485:
                        resword = &wordlist[2924];
                        goto compare;
                      case 12567:
                        resword = &wordlist[2925];
                        goto compare;
                      case 12711:
                        resword = &wordlist[2926];
                        goto compare;
                      case 12838:
                        resword = &wordlist[2927];
                        goto compare;
                      case 12860:
                        resword = &wordlist[2928];
                        goto compare;
                      case 12903:
                        resword = &wordlist[2929];
                        goto compare;
                      case 12928:
                        resword = &wordlist[2930];
                        goto compare;
                      case 12978:
                        resword = &wordlist[2931];
                        goto compare;
                      case 13044:
                        resword = &wordlist[2932];
                        goto compare;
                      case 13060:
                        resword = &wordlist[2933];
                        goto compare;
                      case 13180:
                        resword = &wordlist[2934];
                        goto compare;
                      case 13203:
                        resword = &wordlist[2935];
                        goto compare;
                      case 13229:
                        resword = &wordlist[2936];
                        goto compare;
                      case 13281:
                        resword = &wordlist[2937];
                        goto compare;
                      case 13290:
                        resword = &wordlist[2938];
                        goto compare;
                      case 13332:
                        resword = &wordlist[2939];
                        goto compare;
                      case 13496:
                        resword = &wordlist[2940];
                        goto compare;
                      case 13506:
                        resword = &wordlist[2941];
                        goto compare;
                      case 13680:
                        resword = &wordlist[2942];
                        goto compare;
                      case 13700:
                        resword = &wordlist[2943];
                        goto compare;
                      case 13847:
                        resword = &wordlist[2944];
                        goto compare;
                      case 13997:
                        resword = &wordlist[2945];
                        goto compare;
                      case 14126:
                        resword = &wordlist[2946];
                        goto compare;
                      case 14147:
                        resword = &wordlist[2947];
                        goto compare;
                      case 14178:
                        resword = &wordlist[2948];
                        goto compare;
                      case 14220:
                        resword = &wordlist[2949];
                        goto compare;
                      case 14262:
                        resword = &wordlist[2950];
                        goto compare;
                      case 14314:
                        resword = &wordlist[2951];
                        goto compare;
                      case 14354:
                        resword = &wordlist[2952];
                        goto compare;
                      case 14422:
                        resword = &wordlist[2953];
                        goto compare;
                      case 14436:
                        resword = &wordlist[2954];
                        goto compare;
                      case 14506:
                        resword = &wordlist[2955];
                        goto compare;
                      case 14517:
                        resword = &wordlist[2956];
                        goto compare;
                      case 14529:
                        resword = &wordlist[2957];
                        goto compare;
                      case 14541:
                        resword = &wordlist[2958];
                        goto compare;
                      case 14543:
                        resword = &wordlist[2959];
                        goto compare;
                      case 14546:
                        resword = &wordlist[2960];
                        goto compare;
                      case 14554:
                        resword = &wordlist[2961];
                        goto compare;
                      case 14614:
                        resword = &wordlist[2962];
                        goto compare;
                      case 14692:
                        resword = &wordlist[2963];
                        goto compare;
                      case 14719:
                        resword = &wordlist[2964];
                        goto compare;
                      case 14794:
                        resword = &wordlist[2965];
                        goto compare;
                      case 14846:
                        resword = &wordlist[2966];
                        goto compare;
                      case 14876:
                        resword = &wordlist[2967];
                        goto compare;
                      case 14903:
                        resword = &wordlist[2968];
                        goto compare;
                      case 14960:
                        resword = &wordlist[2969];
                        goto compare;
                      case 14998:
                        resword = &wordlist[2970];
                        goto compare;
                      case 15061:
                        resword = &wordlist[2971];
                        goto compare;
                      case 15149:
                        resword = &wordlist[2972];
                        goto compare;
                      case 15303:
                        resword = &wordlist[2973];
                        goto compare;
                      case 15348:
                        resword = &wordlist[2974];
                        goto compare;
                      case 15403:
                        resword = &wordlist[2975];
                        goto compare;
                      case 15436:
                        resword = &wordlist[2976];
                        goto compare;
                      case 15594:
                        resword = &wordlist[2977];
                        goto compare;
                      case 15700:
                        resword = &wordlist[2978];
                        goto compare;
                      case 15867:
                        resword = &wordlist[2979];
                        goto compare;
                      case 15892:
                        resword = &wordlist[2980];
                        goto compare;
                      case 15928:
                        resword = &wordlist[2981];
                        goto compare;
                      case 16074:
                        resword = &wordlist[2982];
                        goto compare;
                      case 16230:
                        resword = &wordlist[2983];
                        goto compare;
                      case 16290:
                        resword = &wordlist[2984];
                        goto compare;
                      case 16390:
                        resword = &wordlist[2985];
                        goto compare;
                      case 16424:
                        resword = &wordlist[2986];
                        goto compare;
                      case 16428:
                        resword = &wordlist[2987];
                        goto compare;
                      case 16462:
                        resword = &wordlist[2988];
                        goto compare;
                      case 16492:
                        resword = &wordlist[2989];
                        goto compare;
                      case 16513:
                        resword = &wordlist[2990];
                        goto compare;
                      case 16571:
                        resword = &wordlist[2991];
                        goto compare;
                      case 16604:
                        resword = &wordlist[2992];
                        goto compare;
                      case 16621:
                        resword = &wordlist[2993];
                        goto compare;
                      case 16646:
                        resword = &wordlist[2994];
                        goto compare;
                      case 16660:
                        resword = &wordlist[2995];
                        goto compare;
                      case 16757:
                        resword = &wordlist[2996];
                        goto compare;
                      case 16804:
                        resword = &wordlist[2997];
                        goto compare;
                      case 16833:
                        resword = &wordlist[2998];
                        goto compare;
                      case 16945:
                        resword = &wordlist[2999];
                        goto compare;
                      case 16965:
                        resword = &wordlist[3000];
                        goto compare;
                      case 17072:
                        resword = &wordlist[3001];
                        goto compare;
                      case 17110:
                        resword = &wordlist[3002];
                        goto compare;
                      case 17203:
                        resword = &wordlist[3003];
                        goto compare;
                      case 17250:
                        resword = &wordlist[3004];
                        goto compare;
                      case 17268:
                        resword = &wordlist[3005];
                        goto compare;
                      case 17287:
                        resword = &wordlist[3006];
                        goto compare;
                      case 17323:
                        resword = &wordlist[3007];
                        goto compare;
                      case 17637:
                        resword = &wordlist[3008];
                        goto compare;
                      case 17680:
                        resword = &wordlist[3009];
                        goto compare;
                      case 17684:
                        resword = &wordlist[3010];
                        goto compare;
                      case 17690:
                        resword = &wordlist[3011];
                        goto compare;
                      case 17703:
                        resword = &wordlist[3012];
                        goto compare;
                      case 17723:
                        resword = &wordlist[3013];
                        goto compare;
                      case 17742:
                        resword = &wordlist[3014];
                        goto compare;
                      case 17813:
                        resword = &wordlist[3015];
                        goto compare;
                      case 17819:
                        resword = &wordlist[3016];
                        goto compare;
                      case 17845:
                        resword = &wordlist[3017];
                        goto compare;
                      case 18012:
                        resword = &wordlist[3018];
                        goto compare;
                      case 18143:
                        resword = &wordlist[3019];
                        goto compare;
                      case 18188:
                        resword = &wordlist[3020];
                        goto compare;
                      case 18214:
                        resword = &wordlist[3021];
                        goto compare;
                      case 18298:
                        resword = &wordlist[3022];
                        goto compare;
                      case 18342:
                        resword = &wordlist[3023];
                        goto compare;
                      case 18490:
                        resword = &wordlist[3024];
                        goto compare;
                      case 18566:
                        resword = &wordlist[3025];
                        goto compare;
                      case 18775:
                        resword = &wordlist[3026];
                        goto compare;
                      case 18853:
                        resword = &wordlist[3027];
                        goto compare;
                      case 18904:
                        resword = &wordlist[3028];
                        goto compare;
                      case 18975:
                        resword = &wordlist[3029];
                        goto compare;
                      case 19028:
                        resword = &wordlist[3030];
                        goto compare;
                      case 19124:
                        resword = &wordlist[3031];
                        goto compare;
                      case 19153:
                        resword = &wordlist[3032];
                        goto compare;
                      case 19164:
                        resword = &wordlist[3033];
                        goto compare;
                      case 19166:
                        resword = &wordlist[3034];
                        goto compare;
                      case 19222:
                        resword = &wordlist[3035];
                        goto compare;
                      case 19248:
                        resword = &wordlist[3036];
                        goto compare;
                      case 19404:
                        resword = &wordlist[3037];
                        goto compare;
                      case 19491:
                        resword = &wordlist[3038];
                        goto compare;
                      case 19923:
                        resword = &wordlist[3039];
                        goto compare;
                      case 19970:
                        resword = &wordlist[3040];
                        goto compare;
                      case 20027:
                        resword = &wordlist[3041];
                        goto compare;
                      case 20064:
                        resword = &wordlist[3042];
                        goto compare;
                      case 20164:
                        resword = &wordlist[3043];
                        goto compare;
                      case 20221:
                        resword = &wordlist[3044];
                        goto compare;
                      case 20378:
                        resword = &wordlist[3045];
                        goto compare;
                      case 20418:
                        resword = &wordlist[3046];
                        goto compare;
                      case 20451:
                        resword = &wordlist[3047];
                        goto compare;
                      case 20469:
                        resword = &wordlist[3048];
                        goto compare;
                      case 20494:
                        resword = &wordlist[3049];
                        goto compare;
                      case 20617:
                        resword = &wordlist[3050];
                        goto compare;
                      case 20688:
                        resword = &wordlist[3051];
                        goto compare;
                      case 20714:
                        resword = &wordlist[3052];
                        goto compare;
                      case 20725:
                        resword = &wordlist[3053];
                        goto compare;
                      case 20741:
                        resword = &wordlist[3054];
                        goto compare;
                      case 20789:
                        resword = &wordlist[3055];
                        goto compare;
                      case 20891:
                        resword = &wordlist[3056];
                        goto compare;
                      case 21008:
                        resword = &wordlist[3057];
                        goto compare;
                      case 21014:
                        resword = &wordlist[3058];
                        goto compare;
                      case 21049:
                        resword = &wordlist[3059];
                        goto compare;
                      case 21152:
                        resword = &wordlist[3060];
                        goto compare;
                      case 21548:
                        resword = &wordlist[3061];
                        goto compare;
                      case 21662:
                        resword = &wordlist[3062];
                        goto compare;
                      case 21700:
                        resword = &wordlist[3063];
                        goto compare;
                      case 21706:
                        resword = &wordlist[3064];
                        goto compare;
                      case 21790:
                        resword = &wordlist[3065];
                        goto compare;
                      case 21832:
                        resword = &wordlist[3066];
                        goto compare;
                      case 21842:
                        resword = &wordlist[3067];
                        goto compare;
                      case 21890:
                        resword = &wordlist[3068];
                        goto compare;
                      case 21967:
                        resword = &wordlist[3069];
                        goto compare;
                      case 22091:
                        resword = &wordlist[3070];
                        goto compare;
                      case 22099:
                        resword = &wordlist[3071];
                        goto compare;
                      case 22202:
                        resword = &wordlist[3072];
                        goto compare;
                      case 22534:
                        resword = &wordlist[3073];
                        goto compare;
                      case 22589:
                        resword = &wordlist[3074];
                        goto compare;
                      case 22595:
                        resword = &wordlist[3075];
                        goto compare;
                      case 22793:
                        resword = &wordlist[3076];
                        goto compare;
                      case 22879:
                        resword = &wordlist[3077];
                        goto compare;
                      case 23278:
                        resword = &wordlist[3078];
                        goto compare;
                      case 23492:
                        resword = &wordlist[3079];
                        goto compare;
                      case 23674:
                        resword = &wordlist[3080];
                        goto compare;
                      case 23727:
                        resword = &wordlist[3081];
                        goto compare;
                      case 23916:
                        resword = &wordlist[3082];
                        goto compare;
                      case 24226:
                        resword = &wordlist[3083];
                        goto compare;
                      case 24330:
                        resword = &wordlist[3084];
                        goto compare;
                      case 24396:
                        resword = &wordlist[3085];
                        goto compare;
                      case 24890:
                        resword = &wordlist[3086];
                        goto compare;
                      case 24908:
                        resword = &wordlist[3087];
                        goto compare;
                      case 25264:
                        resword = &wordlist[3088];
                        goto compare;
                      case 25315:
                        resword = &wordlist[3089];
                        goto compare;
                      case 25396:
                        resword = &wordlist[3090];
                        goto compare;
                      case 25879:
                        resword = &wordlist[3091];
                        goto compare;
                      case 26160:
                        resword = &wordlist[3092];
                        goto compare;
                      case 26386:
                        resword = &wordlist[3093];
                        goto compare;
                      case 26537:
                        resword = &wordlist[3094];
                        goto compare;
                      case 26866:
                        resword = &wordlist[3095];
                        goto compare;
                      case 27688:
                        resword = &wordlist[3096];
                        goto compare;
                      case 27717:
                        resword = &wordlist[3097];
                        goto compare;
                      case 27790:
                        resword = &wordlist[3098];
                        goto compare;
                      case 27896:
                        resword = &wordlist[3099];
                        goto compare;
                      case 27948:
                        resword = &wordlist[3100];
                        goto compare;
                      case 28128:
                        resword = &wordlist[3101];
                        goto compare;
                      case 28132:
                        resword = &wordlist[3102];
                        goto compare;
                      case 28163:
                        resword = &wordlist[3103];
                        goto compare;
                      case 28486:
                        resword = &wordlist[3104];
                        goto compare;
                      case 29033:
                        resword = &wordlist[3105];
                        goto compare;
                      case 29237:
                        resword = &wordlist[3106];
                        goto compare;
                      case 29371:
                        resword = &wordlist[3107];
                        goto compare;
                      case 29738:
                        resword = &wordlist[3108];
                        goto compare;
                      case 29765:
                        resword = &wordlist[3109];
                        goto compare;
                      case 29970:
                        resword = &wordlist[3110];
                        goto compare;
                      case 30288:
                        resword = &wordlist[3111];
                        goto compare;
                      case 30561:
                        resword = &wordlist[3112];
                        goto compare;
                      case 30690:
                        resword = &wordlist[3113];
                        goto compare;
                      case 30821:
                        resword = &wordlist[3114];
                        goto compare;
                      case 30869:
                        resword = &wordlist[3115];
                        goto compare;
                      case 30927:
                        resword = &wordlist[3116];
                        goto compare;
                      case 31083:
                        resword = &wordlist[3117];
                        goto compare;
                      case 31983:
                        resword = &wordlist[3118];
                        goto compare;
                      case 32601:
                        resword = &wordlist[3119];
                        goto compare;
                      case 35825:
                        resword = &wordlist[3120];
                        goto compare;
                      case 36208:
                        resword = &wordlist[3121];
                        goto compare;
                      case 36444:
                        resword = &wordlist[3122];
                        goto compare;
                      case 39050:
                        resword = &wordlist[3123];
                        goto compare;
                      case 41153:
                        resword = &wordlist[3124];
                        goto compare;
                      case 42315:
                        resword = &wordlist[3125];
                        goto compare;
                      case 45850:
                        resword = &wordlist[3126];
                        goto compare;
                      case 56059:
                        resword = &wordlist[3127];
                        goto compare;
                    }
                }
            }
          return 0;
        compare:
          {
            register const char *s = resword->name;

            if (*str == *s && !strcmp (str + 1, s + 1))
              return resword;
          }
        }
    }
  return 0;
}
