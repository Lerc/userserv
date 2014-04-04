/* C code produced by gperf version 3.0.4 */
/* Command-line: gperf -t --ignore-case -S 4 mimetypes.gperf  */
/* Computed positions: -k'1-4,6,$' */

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
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 2 "mimetypes.gperf"
struct fext { const char * name; const char * content_type; };

#define TOTAL_KEYWORDS 981
#define MIN_WORD_LENGTH 1
#define MAX_WORD_LENGTH 11
#define MIN_HASH_VALUE 1
#define MAX_HASH_VALUE 5125
/* maximum key range = 5125, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRCMP
#define GPERF_CASE_STRCMP 1
static int
gperf_case_strcmp (s1, s2)
     register const char *s1;
     register const char *s2;
{
  for (;;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        continue;
      return (int)c1 - (int)c2;
    }
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned short asso_values[] =
    {
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126,    5, 5126, 5126,   20,   25,
       595,  395,  840,   70,    5,   60,    5,    5, 5126, 5126,
      5126, 5126, 5126, 5126, 5126,  930,  761,   45,  130,  985,
       100,  965, 1329,  605,  866,  313,  115,    5, 1254,  726,
        55,  451,  555,    0,   15,  421,  195,  425,   40,  788,
       637, 5126, 5126, 5126, 5126,    0,    0,  930,  761,   45,
       130,  985,  100,  965, 1329,  605,  866,  313,  115,    5,
      1254,  726,   55,  451,  555,    0,   15,  421,  195,  425,
        40,  788,  637,  120,  451,   25,  557,  318,  490, 1017,
        57,  820,  425,  819,    6,   92,   66,   41,   63, 1561,
        20,  395, 5126, 5126, 5126, 5126, 5126, 5126,   15,  421,
       195,  425,   40,  788,  637,  120,  451,   25,  557,  318,
       490, 1017,   57,  820,  425,  819,    6,   92,   66,   41,
        63, 1561,   20,  395, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126, 5126,
      5126, 5126, 5126, 5126, 5126, 5126, 5126
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]+51];
      /*FALLTHROUGH*/
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
struct fext *
findExtensionInMap (str, len)
     register const char *str;
     register unsigned int len;
{
  static struct fext wordlist[] =
    {
#line 903 "mimetypes.gperf"
      {"s", "text/x-asm"},
#line 885 "mimetypes.gperf"
      {"ms", "text/troff"},
#line 880 "mimetypes.gperf"
      {"t", "text/troff"},
#line 863 "mimetypes.gperf"
      {"css", "text/css"},
#line 510 "mimetypes.gperf"
      {"xsm", "application/vnd.syncml+xml"},
#line 100 "mimetypes.gperf"
      {"ps", "application/postscript"},
#line 52 "mimetypes.gperf"
      {"mets", "application/mets+xml"},
#line 505 "mimetypes.gperf"
      {"sus", "application/vnd.sus-calendar"},
#line 919 "mimetypes.gperf"
      {"pas", "text/x-pascal"},
#line 394 "mimetypes.gperf"
      {"mus", "application/vnd.musician"},
#line 595 "mimetypes.gperf"
      {"cst", "application/x-director"},
#line 905 "mimetypes.gperf"
      {"c", "text/x-c"},
#line 373 "mimetypes.gperf"
      {"cat", "application/vnd.ms-pki.seccat"},
#line 723 "mimetypes.gperf"
      {"xvm", "application/xv+xml"},
#line 850 "mimetypes.gperf"
      {"mts", "model/vnd.mts"},
#line 469 "mimetypes.gperf"
      {"st", "application/vnd.sailingtracker.track"},
#line 918 "mimetypes.gperf"
      {"p", "text/x-pascal"},
#line 744 "mimetypes.gperf"
      {"s3m", "audio/s3m"},
#line 649 "mimetypes.gperf"
      {"com", "application/x-msdownload"},
#line 869 "mimetypes.gperf"
      {"text", "text/plain"},
#line 215 "mimetypes.gperf"
      {"svc", "application/vnd.dvb.service"},
#line 687 "mimetypes.gperf"
      {"tex", "application/x-tex"},
#line 808 "mimetypes.gperf"
      {"fst", "image/vnd.fst"},
#line 382 "mimetypes.gperf"
      {"potm", "application/vnd.ms-powerpoint.template.macroenabled.12"},
#line 377 "mimetypes.gperf"
      {"pot", "application/vnd.ms-powerpoint"},
#line 41 "mimetypes.gperf"
      {"mads", "application/mads+xml"},
#line 273 "mimetypes.gperf"
      {"les", "application/vnd.hhe.lesson-player"},
#line 183 "mimetypes.gperf"
      {"csp", "application/vnd.commonspace"},
#line 676 "mimetypes.gperf"
      {"xap", "application/x-silverlight-app"},
#line 515 "mimetypes.gperf"
      {"cap", "application/vnd.tcpdump.pcap"},
#line 958 "mimetypes.gperf"
      {"fvt", "video/vnd.fvt"},
#line 369 "mimetypes.gperf"
      {"chm", "application/vnd.ms-htmlhelp"},
#line 506 "mimetypes.gperf"
      {"susp", "application/vnd.sus-calendar"},
#line 49 "mimetypes.gperf"
      {"mscml", "application/mediaservercontrol+xml"},
#line 496 "mimetypes.gperf"
      {"stc", "application/vnd.sun.xml.calc.template"},
#line 712 "mimetypes.gperf"
      {"xht", "application/xhtml+xml"},
#line 718 "mimetypes.gperf"
      {"xslt", "application/xslt+xml"},
#line 53 "mimetypes.gperf"
      {"mods", "application/mods+xml"},
#line 117 "mimetypes.gperf"
      {"scs", "application/scvp-cv-response"},
#line 240 "mimetypes.gperf"
      {"fsc", "application/vnd.fsc.weblaunch"},
#line 615 "mimetypes.gperf"
      {"ttc", "application/x-font-ttf"},
#line 912 "mimetypes.gperf"
      {"f", "text/x-fortran"},
#line 530 "mimetypes.gperf"
      {"vss", "application/vnd.visio"},
#line 335 "mimetypes.gperf"
      {"scm", "application/vnd.lotus-screencam"},
#line 223 "mimetypes.gperf"
      {"ssf", "application/vnd.epson.ssf"},
#line 716 "mimetypes.gperf"
      {"xop", "application/xop+xml"},
#line 433 "mimetypes.gperf"
      {"potx", "application/vnd.openxmlformats-officedocument.presentationml.template"},
#line 479 "mimetypes.gperf"
      {"twds", "application/vnd.simtech-mindmapper"},
#line 220 "mimetypes.gperf"
      {"msf", "application/vnd.epson.msf"},
#line 386 "mimetypes.gperf"
      {"dotm", "application/vnd.ms-word.template.macroenabled.12"},
#line 549 "mimetypes.gperf"
      {"saf", "application/vnd.yamaha.smaf-audio"},
#line 58 "mimetypes.gperf"
      {"dot", "application/msword"},
#line 372 "mimetypes.gperf"
      {"thmx", "application/vnd.ms-officetheme"},
#line 750 "mimetypes.gperf"
      {"dts", "audio/vnd.dts"},
#line 87 "mimetypes.gperf"
      {"p10", "application/pkcs10"},
#line 875 "mimetypes.gperf"
      {"dsc", "text/prs.lines.tag"},
#line 18 "mimetypes.gperf"
      {"dssc", "application/dssc+der"},
#line 529 "mimetypes.gperf"
      {"vst", "application/vnd.visio"},
#line 286 "mimetypes.gperf"
      {"sc", "application/vnd.ibm.secure-container"},
#line 350 "mimetypes.gperf"
      {"msl", "application/vnd.mobius.msl"},
#line 132 "mimetypes.gperf"
      {"ssml", "application/ssml+xml"},
#line 385 "mimetypes.gperf"
      {"docm", "application/vnd.ms-word.document.macroenabled.12"},
#line 473 "mimetypes.gperf"
      {"semf", "application/vnd.semf"},
#line 339 "mimetypes.gperf"
      {"mc1", "application/vnd.medcalcdata"},
#line 915 "mimetypes.gperf"
      {"f90", "text/x-fortran"},
#line 763 "mimetypes.gperf"
      {"caf", "audio/x-caf"},
#line 610 "mimetypes.gperf"
      {"psf", "application/x-font-linux-psf"},
#line 675 "mimetypes.gperf"
      {"swf", "application/x-shockwave-flash"},
#line 752 "mimetypes.gperf"
      {"lvp", "audio/vnd.lucent.voice"},
#line 341 "mimetypes.gperf"
      {"mwf", "application/vnd.mfer"},
#line 596 "mimetypes.gperf"
      {"cct", "application/x-director"},
#line 714 "mimetypes.gperf"
      {"xsl", "application/xml"},
#line 57 "mimetypes.gperf"
      {"doc", "application/msword"},
#line 829 "mimetypes.gperf"
      {"pct", "image/x-pict"},
#line 136 "mimetypes.gperf"
      {"tsd", "application/timestamped-data"},
#line 233 "mimetypes.gperf"
      {"ftc", "application/vnd.fluxtime.clip"},
#line 437 "mimetypes.gperf"
      {"dotx", "application/vnd.openxmlformats-officedocument.wordprocessingml.template"},
#line 906 "mimetypes.gperf"
      {"cc", "text/x-c"},
#line 778 "mimetypes.gperf"
      {"csml", "chemical/x-csml"},
#line 336 "mimetypes.gperf"
      {"lwp", "application/vnd.lotus-wordpro"},
#line 708 "mimetypes.gperf"
      {"xaml", "application/xaml+xml"},
#line 541 "mimetypes.gperf"
      {"stf", "application/vnd.wt.stf"},
#line 301 "mimetypes.gperf"
      {"fcs", "application/vnd.isac.fcs"},
#line 711 "mimetypes.gperf"
      {"xhtml", "application/xhtml+xml"},
#line 507 "mimetypes.gperf"
      {"svd", "application/vnd.svd"},
#line 719 "mimetypes.gperf"
      {"xspf", "application/xspf+xml"},
#line 472 "mimetypes.gperf"
      {"semd", "application/vnd.semd"},
#line 614 "mimetypes.gperf"
      {"ttf", "application/x-font-ttf"},
#line 821 "mimetypes.gperf"
      {"fhc", "image/x-freehand"},
#line 38 "mimetypes.gperf"
      {"lostxml", "application/lost+xml"},
#line 69 "mimetypes.gperf"
      {"dump", "application/octet-stream"},
#line 436 "mimetypes.gperf"
      {"docx", "application/vnd.openxmlformats-officedocument.wordprocessingml.document"},
#line 722 "mimetypes.gperf"
      {"xvml", "application/xv+xml"},
#line 123 "mimetypes.gperf"
      {"shf", "application/shf+xml"},
#line 796 "mimetypes.gperf"
      {"psd", "image/vnd.adobe.photoshop"},
#line 374 "mimetypes.gperf"
      {"stl", "application/vnd.ms-pki.stl"},
#line 827 "mimetypes.gperf"
      {"pcx", "image/x-pcx"},
#line 567 "mimetypes.gperf"
      {"vox", "application/x-authorware-bin"},
#line 355 "mimetypes.gperf"
      {"xul", "application/vnd.mozilla.xul+xml"},
#line 886 "mimetypes.gperf"
      {"ttl", "text/turtle"},
#line 478 "mimetypes.gperf"
      {"twd", "application/vnd.simtech-mindmapper"},
#line 824 "mimetypes.gperf"
      {"fh7", "image/x-freehand"},
#line 346 "mimetypes.gperf"
      {"daf", "application/vnd.mobius.daf"},
#line 222 "mimetypes.gperf"
      {"slt", "application/vnd.epson.salt"},
#line 498 "mimetypes.gperf"
      {"std", "application/vnd.sun.xml.draw.template"},
#line 358 "mimetypes.gperf"
      {"xls", "application/vnd.ms-excel"},
#line 823 "mimetypes.gperf"
      {"fh5", "image/x-freehand"},
#line 465 "mimetypes.gperf"
      {"cod", "application/vnd.rim.cod"},
#line 838 "mimetypes.gperf"
      {"xwd", "image/x-xwindowdump"},
#line 131 "mimetypes.gperf"
      {"ssdl", "application/ssdl+xml"},
#line 359 "mimetypes.gperf"
      {"xlm", "application/vnd.ms-excel"},
#line 366 "mimetypes.gperf"
      {"xlsm", "application/vnd.ms-excel.sheet.macroenabled.12"},
#line 871 "mimetypes.gperf"
      {"def", "text/plain"},
#line 91 "mimetypes.gperf"
      {"p8", "application/pkcs8"},
#line 97 "mimetypes.gperf"
      {"pls", "application/pls+xml"},
#line 367 "mimetypes.gperf"
      {"xltm", "application/vnd.ms-excel.template.macroenabled.12"},
#line 362 "mimetypes.gperf"
      {"xlt", "application/vnd.ms-excel"},
#line 924 "mimetypes.gperf"
      {"vcs", "text/x-vcalendar"},
#line 847 "mimetypes.gperf"
      {"dwf", "model/vnd.dwf"},
#line 858 "mimetypes.gperf"
      {"x3d", "model/x3d+xml"},
#line 533 "mimetypes.gperf"
      {"vsf", "application/vnd.vsf"},
#line 9 "mimetypes.gperf"
      {"ccxml", "application/ccxml+xml"},
#line 327 "mimetypes.gperf"
      {"lasxml", "application/vnd.las.las+xml"},
#line 317 "mimetypes.gperf"
      {"kwt", "application/vnd.kde.kword"},
#line 239 "mimetypes.gperf"
      {"ltf", "application/vnd.frogans.ltf"},
#line 879 "mimetypes.gperf"
      {"tsv", "text/tab-separated-values"},
#line 315 "mimetypes.gperf"
      {"ksp", "application/vnd.kde.kspread"},
#line 210 "mimetypes.gperf"
      {"mlp", "application/vnd.dolby.mlp"},
#line 434 "mimetypes.gperf"
      {"xlsx", "application/vnd.openxmlformats-officedocument.spreadsheetml.sheet"},
#line 686 "mimetypes.gperf"
      {"tcl", "application/x-tcl"},
#line 864 "mimetypes.gperf"
      {"csv", "text/csv"},
#line 361 "mimetypes.gperf"
      {"xlc", "application/vnd.ms-excel"},
#line 612 "mimetypes.gperf"
      {"pcf", "application/x-font-pcf"},
#line 508 "mimetypes.gperf"
      {"sis", "application/vnd.symbian.install"},
#line 946 "mimetypes.gperf"
      {"mov", "video/quicktime"},
#line 435 "mimetypes.gperf"
      {"xltx", "application/vnd.openxmlformats-officedocument.spreadsheetml.template"},
#line 660 "mimetypes.gperf"
      {"scd", "application/x-msschedule"},
#line 148 "mimetypes.gperf"
      {"fcdt", "application/vnd.adobe.formscentral.fcdt"},
#line 380 "mimetypes.gperf"
      {"sldm", "application/vnd.ms-powerpoint.slide.macroenabled.12"},
#line 338 "mimetypes.gperf"
      {"mcd", "application/vnd.mcd"},
#line 528 "mimetypes.gperf"
      {"vsd", "application/vnd.visio"},
#line 953 "mimetypes.gperf"
      {"uvs", "video/vnd.dece.sd"},
#line 351 "mimetypes.gperf"
      {"plc", "application/vnd.mobius.plc"},
#line 961 "mimetypes.gperf"
      {"pyv", "video/vnd.ms-playready.media.pyv"},
#line 527 "mimetypes.gperf"
      {"vcx", "application/vnd.vcx"},
#line 836 "mimetypes.gperf"
      {"xbm", "image/x-xbitmap"},
#line 949 "mimetypes.gperf"
      {"uvm", "video/vnd.dece.mobile"},
#line 646 "mimetypes.gperf"
      {"clp", "application/x-msclip"},
#line 512 "mimetypes.gperf"
      {"xdm", "application/vnd.syncml.dm+xml"},
#line 221 "mimetypes.gperf"
      {"qam", "application/vnd.epson.quickanime"},
#line 721 "mimetypes.gperf"
      {"xhvml", "application/xv+xml"},
#line 278 "mimetypes.gperf"
      {"pcl", "application/vnd.hp-pcl"},
#line 678 "mimetypes.gperf"
      {"sit", "application/x-stuffit"},
#line 715 "mimetypes.gperf"
      {"dtd", "application/xml-dtd"},
#line 788 "mimetypes.gperf"
      {"ktx", "image/ktx"},
#line 831 "mimetypes.gperf"
      {"pbm", "image/x-portable-bitmap"},
#line 202 "mimetypes.gperf"
      {"uvt", "application/vnd.dece.ttml+xml"},
#line 494 "mimetypes.gperf"
      {"sm", "application/vnd.stepmania.stepchart"},
#line 249 "mimetypes.gperf"
      {"fzs", "application/vnd.fuzzysheet"},
#line 579 "mimetypes.gperf"
      {"cbt", "application/x-cbr"},
#line 896 "mimetypes.gperf"
      {"flx", "text/vnd.fmi.flexstor"},
#line 683 "mimetypes.gperf"
      {"t3", "application/x-t3vm-image"},
#line 19 "mimetypes.gperf"
      {"xdssc", "application/dssc+xml"},
#line 486 "mimetypes.gperf"
      {"sdc", "application/vnd.stardivision.calc"},
#line 767 "mimetypes.gperf"
      {"wax", "audio/x-ms-wax"},
#line 806 "mimetypes.gperf"
      {"fbs", "image/vnd.fastbidsheet"},
#line 279 "mimetypes.gperf"
      {"pclxl", "application/vnd.hp-pclxl"},
#line 942 "mimetypes.gperf"
      {"m1v", "video/mpeg"},
#line 431 "mimetypes.gperf"
      {"sldx", "application/vnd.openxmlformats-officedocument.presentationml.slide"},
#line 15 "mimetypes.gperf"
      {"cu", "application/cu-seeme"},
#line 509 "mimetypes.gperf"
      {"sisx", "application/vnd.symbian.install"},
#line 773 "mimetypes.gperf"
      {"xm", "audio/xm"},
#line 120 "mimetypes.gperf"
      {"sdp", "application/sdp"},
#line 164 "mimetypes.gperf"
      {"m3u8", "application/vnd.apple.mpegurl"},
#line 204 "mimetypes.gperf"
      {"uvx", "application/vnd.dece.unspecified"},
#line 102 "mimetypes.gperf"
      {"pskcxml", "application/pskc+xml"},
#line 458 "mimetypes.gperf"
      {"qwt", "application/vnd.quark.quarkxpress"},
#line 803 "mimetypes.gperf"
      {"djv", "image/vnd.djvu"},
#line 980 "mimetypes.gperf"
      {"wvx", "video/x-ms-wvx"},
#line 679 "mimetypes.gperf"
      {"sitx", "application/x-stuffitx"},
#line 774 "mimetypes.gperf"
      {"cdx", "chemical/x-cdx"},
#line 945 "mimetypes.gperf"
      {"qt", "video/quicktime"},
#line 697 "mimetypes.gperf"
      {"xlf", "application/x-xliff+xml"},
#line 108 "mimetypes.gperf"
      {"rs", "application/rls-services+xml"},
#line 113 "mimetypes.gperf"
      {"rss", "application/rss+xml"},
#line 972 "mimetypes.gperf"
      {"mks", "video/x-matroska"},
#line 325 "mimetypes.gperf"
      {"skm", "application/vnd.koan"},
#line 818 "mimetypes.gperf"
      {"ras", "image/x-cmu-raster"},
#line 951 "mimetypes.gperf"
      {"uvp", "video/vnd.dece.pd"},
#line 449 "mimetypes.gperf"
      {"plf", "application/vnd.pocketlearn"},
#line 151 "mimetypes.gperf"
      {"xdp", "application/vnd.adobe.xdp+xml"},
#line 769 "mimetypes.gperf"
      {"ram", "audio/x-pn-realaudio"},
#line 347 "mimetypes.gperf"
      {"dis", "application/vnd.mobius.dis"},
#line 581 "mimetypes.gperf"
      {"cb7", "application/x-cbr"},
#line 324 "mimetypes.gperf"
      {"skt", "application/vnd.koan"},
#line 925 "mimetypes.gperf"
      {"vcf", "text/x-vcard"},
#line 234 "mimetypes.gperf"
      {"fm", "application/vnd.framemaker"},
#line 604 "mimetypes.gperf"
      {"res", "application/x-dtbresource+xml"},
#line 828 "mimetypes.gperf"
      {"pic", "image/x-pict"},
#line 872 "mimetypes.gperf"
      {"list", "text/plain"},
#line 284 "mimetypes.gperf"
      {"list3820", "application/vnd.ibm.modcap"},
#line 65 "mimetypes.gperf"
      {"dist", "application/octet-stream"},
#line 819 "mimetypes.gperf"
      {"cmx", "image/x-cmx"},
#line 61 "mimetypes.gperf"
      {"dms", "application/octet-stream"},
#line 185 "mimetypes.gperf"
      {"cmc", "application/vnd.cosmocaller"},
#line 389 "mimetypes.gperf"
      {"wcm", "application/vnd.ms-works"},
#line 171 "mimetypes.gperf"
      {"cdxml", "application/vnd.chemdraw+xml"},
#line 316 "mimetypes.gperf"
      {"kwd", "application/vnd.kde.kword"},
#line 551 "mimetypes.gperf"
      {"cmp", "application/vnd.yellowriver-custom-menu"},
#line 532 "mimetypes.gperf"
      {"vis", "application/vnd.visionary"},
#line 878 "mimetypes.gperf"
      {"sgm", "text/sgml"},
#line 582 "mimetypes.gperf"
      {"vcd", "application/x-cdlink"},
#line 677 "mimetypes.gperf"
      {"sql", "application/x-sql"},
#line 345 "mimetypes.gperf"
      {"mif", "application/vnd.mif"},
#line 115 "mimetypes.gperf"
      {"sbml", "application/sbml+xml"},
#line 954 "mimetypes.gperf"
      {"uvvs", "video/vnd.dece.sd"},
#line 856 "mimetypes.gperf"
      {"x3dv", "model/x3d+vrml"},
#line 198 "mimetypes.gperf"
      {"uvf", "application/vnd.dece.data"},
#line 709 "mimetypes.gperf"
      {"xdf", "application/xcap-diff+xml"},
#line 795 "mimetypes.gperf"
      {"tif", "image/tiff"},
#line 322 "mimetypes.gperf"
      {"skp", "application/vnd.koan"},
#line 950 "mimetypes.gperf"
      {"uvvm", "video/vnd.dece.mobile"},
#line 664 "mimetypes.gperf"
      {"cdf", "application/x-netcdf"},
#line 911 "mimetypes.gperf"
      {"dic", "text/x-c"},
#line 648 "mimetypes.gperf"
      {"dll", "application/x-msdownload"},
#line 82 "mimetypes.gperf"
      {"pdf", "application/pdf"},
#line 745 "mimetypes.gperf"
      {"sil", "audio/silk"},
#line 488 "mimetypes.gperf"
      {"sdd", "application/vnd.stardivision.impress"},
#line 203 "mimetypes.gperf"
      {"uvvt", "application/vnd.dece.ttml+xml"},
#line 489 "mimetypes.gperf"
      {"smf", "application/vnd.stardivision.math"},
#line 815 "mimetypes.gperf"
      {"xif", "image/vnd.xiff"},
#line 781 "mimetypes.gperf"
      {"cgm", "image/cgm"},
#line 480 "mimetypes.gperf"
      {"mmf", "application/vnd.smaf"},
#line 775 "mimetypes.gperf"
      {"cif", "chemical/x-cif"},
#line 601 "mimetypes.gperf"
      {"wad", "application/x-doom"},
#line 832 "mimetypes.gperf"
      {"pgm", "image/x-portable-graymap"},
#line 170 "mimetypes.gperf"
      {"rep", "application/vnd.businessobjects"},
#line 189 "mimetypes.gperf"
      {"clkt", "application/vnd.crick.clicker.template"},
#line 826 "mimetypes.gperf"
      {"sid", "image/x-mrsid-image"},
#line 526 "mimetypes.gperf"
      {"uoml", "application/vnd.uoml+xml"},
#line 730 "mimetypes.gperf"
      {"mid", "audio/midi"},
#line 28 "mimetypes.gperf"
      {"stk", "application/hyperstudio"},
#line 248 "mimetypes.gperf"
      {"xbd", "application/vnd.fujixerox.docuworks.binder"},
#line 200 "mimetypes.gperf"
      {"uvd", "application/vnd.dece.data"},
#line 228 "mimetypes.gperf"
      {"fdf", "application/vnd.fdf"},
#line 356 "mimetypes.gperf"
      {"cil", "application/vnd.ms-artgalry"},
#line 876 "mimetypes.gperf"
      {"rtx", "text/richtext"},
#line 516 "mimetypes.gperf"
      {"dmp", "application/vnd.tcpdump.pcap"},
#line 196 "mimetypes.gperf"
      {"dart", "application/vnd.dart"},
#line 450 "mimetypes.gperf"
      {"pbd", "application/vnd.powerbuilder6"},
#line 205 "mimetypes.gperf"
      {"uvvx", "application/vnd.dece.unspecified"},
#line 283 "mimetypes.gperf"
      {"listafp", "application/vnd.ibm.modcap"},
#line 241 "mimetypes.gperf"
      {"oas", "application/vnd.fujitsu.oasys"},
#line 482 "mimetypes.gperf"
      {"sdkm", "application/vnd.solent.sdkm+xml"},
#line 309 "mimetypes.gperf"
      {"chrt", "application/vnd.kde.kchart"},
#line 438 "mimetypes.gperf"
      {"mgp", "application/vnd.osgeo.mapguide.package"},
#line 172 "mimetypes.gperf"
      {"mmd", "application/vnd.chipnuts.karaoke-mmd"},
#line 290 "mimetypes.gperf"
      {"ivp", "application/vnd.immervision-ivp"},
#line 186 "mimetypes.gperf"
      {"clkx", "application/vnd.crick.clicker"},
#line 713 "mimetypes.gperf"
      {"xml", "application/xml"},
#line 777 "mimetypes.gperf"
      {"cml", "chemical/x-cml"},
#line 794 "mimetypes.gperf"
      {"tiff", "image/tiff"},
#line 952 "mimetypes.gperf"
      {"uvvp", "video/vnd.dece.pd"},
#line 457 "mimetypes.gperf"
      {"qwd", "application/vnd.quark.quarkxpress"},
#line 192 "mimetypes.gperf"
      {"pml", "application/vnd.ctc-posml"},
#line 64 "mimetypes.gperf"
      {"so", "application/octet-stream"},
#line 620 "mimetypes.gperf"
      {"woff", "application/x-font-woff"},
#line 598 "mimetypes.gperf"
      {"w3d", "application/x-director"},
#line 16 "mimetypes.gperf"
      {"davmount", "application/davmount+xml"},
#line 188 "mimetypes.gperf"
      {"clkp", "application/vnd.crick.clicker.palette"},
#line 485 "mimetypes.gperf"
      {"sfs", "application/vnd.spotfire.sfs"},
#line 700 "mimetypes.gperf"
      {"z1", "application/x-zmachine"},
#line 558 "mimetypes.gperf"
      {"wsdl", "application/wsdl+xml"},
#line 328 "mimetypes.gperf"
      {"lbd", "application/vnd.llamagraphics.life-balance.desktop"},
#line 861 "mimetypes.gperf"
      {"ics", "text/calendar"},
#line 83 "mimetypes.gperf"
      {"pgp", "application/pgp-encrypted"},
#line 342 "mimetypes.gperf"
      {"mfm", "application/vnd.mfmp"},
#line 650 "mimetypes.gperf"
      {"bat", "application/x-msdownload"},
#line 475 "mimetypes.gperf"
      {"itp", "application/vnd.shana.informed.formtemplate"},
#line 968 "mimetypes.gperf"
      {"flv", "video/x-flv"},
#line 288 "mimetypes.gperf"
      {"icm", "application/vnd.iccprofile"},
#line 688 "mimetypes.gperf"
      {"tfm", "application/x-tex-tfm"},
#line 246 "mimetypes.gperf"
      {"ddd", "application/vnd.fujixerox.ddd"},
#line 323 "mimetypes.gperf"
      {"skd", "application/vnd.koan"},
#line 422 "mimetypes.gperf"
      {"ots", "application/vnd.oasis.opendocument.spreadsheet-template"},
#line 624 "mimetypes.gperf"
      {"ulx", "application/x-glulx"},
#line 817 "mimetypes.gperf"
      {"3ds", "image/x-3ds"},
#line 112 "mimetypes.gperf"
      {"rsd", "application/rsd+xml"},
#line 427 "mimetypes.gperf"
      {"xo", "application/vnd.olpc-sugar"},
#line 110 "mimetypes.gperf"
      {"mft", "application/rpki-manifest"},
#line 772 "mimetypes.gperf"
      {"wav", "audio/x-wav"},
#line 583 "mimetypes.gperf"
      {"cfs", "application/x-cfs-compressed"},
#line 168 "mimetypes.gperf"
      {"mpm", "application/vnd.blueice.multipass"},
#line 463 "mimetypes.gperf"
      {"musicxml", "application/vnd.recordare.musicxml+xml"},
#line 661 "mimetypes.gperf"
      {"trm", "application/x-msterminal"},
#line 784 "mimetypes.gperf"
      {"ief", "image/ief"},
#line 191 "mimetypes.gperf"
      {"wbs", "application/vnd.criticaltools.wbs+xml"},
#line 114 "mimetypes.gperf"
      {"rtf", "application/rtf"},
#line 425 "mimetypes.gperf"
      {"ott", "application/vnd.oasis.opendocument.text-template"},
#line 680 "mimetypes.gperf"
      {"srt", "application/x-subrip"},
#line 955 "mimetypes.gperf"
      {"uvv", "video/vnd.dece.video"},
#line 618 "mimetypes.gperf"
      {"pfm", "application/x-font-type1"},
#line 384 "mimetypes.gperf"
      {"mpt", "application/vnd.ms-project"},
#line 591 "mimetypes.gperf"
      {"dgc", "application/x-dgc-compressed"},
#line 199 "mimetypes.gperf"
      {"uvvf", "application/vnd.dece.data"},
#line 392 "mimetypes.gperf"
      {"xps", "application/vnd.ms-xpsdocument"},
#line 518 "mimetypes.gperf"
      {"tpt", "application/vnd.trid.tpt"},
#line 776 "mimetypes.gperf"
      {"cmdf", "chemical/x-cmdf"},
#line 492 "mimetypes.gperf"
      {"sgl", "application/vnd.stardivision.writer-global"},
#line 837 "mimetypes.gperf"
      {"xpm", "image/x-xpixmap"},
#line 35 "mimetypes.gperf"
      {"js", "application/javascript"},
#line 877 "mimetypes.gperf"
      {"sgml", "text/sgml"},
#line 376 "mimetypes.gperf"
      {"pps", "application/vnd.ms-powerpoint"},
#line 244 "mimetypes.gperf"
      {"fg5", "application/vnd.fujitsu.oasysgp"},
#line 983 "mimetypes.gperf"
      {"smv", "video/x-smv"},
#line 833 "mimetypes.gperf"
      {"ppm", "image/x-portable-pixmap"},
#line 381 "mimetypes.gperf"
      {"ppsm", "application/vnd.ms-powerpoint.slideshow.macroenabled.12"},
#line 287 "mimetypes.gperf"
      {"icc", "application/vnd.iccprofile"},
#line 302 "mimetypes.gperf"
      {"jam", "application/vnd.jam"},
#line 695 "mimetypes.gperf"
      {"crt", "application/x-x509-ca-cert"},
#line 40 "mimetypes.gperf"
      {"cpt", "application/mac-compactpro"},
#line 891 "mimetypes.gperf"
      {"curl", "text/vnd.curl"},
#line 451 "mimetypes.gperf"
      {"box", "application/vnd.previewsystems.box"},
#line 127 "mimetypes.gperf"
      {"srx", "application/sparql-results+xml"},
#line 743 "mimetypes.gperf"
      {"spx", "audio/ogg"},
#line 379 "mimetypes.gperf"
      {"pptm", "application/vnd.ms-powerpoint.presentation.macroenabled.12"},
#line 375 "mimetypes.gperf"
      {"ppt", "application/vnd.ms-powerpoint"},
#line 923 "mimetypes.gperf"
      {"uu", "text/x-uuencode"},
#line 411 "mimetypes.gperf"
      {"otc", "application/vnd.oasis.opendocument.chart-template"},
#line 693 "mimetypes.gperf"
      {"src", "application/x-wais-source"},
#line 669 "mimetypes.gperf"
      {"spc", "application/x-pkcs7-certificates"},
#line 882 "mimetypes.gperf"
      {"roff", "text/troff"},
#line 42 "mimetypes.gperf"
      {"mrc", "application/marc"},
#line 354 "mimetypes.gperf"
      {"mpc", "application/vnd.mophun.certificate"},
#line 201 "mimetypes.gperf"
      {"uvvd", "application/vnd.dece.data"},
#line 977 "mimetypes.gperf"
      {"wm", "video/x-ms-wm"},
#line 444 "mimetypes.gperf"
      {"paw", "application/vnd.pawaafile"},
#line 90 "mimetypes.gperf"
      {"p7s", "application/pkcs7-signature"},
#line 667 "mimetypes.gperf"
      {"pfx", "application/x-pkcs12"},
#line 653 "mimetypes.gperf"
      {"m13", "application/x-msmediaview"},
#line 420 "mimetypes.gperf"
      {"otp", "application/vnd.oasis.opendocument.presentation-template"},
#line 119 "mimetypes.gperf"
      {"spp", "application/scvp-vp-response"},
#line 88 "mimetypes.gperf"
      {"p7m", "application/pkcs7-mime"},
#line 547 "mimetypes.gperf"
      {"osf", "application/vnd.yamaha.openscoreformat"},
#line 383 "mimetypes.gperf"
      {"mpp", "application/vnd.ms-project"},
#line 294 "mimetypes.gperf"
      {"xpx", "application/vnd.intercon.formnet"},
#line 504 "mimetypes.gperf"
      {"stw", "application/vnd.sun.xml.writer.template"},
#line 371 "mimetypes.gperf"
      {"lrm", "application/vnd.ms-lrm"},
#line 569 "mimetypes.gperf"
      {"aas", "application/x-authorware-seg"},
#line 904 "mimetypes.gperf"
      {"asm", "text/x-asm"},
#line 766 "mimetypes.gperf"
      {"m3u", "audio/x-mpegurl"},
#line 44 "mimetypes.gperf"
      {"ma", "application/mathematica"},
#line 43 "mimetypes.gperf"
      {"mrcx", "application/marcxml+xml"},
#line 970 "mimetypes.gperf"
      {"mkv", "video/x-matroska"},
#line 707 "mimetypes.gperf"
      {"z8", "application/x-zmachine"},
#line 568 "mimetypes.gperf"
      {"aam", "application/x-authorware-map"},
#line 432 "mimetypes.gperf"
      {"ppsx", "application/vnd.openxmlformats-officedocument.presentationml.slideshow"},
#line 101 "mimetypes.gperf"
      {"cww", "application/prs.cww"},
#line 812 "mimetypes.gperf"
      {"wdp", "image/vnd.ms-photo"},
#line 814 "mimetypes.gperf"
      {"wbmp", "image/vnd.wap.wbmp"},
#line 810 "mimetypes.gperf"
      {"rlc", "image/vnd.fujixerox.edmics-rlc"},
#line 636 "mimetypes.gperf"
      {"prc", "application/x-mobipocket-ebook"},
#line 430 "mimetypes.gperf"
      {"pptx", "application/vnd.openxmlformats-officedocument.presentationml.presentation"},
#line 908 "mimetypes.gperf"
      {"cpp", "text/x-c"},
#line 388 "mimetypes.gperf"
      {"wks", "application/vnd.ms-works"},
#line 106 "mimetypes.gperf"
      {"rl", "application/resource-lists+xml"},
#line 684 "mimetypes.gperf"
      {"gam", "application/x-tads"},
#line 979 "mimetypes.gperf"
      {"wmx", "video/x-ms-wmx"},
#line 599 "mimetypes.gperf"
      {"fgd", "application/x-director"},
#line 483 "mimetypes.gperf"
      {"sdkd", "application/vnd.solent.sdkm+xml"},
#line 807 "mimetypes.gperf"
      {"fpx", "image/vnd.fpx"},
#line 439 "mimetypes.gperf"
      {"dp", "application/vnd.osgi.dp"},
#line 672 "mimetypes.gperf"
      {"ris", "application/x-research-info-systems"},
#line 534 "mimetypes.gperf"
      {"wbxml", "application/vnd.wap.wbxml"},
#line 89 "mimetypes.gperf"
      {"p7c", "application/pkcs7-mime"},
#line 454 "mimetypes.gperf"
      {"ptid", "application/vnd.pvi.ptid1"},
#line 975 "mimetypes.gperf"
      {"asx", "video/x-ms-asf"},
#line 611 "mimetypes.gperf"
      {"otf", "application/x-font-otf"},
#line 682 "mimetypes.gperf"
      {"sv4crc", "application/x-sv4crc"},
#line 550 "mimetypes.gperf"
      {"spf", "application/vnd.yamaha.smaf-phrase"},
#line 84 "mimetypes.gperf"
      {"asc", "application/pgp-signature"},
#line 884 "mimetypes.gperf"
      {"me", "text/troff"},
#line 902 "mimetypes.gperf"
      {"wmls", "text/vnd.wap.wmlscript"},
#line 259 "mimetypes.gperf"
      {"kml", "application/vnd.google-earth.kml+xml"},
#line 759 "mimetypes.gperf"
      {"aac", "audio/x-aac"},
#line 964 "mimetypes.gperf"
      {"viv", "video/vnd.vivo"},
#line 54 "mimetypes.gperf"
      {"m21", "application/mp21"},
#line 303 "mimetypes.gperf"
      {"rms", "application/vnd.jcp.javame.midlet-rms"},
#line 956 "mimetypes.gperf"
      {"uvvv", "video/vnd.dece.video"},
#line 466 "mimetypes.gperf"
      {"rm", "application/vnd.rn-realmedia"},
#line 622 "mimetypes.gperf"
      {"spl", "application/x-futuresplash"},
#line 531 "mimetypes.gperf"
      {"vsw", "application/vnd.visio"},
#line 348 "mimetypes.gperf"
      {"mbk", "application/vnd.mobius.mbk"},
#line 898 "mimetypes.gperf"
      {"3dml", "text/vnd.in3d.3dml"},
#line 461 "mimetypes.gperf"
      {"bed", "application/vnd.realvnc.bed"},
#line 268 "mimetypes.gperf"
      {"tpl", "application/vnd.groove-tool-template"},
#line 267 "mimetypes.gperf"
      {"gtm", "application/vnd.groove-tool-message"},
#line 263 "mimetypes.gperf"
      {"gac", "application/vnd.groove-account"},
#line 699 "mimetypes.gperf"
      {"xz", "application/x-xz"},
#line 368 "mimetypes.gperf"
      {"eot", "application/vnd.ms-fontobject"},
#line 86 "mimetypes.gperf"
      {"prf", "application/pics-rules"},
#line 536 "mimetypes.gperf"
      {"wmlsc", "application/vnd.wap.wmlscriptc"},
#line 167 "mimetypes.gperf"
      {"aep", "application/vnd.audiograph"},
#line 830 "mimetypes.gperf"
      {"pnm", "image/x-portable-anymap"},
#line 253 "mimetypes.gperf"
      {"gex", "application/vnd.geometry-explorer"},
#line 914 "mimetypes.gperf"
      {"f77", "text/x-fortran"},
#line 717 "mimetypes.gperf"
      {"xpl", "application/xproc+xml"},
#line 560 "mimetypes.gperf"
      {"7z", "application/x-7z-compressed"},
#line 556 "mimetypes.gperf"
      {"wgt", "application/widget"},
#line 94 "mimetypes.gperf"
      {"crl", "application/pkix-crl"},
#line 370 "mimetypes.gperf"
      {"ims", "application/vnd.ms-ims"},
#line 116 "mimetypes.gperf"
      {"scq", "application/scvp-cv-request"},
#line 280 "mimetypes.gperf"
      {"sfd-hdstx", "application/vnd.hydrostatix.sof-data"},
#line 162 "mimetypes.gperf"
      {"atx", "application/vnd.antix.game-component"},
#line 857 "mimetypes.gperf"
      {"x3dvz", "model/x3d+vrml"},
#line 540 "mimetypes.gperf"
      {"wqd", "application/vnd.wqd"},
#line 145 "mimetypes.gperf"
      {"atc", "application/vnd.acucorp"},
#line 655 "mimetypes.gperf"
      {"wmf", "application/x-msmetafile"},
#line 757 "mimetypes.gperf"
      {"rip", "audio/vnd.rip"},
#line 179 "mimetypes.gperf"
      {"c4p", "application/vnd.clonk.c4group"},
#line 535 "mimetypes.gperf"
      {"wmlc", "application/vnd.wap.wmlc"},
#line 645 "mimetypes.gperf"
      {"crd", "application/x-mscardfile"},
#line 584 "mimetypes.gperf"
      {"chat", "application/x-chat"},
#line 11 "mimetypes.gperf"
      {"cdmic", "application/cdmi-container"},
#line 851 "mimetypes.gperf"
      {"vtu", "model/vnd.vtu"},
#line 63 "mimetypes.gperf"
      {"mar", "application/octet-stream"},
#line 702 "mimetypes.gperf"
      {"z3", "application/x-zmachine"},
#line 107 "mimetypes.gperf"
      {"rld", "application/resource-lists-diff+xml"},
#line 62 "mimetypes.gperf"
      {"lrf", "application/octet-stream"},
#line 193 "mimetypes.gperf"
      {"ppd", "application/vnd.cups-ppd"},
#line 974 "mimetypes.gperf"
      {"asf", "video/x-ms-asf"},
#line 271 "mimetypes.gperf"
      {"zmm", "application/vnd.handheld-entertainment+xml"},
#line 685 "mimetypes.gperf"
      {"tar", "application/x-tar"},
#line 900 "mimetypes.gperf"
      {"jad", "text/vnd.sun.j2me.app-descriptor"},
#line 926 "mimetypes.gperf"
      {"3gp", "video/3gpp"},
#line 396 "mimetypes.gperf"
      {"taglet", "application/vnd.mynfc"},
#line 901 "mimetypes.gperf"
      {"wml", "text/vnd.wap.wml"},
#line 33 "mimetypes.gperf"
      {"ser", "application/java-serialized-object"},
#line 421 "mimetypes.gperf"
      {"ods", "application/vnd.oasis.opendocument.spreadsheet"},
#line 771 "mimetypes.gperf"
      {"rmp", "audio/x-pn-realaudio-plugin"},
#line 921 "mimetypes.gperf"
      {"etx", "text/x-setext"},
#line 152 "mimetypes.gperf"
      {"xfdf", "application/vnd.adobe.xfdf"},
#line 424 "mimetypes.gperf"
      {"odm", "application/vnd.oasis.opendocument.text-master"},
#line 314 "mimetypes.gperf"
      {"kpt", "application/vnd.kde.kpresenter"},
#line 542 "mimetypes.gperf"
      {"xar", "application/vnd.xara"},
#line 92 "mimetypes.gperf"
      {"ac", "application/pkix-attr-cert"},
#line 194 "mimetypes.gperf"
      {"car", "application/vnd.curl.car"},
#line 609 "mimetypes.gperf"
      {"gsf", "application/x-font-ghostscript"},
#line 632 "mimetypes.gperf"
      {"latex", "application/x-latex"},
#line 640 "mimetypes.gperf"
      {"wmd", "application/x-ms-wmd"},
#line 17 "mimetypes.gperf"
      {"dbk", "application/docbook+xml"},
#line 922 "mimetypes.gperf"
      {"sfv", "text/x-sfv"},
#line 103 "mimetypes.gperf"
      {"rdf", "application/rdf+xml"},
#line 423 "mimetypes.gperf"
      {"odt", "application/vnd.oasis.opendocument.text"},
#line 46 "mimetypes.gperf"
      {"mb", "application/mathematica"},
#line 543 "mimetypes.gperf"
      {"xfdl", "application/vnd.xfdl"},
#line 81 "mimetypes.gperf"
      {"xer", "application/patch-ops-error+xml"},
#line 219 "mimetypes.gperf"
      {"esf", "application/vnd.epson.esf"},
#line 802 "mimetypes.gperf"
      {"djvu", "image/vnd.djvu"},
#line 93 "mimetypes.gperf"
      {"cer", "application/pkix-cert"},
#line 511 "mimetypes.gperf"
      {"bdm", "application/vnd.syncml.dm+wbxml"},
#line 726 "mimetypes.gperf"
      {"zip", "application/zip"},
#line 897 "mimetypes.gperf"
      {"gv", "text/vnd.graphviz"},
#line 445 "mimetypes.gperf"
      {"str", "application/vnd.pg.format"},
#line 143 "mimetypes.gperf"
      {"imp", "application/vnd.accpac.simply.imp"},
#line 104 "mimetypes.gperf"
      {"rif", "application/reginfo+xml"},
#line 238 "mimetypes.gperf"
      {"fnc", "application/vnd.frogans.fnc"},
#line 363 "mimetypes.gperf"
      {"xlw", "application/vnd.ms-excel"},
#line 178 "mimetypes.gperf"
      {"c4f", "application/vnd.clonk.c4group"},
#line 12 "mimetypes.gperf"
      {"cdmid", "application/cdmi-domain"},
#line 277 "mimetypes.gperf"
      {"jlt", "application/vnd.hp-jlyt"},
#line 157 "mimetypes.gperf"
      {"acc", "application/vnd.americandynamics.acc"},
#line 613 "mimetypes.gperf"
      {"snf", "application/x-font-snf"},
#line 971 "mimetypes.gperf"
      {"mk3d", "video/x-matroska"},
#line 934 "mimetypes.gperf"
      {"mj2", "video/mj2"},
#line 651 "mimetypes.gperf"
      {"msi", "application/x-msdownload"},
#line 181 "mimetypes.gperf"
      {"c11amc", "application/vnd.cluetrust.cartomobile-config"},
#line 48 "mimetypes.gperf"
      {"mbox", "application/mbox"},
#line 66 "mimetypes.gperf"
      {"distz", "application/octet-stream"},
#line 965 "mimetypes.gperf"
      {"webm", "video/webm"},
#line 410 "mimetypes.gperf"
      {"odc", "application/vnd.oasis.opendocument.chart"},
#line 841 "mimetypes.gperf"
      {"igs", "model/iges"},
#line 387 "mimetypes.gperf"
      {"wps", "application/vnd.ms-works"},
#line 705 "mimetypes.gperf"
      {"z6", "application/x-zmachine"},
#line 853 "mimetypes.gperf"
      {"vrml", "model/vrml"},
#line 140 "mimetypes.gperf"
      {"tcap", "application/vnd.3gpp2.tcap"},
#line 292 "mimetypes.gperf"
      {"igm", "application/vnd.insors.igm"},
#line 213 "mimetypes.gperf"
      {"kpxx", "application/vnd.ds-keypoint"},
#line 476 "mimetypes.gperf"
      {"iif", "application/vnd.shana.informed.interchange"},
#line 419 "mimetypes.gperf"
      {"odp", "application/vnd.oasis.opendocument.presentation"},
#line 133 "mimetypes.gperf"
      {"tei", "application/tei+xml"},
#line 134 "mimetypes.gperf"
      {"teicorpus", "application/tei+xml"},
#line 913 "mimetypes.gperf"
      {"for", "text/x-fortran"},
#line 311 "mimetypes.gperf"
      {"flw", "application/vnd.kde.kivio"},
#line 177 "mimetypes.gperf"
      {"c4d", "application/vnd.clonk.c4group"},
#line 453 "mimetypes.gperf"
      {"qps", "application/vnd.publishare-delta-tree"},
#line 748 "mimetypes.gperf"
      {"eol", "audio/vnd.digital-winds"},
#line 165 "mimetypes.gperf"
      {"swi", "application/vnd.aristanetworks.swi"},
#line 490 "mimetypes.gperf"
      {"sdw", "application/vnd.stardivision.writer"},
#line 935 "mimetypes.gperf"
      {"mjp2", "video/mj2"},
#line 729 "mimetypes.gperf"
      {"snd", "audio/basic"},
#line 694 "mimetypes.gperf"
      {"der", "application/x-x509-ca-cert"},
#line 414 "mimetypes.gperf"
      {"odft", "application/vnd.oasis.opendocument.formula-template"},
#line 264 "mimetypes.gperf"
      {"ghf", "application/vnd.groove-help"},
#line 230 "mimetypes.gperf"
      {"seed", "application/vnd.fdsn.seed"},
#line 893 "mimetypes.gperf"
      {"scurl", "text/vnd.curl.scurl"},
#line 514 "mimetypes.gperf"
      {"pcap", "application/vnd.tcpdump.pcap"},
#line 894 "mimetypes.gperf"
      {"mcurl", "text/vnd.curl.mcurl"},
#line 34 "mimetypes.gperf"
      {"class", "application/java-vm"},
#line 364 "mimetypes.gperf"
      {"xlam", "application/vnd.ms-excel.addin.macroenabled.12"},
#line 500 "mimetypes.gperf"
      {"sti", "application/vnd.sun.xml.impress.template"},
#line 187 "mimetypes.gperf"
      {"clkk", "application/vnd.crick.clicker.keyboard"},
#line 962 "mimetypes.gperf"
      {"uvu", "video/vnd.uvvu.mp4"},
#line 978 "mimetypes.gperf"
      {"wmv", "video/x-ms-wmv"},
#line 690 "mimetypes.gperf"
      {"texi", "application/x-texinfo"},
#line 247 "mimetypes.gperf"
      {"xdw", "application/vnd.fujixerox.docuworks"},
#line 297 "mimetypes.gperf"
      {"qfx", "application/vnd.intu.qfx"},
#line 344 "mimetypes.gperf"
      {"igx", "application/vnd.micrografx.igx"},
#line 155 "mimetypes.gperf"
      {"azs", "application/vnd.airzip.filesecure.azs"},
#line 125 "mimetypes.gperf"
      {"smil", "application/smil+xml"},
#line 565 "mimetypes.gperf"
      {"x32", "application/x-authorware-bin"},
#line 779 "mimetypes.gperf"
      {"xyz", "chemical/x-xyz"},
#line 816 "mimetypes.gperf"
      {"webp", "image/webp"},
#line 195 "mimetypes.gperf"
      {"pcurl", "application/vnd.curl.pcurl"},
#line 586 "mimetypes.gperf"
      {"nsc", "application/x-conference"},
#line 413 "mimetypes.gperf"
      {"odf", "application/vnd.oasis.opendocument.formula"},
#line 889 "mimetypes.gperf"
      {"urls", "text/uri-list"},
#line 969 "mimetypes.gperf"
      {"m4v", "video/x-m4v"},
#line 780 "mimetypes.gperf"
      {"bmp", "image/bmp"},
#line 491 "mimetypes.gperf"
      {"vor", "application/vnd.stardivision.writer"},
#line 545 "mimetypes.gperf"
      {"hvs", "application/vnd.yamaha.hv-script"},
#line 666 "mimetypes.gperf"
      {"p12", "application/x-pkcs12"},
#line 406 "mimetypes.gperf"
      {"rpss", "application/vnd.nokia.radio-presets"},
#line 943 "mimetypes.gperf"
      {"m2v", "video/mpeg"},
#line 605 "mimetypes.gperf"
      {"dvi", "application/x-dvi"},
#line 175 "mimetypes.gperf"
      {"rp9", "application/vnd.cloanto.rp9"},
#line 608 "mimetypes.gperf"
      {"bdf", "application/x-font-bdf"},
#line 881 "mimetypes.gperf"
      {"tr", "text/troff"},
#line 262 "mimetypes.gperf"
      {"gqs", "application/vnd.grafeq"},
#line 70 "mimetypes.gperf"
      {"elc", "application/octet-stream"},
#line 161 "mimetypes.gperf"
      {"fti", "application/vnd.anser-web-funds-transfer-initiation"},
#line 474 "mimetypes.gperf"
      {"ifm", "application/vnd.shana.informed.formdata"},
#line 405 "mimetypes.gperf"
      {"rpst", "application/vnd.nokia.radio-preset"},
#line 644 "mimetypes.gperf"
      {"obd", "application/x-msbinder"},
#line 214 "mimetypes.gperf"
      {"ait", "application/vnd.dvb.ait"},
#line 728 "mimetypes.gperf"
      {"au", "audio/basic"},
#line 5 "mimetypes.gperf"
      {"aw", "application/applixware"},
#line 892 "mimetypes.gperf"
      {"dcurl", "text/vnd.curl.dcurl"},
#line 407 "mimetypes.gperf"
      {"edm", "application/vnd.novadigm.edm"},
#line 710 "mimetypes.gperf"
      {"xenc", "application/xenc+xml"},
#line 265 "mimetypes.gperf"
      {"gim", "application/vnd.groove-identity-message"},
#line 304 "mimetypes.gperf"
      {"jisp", "application/vnd.jisp"},
#line 126 "mimetypes.gperf"
      {"rq", "application/sparql-query"},
#line 866 "mimetypes.gperf"
      {"htm", "text/html"},
#line 285 "mimetypes.gperf"
      {"irm", "application/vnd.ibm.rights-management"},
#line 593 "mimetypes.gperf"
      {"dcr", "application/x-director"},
#line 732 "mimetypes.gperf"
      {"kar", "audio/midi"},
#line 764 "mimetypes.gperf"
      {"flac", "audio/x-flac"},
#line 321 "mimetypes.gperf"
      {"knp", "application/vnd.kinar"},
#line 74 "mimetypes.gperf"
      {"ogx", "application/ogg"},
#line 446 "mimetypes.gperf"
      {"ei6", "application/vnd.pg.osasli"},
#line 673 "mimetypes.gperf"
      {"sh", "application/x-sh"},
#line 966 "mimetypes.gperf"
      {"f4v", "video/x-f4v"},
#line 782 "mimetypes.gperf"
      {"g3", "image/g3fax"},
#line 333 "mimetypes.gperf"
      {"nsf", "application/vnd.lotus-notes"},
#line 727 "mimetypes.gperf"
      {"adp", "audio/adpcm"},
#line 521 "mimetypes.gperf"
      {"ufd", "application/vnd.ufdl"},
#line 55 "mimetypes.gperf"
      {"mp21", "application/mp21"},
#line 289 "mimetypes.gperf"
      {"igl", "application/vnd.igloader"},
#line 852 "mimetypes.gperf"
      {"wrl", "model/vrml"},
#line 391 "mimetypes.gperf"
      {"wpl", "application/vnd.ms-wpl"},
#line 546 "mimetypes.gperf"
      {"hvp", "application/vnd.yamaha.hv-voice"},
#line 513 "mimetypes.gperf"
      {"tao", "application/vnd.tao.intent-module-archive"},
#line 291 "mimetypes.gperf"
      {"ivu", "application/vnd.immervision-ivu"},
#line 408 "mimetypes.gperf"
      {"edx", "application/vnd.novadigm.edx"},
#line 663 "mimetypes.gperf"
      {"nc", "application/x-netcdf"},
#line 770 "mimetypes.gperf"
      {"ra", "audio/x-pn-realaudio"},
#line 963 "mimetypes.gperf"
      {"uvvu", "video/vnd.uvvu.mp4"},
#line 642 "mimetypes.gperf"
      {"xbap", "application/x-ms-xbap"},
#line 539 "mimetypes.gperf"
      {"wpd", "application/vnd.wordperfect"},
#line 307 "mimetypes.gperf"
      {"ktr", "application/vnd.kahootz"},
#line 154 "mimetypes.gperf"
      {"azf", "application/vnd.airzip.filesecure.azf"},
#line 190 "mimetypes.gperf"
      {"clkw", "application/vnd.crick.clicker.wordbank"},
#line 602 "mimetypes.gperf"
      {"ncx", "application/x-dtbncx+xml"},
#line 689 "mimetypes.gperf"
      {"texinfo", "application/x-texinfo"},
#line 243 "mimetypes.gperf"
      {"oa3", "application/vnd.fujitsu.oasys3"},
#line 14 "mimetypes.gperf"
      {"cdmiq", "application/cdmi-queue"},
#line 299 "mimetypes.gperf"
      {"irp", "application/vnd.irepository.package+xml"},
#line 258 "mimetypes.gperf"
      {"gmx", "application/vnd.gmx"},
#line 859 "mimetypes.gperf"
      {"x3dz", "model/x3d+xml"},
#line 398 "mimetypes.gperf"
      {"ntf", "application/vnd.nitf"},
#line 820 "mimetypes.gperf"
      {"fh", "image/x-freehand"},
#line 870 "mimetypes.gperf"
      {"conf", "text/plain"},
#line 706 "mimetypes.gperf"
      {"z7", "application/x-zmachine"},
#line 519 "mimetypes.gperf"
      {"mxs", "application/vnd.triscape.mxs"},
#line 652 "mimetypes.gperf"
      {"mvb", "application/x-msmediaview"},
#line 522 "mimetypes.gperf"
      {"ufdl", "application/vnd.ufdl"},
#line 501 "mimetypes.gperf"
      {"sxm", "application/vnd.sun.xml.math"},
#line 762 "mimetypes.gperf"
      {"aifc", "audio/x-aiff"},
#line 270 "mimetypes.gperf"
      {"hal", "application/vnd.hal+xml"},
#line 577 "mimetypes.gperf"
      {"cbr", "application/x-cbr"},
#line 899 "mimetypes.gperf"
      {"spot", "text/vnd.in3d.spot"},
#line 760 "mimetypes.gperf"
      {"aif", "audio/x-aiff"},
#line 357 "mimetypes.gperf"
      {"cab", "application/vnd.ms-cab-compressed"},
#line 138 "mimetypes.gperf"
      {"psb", "application/vnd.3gpp.pic-bw-small"},
#line 801 "mimetypes.gperf"
      {"sub", "text/vnd.dvb.subtitle"},
#line 261 "mimetypes.gperf"
      {"gqf", "application/vnd.grafeq"},
#line 47 "mimetypes.gperf"
      {"mathml", "application/mathml+xml"},
#line 395 "mimetypes.gperf"
      {"msty", "application/vnd.muvee.style"},
#line 809 "mimetypes.gperf"
      {"mmr", "image/vnd.fujixerox.edmics-mmr"},
#line 868 "mimetypes.gperf"
      {"txt", "text/plain"},
#line 146 "mimetypes.gperf"
      {"acutc", "application/vnd.acucorp"},
#line 738 "mimetypes.gperf"
      {"mp3", "audio/mpeg"},
#line 783 "mimetypes.gperf"
      {"gif", "image/gif"},
#line 139 "mimetypes.gperf"
      {"pvb", "application/vnd.3gpp.pic-bw-var"},
#line 848 "mimetypes.gperf"
      {"gdl", "model/vnd.gdl"},
#line 967 "mimetypes.gperf"
      {"fli", "video/x-fli"},
#line 544 "mimetypes.gperf"
      {"hvd", "application/vnd.yamaha.hv-dic"},
#line 252 "mimetypes.gperf"
      {"ggt", "application/vnd.geogebra.tool"},
#line 597 "mimetypes.gperf"
      {"cxt", "application/x-director"},
#line 811 "mimetypes.gperf"
      {"mdi", "image/vnd.ms-modi"},
#line 659 "mimetypes.gperf"
      {"pub", "application/x-mspublisher"},
#line 495 "mimetypes.gperf"
      {"sxc", "application/vnd.sun.xml.calc"},
#line 865 "mimetypes.gperf"
      {"html", "text/html"},
#line 790 "mimetypes.gperf"
      {"btif", "image/prs.btif"},
#line 130 "mimetypes.gperf"
      {"sru", "application/sru+xml"},
#line 105 "mimetypes.gperf"
      {"rnc", "application/relax-ng-compact-syntax"},
#line 56 "mimetypes.gperf"
      {"mp4s", "application/mp4"},
#line 855 "mimetypes.gperf"
      {"x3dbz", "model/x3d+binary"},
#line 797 "mimetypes.gperf"
      {"uvi", "image/vnd.dece.graphic"},
#line 656 "mimetypes.gperf"
      {"emf", "application/x-msmetafile"},
#line 306 "mimetypes.gperf"
      {"ktz", "application/vnd.kahootz"},
#line 671 "mimetypes.gperf"
      {"rar", "application/x-rar-compressed"},
#line 761 "mimetypes.gperf"
      {"aiff", "audio/x-aiff"},
#line 751 "mimetypes.gperf"
      {"dtshd", "audio/vnd.dts.hd"},
#line 25 "mimetypes.gperf"
      {"gml", "application/gml+xml"},
#line 907 "mimetypes.gperf"
      {"cxx", "text/x-c"},
#line 121 "mimetypes.gperf"
      {"setpay", "application/set-payment-initiation"},
#line 592 "mimetypes.gperf"
      {"dir", "application/x-director"},
#line 589 "mimetypes.gperf"
      {"deb", "application/x-debian-package"},
#line 957 "mimetypes.gperf"
      {"dvb", "video/vnd.dvb.file"},
#line 932 "mimetypes.gperf"
      {"jpm", "video/jpm"},
#line 124 "mimetypes.gperf"
      {"smi", "application/smil+xml"},
#line 839 "mimetypes.gperf"
      {"eml", "message/rfc822"},
#line 160 "mimetypes.gperf"
      {"cii", "application/vnd.anser-web-certificate-issue-initiation"},
#line 293 "mimetypes.gperf"
      {"xpw", "application/vnd.intercon.formnet"},
#line 566 "mimetypes.gperf"
      {"u32", "application/x-authorware-bin"},
#line 118 "mimetypes.gperf"
      {"spq", "application/scvp-vp-request"},
#line 619 "mimetypes.gperf"
      {"afm", "application/x-font-type1"},
#line 206 "mimetypes.gperf"
      {"uvz", "application/vnd.dece.zip"},
#line 580 "mimetypes.gperf"
      {"cbz", "application/x-cbr"},
#line 603 "mimetypes.gperf"
      {"dtb", "application/x-dtbook+xml"},
#line 428 "mimetypes.gperf"
      {"dd2", "application/vnd.oma.dd2+xml"},
#line 73 "mimetypes.gperf"
      {"opf", "application/oebps-package+xml"},
#line 867 "mimetypes.gperf"
      {"n3", "text/n3"},
#line 944 "mimetypes.gperf"
      {"ogv", "video/ogg"},
#line 557 "mimetypes.gperf"
      {"hlp", "application/winhlp"},
#line 639 "mimetypes.gperf"
      {"lnk", "application/x-ms-shortcut"},
#line 6 "mimetypes.gperf"
      {"atom", "application/atom+xml"},
#line 59 "mimetypes.gperf"
      {"mxf", "application/mxf"},
#line 149 "mimetypes.gperf"
      {"fxp", "application/vnd.adobe.fxp"},
#line 976 "mimetypes.gperf"
      {"vob", "video/x-ms-vob"},
#line 352 "mimetypes.gperf"
      {"txf", "application/vnd.mobius.txf"},
#line 224 "mimetypes.gperf"
      {"es3", "application/vnd.eszigno3+xml"},
#line 917 "mimetypes.gperf"
      {"opml", "text/x-opml"},
#line 538 "mimetypes.gperf"
      {"nbp", "application/vnd.wolfram.player"},
#line 523 "mimetypes.gperf"
      {"utz", "application/vnd.uiq.theme"},
#line 493 "mimetypes.gperf"
      {"smzip", "application/vnd.stepmania.package"},
#line 574 "mimetypes.gperf"
      {"bz", "application/x-bzip"},
#line 854 "mimetypes.gperf"
      {"x3db", "model/x3d+binary"},
#line 462 "mimetypes.gperf"
      {"mxl", "application/vnd.recordare.musicxml"},
#line 731 "mimetypes.gperf"
      {"midi", "audio/midi"},
#line 330 "mimetypes.gperf"
      {"123", "application/vnd.lotus-1-2-3"},
#line 484 "mimetypes.gperf"
      {"dxp", "application/vnd.spotfire.dxp"},
#line 720 "mimetypes.gperf"
      {"mxml", "application/xv+xml"},
#line 99 "mimetypes.gperf"
      {"eps", "application/postscript"},
#line 13 "mimetypes.gperf"
      {"cdmio", "application/cdmi-object"},
#line 960 "mimetypes.gperf"
      {"m4u", "video/vnd.mpegurl"},
#line 654 "mimetypes.gperf"
      {"m14", "application/x-msmediaview"},
#line 378 "mimetypes.gperf"
      {"ppam", "application/vnd.ms-powerpoint.addin.macroenabled.12"},
#line 497 "mimetypes.gperf"
      {"sxd", "application/vnd.sun.xml.draw"},
#line 96 "mimetypes.gperf"
      {"pki", "application/pkixcmp"},
#line 282 "mimetypes.gperf"
      {"afp", "application/vnd.ibm.modcap"},
#line 51 "mimetypes.gperf"
      {"meta4", "application/metalink4+xml"},
#line 39 "mimetypes.gperf"
      {"hqx", "application/mac-binhex40"},
#line 250 "mimetypes.gperf"
      {"txd", "application/vnd.genomatix.tuxedo"},
#line 621 "mimetypes.gperf"
      {"arc", "application/x-freearc"},
#line 888 "mimetypes.gperf"
      {"uris", "text/uri-list"},
#line 791 "mimetypes.gperf"
      {"sgi", "image/sgi"},
#line 982 "mimetypes.gperf"
      {"movie", "video/x-sgi-movie"},
#line 180 "mimetypes.gperf"
      {"c4u", "application/vnd.clonk.c4group"},
#line 26 "mimetypes.gperf"
      {"gpx", "application/gpx+xml"},
#line 225 "mimetypes.gperf"
      {"et3", "application/vnd.eszigno3+xml"},
#line 798 "mimetypes.gperf"
      {"uvvi", "image/vnd.dece.graphic"},
#line 343 "mimetypes.gperf"
      {"flo", "application/vnd.micrografx.flo"},
#line 629 "mimetypes.gperf"
      {"install", "application/x-install-instructions"},
#line 236 "mimetypes.gperf"
      {"maker", "application/vnd.framemaker"},
#line 365 "mimetypes.gperf"
      {"xlsb", "application/vnd.ms-excel.sheet.binary.macroenabled.12"},
#line 805 "mimetypes.gperf"
      {"dxf", "image/vnd.dxf"},
#line 137 "mimetypes.gperf"
      {"plb", "application/vnd.3gpp.pic-bw-large"},
#line 393 "mimetypes.gperf"
      {"mseq", "application/vnd.mseq"},
#line 822 "mimetypes.gperf"
      {"fh4", "image/x-freehand"},
#line 471 "mimetypes.gperf"
      {"sema", "application/vnd.sema"},
#line 849 "mimetypes.gperf"
      {"gtw", "model/vnd.gtw"},
#line 50 "mimetypes.gperf"
      {"metalink", "application/metalink+xml"},
#line 257 "mimetypes.gperf"
      {"g3w", "application/vnd.geospace"},
#line 452 "mimetypes.gperf"
      {"mgz", "application/vnd.proteus.magazine"},
#line 71 "mimetypes.gperf"
      {"deploy", "application/octet-stream"},
#line 399 "mimetypes.gperf"
      {"nitf", "application/vnd.nitf"},
#line 600 "mimetypes.gperf"
      {"swa", "application/x-director"},
#line 554 "mimetypes.gperf"
      {"zaz", "application/vnd.zzazz.deck+xml"},
#line 692 "mimetypes.gperf"
      {"ustar", "application/x-ustar"},
#line 242 "mimetypes.gperf"
      {"oa2", "application/vnd.fujitsu.oasys2"},
#line 207 "mimetypes.gperf"
      {"uvvz", "application/vnd.dece.zip"},
#line 753 "mimetypes.gperf"
      {"pya", "audio/vnd.ms-playready.media.pya"},
#line 212 "mimetypes.gperf"
      {"dfac", "application/vnd.dreamfactory"},
#line 129 "mimetypes.gperf"
      {"grxml", "application/srgs+xml"},
#line 150 "mimetypes.gperf"
      {"fxpl", "application/vnd.adobe.fxp"},
#line 217 "mimetypes.gperf"
      {"mag", "application/vnd.ecowin.chart"},
#line 643 "mimetypes.gperf"
      {"mdb", "application/x-msaccess"},
#line 24 "mimetypes.gperf"
      {"pfr", "application/font-tdpfr"},
#line 628 "mimetypes.gperf"
      {"hdf", "application/x-hdf"},
#line 517 "mimetypes.gperf"
      {"tmo", "application/vnd.tmobile-livetv"},
#line 337 "mimetypes.gperf"
      {"portpkg", "application/vnd.macports.portpkg"},
#line 740 "mimetypes.gperf"
      {"m3a", "audio/mpeg"},
#line 144 "mimetypes.gperf"
      {"acu", "application/vnd.acucobol"},
#line 300 "mimetypes.gperf"
      {"xpr", "application/vnd.is-xpr"},
#line 792 "mimetypes.gperf"
      {"svg", "image/svg+xml"},
#line 218 "mimetypes.gperf"
      {"nml", "application/vnd.enliven"},
#line 326 "mimetypes.gperf"
      {"sse", "application/vnd.kodak-descriptor"},
#line 98 "mimetypes.gperf"
      {"ai", "application/postscript"},
#line 32 "mimetypes.gperf"
      {"jar", "application/java-archive"},
#line 555 "mimetypes.gperf"
      {"vxml", "application/voicexml+xml"},
#line 895 "mimetypes.gperf"
      {"fly", "text/vnd.fly"},
#line 8 "mimetypes.gperf"
      {"atomsvc", "application/atomsvc+xml"},
#line 441 "mimetypes.gperf"
      {"pdb", "application/vnd.palm"},
#line 349 "mimetypes.gperf"
      {"mqy", "application/vnd.mobius.mqy"},
#line 890 "mimetypes.gperf"
      {"vcard", "text/vcard"},
#line 470 "mimetypes.gperf"
      {"see", "application/vnd.seemail"},
#line 208 "mimetypes.gperf"
      {"fe_launch", "application/vnd.denovo.fcselayout-link"},
#line 10 "mimetypes.gperf"
      {"cdmia", "application/cdmi-capability"},
#line 135 "mimetypes.gperf"
      {"tfi", "application/thraud+xml"},
#line 736 "mimetypes.gperf"
      {"mp2", "audio/mpeg"},
#line 4 "mimetypes.gperf"
      {"ez", "application/andrew-inset"},
#line 845 "mimetypes.gperf"
      {"silo", "model/mesh"},
#line 448 "mimetypes.gperf"
      {"wg", "application/vnd.pmi.widget"},
#line 418 "mimetypes.gperf"
      {"oti", "application/vnd.oasis.opendocument.image-template"},
#line 670 "mimetypes.gperf"
      {"p7r", "application/x-pkcs7-certreqresp"},
#line 637 "mimetypes.gperf"
      {"mobi", "application/x-mobipocket-ebook"},
#line 704 "mimetypes.gperf"
      {"z5", "application/x-zmachine"},
#line 537 "mimetypes.gperf"
      {"wtb", "application/vnd.webturbo"},
#line 456 "mimetypes.gperf"
      {"qxt", "application/vnd.quark.quarkxpress"},
#line 173 "mimetypes.gperf"
      {"cdy", "application/vnd.cinderella"},
#line 477 "mimetypes.gperf"
      {"ipk", "application/vnd.shana.informed.package"},
#line 937 "mimetypes.gperf"
      {"mp4v", "video/mp4"},
#line 30 "mimetypes.gperf"
      {"inkml", "application/inkml+xml"},
#line 630 "mimetypes.gperf"
      {"iso", "application/x-iso9660-image"},
#line 698 "mimetypes.gperf"
      {"xpi", "application/x-xpinstall"},
#line 245 "mimetypes.gperf"
      {"bh2", "application/vnd.fujitsu.oasysprs"},
#line 260 "mimetypes.gperf"
      {"kmz", "application/vnd.google-earth.kmz"},
#line 231 "mimetypes.gperf"
      {"dataless", "application/vnd.fdsn.seed"},
#line 576 "mimetypes.gperf"
      {"boz", "application/x-bzip2"},
#line 634 "mimetypes.gperf"
      {"lha", "application/x-lzh-compressed"},
#line 873 "mimetypes.gperf"
      {"log", "text/plain"},
#line 631 "mimetypes.gperf"
      {"jnlp", "application/x-java-jnlp-file"},
#line 229 "mimetypes.gperf"
      {"mseed", "application/vnd.fdsn.mseed"},
#line 846 "mimetypes.gperf"
      {"dae", "model/vnd.collada+xml"},
#line 75 "mimetypes.gperf"
      {"omdoc", "application/omdoc+xml"},
#line 804 "mimetypes.gperf"
      {"dwg", "image/vnd.dwg"},
#line 468 "mimetypes.gperf"
      {"link66", "application/vnd.route66.link66+xml"},
#line 276 "mimetypes.gperf"
      {"hps", "application/vnd.hp-hps"},
#line 813 "mimetypes.gperf"
      {"npx", "image/vnd.net-fpx"},
#line 674 "mimetypes.gperf"
      {"shar", "application/x-shar"},
#line 227 "mimetypes.gperf"
      {"ez3", "application/vnd.ezpix-package"},
#line 237 "mimetypes.gperf"
      {"book", "application/vnd.framemaker"},
#line 31 "mimetypes.gperf"
      {"ipfix", "application/ipfix"},
#line 266 "mimetypes.gperf"
      {"grv", "application/vnd.groove-injector"},
#line 156 "mimetypes.gperf"
      {"azw", "application/vnd.amazon.ebook"},
#line 981 "mimetypes.gperf"
      {"avi", "video/x-msvideo"},
#line 641 "mimetypes.gperf"
      {"wmz", "application/x-msmetafile"},
#line 443 "mimetypes.gperf"
      {"oprc", "application/vnd.palm"},
#line 552 "mimetypes.gperf"
      {"zir", "application/vnd.zul"},
#line 561 "mimetypes.gperf"
      {"abw", "application/x-abiword"},
#line 68 "mimetypes.gperf"
      {"bpk", "application/octet-stream"},
#line 701 "mimetypes.gperf"
      {"z2", "application/x-zmachine"},
#line 360 "mimetypes.gperf"
      {"xla", "application/vnd.ms-excel"},
#line 927 "mimetypes.gperf"
      {"3g2", "video/3gpp2"},
#line 174 "mimetypes.gperf"
      {"cla", "application/vnd.claymore"},
#line 842 "mimetypes.gperf"
      {"iges", "model/iges"},
#line 459 "mimetypes.gperf"
      {"qxl", "application/vnd.quark.quarkxpress"},
#line 313 "mimetypes.gperf"
      {"kpr", "application/vnd.kde.kpresenter"},
#line 184 "mimetypes.gperf"
      {"cdbcmsg", "application/vnd.contact.cmsg"},
#line 29 "mimetypes.gperf"
      {"ink", "application/inkml+xml"},
#line 825 "mimetypes.gperf"
      {"ico", "image/x-icon"},
#line 197 "mimetypes.gperf"
      {"rdz", "application/vnd.data-vision.rdz"},
#line 733 "mimetypes.gperf"
      {"rmi", "audio/midi"},
#line 681 "mimetypes.gperf"
      {"sv4cpio", "application/x-sv4cpio"},
#line 401 "mimetypes.gperf"
      {"nns", "application/vnd.noblenet-sealer"},
#line 455 "mimetypes.gperf"
      {"qxd", "application/vnd.quark.quarkxpress"},
#line 793 "mimetypes.gperf"
      {"svgz", "image/svg+xml"},
#line 487 "mimetypes.gperf"
      {"sda", "application/vnd.stardivision.draw"},
#line 756 "mimetypes.gperf"
      {"ecelp9600", "audio/vnd.nuera.ecelp9600"},
#line 429 "mimetypes.gperf"
      {"oxt", "application/vnd.openofficeorg.extension"},
#line 269 "mimetypes.gperf"
      {"vcg", "application/vnd.groove-vcard"},
#line 746 "mimetypes.gperf"
      {"uva", "audio/vnd.dece.audio"},
#line 296 "mimetypes.gperf"
      {"qbo", "application/vnd.intu.qbo"},
#line 578 "mimetypes.gperf"
      {"cba", "application/x-cbr"},
#line 442 "mimetypes.gperf"
      {"pqa", "application/vnd.palm"},
#line 80 "mimetypes.gperf"
      {"oxps", "application/oxps"},
#line 570 "mimetypes.gperf"
      {"bcpio", "application/x-bcpio"},
#line 575 "mimetypes.gperf"
      {"bz2", "application/x-bzip2"},
#line 417 "mimetypes.gperf"
      {"odi", "application/vnd.oasis.opendocument.image"},
#line 617 "mimetypes.gperf"
      {"pfb", "application/x-font-type1"},
#line 755 "mimetypes.gperf"
      {"ecelp7470", "audio/vnd.nuera.ecelp7470"},
#line 928 "mimetypes.gperf"
      {"h261", "video/h261"},
#line 390 "mimetypes.gperf"
      {"wdb", "application/vnd.ms-works"},
#line 159 "mimetypes.gperf"
      {"apk", "application/vnd.android.package-archive"},
#line 85 "mimetypes.gperf"
      {"sig", "application/pgp-signature"},
#line 142 "mimetypes.gperf"
      {"aso", "application/vnd.accpac.simply.aso"},
#line 799 "mimetypes.gperf"
      {"uvg", "image/vnd.dece.graphic"},
#line 281 "mimetypes.gperf"
      {"mpy", "application/vnd.ibm.minipay"},
#line 182 "mimetypes.gperf"
      {"c11amz", "application/vnd.cluetrust.cartomobile-config-pkg"},
#line 959 "mimetypes.gperf"
      {"mxu", "video/vnd.mpegurl"},
#line 502 "mimetypes.gperf"
      {"sxw", "application/vnd.sun.xml.writer"},
#line 397 "mimetypes.gperf"
      {"nlu", "application/vnd.neurolanguage.nlu"},
#line 765 "mimetypes.gperf"
      {"mka", "audio/x-matroska"},
#line 635 "mimetypes.gperf"
      {"mie", "application/x-mie"},
#line 840 "mimetypes.gperf"
      {"mime", "message/rfc822"},
#line 45 "mimetypes.gperf"
      {"nb", "application/mathematica"},
#line 703 "mimetypes.gperf"
      {"z4", "application/x-zmachine"},
#line 668 "mimetypes.gperf"
      {"p7b", "application/x-pkcs7-certificates"},
#line 887 "mimetypes.gperf"
      {"uri", "text/uri-list"},
#line 298 "mimetypes.gperf"
      {"rcprofile", "application/vnd.ipunplugged.rcprofile"},
#line 662 "mimetypes.gperf"
      {"wri", "application/x-mswrite"},
#line 571 "mimetypes.gperf"
      {"torrent", "application/x-bittorrent"},
#line 216 "mimetypes.gperf"
      {"geo", "application/vnd.dynageo"},
#line 169 "mimetypes.gperf"
      {"bmi", "application/vnd.bmi"},
#line 564 "mimetypes.gperf"
      {"aab", "application/x-authorware-bin"},
#line 111 "mimetypes.gperf"
      {"roa", "application/rpki-roa"},
#line 696 "mimetypes.gperf"
      {"fig", "application/x-xfig"},
#line 147 "mimetypes.gperf"
      {"air", "application/vnd.adobe.air-application-installer-package+zip"},
#line 109 "mimetypes.gperf"
      {"gbr", "application/rpki-ghostbusters"},
#line 936 "mimetypes.gperf"
      {"mp4", "video/mp4"},
#line 329 "mimetypes.gperf"
      {"lbe", "application/vnd.llamagraphics.life-balance.exchange+xml"},
#line 835 "mimetypes.gperf"
      {"tga", "image/x-tga"},
#line 747 "mimetypes.gperf"
      {"uvva", "audio/vnd.dece.audio"},
#line 883 "mimetypes.gperf"
      {"man", "text/troff"},
#line 400 "mimetypes.gperf"
      {"nnd", "application/vnd.noblenet-directory"},
#line 166 "mimetypes.gperf"
      {"iota", "application/vnd.astraea-software.iota"},
#line 67 "mimetypes.gperf"
      {"pkg", "application/octet-stream"},
#line 122 "mimetypes.gperf"
      {"setreg", "application/set-registration-initiation"},
#line 563 "mimetypes.gperf"
      {"dmg", "application/x-apple-diskimage"},
#line 310 "mimetypes.gperf"
      {"kfo", "application/vnd.kde.kformula"},
#line 255 "mimetypes.gperf"
      {"gxt", "application/vnd.geonext"},
#line 340 "mimetypes.gperf"
      {"cdkey", "application/vnd.mediastation.cdkey"},
#line 226 "mimetypes.gperf"
      {"ez2", "application/vnd.ezpix-album"},
#line 481 "mimetypes.gperf"
      {"teacher", "application/vnd.smart.teacher"},
#line 409 "mimetypes.gperf"
      {"ext", "application/vnd.novadigm.ext"},
#line 447 "mimetypes.gperf"
      {"efif", "application/vnd.picsel"},
#line 800 "mimetypes.gperf"
      {"uvvg", "image/vnd.dece.graphic"},
#line 658 "mimetypes.gperf"
      {"mny", "application/x-msmoney"},
#line 572 "mimetypes.gperf"
      {"blb", "application/x-blorb"},
#line 606 "mimetypes.gperf"
      {"evy", "application/x-envoy"},
#line 559 "mimetypes.gperf"
      {"wspolicy", "application/wspolicy+xml"},
#line 95 "mimetypes.gperf"
      {"pkipath", "application/pkix-pkipath"},
#line 319 "mimetypes.gperf"
      {"kia", "application/vnd.kidspiration"},
#line 141 "mimetypes.gperf"
      {"pwn", "application/vnd.3m.post-it-notes"},
#line 158 "mimetypes.gperf"
      {"ami", "application/vnd.amiga.ami"},
#line 524 "mimetypes.gperf"
      {"umj", "application/vnd.umajin"},
#line 909 "mimetypes.gperf"
      {"h", "text/x-c"},
#line 933 "mimetypes.gperf"
      {"jpgm", "video/jpm"},
#line 843 "mimetypes.gperf"
      {"msh", "model/mesh"},
#line 412 "mimetypes.gperf"
      {"odb", "application/vnd.oasis.opendocument.database"},
#line 520 "mimetypes.gperf"
      {"tra", "application/vnd.trueapp"},
#line 7 "mimetypes.gperf"
      {"atomcat", "application/atomcat+xml"},
#line 616 "mimetypes.gperf"
      {"pfa", "application/x-font-type1"},
#line 844 "mimetypes.gperf"
      {"mesh", "model/mesh"},
#line 588 "mimetypes.gperf"
      {"csh", "application/x-csh"},
#line 834 "mimetypes.gperf"
      {"rgb", "image/x-rgb"},
#line 626 "mimetypes.gperf"
      {"gramps", "application/x-gramps-xml"},
#line 128 "mimetypes.gperf"
      {"gram", "application/srgs"},
#line 27 "mimetypes.gperf"
      {"gxf", "application/gxf"},
#line 416 "mimetypes.gperf"
      {"otg", "application/vnd.oasis.opendocument.graphics-template"},
#line 657 "mimetypes.gperf"
      {"emz", "application/x-msmetafile"},
#line 940 "mimetypes.gperf"
      {"mpg", "video/mpeg"},
#line 467 "mimetypes.gperf"
      {"rmvb", "application/vnd.rn-realmedia-vbr"},
#line 984 "mimetypes.gperf"
      {"ice", "x-conference/x-cooltalk"},
#line 499 "mimetypes.gperf"
      {"sxi", "application/vnd.sun.xml.impress"},
#line 768 "mimetypes.gperf"
      {"wma", "audio/x-ms-wma"},
#line 910 "mimetypes.gperf"
      {"hh", "text/x-c"},
#line 941 "mimetypes.gperf"
      {"mpe", "video/mpeg"},
#line 256 "mimetypes.gperf"
      {"g2w", "application/vnd.geoplan"},
#line 594 "mimetypes.gperf"
      {"dxr", "application/x-director"},
#line 749 "mimetypes.gperf"
      {"dra", "audio/vnd.dra"},
#line 548 "mimetypes.gperf"
      {"osfpvg", "application/vnd.yamaha.openscoreformat.osfpvg+xml"},
#line 76 "mimetypes.gperf"
      {"onetoc", "application/onenote"},
#line 235 "mimetypes.gperf"
      {"frame", "application/vnd.framemaker"},
#line 332 "mimetypes.gperf"
      {"pre", "application/vnd.lotus-freelance"},
#line 739 "mimetypes.gperf"
      {"m2a", "audio/mpeg"},
#line 440 "mimetypes.gperf"
      {"esa", "application/vnd.osgi.subsystem"},
#line 78 "mimetypes.gperf"
      {"onetmp", "application/onenote"},
#line 331 "mimetypes.gperf"
      {"apr", "application/vnd.lotus-approach"},
#line 874 "mimetypes.gperf"
      {"in", "text/plain"},
#line 312 "mimetypes.gperf"
      {"kon", "application/vnd.kde.kontour"},
#line 691 "mimetypes.gperf"
      {"obj", "application/x-tgif"},
#line 211 "mimetypes.gperf"
      {"dpg", "application/vnd.dpgraph"},
#line 860 "mimetypes.gperf"
      {"appcache", "text/cache-manifest"},
#line 607 "mimetypes.gperf"
      {"eva", "application/x-eva"},
#line 305 "mimetypes.gperf"
      {"joda", "application/vnd.joost.joda-archive"},
#line 862 "mimetypes.gperf"
      {"ifb", "text/calendar"},
#line 553 "mimetypes.gperf"
      {"zirz", "application/vnd.zul"},
#line 587 "mimetypes.gperf"
      {"cpio", "application/x-cpio"},
#line 916 "mimetypes.gperf"
      {"java", "text/x-java-source"},
#line 176 "mimetypes.gperf"
      {"c4g", "application/vnd.clonk.c4group"},
#line 973 "mimetypes.gperf"
      {"mng", "video/x-mng"},
#line 403 "mimetypes.gperf"
      {"ngdat", "application/vnd.nokia.n-gage.data"},
#line 789 "mimetypes.gperf"
      {"png", "image/png"},
#line 272 "mimetypes.gperf"
      {"hbci", "application/vnd.hbci"},
#line 209 "mimetypes.gperf"
      {"dna", "application/vnd.dna"},
#line 72 "mimetypes.gperf"
      {"oda", "application/oda"},
#line 625 "mimetypes.gperf"
      {"gnumeric", "application/x-gnumeric"},
#line 275 "mimetypes.gperf"
      {"hpid", "application/vnd.hp-hpid"},
#line 623 "mimetypes.gperf"
      {"gca", "application/x-gca-compressed"},
#line 931 "mimetypes.gperf"
      {"jpgv", "video/jpeg"},
#line 20 "mimetypes.gperf"
      {"ecma", "application/ecmascript"},
#line 163 "mimetypes.gperf"
      {"mpkg", "application/vnd.apple.installer+xml"},
#line 415 "mimetypes.gperf"
      {"odg", "application/vnd.oasis.opendocument.graphics"},
#line 37 "mimetypes.gperf"
      {"jsonml", "application/jsonml+json"},
#line 758 "mimetypes.gperf"
      {"weba", "audio/webm"},
#line 562 "mimetypes.gperf"
      {"ace", "application/x-ace-compressed"},
#line 153 "mimetypes.gperf"
      {"ahead", "application/vnd.ahead.space"},
#line 627 "mimetypes.gperf"
      {"gtar", "application/x-gtar"},
#line 929 "mimetypes.gperf"
      {"h263", "video/h263"},
#line 947 "mimetypes.gperf"
      {"uvh", "video/vnd.dece.hd"},
#line 402 "mimetypes.gperf"
      {"nnw", "application/vnd.noblenet-web"},
#line 573 "mimetypes.gperf"
      {"blorb", "application/x-blorb"},
#line 251 "mimetypes.gperf"
      {"ggb", "application/vnd.geogebra.file"},
#line 754 "mimetypes.gperf"
      {"ecelp4800", "audio/vnd.nuera.ecelp4800"},
#line 633 "mimetypes.gperf"
      {"lzh", "application/x-lzh-compressed"},
#line 665 "mimetypes.gperf"
      {"nzb", "application/x-nzb"},
#line 585 "mimetypes.gperf"
      {"pgn", "application/x-chess-pgn"},
#line 741 "mimetypes.gperf"
      {"oga", "audio/ogg"},
#line 638 "mimetypes.gperf"
      {"application", "application/x-ms-application"},
#line 525 "mimetypes.gperf"
      {"unityweb", "application/vnd.unity"},
#line 737 "mimetypes.gperf"
      {"mp2a", "audio/mpeg"},
#line 742 "mimetypes.gperf"
      {"ogg", "audio/ogg"},
#line 320 "mimetypes.gperf"
      {"kne", "application/vnd.kinar"},
#line 948 "mimetypes.gperf"
      {"uvvh", "video/vnd.dece.hd"},
#line 353 "mimetypes.gperf"
      {"mpn", "application/vnd.mophun.application"},
#line 21 "mimetypes.gperf"
      {"emma", "application/emma+xml"},
#line 274 "mimetypes.gperf"
      {"hpgl", "application/vnd.hp-hpgl"},
#line 590 "mimetypes.gperf"
      {"udeb", "application/x-debian-package"},
#line 77 "mimetypes.gperf"
      {"onetoc2", "application/onenote"},
#line 464 "mimetypes.gperf"
      {"cryptonote", "application/vnd.rig.cryptonote"},
#line 938 "mimetypes.gperf"
      {"mpg4", "video/mp4"},
#line 334 "mimetypes.gperf"
      {"org", "application/vnd.lotus-organizer"},
#line 426 "mimetypes.gperf"
      {"oth", "application/vnd.oasis.opendocument.text-web"},
#line 503 "mimetypes.gperf"
      {"sxg", "application/vnd.sun.xml.writer.global"},
#line 920 "mimetypes.gperf"
      {"nfo", "text/x-nfo"},
#line 295 "mimetypes.gperf"
      {"i2g", "application/vnd.intergeo"},
#line 734 "mimetypes.gperf"
      {"mp4a", "audio/mp4"},
#line 460 "mimetypes.gperf"
      {"qxb", "application/vnd.quark.quarkxpress"},
#line 786 "mimetypes.gperf"
      {"jpg", "image/jpeg"},
#line 735 "mimetypes.gperf"
      {"mpga", "audio/mpeg"},
#line 787 "mimetypes.gperf"
      {"jpe", "image/jpeg"},
#line 318 "mimetypes.gperf"
      {"htke", "application/vnd.kenameaapp"},
#line 60 "mimetypes.gperf"
      {"bin", "application/octet-stream"},
#line 939 "mimetypes.gperf"
      {"mpeg", "video/mpeg"},
#line 725 "mimetypes.gperf"
      {"yin", "application/yin+xml"},
#line 22 "mimetypes.gperf"
      {"epub", "application/epub+zip"},
#line 254 "mimetypes.gperf"
      {"gre", "application/vnd.geometry-explorer"},
#line 23 "mimetypes.gperf"
      {"exi", "application/exi"},
#line 724 "mimetypes.gperf"
      {"yang", "application/yang"},
#line 930 "mimetypes.gperf"
      {"h264", "video/h264"},
#line 36 "mimetypes.gperf"
      {"json", "application/json"},
#line 308 "mimetypes.gperf"
      {"karbon", "application/vnd.kde.karbon"},
#line 232 "mimetypes.gperf"
      {"gph", "application/vnd.flographit"},
#line 647 "mimetypes.gperf"
      {"exe", "application/x-msdownload"},
#line 785 "mimetypes.gperf"
      {"jpeg", "image/jpeg"},
#line 79 "mimetypes.gperf"
      {"onepkg", "application/onenote"},
#line 404 "mimetypes.gperf"
      {"n-gage", "application/vnd.nokia.n-gage.symbian.install"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          register struct fext *resword;

          if (key < 1269)
            {
              if (key < 730)
                {
                  switch (key - 1)
                    {
                      case 0:
                        resword = &wordlist[0];
                        goto compare;
                      case 12:
                        resword = &wordlist[1];
                        goto compare;
                      case 30:
                        resword = &wordlist[2];
                        goto compare;
                      case 53:
                        resword = &wordlist[3];
                        goto compare;
                      case 58:
                        resword = &wordlist[4];
                        goto compare;
                      case 62:
                        resword = &wordlist[5];
                        goto compare;
                      case 63:
                        resword = &wordlist[6];
                        goto compare;
                      case 68:
                        resword = &wordlist[7];
                        goto compare;
                      case 72:
                        resword = &wordlist[8];
                        goto compare;
                      case 73:
                        resword = &wordlist[9];
                        goto compare;
                      case 83:
                        resword = &wordlist[10];
                        goto compare;
                      case 90:
                        resword = &wordlist[11];
                        goto compare;
                      case 92:
                        resword = &wordlist[12];
                        goto compare;
                      case 93:
                        resword = &wordlist[13];
                        goto compare;
                      case 99:
                        resword = &wordlist[14];
                        goto compare;
                      case 108:
                        resword = &wordlist[15];
                        goto compare;
                      case 110:
                        resword = &wordlist[16];
                        goto compare;
                      case 112:
                        resword = &wordlist[17];
                        goto compare;
                      case 114:
                        resword = &wordlist[18];
                        goto compare;
                      case 128:
                        resword = &wordlist[19];
                        goto compare;
                      case 133:
                        resword = &wordlist[20];
                        goto compare;
                      case 137:
                        resword = &wordlist[21];
                        goto compare;
                      case 138:
                        resword = &wordlist[22];
                        goto compare;
                      case 140:
                        resword = &wordlist[23];
                        goto compare;
                      case 144:
                        resword = &wordlist[24];
                        goto compare;
                      case 153:
                        resword = &wordlist[25];
                        goto compare;
                      case 157:
                        resword = &wordlist[26];
                        goto compare;
                      case 163:
                        resword = &wordlist[27];
                        goto compare;
                      case 167:
                        resword = &wordlist[28];
                        goto compare;
                      case 172:
                        resword = &wordlist[29];
                        goto compare;
                      case 173:
                        resword = &wordlist[30];
                        goto compare;
                      case 177:
                        resword = &wordlist[31];
                        goto compare;
                      case 179:
                        resword = &wordlist[32];
                        goto compare;
                      case 180:
                        resword = &wordlist[33];
                        goto compare;
                      case 184:
                        resword = &wordlist[34];
                        goto compare;
                      case 192:
                        resword = &wordlist[35];
                        goto compare;
                      case 194:
                        resword = &wordlist[36];
                        goto compare;
                      case 195:
                        resword = &wordlist[37];
                        goto compare;
                      case 197:
                        resword = &wordlist[38];
                        goto compare;
                      case 198:
                        resword = &wordlist[39];
                        goto compare;
                      case 199:
                        resword = &wordlist[40];
                        goto compare;
                      case 200:
                        resword = &wordlist[41];
                        goto compare;
                      case 203:
                        resword = &wordlist[42];
                        goto compare;
                      case 207:
                        resword = &wordlist[43];
                        goto compare;
                      case 208:
                        resword = &wordlist[44];
                        goto compare;
                      case 209:
                        resword = &wordlist[45];
                        goto compare;
                      case 210:
                        resword = &wordlist[46];
                        goto compare;
                      case 211:
                        resword = &wordlist[47];
                        goto compare;
                      case 213:
                        resword = &wordlist[48];
                        goto compare;
                      case 215:
                        resword = &wordlist[49];
                        goto compare;
                      case 217:
                        resword = &wordlist[50];
                        goto compare;
                      case 219:
                        resword = &wordlist[51];
                        goto compare;
                      case 223:
                        resword = &wordlist[52];
                        goto compare;
                      case 224:
                        resword = &wordlist[53];
                        goto compare;
                      case 227:
                        resword = &wordlist[54];
                        goto compare;
                      case 228:
                        resword = &wordlist[55];
                        goto compare;
                      case 229:
                        resword = &wordlist[56];
                        goto compare;
                      case 233:
                        resword = &wordlist[57];
                        goto compare;
                      case 241:
                        resword = &wordlist[58];
                        goto compare;
                      case 243:
                        resword = &wordlist[59];
                        goto compare;
                      case 244:
                        resword = &wordlist[60];
                        goto compare;
                      case 245:
                        resword = &wordlist[61];
                        goto compare;
                      case 248:
                        resword = &wordlist[62];
                        goto compare;
                      case 252:
                        resword = &wordlist[63];
                        goto compare;
                      case 257:
                        resword = &wordlist[64];
                        goto compare;
                      case 262:
                        resword = &wordlist[65];
                        goto compare;
                      case 263:
                        resword = &wordlist[66];
                        goto compare;
                      case 265:
                        resword = &wordlist[67];
                        goto compare;
                      case 268:
                        resword = &wordlist[68];
                        goto compare;
                      case 270:
                        resword = &wordlist[69];
                        goto compare;
                      case 272:
                        resword = &wordlist[70];
                        goto compare;
                      case 278:
                        resword = &wordlist[71];
                        goto compare;
                      case 279:
                        resword = &wordlist[72];
                        goto compare;
                      case 282:
                        resword = &wordlist[73];
                        goto compare;
                      case 283:
                        resword = &wordlist[74];
                        goto compare;
                      case 284:
                        resword = &wordlist[75];
                        goto compare;
                      case 285:
                        resword = &wordlist[76];
                        goto compare;
                      case 286:
                        resword = &wordlist[77];
                        goto compare;
                      case 289:
                        resword = &wordlist[78];
                        goto compare;
                      case 290:
                        resword = &wordlist[79];
                        goto compare;
                      case 293:
                        resword = &wordlist[80];
                        goto compare;
                      case 294:
                        resword = &wordlist[81];
                        goto compare;
                      case 297:
                        resword = &wordlist[82];
                        goto compare;
                      case 299:
                        resword = &wordlist[83];
                        goto compare;
                      case 303:
                        resword = &wordlist[84];
                        goto compare;
                      case 304:
                        resword = &wordlist[85];
                        goto compare;
                      case 308:
                        resword = &wordlist[86];
                        goto compare;
                      case 309:
                        resword = &wordlist[87];
                        goto compare;
                      case 312:
                        resword = &wordlist[88];
                        goto compare;
                      case 313:
                        resword = &wordlist[89];
                        goto compare;
                      case 314:
                        resword = &wordlist[90];
                        goto compare;
                      case 315:
                        resword = &wordlist[91];
                        goto compare;
                      case 319:
                        resword = &wordlist[92];
                        goto compare;
                      case 322:
                        resword = &wordlist[93];
                        goto compare;
                      case 323:
                        resword = &wordlist[94];
                        goto compare;
                      case 324:
                        resword = &wordlist[95];
                        goto compare;
                      case 332:
                        resword = &wordlist[96];
                        goto compare;
                      case 334:
                        resword = &wordlist[97];
                        goto compare;
                      case 338:
                        resword = &wordlist[98];
                        goto compare;
                      case 339:
                        resword = &wordlist[99];
                        goto compare;
                      case 340:
                        resword = &wordlist[100];
                        goto compare;
                      case 342:
                        resword = &wordlist[101];
                        goto compare;
                      case 347:
                        resword = &wordlist[102];
                        goto compare;
                      case 350:
                        resword = &wordlist[103];
                        goto compare;
                      case 354:
                        resword = &wordlist[104];
                        goto compare;
                      case 360:
                        resword = &wordlist[105];
                        goto compare;
                      case 362:
                        resword = &wordlist[106];
                        goto compare;
                      case 364:
                        resword = &wordlist[107];
                        goto compare;
                      case 365:
                        resword = &wordlist[108];
                        goto compare;
                      case 369:
                        resword = &wordlist[109];
                        goto compare;
                      case 370:
                        resword = &wordlist[110];
                        goto compare;
                      case 371:
                        resword = &wordlist[111];
                        goto compare;
                      case 372:
                        resword = &wordlist[112];
                        goto compare;
                      case 374:
                        resword = &wordlist[113];
                        goto compare;
                      case 375:
                        resword = &wordlist[114];
                        goto compare;
                      case 386:
                        resword = &wordlist[115];
                        goto compare;
                      case 390:
                        resword = &wordlist[116];
                        goto compare;
                      case 392:
                        resword = &wordlist[117];
                        goto compare;
                      case 395:
                        resword = &wordlist[118];
                        goto compare;
                      case 402:
                        resword = &wordlist[119];
                        goto compare;
                      case 403:
                        resword = &wordlist[120];
                        goto compare;
                      case 404:
                        resword = &wordlist[121];
                        goto compare;
                      case 405:
                        resword = &wordlist[122];
                        goto compare;
                      case 408:
                        resword = &wordlist[123];
                        goto compare;
                      case 409:
                        resword = &wordlist[124];
                        goto compare;
                      case 413:
                        resword = &wordlist[125];
                        goto compare;
                      case 431:
                        resword = &wordlist[126];
                        goto compare;
                      case 435:
                        resword = &wordlist[127];
                        goto compare;
                      case 441:
                        resword = &wordlist[128];
                        goto compare;
                      case 442:
                        resword = &wordlist[129];
                        goto compare;
                      case 443:
                        resword = &wordlist[130];
                        goto compare;
                      case 450:
                        resword = &wordlist[131];
                        goto compare;
                      case 452:
                        resword = &wordlist[132];
                        goto compare;
                      case 453:
                        resword = &wordlist[133];
                        goto compare;
                      case 454:
                        resword = &wordlist[134];
                        goto compare;
                      case 456:
                        resword = &wordlist[135];
                        goto compare;
                      case 457:
                        resword = &wordlist[136];
                        goto compare;
                      case 458:
                        resword = &wordlist[137];
                        goto compare;
                      case 461:
                        resword = &wordlist[138];
                        goto compare;
                      case 462:
                        resword = &wordlist[139];
                        goto compare;
                      case 463:
                        resword = &wordlist[140];
                        goto compare;
                      case 464:
                        resword = &wordlist[141];
                        goto compare;
                      case 465:
                        resword = &wordlist[142];
                        goto compare;
                      case 467:
                        resword = &wordlist[143];
                        goto compare;
                      case 472:
                        resword = &wordlist[144];
                        goto compare;
                      case 473:
                        resword = &wordlist[145];
                        goto compare;
                      case 474:
                        resword = &wordlist[146];
                        goto compare;
                      case 475:
                        resword = &wordlist[147];
                        goto compare;
                      case 477:
                        resword = &wordlist[148];
                        goto compare;
                      case 478:
                        resword = &wordlist[149];
                        goto compare;
                      case 479:
                        resword = &wordlist[150];
                        goto compare;
                      case 482:
                        resword = &wordlist[151];
                        goto compare;
                      case 483:
                        resword = &wordlist[152];
                        goto compare;
                      case 484:
                        resword = &wordlist[153];
                        goto compare;
                      case 487:
                        resword = &wordlist[154];
                        goto compare;
                      case 488:
                        resword = &wordlist[155];
                        goto compare;
                      case 494:
                        resword = &wordlist[156];
                        goto compare;
                      case 496:
                        resword = &wordlist[157];
                        goto compare;
                      case 497:
                        resword = &wordlist[158];
                        goto compare;
                      case 498:
                        resword = &wordlist[159];
                        goto compare;
                      case 500:
                        resword = &wordlist[160];
                        goto compare;
                      case 511:
                        resword = &wordlist[161];
                        goto compare;
                      case 514:
                        resword = &wordlist[162];
                        goto compare;
                      case 517:
                        resword = &wordlist[163];
                        goto compare;
                      case 522:
                        resword = &wordlist[164];
                        goto compare;
                      case 523:
                        resword = &wordlist[165];
                        goto compare;
                      case 524:
                        resword = &wordlist[166];
                        goto compare;
                      case 527:
                        resword = &wordlist[167];
                        goto compare;
                      case 531:
                        resword = &wordlist[168];
                        goto compare;
                      case 533:
                        resword = &wordlist[169];
                        goto compare;
                      case 534:
                        resword = &wordlist[170];
                        goto compare;
                      case 536:
                        resword = &wordlist[171];
                        goto compare;
                      case 537:
                        resword = &wordlist[172];
                        goto compare;
                      case 539:
                        resword = &wordlist[173];
                        goto compare;
                      case 544:
                        resword = &wordlist[174];
                        goto compare;
                      case 545:
                        resword = &wordlist[175];
                        goto compare;
                      case 546:
                        resword = &wordlist[176];
                        goto compare;
                      case 547:
                        resword = &wordlist[177];
                        goto compare;
                      case 548:
                        resword = &wordlist[178];
                        goto compare;
                      case 549:
                        resword = &wordlist[179];
                        goto compare;
                      case 552:
                        resword = &wordlist[180];
                        goto compare;
                      case 559:
                        resword = &wordlist[181];
                        goto compare;
                      case 560:
                        resword = &wordlist[182];
                        goto compare;
                      case 562:
                        resword = &wordlist[183];
                        goto compare;
                      case 563:
                        resword = &wordlist[184];
                        goto compare;
                      case 564:
                        resword = &wordlist[185];
                        goto compare;
                      case 569:
                        resword = &wordlist[186];
                        goto compare;
                      case 572:
                        resword = &wordlist[187];
                        goto compare;
                      case 574:
                        resword = &wordlist[188];
                        goto compare;
                      case 575:
                        resword = &wordlist[189];
                        goto compare;
                      case 577:
                        resword = &wordlist[190];
                        goto compare;
                      case 582:
                        resword = &wordlist[191];
                        goto compare;
                      case 583:
                        resword = &wordlist[192];
                        goto compare;
                      case 588:
                        resword = &wordlist[193];
                        goto compare;
                      case 589:
                        resword = &wordlist[194];
                        goto compare;
                      case 592:
                        resword = &wordlist[195];
                        goto compare;
                      case 596:
                        resword = &wordlist[196];
                        goto compare;
                      case 597:
                        resword = &wordlist[197];
                        goto compare;
                      case 598:
                        resword = &wordlist[198];
                        goto compare;
                      case 599:
                        resword = &wordlist[199];
                        goto compare;
                      case 613:
                        resword = &wordlist[200];
                        goto compare;
                      case 614:
                        resword = &wordlist[201];
                        goto compare;
                      case 617:
                        resword = &wordlist[202];
                        goto compare;
                      case 622:
                        resword = &wordlist[203];
                        goto compare;
                      case 627:
                        resword = &wordlist[204];
                        goto compare;
                      case 632:
                        resword = &wordlist[205];
                        goto compare;
                      case 634:
                        resword = &wordlist[206];
                        goto compare;
                      case 638:
                        resword = &wordlist[207];
                        goto compare;
                      case 647:
                        resword = &wordlist[208];
                        goto compare;
                      case 648:
                        resword = &wordlist[209];
                        goto compare;
                      case 649:
                        resword = &wordlist[210];
                        goto compare;
                      case 652:
                        resword = &wordlist[211];
                        goto compare;
                      case 657:
                        resword = &wordlist[212];
                        goto compare;
                      case 658:
                        resword = &wordlist[213];
                        goto compare;
                      case 659:
                        resword = &wordlist[214];
                        goto compare;
                      case 660:
                        resword = &wordlist[215];
                        goto compare;
                      case 663:
                        resword = &wordlist[216];
                        goto compare;
                      case 664:
                        resword = &wordlist[217];
                        goto compare;
                      case 667:
                        resword = &wordlist[218];
                        goto compare;
                      case 668:
                        resword = &wordlist[219];
                        goto compare;
                      case 669:
                        resword = &wordlist[220];
                        goto compare;
                      case 670:
                        resword = &wordlist[221];
                        goto compare;
                      case 672:
                        resword = &wordlist[222];
                        goto compare;
                      case 673:
                        resword = &wordlist[223];
                        goto compare;
                      case 680:
                        resword = &wordlist[224];
                        goto compare;
                      case 682:
                        resword = &wordlist[225];
                        goto compare;
                      case 683:
                        resword = &wordlist[226];
                        goto compare;
                      case 687:
                        resword = &wordlist[227];
                        goto compare;
                      case 690:
                        resword = &wordlist[228];
                        goto compare;
                      case 692:
                        resword = &wordlist[229];
                        goto compare;
                      case 693:
                        resword = &wordlist[230];
                        goto compare;
                      case 694:
                        resword = &wordlist[231];
                        goto compare;
                      case 697:
                        resword = &wordlist[232];
                        goto compare;
                      case 698:
                        resword = &wordlist[233];
                        goto compare;
                      case 702:
                        resword = &wordlist[234];
                        goto compare;
                      case 704:
                        resword = &wordlist[235];
                        goto compare;
                      case 707:
                        resword = &wordlist[236];
                        goto compare;
                      case 709:
                        resword = &wordlist[237];
                        goto compare;
                      case 713:
                        resword = &wordlist[238];
                        goto compare;
                      case 716:
                        resword = &wordlist[239];
                        goto compare;
                      case 718:
                        resword = &wordlist[240];
                        goto compare;
                      case 720:
                        resword = &wordlist[241];
                        goto compare;
                      case 723:
                        resword = &wordlist[242];
                        goto compare;
                      case 724:
                        resword = &wordlist[243];
                        goto compare;
                      case 727:
                        resword = &wordlist[244];
                        goto compare;
                      case 728:
                        resword = &wordlist[245];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 730)
                    {
                      case 0:
                        resword = &wordlist[246];
                        goto compare;
                      case 3:
                        resword = &wordlist[247];
                        goto compare;
                      case 4:
                        resword = &wordlist[248];
                        goto compare;
                      case 9:
                        resword = &wordlist[249];
                        goto compare;
                      case 11:
                        resword = &wordlist[250];
                        goto compare;
                      case 13:
                        resword = &wordlist[251];
                        goto compare;
                      case 14:
                        resword = &wordlist[252];
                        goto compare;
                      case 22:
                        resword = &wordlist[253];
                        goto compare;
                      case 24:
                        resword = &wordlist[254];
                        goto compare;
                      case 25:
                        resword = &wordlist[255];
                        goto compare;
                      case 28:
                        resword = &wordlist[256];
                        goto compare;
                      case 29:
                        resword = &wordlist[257];
                        goto compare;
                      case 30:
                        resword = &wordlist[258];
                        goto compare;
                      case 33:
                        resword = &wordlist[259];
                        goto compare;
                      case 38:
                        resword = &wordlist[260];
                        goto compare;
                      case 40:
                        resword = &wordlist[261];
                        goto compare;
                      case 41:
                        resword = &wordlist[262];
                        goto compare;
                      case 47:
                        resword = &wordlist[263];
                        goto compare;
                      case 48:
                        resword = &wordlist[264];
                        goto compare;
                      case 55:
                        resword = &wordlist[265];
                        goto compare;
                      case 56:
                        resword = &wordlist[266];
                        goto compare;
                      case 58:
                        resword = &wordlist[267];
                        goto compare;
                      case 59:
                        resword = &wordlist[268];
                        goto compare;
                      case 60:
                        resword = &wordlist[269];
                        goto compare;
                      case 61:
                        resword = &wordlist[270];
                        goto compare;
                      case 64:
                        resword = &wordlist[271];
                        goto compare;
                      case 65:
                        resword = &wordlist[272];
                        goto compare;
                      case 69:
                        resword = &wordlist[273];
                        goto compare;
                      case 73:
                        resword = &wordlist[274];
                        goto compare;
                      case 75:
                        resword = &wordlist[275];
                        goto compare;
                      case 76:
                        resword = &wordlist[276];
                        goto compare;
                      case 79:
                        resword = &wordlist[277];
                        goto compare;
                      case 80:
                        resword = &wordlist[278];
                        goto compare;
                      case 81:
                        resword = &wordlist[279];
                        goto compare;
                      case 83:
                        resword = &wordlist[280];
                        goto compare;
                      case 86:
                        resword = &wordlist[281];
                        goto compare;
                      case 88:
                        resword = &wordlist[282];
                        goto compare;
                      case 90:
                        resword = &wordlist[283];
                        goto compare;
                      case 91:
                        resword = &wordlist[284];
                        goto compare;
                      case 92:
                        resword = &wordlist[285];
                        goto compare;
                      case 93:
                        resword = &wordlist[286];
                        goto compare;
                      case 94:
                        resword = &wordlist[287];
                        goto compare;
                      case 95:
                        resword = &wordlist[288];
                        goto compare;
                      case 96:
                        resword = &wordlist[289];
                        goto compare;
                      case 103:
                        resword = &wordlist[290];
                        goto compare;
                      case 106:
                        resword = &wordlist[291];
                        goto compare;
                      case 108:
                        resword = &wordlist[292];
                        goto compare;
                      case 109:
                        resword = &wordlist[293];
                        goto compare;
                      case 117:
                        resword = &wordlist[294];
                        goto compare;
                      case 118:
                        resword = &wordlist[295];
                        goto compare;
                      case 119:
                        resword = &wordlist[296];
                        goto compare;
                      case 120:
                        resword = &wordlist[297];
                        goto compare;
                      case 121:
                        resword = &wordlist[298];
                        goto compare;
                      case 122:
                        resword = &wordlist[299];
                        goto compare;
                      case 125:
                        resword = &wordlist[300];
                        goto compare;
                      case 126:
                        resword = &wordlist[301];
                        goto compare;
                      case 128:
                        resword = &wordlist[302];
                        goto compare;
                      case 130:
                        resword = &wordlist[303];
                        goto compare;
                      case 131:
                        resword = &wordlist[304];
                        goto compare;
                      case 133:
                        resword = &wordlist[305];
                        goto compare;
                      case 138:
                        resword = &wordlist[306];
                        goto compare;
                      case 139:
                        resword = &wordlist[307];
                        goto compare;
                      case 140:
                        resword = &wordlist[308];
                        goto compare;
                      case 143:
                        resword = &wordlist[309];
                        goto compare;
                      case 144:
                        resword = &wordlist[310];
                        goto compare;
                      case 146:
                        resword = &wordlist[311];
                        goto compare;
                      case 148:
                        resword = &wordlist[312];
                        goto compare;
                      case 150:
                        resword = &wordlist[313];
                        goto compare;
                      case 153:
                        resword = &wordlist[314];
                        goto compare;
                      case 158:
                        resword = &wordlist[315];
                        goto compare;
                      case 159:
                        resword = &wordlist[316];
                        goto compare;
                      case 163:
                        resword = &wordlist[317];
                        goto compare;
                      case 164:
                        resword = &wordlist[318];
                        goto compare;
                      case 167:
                        resword = &wordlist[319];
                        goto compare;
                      case 168:
                        resword = &wordlist[320];
                        goto compare;
                      case 170:
                        resword = &wordlist[321];
                        goto compare;
                      case 171:
                        resword = &wordlist[322];
                        goto compare;
                      case 172:
                        resword = &wordlist[323];
                        goto compare;
                      case 173:
                        resword = &wordlist[324];
                        goto compare;
                      case 174:
                        resword = &wordlist[325];
                        goto compare;
                      case 178:
                        resword = &wordlist[326];
                        goto compare;
                      case 180:
                        resword = &wordlist[327];
                        goto compare;
                      case 181:
                        resword = &wordlist[328];
                        goto compare;
                      case 182:
                        resword = &wordlist[329];
                        goto compare;
                      case 183:
                        resword = &wordlist[330];
                        goto compare;
                      case 186:
                        resword = &wordlist[331];
                        goto compare;
                      case 187:
                        resword = &wordlist[332];
                        goto compare;
                      case 188:
                        resword = &wordlist[333];
                        goto compare;
                      case 191:
                        resword = &wordlist[334];
                        goto compare;
                      case 192:
                        resword = &wordlist[335];
                        goto compare;
                      case 193:
                        resword = &wordlist[336];
                        goto compare;
                      case 194:
                        resword = &wordlist[337];
                        goto compare;
                      case 196:
                        resword = &wordlist[338];
                        goto compare;
                      case 198:
                        resword = &wordlist[339];
                        goto compare;
                      case 201:
                        resword = &wordlist[340];
                        goto compare;
                      case 203:
                        resword = &wordlist[341];
                        goto compare;
                      case 204:
                        resword = &wordlist[342];
                        goto compare;
                      case 205:
                        resword = &wordlist[343];
                        goto compare;
                      case 208:
                        resword = &wordlist[344];
                        goto compare;
                      case 213:
                        resword = &wordlist[345];
                        goto compare;
                      case 215:
                        resword = &wordlist[346];
                        goto compare;
                      case 217:
                        resword = &wordlist[347];
                        goto compare;
                      case 218:
                        resword = &wordlist[348];
                        goto compare;
                      case 219:
                        resword = &wordlist[349];
                        goto compare;
                      case 220:
                        resword = &wordlist[350];
                        goto compare;
                      case 222:
                        resword = &wordlist[351];
                        goto compare;
                      case 223:
                        resword = &wordlist[352];
                        goto compare;
                      case 225:
                        resword = &wordlist[353];
                        goto compare;
                      case 227:
                        resword = &wordlist[354];
                        goto compare;
                      case 228:
                        resword = &wordlist[355];
                        goto compare;
                      case 229:
                        resword = &wordlist[356];
                        goto compare;
                      case 231:
                        resword = &wordlist[357];
                        goto compare;
                      case 233:
                        resword = &wordlist[358];
                        goto compare;
                      case 235:
                        resword = &wordlist[359];
                        goto compare;
                      case 236:
                        resword = &wordlist[360];
                        goto compare;
                      case 237:
                        resword = &wordlist[361];
                        goto compare;
                      case 244:
                        resword = &wordlist[362];
                        goto compare;
                      case 248:
                        resword = &wordlist[363];
                        goto compare;
                      case 255:
                        resword = &wordlist[364];
                        goto compare;
                      case 260:
                        resword = &wordlist[365];
                        goto compare;
                      case 263:
                        resword = &wordlist[366];
                        goto compare;
                      case 268:
                        resword = &wordlist[367];
                        goto compare;
                      case 270:
                        resword = &wordlist[368];
                        goto compare;
                      case 272:
                        resword = &wordlist[369];
                        goto compare;
                      case 273:
                        resword = &wordlist[370];
                        goto compare;
                      case 277:
                        resword = &wordlist[371];
                        goto compare;
                      case 279:
                        resword = &wordlist[372];
                        goto compare;
                      case 281:
                        resword = &wordlist[373];
                        goto compare;
                      case 284:
                        resword = &wordlist[374];
                        goto compare;
                      case 286:
                        resword = &wordlist[375];
                        goto compare;
                      case 289:
                        resword = &wordlist[376];
                        goto compare;
                      case 291:
                        resword = &wordlist[377];
                        goto compare;
                      case 292:
                        resword = &wordlist[378];
                        goto compare;
                      case 293:
                        resword = &wordlist[379];
                        goto compare;
                      case 299:
                        resword = &wordlist[380];
                        goto compare;
                      case 302:
                        resword = &wordlist[381];
                        goto compare;
                      case 304:
                        resword = &wordlist[382];
                        goto compare;
                      case 306:
                        resword = &wordlist[383];
                        goto compare;
                      case 308:
                        resword = &wordlist[384];
                        goto compare;
                      case 309:
                        resword = &wordlist[385];
                        goto compare;
                      case 313:
                        resword = &wordlist[386];
                        goto compare;
                      case 318:
                        resword = &wordlist[387];
                        goto compare;
                      case 321:
                        resword = &wordlist[388];
                        goto compare;
                      case 322:
                        resword = &wordlist[389];
                        goto compare;
                      case 323:
                        resword = &wordlist[390];
                        goto compare;
                      case 324:
                        resword = &wordlist[391];
                        goto compare;
                      case 325:
                        resword = &wordlist[392];
                        goto compare;
                      case 329:
                        resword = &wordlist[393];
                        goto compare;
                      case 334:
                        resword = &wordlist[394];
                        goto compare;
                      case 338:
                        resword = &wordlist[395];
                        goto compare;
                      case 340:
                        resword = &wordlist[396];
                        goto compare;
                      case 343:
                        resword = &wordlist[397];
                        goto compare;
                      case 344:
                        resword = &wordlist[398];
                        goto compare;
                      case 345:
                        resword = &wordlist[399];
                        goto compare;
                      case 347:
                        resword = &wordlist[400];
                        goto compare;
                      case 350:
                        resword = &wordlist[401];
                        goto compare;
                      case 353:
                        resword = &wordlist[402];
                        goto compare;
                      case 355:
                        resword = &wordlist[403];
                        goto compare;
                      case 358:
                        resword = &wordlist[404];
                        goto compare;
                      case 359:
                        resword = &wordlist[405];
                        goto compare;
                      case 363:
                        resword = &wordlist[406];
                        goto compare;
                      case 364:
                        resword = &wordlist[407];
                        goto compare;
                      case 365:
                        resword = &wordlist[408];
                        goto compare;
                      case 367:
                        resword = &wordlist[409];
                        goto compare;
                      case 368:
                        resword = &wordlist[410];
                        goto compare;
                      case 370:
                        resword = &wordlist[411];
                        goto compare;
                      case 372:
                        resword = &wordlist[412];
                        goto compare;
                      case 375:
                        resword = &wordlist[413];
                        goto compare;
                      case 377:
                        resword = &wordlist[414];
                        goto compare;
                      case 383:
                        resword = &wordlist[415];
                        goto compare;
                      case 385:
                        resword = &wordlist[416];
                        goto compare;
                      case 388:
                        resword = &wordlist[417];
                        goto compare;
                      case 389:
                        resword = &wordlist[418];
                        goto compare;
                      case 393:
                        resword = &wordlist[419];
                        goto compare;
                      case 394:
                        resword = &wordlist[420];
                        goto compare;
                      case 397:
                        resword = &wordlist[421];
                        goto compare;
                      case 399:
                        resword = &wordlist[422];
                        goto compare;
                      case 400:
                        resword = &wordlist[423];
                        goto compare;
                      case 402:
                        resword = &wordlist[424];
                        goto compare;
                      case 403:
                        resword = &wordlist[425];
                        goto compare;
                      case 404:
                        resword = &wordlist[426];
                        goto compare;
                      case 406:
                        resword = &wordlist[427];
                        goto compare;
                      case 407:
                        resword = &wordlist[428];
                        goto compare;
                      case 408:
                        resword = &wordlist[429];
                        goto compare;
                      case 409:
                        resword = &wordlist[430];
                        goto compare;
                      case 410:
                        resword = &wordlist[431];
                        goto compare;
                      case 413:
                        resword = &wordlist[432];
                        goto compare;
                      case 414:
                        resword = &wordlist[433];
                        goto compare;
                      case 415:
                        resword = &wordlist[434];
                        goto compare;
                      case 416:
                        resword = &wordlist[435];
                        goto compare;
                      case 418:
                        resword = &wordlist[436];
                        goto compare;
                      case 423:
                        resword = &wordlist[437];
                        goto compare;
                      case 424:
                        resword = &wordlist[438];
                        goto compare;
                      case 428:
                        resword = &wordlist[439];
                        goto compare;
                      case 430:
                        resword = &wordlist[440];
                        goto compare;
                      case 432:
                        resword = &wordlist[441];
                        goto compare;
                      case 434:
                        resword = &wordlist[442];
                        goto compare;
                      case 436:
                        resword = &wordlist[443];
                        goto compare;
                      case 438:
                        resword = &wordlist[444];
                        goto compare;
                      case 442:
                        resword = &wordlist[445];
                        goto compare;
                      case 443:
                        resword = &wordlist[446];
                        goto compare;
                      case 444:
                        resword = &wordlist[447];
                        goto compare;
                      case 445:
                        resword = &wordlist[448];
                        goto compare;
                      case 448:
                        resword = &wordlist[449];
                        goto compare;
                      case 450:
                        resword = &wordlist[450];
                        goto compare;
                      case 451:
                        resword = &wordlist[451];
                        goto compare;
                      case 453:
                        resword = &wordlist[452];
                        goto compare;
                      case 454:
                        resword = &wordlist[453];
                        goto compare;
                      case 459:
                        resword = &wordlist[454];
                        goto compare;
                      case 462:
                        resword = &wordlist[455];
                        goto compare;
                      case 463:
                        resword = &wordlist[456];
                        goto compare;
                      case 464:
                        resword = &wordlist[457];
                        goto compare;
                      case 466:
                        resword = &wordlist[458];
                        goto compare;
                      case 468:
                        resword = &wordlist[459];
                        goto compare;
                      case 469:
                        resword = &wordlist[460];
                        goto compare;
                      case 471:
                        resword = &wordlist[461];
                        goto compare;
                      case 473:
                        resword = &wordlist[462];
                        goto compare;
                      case 475:
                        resword = &wordlist[463];
                        goto compare;
                      case 478:
                        resword = &wordlist[464];
                        goto compare;
                      case 479:
                        resword = &wordlist[465];
                        goto compare;
                      case 480:
                        resword = &wordlist[466];
                        goto compare;
                      case 481:
                        resword = &wordlist[467];
                        goto compare;
                      case 483:
                        resword = &wordlist[468];
                        goto compare;
                      case 485:
                        resword = &wordlist[469];
                        goto compare;
                      case 487:
                        resword = &wordlist[470];
                        goto compare;
                      case 488:
                        resword = &wordlist[471];
                        goto compare;
                      case 490:
                        resword = &wordlist[472];
                        goto compare;
                      case 491:
                        resword = &wordlist[473];
                        goto compare;
                      case 493:
                        resword = &wordlist[474];
                        goto compare;
                      case 494:
                        resword = &wordlist[475];
                        goto compare;
                      case 496:
                        resword = &wordlist[476];
                        goto compare;
                      case 506:
                        resword = &wordlist[477];
                        goto compare;
                      case 508:
                        resword = &wordlist[478];
                        goto compare;
                      case 510:
                        resword = &wordlist[479];
                        goto compare;
                      case 514:
                        resword = &wordlist[480];
                        goto compare;
                      case 515:
                        resword = &wordlist[481];
                        goto compare;
                      case 518:
                        resword = &wordlist[482];
                        goto compare;
                      case 519:
                        resword = &wordlist[483];
                        goto compare;
                      case 523:
                        resword = &wordlist[484];
                        goto compare;
                      case 524:
                        resword = &wordlist[485];
                        goto compare;
                      case 525:
                        resword = &wordlist[486];
                        goto compare;
                      case 527:
                        resword = &wordlist[487];
                        goto compare;
                      case 529:
                        resword = &wordlist[488];
                        goto compare;
                      case 534:
                        resword = &wordlist[489];
                        goto compare;
                      case 538:
                        resword = &wordlist[490];
                        goto compare;
                    }
                }
            }
          else
            {
              if (key < 2009)
                {
                  switch (key - 1269)
                    {
                      case 0:
                        resword = &wordlist[491];
                        goto compare;
                      case 1:
                        resword = &wordlist[492];
                        goto compare;
                      case 2:
                        resword = &wordlist[493];
                        goto compare;
                      case 4:
                        resword = &wordlist[494];
                        goto compare;
                      case 5:
                        resword = &wordlist[495];
                        goto compare;
                      case 6:
                        resword = &wordlist[496];
                        goto compare;
                      case 7:
                        resword = &wordlist[497];
                        goto compare;
                      case 9:
                        resword = &wordlist[498];
                        goto compare;
                      case 10:
                        resword = &wordlist[499];
                        goto compare;
                      case 11:
                        resword = &wordlist[500];
                        goto compare;
                      case 14:
                        resword = &wordlist[501];
                        goto compare;
                      case 16:
                        resword = &wordlist[502];
                        goto compare;
                      case 19:
                        resword = &wordlist[503];
                        goto compare;
                      case 20:
                        resword = &wordlist[504];
                        goto compare;
                      case 22:
                        resword = &wordlist[505];
                        goto compare;
                      case 25:
                        resword = &wordlist[506];
                        goto compare;
                      case 27:
                        resword = &wordlist[507];
                        goto compare;
                      case 29:
                        resword = &wordlist[508];
                        goto compare;
                      case 33:
                        resword = &wordlist[509];
                        goto compare;
                      case 36:
                        resword = &wordlist[510];
                        goto compare;
                      case 37:
                        resword = &wordlist[511];
                        goto compare;
                      case 38:
                        resword = &wordlist[512];
                        goto compare;
                      case 39:
                        resword = &wordlist[513];
                        goto compare;
                      case 40:
                        resword = &wordlist[514];
                        goto compare;
                      case 49:
                        resword = &wordlist[515];
                        goto compare;
                      case 53:
                        resword = &wordlist[516];
                        goto compare;
                      case 56:
                        resword = &wordlist[517];
                        goto compare;
                      case 59:
                        resword = &wordlist[518];
                        goto compare;
                      case 60:
                        resword = &wordlist[519];
                        goto compare;
                      case 64:
                        resword = &wordlist[520];
                        goto compare;
                      case 68:
                        resword = &wordlist[521];
                        goto compare;
                      case 71:
                        resword = &wordlist[522];
                        goto compare;
                      case 77:
                        resword = &wordlist[523];
                        goto compare;
                      case 84:
                        resword = &wordlist[524];
                        goto compare;
                      case 85:
                        resword = &wordlist[525];
                        goto compare;
                      case 90:
                        resword = &wordlist[526];
                        goto compare;
                      case 94:
                        resword = &wordlist[527];
                        goto compare;
                      case 95:
                        resword = &wordlist[528];
                        goto compare;
                      case 96:
                        resword = &wordlist[529];
                        goto compare;
                      case 104:
                        resword = &wordlist[530];
                        goto compare;
                      case 109:
                        resword = &wordlist[531];
                        goto compare;
                      case 110:
                        resword = &wordlist[532];
                        goto compare;
                      case 114:
                        resword = &wordlist[533];
                        goto compare;
                      case 115:
                        resword = &wordlist[534];
                        goto compare;
                      case 119:
                        resword = &wordlist[535];
                        goto compare;
                      case 120:
                        resword = &wordlist[536];
                        goto compare;
                      case 122:
                        resword = &wordlist[537];
                        goto compare;
                      case 124:
                        resword = &wordlist[538];
                        goto compare;
                      case 127:
                        resword = &wordlist[539];
                        goto compare;
                      case 136:
                        resword = &wordlist[540];
                        goto compare;
                      case 137:
                        resword = &wordlist[541];
                        goto compare;
                      case 140:
                        resword = &wordlist[542];
                        goto compare;
                      case 141:
                        resword = &wordlist[543];
                        goto compare;
                      case 145:
                        resword = &wordlist[544];
                        goto compare;
                      case 150:
                        resword = &wordlist[545];
                        goto compare;
                      case 151:
                        resword = &wordlist[546];
                        goto compare;
                      case 152:
                        resword = &wordlist[547];
                        goto compare;
                      case 154:
                        resword = &wordlist[548];
                        goto compare;
                      case 159:
                        resword = &wordlist[549];
                        goto compare;
                      case 160:
                        resword = &wordlist[550];
                        goto compare;
                      case 162:
                        resword = &wordlist[551];
                        goto compare;
                      case 164:
                        resword = &wordlist[552];
                        goto compare;
                      case 165:
                        resword = &wordlist[553];
                        goto compare;
                      case 168:
                        resword = &wordlist[554];
                        goto compare;
                      case 169:
                        resword = &wordlist[555];
                        goto compare;
                      case 172:
                        resword = &wordlist[556];
                        goto compare;
                      case 173:
                        resword = &wordlist[557];
                        goto compare;
                      case 174:
                        resword = &wordlist[558];
                        goto compare;
                      case 177:
                        resword = &wordlist[559];
                        goto compare;
                      case 180:
                        resword = &wordlist[560];
                        goto compare;
                      case 182:
                        resword = &wordlist[561];
                        goto compare;
                      case 189:
                        resword = &wordlist[562];
                        goto compare;
                      case 193:
                        resword = &wordlist[563];
                        goto compare;
                      case 194:
                        resword = &wordlist[564];
                        goto compare;
                      case 199:
                        resword = &wordlist[565];
                        goto compare;
                      case 203:
                        resword = &wordlist[566];
                        goto compare;
                      case 205:
                        resword = &wordlist[567];
                        goto compare;
                      case 206:
                        resword = &wordlist[568];
                        goto compare;
                      case 208:
                        resword = &wordlist[569];
                        goto compare;
                      case 209:
                        resword = &wordlist[570];
                        goto compare;
                      case 214:
                        resword = &wordlist[571];
                        goto compare;
                      case 216:
                        resword = &wordlist[572];
                        goto compare;
                      case 222:
                        resword = &wordlist[573];
                        goto compare;
                      case 224:
                        resword = &wordlist[574];
                        goto compare;
                      case 227:
                        resword = &wordlist[575];
                        goto compare;
                      case 233:
                        resword = &wordlist[576];
                        goto compare;
                      case 234:
                        resword = &wordlist[577];
                        goto compare;
                      case 236:
                        resword = &wordlist[578];
                        goto compare;
                      case 239:
                        resword = &wordlist[579];
                        goto compare;
                      case 249:
                        resword = &wordlist[580];
                        goto compare;
                      case 259:
                        resword = &wordlist[581];
                        goto compare;
                      case 261:
                        resword = &wordlist[582];
                        goto compare;
                      case 263:
                        resword = &wordlist[583];
                        goto compare;
                      case 264:
                        resword = &wordlist[584];
                        goto compare;
                      case 265:
                        resword = &wordlist[585];
                        goto compare;
                      case 267:
                        resword = &wordlist[586];
                        goto compare;
                      case 268:
                        resword = &wordlist[587];
                        goto compare;
                      case 269:
                        resword = &wordlist[588];
                        goto compare;
                      case 279:
                        resword = &wordlist[589];
                        goto compare;
                      case 280:
                        resword = &wordlist[590];
                        goto compare;
                      case 282:
                        resword = &wordlist[591];
                        goto compare;
                      case 291:
                        resword = &wordlist[592];
                        goto compare;
                      case 296:
                        resword = &wordlist[593];
                        goto compare;
                      case 300:
                        resword = &wordlist[594];
                        goto compare;
                      case 302:
                        resword = &wordlist[595];
                        goto compare;
                      case 304:
                        resword = &wordlist[596];
                        goto compare;
                      case 305:
                        resword = &wordlist[597];
                        goto compare;
                      case 306:
                        resword = &wordlist[598];
                        goto compare;
                      case 308:
                        resword = &wordlist[599];
                        goto compare;
                      case 310:
                        resword = &wordlist[600];
                        goto compare;
                      case 311:
                        resword = &wordlist[601];
                        goto compare;
                      case 315:
                        resword = &wordlist[602];
                        goto compare;
                      case 316:
                        resword = &wordlist[603];
                        goto compare;
                      case 317:
                        resword = &wordlist[604];
                        goto compare;
                      case 322:
                        resword = &wordlist[605];
                        goto compare;
                      case 324:
                        resword = &wordlist[606];
                        goto compare;
                      case 331:
                        resword = &wordlist[607];
                        goto compare;
                      case 337:
                        resword = &wordlist[608];
                        goto compare;
                      case 339:
                        resword = &wordlist[609];
                        goto compare;
                      case 340:
                        resword = &wordlist[610];
                        goto compare;
                      case 342:
                        resword = &wordlist[611];
                        goto compare;
                      case 349:
                        resword = &wordlist[612];
                        goto compare;
                      case 350:
                        resword = &wordlist[613];
                        goto compare;
                      case 352:
                        resword = &wordlist[614];
                        goto compare;
                      case 354:
                        resword = &wordlist[615];
                        goto compare;
                      case 362:
                        resword = &wordlist[616];
                        goto compare;
                      case 364:
                        resword = &wordlist[617];
                        goto compare;
                      case 366:
                        resword = &wordlist[618];
                        goto compare;
                      case 370:
                        resword = &wordlist[619];
                        goto compare;
                      case 374:
                        resword = &wordlist[620];
                        goto compare;
                      case 377:
                        resword = &wordlist[621];
                        goto compare;
                      case 385:
                        resword = &wordlist[622];
                        goto compare;
                      case 391:
                        resword = &wordlist[623];
                        goto compare;
                      case 393:
                        resword = &wordlist[624];
                        goto compare;
                      case 395:
                        resword = &wordlist[625];
                        goto compare;
                      case 396:
                        resword = &wordlist[626];
                        goto compare;
                      case 400:
                        resword = &wordlist[627];
                        goto compare;
                      case 404:
                        resword = &wordlist[628];
                        goto compare;
                      case 406:
                        resword = &wordlist[629];
                        goto compare;
                      case 409:
                        resword = &wordlist[630];
                        goto compare;
                      case 413:
                        resword = &wordlist[631];
                        goto compare;
                      case 414:
                        resword = &wordlist[632];
                        goto compare;
                      case 416:
                        resword = &wordlist[633];
                        goto compare;
                      case 417:
                        resword = &wordlist[634];
                        goto compare;
                      case 419:
                        resword = &wordlist[635];
                        goto compare;
                      case 420:
                        resword = &wordlist[636];
                        goto compare;
                      case 423:
                        resword = &wordlist[637];
                        goto compare;
                      case 425:
                        resword = &wordlist[638];
                        goto compare;
                      case 426:
                        resword = &wordlist[639];
                        goto compare;
                      case 427:
                        resword = &wordlist[640];
                        goto compare;
                      case 430:
                        resword = &wordlist[641];
                        goto compare;
                      case 434:
                        resword = &wordlist[642];
                        goto compare;
                      case 439:
                        resword = &wordlist[643];
                        goto compare;
                      case 440:
                        resword = &wordlist[644];
                        goto compare;
                      case 444:
                        resword = &wordlist[645];
                        goto compare;
                      case 445:
                        resword = &wordlist[646];
                        goto compare;
                      case 456:
                        resword = &wordlist[647];
                        goto compare;
                      case 462:
                        resword = &wordlist[648];
                        goto compare;
                      case 470:
                        resword = &wordlist[649];
                        goto compare;
                      case 474:
                        resword = &wordlist[650];
                        goto compare;
                      case 478:
                        resword = &wordlist[651];
                        goto compare;
                      case 479:
                        resword = &wordlist[652];
                        goto compare;
                      case 480:
                        resword = &wordlist[653];
                        goto compare;
                      case 482:
                        resword = &wordlist[654];
                        goto compare;
                      case 487:
                        resword = &wordlist[655];
                        goto compare;
                      case 491:
                        resword = &wordlist[656];
                        goto compare;
                      case 492:
                        resword = &wordlist[657];
                        goto compare;
                      case 493:
                        resword = &wordlist[658];
                        goto compare;
                      case 500:
                        resword = &wordlist[659];
                        goto compare;
                      case 505:
                        resword = &wordlist[660];
                        goto compare;
                      case 508:
                        resword = &wordlist[661];
                        goto compare;
                      case 510:
                        resword = &wordlist[662];
                        goto compare;
                      case 515:
                        resword = &wordlist[663];
                        goto compare;
                      case 516:
                        resword = &wordlist[664];
                        goto compare;
                      case 519:
                        resword = &wordlist[665];
                        goto compare;
                      case 521:
                        resword = &wordlist[666];
                        goto compare;
                      case 523:
                        resword = &wordlist[667];
                        goto compare;
                      case 526:
                        resword = &wordlist[668];
                        goto compare;
                      case 527:
                        resword = &wordlist[669];
                        goto compare;
                      case 530:
                        resword = &wordlist[670];
                        goto compare;
                      case 531:
                        resword = &wordlist[671];
                        goto compare;
                      case 534:
                        resword = &wordlist[672];
                        goto compare;
                      case 535:
                        resword = &wordlist[673];
                        goto compare;
                      case 536:
                        resword = &wordlist[674];
                        goto compare;
                      case 539:
                        resword = &wordlist[675];
                        goto compare;
                      case 542:
                        resword = &wordlist[676];
                        goto compare;
                      case 546:
                        resword = &wordlist[677];
                        goto compare;
                      case 549:
                        resword = &wordlist[678];
                        goto compare;
                      case 550:
                        resword = &wordlist[679];
                        goto compare;
                      case 555:
                        resword = &wordlist[680];
                        goto compare;
                      case 556:
                        resword = &wordlist[681];
                        goto compare;
                      case 562:
                        resword = &wordlist[682];
                        goto compare;
                      case 566:
                        resword = &wordlist[683];
                        goto compare;
                      case 568:
                        resword = &wordlist[684];
                        goto compare;
                      case 570:
                        resword = &wordlist[685];
                        goto compare;
                      case 573:
                        resword = &wordlist[686];
                        goto compare;
                      case 580:
                        resword = &wordlist[687];
                        goto compare;
                      case 581:
                        resword = &wordlist[688];
                        goto compare;
                      case 583:
                        resword = &wordlist[689];
                        goto compare;
                      case 586:
                        resword = &wordlist[690];
                        goto compare;
                      case 599:
                        resword = &wordlist[691];
                        goto compare;
                      case 601:
                        resword = &wordlist[692];
                        goto compare;
                      case 602:
                        resword = &wordlist[693];
                        goto compare;
                      case 604:
                        resword = &wordlist[694];
                        goto compare;
                      case 605:
                        resword = &wordlist[695];
                        goto compare;
                      case 609:
                        resword = &wordlist[696];
                        goto compare;
                      case 615:
                        resword = &wordlist[697];
                        goto compare;
                      case 625:
                        resword = &wordlist[698];
                        goto compare;
                      case 629:
                        resword = &wordlist[699];
                        goto compare;
                      case 633:
                        resword = &wordlist[700];
                        goto compare;
                      case 634:
                        resword = &wordlist[701];
                        goto compare;
                      case 640:
                        resword = &wordlist[702];
                        goto compare;
                      case 641:
                        resword = &wordlist[703];
                        goto compare;
                      case 647:
                        resword = &wordlist[704];
                        goto compare;
                      case 649:
                        resword = &wordlist[705];
                        goto compare;
                      case 650:
                        resword = &wordlist[706];
                        goto compare;
                      case 653:
                        resword = &wordlist[707];
                        goto compare;
                      case 655:
                        resword = &wordlist[708];
                        goto compare;
                      case 657:
                        resword = &wordlist[709];
                        goto compare;
                      case 660:
                        resword = &wordlist[710];
                        goto compare;
                      case 663:
                        resword = &wordlist[711];
                        goto compare;
                      case 665:
                        resword = &wordlist[712];
                        goto compare;
                      case 666:
                        resword = &wordlist[713];
                        goto compare;
                      case 669:
                        resword = &wordlist[714];
                        goto compare;
                      case 673:
                        resword = &wordlist[715];
                        goto compare;
                      case 680:
                        resword = &wordlist[716];
                        goto compare;
                      case 681:
                        resword = &wordlist[717];
                        goto compare;
                      case 684:
                        resword = &wordlist[718];
                        goto compare;
                      case 686:
                        resword = &wordlist[719];
                        goto compare;
                      case 687:
                        resword = &wordlist[720];
                        goto compare;
                      case 688:
                        resword = &wordlist[721];
                        goto compare;
                      case 691:
                        resword = &wordlist[722];
                        goto compare;
                      case 698:
                        resword = &wordlist[723];
                        goto compare;
                      case 699:
                        resword = &wordlist[724];
                        goto compare;
                      case 701:
                        resword = &wordlist[725];
                        goto compare;
                      case 704:
                        resword = &wordlist[726];
                        goto compare;
                      case 705:
                        resword = &wordlist[727];
                        goto compare;
                      case 708:
                        resword = &wordlist[728];
                        goto compare;
                      case 710:
                        resword = &wordlist[729];
                        goto compare;
                      case 719:
                        resword = &wordlist[730];
                        goto compare;
                      case 725:
                        resword = &wordlist[731];
                        goto compare;
                      case 726:
                        resword = &wordlist[732];
                        goto compare;
                      case 728:
                        resword = &wordlist[733];
                        goto compare;
                      case 731:
                        resword = &wordlist[734];
                        goto compare;
                      case 736:
                        resword = &wordlist[735];
                        goto compare;
                    }
                }
              else
                {
                  switch (key - 2009)
                    {
                      case 0:
                        resword = &wordlist[736];
                        goto compare;
                      case 1:
                        resword = &wordlist[737];
                        goto compare;
                      case 4:
                        resword = &wordlist[738];
                        goto compare;
                      case 5:
                        resword = &wordlist[739];
                        goto compare;
                      case 6:
                        resword = &wordlist[740];
                        goto compare;
                      case 7:
                        resword = &wordlist[741];
                        goto compare;
                      case 9:
                        resword = &wordlist[742];
                        goto compare;
                      case 10:
                        resword = &wordlist[743];
                        goto compare;
                      case 13:
                        resword = &wordlist[744];
                        goto compare;
                      case 20:
                        resword = &wordlist[745];
                        goto compare;
                      case 22:
                        resword = &wordlist[746];
                        goto compare;
                      case 25:
                        resword = &wordlist[747];
                        goto compare;
                      case 28:
                        resword = &wordlist[748];
                        goto compare;
                      case 29:
                        resword = &wordlist[749];
                        goto compare;
                      case 33:
                        resword = &wordlist[750];
                        goto compare;
                      case 36:
                        resword = &wordlist[751];
                        goto compare;
                      case 40:
                        resword = &wordlist[752];
                        goto compare;
                      case 45:
                        resword = &wordlist[753];
                        goto compare;
                      case 50:
                        resword = &wordlist[754];
                        goto compare;
                      case 51:
                        resword = &wordlist[755];
                        goto compare;
                      case 57:
                        resword = &wordlist[756];
                        goto compare;
                      case 64:
                        resword = &wordlist[757];
                        goto compare;
                      case 65:
                        resword = &wordlist[758];
                        goto compare;
                      case 71:
                        resword = &wordlist[759];
                        goto compare;
                      case 74:
                        resword = &wordlist[760];
                        goto compare;
                      case 86:
                        resword = &wordlist[761];
                        goto compare;
                      case 89:
                        resword = &wordlist[762];
                        goto compare;
                      case 96:
                        resword = &wordlist[763];
                        goto compare;
                      case 103:
                        resword = &wordlist[764];
                        goto compare;
                      case 107:
                        resword = &wordlist[765];
                        goto compare;
                      case 109:
                        resword = &wordlist[766];
                        goto compare;
                      case 113:
                        resword = &wordlist[767];
                        goto compare;
                      case 117:
                        resword = &wordlist[768];
                        goto compare;
                      case 140:
                        resword = &wordlist[769];
                        goto compare;
                      case 143:
                        resword = &wordlist[770];
                        goto compare;
                      case 148:
                        resword = &wordlist[771];
                        goto compare;
                      case 155:
                        resword = &wordlist[772];
                        goto compare;
                      case 164:
                        resword = &wordlist[773];
                        goto compare;
                      case 165:
                        resword = &wordlist[774];
                        goto compare;
                      case 166:
                        resword = &wordlist[775];
                        goto compare;
                      case 168:
                        resword = &wordlist[776];
                        goto compare;
                      case 169:
                        resword = &wordlist[777];
                        goto compare;
                      case 175:
                        resword = &wordlist[778];
                        goto compare;
                      case 183:
                        resword = &wordlist[779];
                        goto compare;
                      case 186:
                        resword = &wordlist[780];
                        goto compare;
                      case 192:
                        resword = &wordlist[781];
                        goto compare;
                      case 195:
                        resword = &wordlist[782];
                        goto compare;
                      case 201:
                        resword = &wordlist[783];
                        goto compare;
                      case 210:
                        resword = &wordlist[784];
                        goto compare;
                      case 212:
                        resword = &wordlist[785];
                        goto compare;
                      case 216:
                        resword = &wordlist[786];
                        goto compare;
                      case 217:
                        resword = &wordlist[787];
                        goto compare;
                      case 222:
                        resword = &wordlist[788];
                        goto compare;
                      case 236:
                        resword = &wordlist[789];
                        goto compare;
                      case 237:
                        resword = &wordlist[790];
                        goto compare;
                      case 239:
                        resword = &wordlist[791];
                        goto compare;
                      case 242:
                        resword = &wordlist[792];
                        goto compare;
                      case 246:
                        resword = &wordlist[793];
                        goto compare;
                      case 248:
                        resword = &wordlist[794];
                        goto compare;
                      case 249:
                        resword = &wordlist[795];
                        goto compare;
                      case 255:
                        resword = &wordlist[796];
                        goto compare;
                      case 265:
                        resword = &wordlist[797];
                        goto compare;
                      case 266:
                        resword = &wordlist[798];
                        goto compare;
                      case 275:
                        resword = &wordlist[799];
                        goto compare;
                      case 279:
                        resword = &wordlist[800];
                        goto compare;
                      case 305:
                        resword = &wordlist[801];
                        goto compare;
                      case 311:
                        resword = &wordlist[802];
                        goto compare;
                      case 314:
                        resword = &wordlist[803];
                        goto compare;
                      case 316:
                        resword = &wordlist[804];
                        goto compare;
                      case 318:
                        resword = &wordlist[805];
                        goto compare;
                      case 320:
                        resword = &wordlist[806];
                        goto compare;
                      case 334:
                        resword = &wordlist[807];
                        goto compare;
                      case 337:
                        resword = &wordlist[808];
                        goto compare;
                      case 338:
                        resword = &wordlist[809];
                        goto compare;
                      case 340:
                        resword = &wordlist[810];
                        goto compare;
                      case 355:
                        resword = &wordlist[811];
                        goto compare;
                      case 359:
                        resword = &wordlist[812];
                        goto compare;
                      case 360:
                        resword = &wordlist[813];
                        goto compare;
                      case 364:
                        resword = &wordlist[814];
                        goto compare;
                      case 366:
                        resword = &wordlist[815];
                        goto compare;
                      case 370:
                        resword = &wordlist[816];
                        goto compare;
                      case 375:
                        resword = &wordlist[817];
                        goto compare;
                      case 382:
                        resword = &wordlist[818];
                        goto compare;
                      case 386:
                        resword = &wordlist[819];
                        goto compare;
                      case 395:
                        resword = &wordlist[820];
                        goto compare;
                      case 401:
                        resword = &wordlist[821];
                        goto compare;
                      case 402:
                        resword = &wordlist[822];
                        goto compare;
                      case 405:
                        resword = &wordlist[823];
                        goto compare;
                      case 408:
                        resword = &wordlist[824];
                        goto compare;
                      case 416:
                        resword = &wordlist[825];
                        goto compare;
                      case 420:
                        resword = &wordlist[826];
                        goto compare;
                      case 426:
                        resword = &wordlist[827];
                        goto compare;
                      case 429:
                        resword = &wordlist[828];
                        goto compare;
                      case 435:
                        resword = &wordlist[829];
                        goto compare;
                      case 437:
                        resword = &wordlist[830];
                        goto compare;
                      case 444:
                        resword = &wordlist[831];
                        goto compare;
                      case 445:
                        resword = &wordlist[832];
                        goto compare;
                      case 448:
                        resword = &wordlist[833];
                        goto compare;
                      case 449:
                        resword = &wordlist[834];
                        goto compare;
                      case 451:
                        resword = &wordlist[835];
                        goto compare;
                      case 455:
                        resword = &wordlist[836];
                        goto compare;
                      case 461:
                        resword = &wordlist[837];
                        goto compare;
                      case 466:
                        resword = &wordlist[838];
                        goto compare;
                      case 475:
                        resword = &wordlist[839];
                        goto compare;
                      case 485:
                        resword = &wordlist[840];
                        goto compare;
                      case 490:
                        resword = &wordlist[841];
                        goto compare;
                      case 499:
                        resword = &wordlist[842];
                        goto compare;
                      case 500:
                        resword = &wordlist[843];
                        goto compare;
                      case 506:
                        resword = &wordlist[844];
                        goto compare;
                      case 512:
                        resword = &wordlist[845];
                        goto compare;
                      case 522:
                        resword = &wordlist[846];
                        goto compare;
                      case 525:
                        resword = &wordlist[847];
                        goto compare;
                      case 532:
                        resword = &wordlist[848];
                        goto compare;
                      case 536:
                        resword = &wordlist[849];
                        goto compare;
                      case 537:
                        resword = &wordlist[850];
                        goto compare;
                      case 544:
                        resword = &wordlist[851];
                        goto compare;
                      case 547:
                        resword = &wordlist[852];
                        goto compare;
                      case 550:
                        resword = &wordlist[853];
                        goto compare;
                      case 552:
                        resword = &wordlist[854];
                        goto compare;
                      case 564:
                        resword = &wordlist[855];
                        goto compare;
                      case 568:
                        resword = &wordlist[856];
                        goto compare;
                      case 570:
                        resword = &wordlist[857];
                        goto compare;
                      case 573:
                        resword = &wordlist[858];
                        goto compare;
                      case 582:
                        resword = &wordlist[859];
                        goto compare;
                      case 592:
                        resword = &wordlist[860];
                        goto compare;
                      case 595:
                        resword = &wordlist[861];
                        goto compare;
                      case 596:
                        resword = &wordlist[862];
                        goto compare;
                      case 604:
                        resword = &wordlist[863];
                        goto compare;
                      case 614:
                        resword = &wordlist[864];
                        goto compare;
                      case 618:
                        resword = &wordlist[865];
                        goto compare;
                      case 620:
                        resword = &wordlist[866];
                        goto compare;
                      case 624:
                        resword = &wordlist[867];
                        goto compare;
                      case 637:
                        resword = &wordlist[868];
                        goto compare;
                      case 650:
                        resword = &wordlist[869];
                        goto compare;
                      case 656:
                        resword = &wordlist[870];
                        goto compare;
                      case 663:
                        resword = &wordlist[871];
                        goto compare;
                      case 667:
                        resword = &wordlist[872];
                        goto compare;
                      case 688:
                        resword = &wordlist[873];
                        goto compare;
                      case 696:
                        resword = &wordlist[874];
                        goto compare;
                      case 697:
                        resword = &wordlist[875];
                        goto compare;
                      case 698:
                        resword = &wordlist[876];
                        goto compare;
                      case 703:
                        resword = &wordlist[877];
                        goto compare;
                      case 708:
                        resword = &wordlist[878];
                        goto compare;
                      case 716:
                        resword = &wordlist[879];
                        goto compare;
                      case 719:
                        resword = &wordlist[880];
                        goto compare;
                      case 720:
                        resword = &wordlist[881];
                        goto compare;
                      case 742:
                        resword = &wordlist[882];
                        goto compare;
                      case 743:
                        resword = &wordlist[883];
                        goto compare;
                      case 749:
                        resword = &wordlist[884];
                        goto compare;
                      case 757:
                        resword = &wordlist[885];
                        goto compare;
                      case 764:
                        resword = &wordlist[886];
                        goto compare;
                      case 765:
                        resword = &wordlist[887];
                        goto compare;
                      case 769:
                        resword = &wordlist[888];
                        goto compare;
                      case 771:
                        resword = &wordlist[889];
                        goto compare;
                      case 789:
                        resword = &wordlist[890];
                        goto compare;
                      case 794:
                        resword = &wordlist[891];
                        goto compare;
                      case 795:
                        resword = &wordlist[892];
                        goto compare;
                      case 803:
                        resword = &wordlist[893];
                        goto compare;
                      case 814:
                        resword = &wordlist[894];
                        goto compare;
                      case 830:
                        resword = &wordlist[895];
                        goto compare;
                      case 835:
                        resword = &wordlist[896];
                        goto compare;
                      case 838:
                        resword = &wordlist[897];
                        goto compare;
                      case 844:
                        resword = &wordlist[898];
                        goto compare;
                      case 845:
                        resword = &wordlist[899];
                        goto compare;
                      case 850:
                        resword = &wordlist[900];
                        goto compare;
                      case 854:
                        resword = &wordlist[901];
                        goto compare;
                      case 869:
                        resword = &wordlist[902];
                        goto compare;
                      case 872:
                        resword = &wordlist[903];
                        goto compare;
                      case 873:
                        resword = &wordlist[904];
                        goto compare;
                      case 874:
                        resword = &wordlist[905];
                        goto compare;
                      case 879:
                        resword = &wordlist[906];
                        goto compare;
                      case 880:
                        resword = &wordlist[907];
                        goto compare;
                      case 908:
                        resword = &wordlist[908];
                        goto compare;
                      case 909:
                        resword = &wordlist[909];
                        goto compare;
                      case 912:
                        resword = &wordlist[910];
                        goto compare;
                      case 917:
                        resword = &wordlist[911];
                        goto compare;
                      case 931:
                        resword = &wordlist[912];
                        goto compare;
                      case 934:
                        resword = &wordlist[913];
                        goto compare;
                      case 946:
                        resword = &wordlist[914];
                        goto compare;
                      case 962:
                        resword = &wordlist[915];
                        goto compare;
                      case 996:
                        resword = &wordlist[916];
                        goto compare;
                      case 1000:
                        resword = &wordlist[917];
                        goto compare;
                      case 1001:
                        resword = &wordlist[918];
                        goto compare;
                      case 1005:
                        resword = &wordlist[919];
                        goto compare;
                      case 1007:
                        resword = &wordlist[920];
                        goto compare;
                      case 1009:
                        resword = &wordlist[921];
                        goto compare;
                      case 1014:
                        resword = &wordlist[922];
                        goto compare;
                      case 1036:
                        resword = &wordlist[923];
                        goto compare;
                      case 1040:
                        resword = &wordlist[924];
                        goto compare;
                      case 1063:
                        resword = &wordlist[925];
                        goto compare;
                      case 1075:
                        resword = &wordlist[926];
                        goto compare;
                      case 1079:
                        resword = &wordlist[927];
                        goto compare;
                      case 1081:
                        resword = &wordlist[928];
                        goto compare;
                      case 1089:
                        resword = &wordlist[929];
                        goto compare;
                      case 1091:
                        resword = &wordlist[930];
                        goto compare;
                      case 1092:
                        resword = &wordlist[931];
                        goto compare;
                      case 1104:
                        resword = &wordlist[932];
                        goto compare;
                      case 1114:
                        resword = &wordlist[933];
                        goto compare;
                      case 1115:
                        resword = &wordlist[934];
                        goto compare;
                      case 1117:
                        resword = &wordlist[935];
                        goto compare;
                      case 1118:
                        resword = &wordlist[936];
                        goto compare;
                      case 1140:
                        resword = &wordlist[937];
                        goto compare;
                      case 1162:
                        resword = &wordlist[938];
                        goto compare;
                      case 1165:
                        resword = &wordlist[939];
                        goto compare;
                      case 1194:
                        resword = &wordlist[940];
                        goto compare;
                      case 1217:
                        resword = &wordlist[941];
                        goto compare;
                      case 1221:
                        resword = &wordlist[942];
                        goto compare;
                      case 1243:
                        resword = &wordlist[943];
                        goto compare;
                      case 1275:
                        resword = &wordlist[944];
                        goto compare;
                      case 1287:
                        resword = &wordlist[945];
                        goto compare;
                      case 1294:
                        resword = &wordlist[946];
                        goto compare;
                      case 1310:
                        resword = &wordlist[947];
                        goto compare;
                      case 1327:
                        resword = &wordlist[948];
                        goto compare;
                      case 1335:
                        resword = &wordlist[949];
                        goto compare;
                      case 1339:
                        resword = &wordlist[950];
                        goto compare;
                      case 1348:
                        resword = &wordlist[951];
                        goto compare;
                      case 1381:
                        resword = &wordlist[952];
                        goto compare;
                      case 1419:
                        resword = &wordlist[953];
                        goto compare;
                      case 1465:
                        resword = &wordlist[954];
                        goto compare;
                      case 1469:
                        resword = &wordlist[955];
                        goto compare;
                      case 1470:
                        resword = &wordlist[956];
                        goto compare;
                      case 1485:
                        resword = &wordlist[957];
                        goto compare;
                      case 1488:
                        resword = &wordlist[958];
                        goto compare;
                      case 1514:
                        resword = &wordlist[959];
                        goto compare;
                      case 1520:
                        resword = &wordlist[960];
                        goto compare;
                      case 1528:
                        resword = &wordlist[961];
                        goto compare;
                      case 1610:
                        resword = &wordlist[962];
                        goto compare;
                      case 1645:
                        resword = &wordlist[963];
                        goto compare;
                      case 1650:
                        resword = &wordlist[964];
                        goto compare;
                      case 1699:
                        resword = &wordlist[965];
                        goto compare;
                      case 1714:
                        resword = &wordlist[966];
                        goto compare;
                      case 1735:
                        resword = &wordlist[967];
                        goto compare;
                      case 1741:
                        resword = &wordlist[968];
                        goto compare;
                      case 1743:
                        resword = &wordlist[969];
                        goto compare;
                      case 1748:
                        resword = &wordlist[970];
                        goto compare;
                      case 1750:
                        resword = &wordlist[971];
                        goto compare;
                      case 1982:
                        resword = &wordlist[972];
                        goto compare;
                      case 1994:
                        resword = &wordlist[973];
                        goto compare;
                      case 2101:
                        resword = &wordlist[974];
                        goto compare;
                      case 2149:
                        resword = &wordlist[975];
                        goto compare;
                      case 2437:
                        resword = &wordlist[976];
                        goto compare;
                      case 2510:
                        resword = &wordlist[977];
                        goto compare;
                      case 2596:
                        resword = &wordlist[978];
                        goto compare;
                      case 2710:
                        resword = &wordlist[979];
                        goto compare;
                      case 3116:
                        resword = &wordlist[980];
                        goto compare;
                    }
                }
            }
          return 0;
        compare:
          {
            register const char *s = resword->name;

            if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strcmp (str, s))
              return resword;
          }
        }
    }
  return 0;
}
#line 985 "mimetypes.gperf"

struct fext * findExtensionType(const char* str) {
  int len = strlen(str);
  return findExtensionInMap(str,len);
}
