/* Copyright (c) 1998, 1999 Thai Open Source Software Center Ltd
   See the file COPYING for copying permission.
*/

#include <string.h>
#include <stdio.h>
#include <stddef.h>

struct range {
  int start;
  int end;
};

struct range nmstrt[] = {
  { '_' },
  { ':' },
  /* BaseChar */
  { 0x0041, 0x005a },
  { 0x0061, 0x007a },
  { 0x00c0, 0x00d6 },
  { 0x00d8, 0x00f6 },
  { 0x00f8, 0x00ff },
  { 0x0100, 0x0131 },
  { 0x0134, 0x013e },
  { 0x0141, 0x0148 },
  { 0x014a, 0x017e },
  { 0x0180, 0x01c3 },
  { 0x01cd, 0x01f0 },
  { 0x01f4, 0x01f5 },
  { 0x01fa, 0x0217 },
  { 0x0250, 0x02a8 },
  { 0x02bb, 0x02c1 },
  { 0x0386 },
  { 0x0388, 0x038a },
  { 0x038c },
  { 0x038e, 0x03a1 },
  { 0x03a3, 0x03ce },
  { 0x03d0, 0x03d6 },
  { 0x03da },
  { 0x03dc },
  { 0x03de },
  { 0x03e0 },
  { 0x03e2, 0x03f3 },
  { 0x0401, 0x040c },
  { 0x040e, 0x044f },
  { 0x0451, 0x045c },
  { 0x045e, 0x0481 },
  { 0x0490, 0x04c4 },
  { 0x04c7, 0x04c8 },
  { 0x04cb, 0x04cc },
  { 0x04d0, 0x04eb },
  { 0x04ee, 0x04f5 },
  { 0x04f8, 0x04f9 },
  { 0x0531, 0x0556 },
  { 0x0559 },
  { 0x0561, 0x0586 },
  { 0x05d0, 0x05ea },
  { 0x05f0, 0x05f2 },
  { 0x0621, 0x063a },
  { 0x0641, 0x064a },
  { 0x0671, 0x06b7 },
  { 0x06ba, 0x06be },
  { 0x06c0, 0x06ce },
  { 0x06d0, 0x06d3 },
  { 0x06d5 },
  { 0x06e5, 0x06e6 },
  { 0x0905, 0x0939 },
  { 0x093d },
  { 0x0958, 0x0961 },
  { 0x0985, 0x098c },
  { 0x098f, 0x0990 },
  { 0x0993, 0x09a8 },
  { 0x09aa, 0x09b0 },
  { 0x09b2 },
  { 0x09b6, 0x09b9 },
  { 0x09dc, 0x09dd },
  { 0x09df, 0x09e1 },
  { 0x09f0, 0x09f1 },
  { 0x0a05, 0x0a0a },
  { 0x0a0f, 0x0a10 },
  { 0x0a13, 0x0a28 },
  { 0x0a2a, 0x0a30 },
  { 0x0a32, 0x0a33 },
  { 0x0a35, 0x0a36 },
  { 0x0a38, 0x0a39 },
  { 0x0a59, 0x0a5c },
  { 0x0a5e },
  { 0x0a72, 0x0a74 },
  { 0x0a85, 0x0a8b },
  { 0x0a8d },
  { 0x0a8f, 0x0a91 },
  { 0x0a93, 0x0aa8 },
  { 0x0aaa, 0x0ab0 },
  { 0x0ab2, 0x0ab3 },
  { 0x0ab5, 0x0ab9 },
  { 0x0abd },
  { 0x0ae0 },
  { 0x0b05, 0x0b0c },
  { 0x0b0f, 0x0b10 },
  { 0x0b13, 0x0b28 },
  { 0x0b2a, 0x0b30 },
  { 0x0b32, 0x0b33 },
  { 0x0b36, 0x0b39 },
  { 0x0b3d },
  { 0x0b5c, 0x0b5d },
  { 0x0b5f, 0x0b61 },
  { 0x0b85, 0x0b8a },
  { 0x0b8e, 0x0b90 },
  { 0x0b92, 0x0b95 },
  { 0x0b99, 0x0b9a },
  { 0x0b9c },
  { 0x0b9e, 0x0b9f },
  { 0x0ba3, 0x0ba4 },
  { 0x0ba8, 0x0baa },
  { 0x0bae, 0x0bb5 },
  { 0x0bb7, 0x0bb9 },
  { 0x0c05, 0x0c0c },
  { 0x0c0e, 0x0c10 },
  { 0x0c12, 0x0c28 },
  { 0x0c2a, 0x0c33 },
  { 0x0c35, 0x0c39 },
  { 0x0c60, 0x0c61 },
  { 0x0c85, 0x0c8c },
  { 0x0c8e, 0x0c90 },
  { 0x0c92, 0x0ca8 },
  { 0x0caa, 0x0cb3 },
  { 0x0cb5, 0x0cb9 },
  { 0x0cde },
  { 0x0ce0, 0x0ce1 },
  { 0x0d05, 0x0d0c },
  { 0x0d0e, 0x0d10 },
  { 0x0d12, 0x0d28 },
  { 0x0d2a, 0x0d39 },
  { 0x0d60, 0x0d61 },
  { 0x0e01, 0x0e2e },
  { 0x0e30 },
  { 0x0e32, 0x0e33 },
  { 0x0e40, 0x0e45 },
  { 0x0e81, 0x0e82 },
  { 0x0e84 },
  { 0x0e87, 0x0e88 },
  { 0x0e8a },
  { 0x0e8d },
  { 0x0e94, 0x0e97 },
  { 0x0e99, 0x0e9f },
  { 0x0ea1, 0x0ea3 },
  { 0x0ea5 },
  { 0x0ea7 },
  { 0x0eaa, 0x0eab },
  { 0x0ead, 0x0eae },
  { 0x0eb0 },
  { 0x0eb2, 0x0eb3 },
  { 0x0ebd },
  { 0x0ec0, 0x0ec4 },
  { 0x0f40, 0x0f47 },
  { 0x0f49, 0x0f69 },
  { 0x10a0, 0x10c5 },
  { 0x10d0, 0x10f6 },
  { 0x1100 },
  { 0x1102, 0x1103 },
  { 0x1105, 0x1107 },
  { 0x1109 },
  { 0x110b, 0x110c },
  { 0x110e, 0x1112 },
  { 0x113c },
  { 0x113e },
  { 0x1140 },
  { 0x114c },
  { 0x114e },
  { 0x1150 },
  { 0x1154, 0x1155 },
  { 0x1159 },
  { 0x115f, 0x1161 },
  { 0x1163 },
  { 0x1165 },
  { 0x1167 },
  { 0x1169 },
  { 0x116d, 0x116e },
  { 0x1172, 0x1173 },
  { 0x1175 },
  { 0x119e },
  { 0x11a8 },
  { 0x11ab },
  { 0x11ae, 0x11af },
  { 0x11b7, 0x11b8 },
  { 0x11ba },
  { 0x11bc, 0x11c2 },
  { 0x11eb },
  { 0x11f0 },
  { 0x11f9 },
  { 0x1e00, 0x1e9b },
  { 0x1ea0, 0x1ef9 },
  { 0x1f00, 0x1f15 },
  { 0x1f18, 0x1f1d },
  { 0x1f20, 0x1f45 },
  { 0x1f48, 0x1f4d },
  { 0x1f50, 0x1f57 },
  { 0x1f59 },
  { 0x1f5b },
  { 0x1f5d },
  { 0x1f5f, 0x1f7d },
  { 0x1f80, 0x1fb4 },
  { 0x1fb6, 0x1fbc },
  { 0x1fbe },
  { 0x1fc2, 0x1fc4 },
  { 0x1fc6, 0x1fcc },
  { 0x1fd0, 0x1fd3 },
  { 0x1fd6, 0x1fdb },
  { 0x1fe0, 0x1fec },
  { 0x1ff2, 0x1ff4 },
  { 0x1ff6, 0x1ffc },
  { 0x2126 },
  { 0x212a, 0x212b },
  { 0x212e },
  { 0x2180, 0x2182 },
  { 0x3041, 0x3094 },
  { 0x30a1, 0x30fa },
  { 0x3105, 0x312c },
  { 0xac00, 0xd7a3 },
  /* Ideographic */
  { 0x4e00, 0x9fa5 },
  { 0x3007 },
  { 0x3021, 0x3029 },
};

/* name chars that are not name start chars */
struct range name[] = {
  { '.' },
  { '-' },
  /* CombiningChar */
  { 0x0300, 0x0345 },
  { 0x0360, 0x0361 },
  { 0x0483, 0x0486 },
  { 0x0591, 0x05a1 },
  { 0x05a3, 0x05b9 },
  { 0x05bb, 0x05bd },
  { 0x05bf },
  { 0x05c1, 0x05c2 },
  { 0x05c4 },
  { 0x064b, 0x0652 },
  { 0x0670 },
  { 0x06d6, 0x06dc },
  { 0x06dd, 0x06df },
  { 0x06e0, 0x06e4 },
  { 0x06e7, 0x06e8 },
  { 0x06ea, 0x06ed },
  { 0x0901, 0x0903 },
  { 0x093c },
  { 0x093e, 0x094c },
  { 0x094d },
  { 0x0951, 0x0954 },
  { 0x0962, 0x0963 },
  { 0x0981, 0x0983 },
  { 0x09bc },
  { 0x09be },
  { 0x09bf },
  { 0x09c0, 0x09c4 },
  { 0x09c7, 0x09c8 },
  { 0x09cb, 0x09cd },
  { 0x09d7 },
  { 0x09e2, 0x09e3 },
  { 0x0a02 },
  { 0x0a3c },
  { 0x0a3e },
  { 0x0a3f },
  { 0x0a40, 0x0a42 },
  { 0x0a47, 0x0a48 },
  { 0x0a4b, 0x0a4d },
  { 0x0a70, 0x0a71 },
  { 0x0a81, 0x0a83 },
  { 0x0abc },
  { 0x0abe, 0x0ac5 },
  { 0x0ac7, 0x0ac9 },
  { 0x0acb, 0x0acd },
  { 0x0b01, 0x0b03 },
  { 0x0b3c },
  { 0x0b3e, 0x0b43 },
  { 0x0b47, 0x0b48 },
  { 0x0b4b, 0x0b4d },
  { 0x0b56, 0x0b57 },
  { 0x0b82, 0x0b83 },
  { 0x0bbe, 0x0bc2 },
  { 0x0bc6, 0x0bc8 },
  { 0x0bca, 0x0bcd },
  { 0x0bd7 },
  { 0x0c01, 0x0c03 },
  { 0x0c3e, 0x0c44 },
  { 0x0c46, 0x0c48 },
  { 0x0c4a, 0x0c4d },
  { 0x0c55, 0x0c56 },
  { 0x0c82, 0x0c83 },
  { 0x0cbe, 0x0cc4 },
  { 0x0cc6, 0x0cc8 },
  { 0x0cca, 0x0ccd },
  { 0x0cd5, 0x0cd6 },
  { 0x0d02, 0x0d03 },
  { 0x0d3e, 0x0d43 },
  { 0x0d46, 0x0d48 },
  { 0x0d4a, 0x0d4d },
  { 0x0d57 },
  { 0x0e31 },
  { 0x0e34, 0x0e3a },
  { 0x0e47, 0x0e4e },
  { 0x0eb1 },
  { 0x0eb4, 0x0eb9 },
  { 0x0ebb, 0x0ebc },
  { 0x0ec8, 0x0ecd },
  { 0x0f18, 0x0f19 },
  { 0x0f35 },
  { 0x0f37 },
  { 0x0f39 },
  { 0x0f3e },
  { 0x0f3f },
  { 0x0f71, 0x0f84 },
  { 0x0f86, 0x0f8b },
  { 0x0f90, 0x0f95 },
  { 0x0f97 },
  { 0x0f99, 0x0fad },
  { 0x0fb1, 0x0fb7 },
  { 0x0fb9 },
  { 0x20d0, 0x20dc },
  { 0x20e1 },
  { 0x302a, 0x302f },
  { 0x3099 },
  { 0x309a },
  /* Digit */
  { 0x0030, 0x0039 },
  { 0x0660, 0x0669 },
  { 0x06f0, 0x06f9 },
  { 0x0966, 0x096f },
  { 0x09e6, 0x09ef },
  { 0x0a66, 0x0a6f },
  { 0x0ae6, 0x0aef },
  { 0x0b66, 0x0b6f },
  { 0x0be7, 0x0bef },
  { 0x0c66, 0x0c6f },
  { 0x0ce6, 0x0cef },
  { 0x0d66, 0x0d6f },
  { 0x0e50, 0x0e59 },
  { 0x0ed0, 0x0ed9 },
  { 0x0f20, 0x0f29 },
  /* Extender */
  { 0xb7 },
  { 0x02d0 },
  { 0x02d1 },
  { 0x0387 },
  { 0x0640 },
  { 0x0e46 },
  { 0x0ec6 },
  { 0x3005 },
  { 0x3031, 0x3035 },
  { 0x309d, 0x309e },
  { 0x30fc, 0x30fe },
};

static void
setTab(char *tab, struct range *ranges, size_t nRanges)
{
  size_t i;
  int j;
  for (i = 0; i < nRanges; i++) {
    if (ranges[i].end) {
      for (j = ranges[i].start; j <= ranges[i].end; j++)
        tab[j] = 1;
    }
    else
      tab[ranges[i].start] = 1;
  }
}

static void
printTabs(char *tab)
{ 
  int nBitmaps = 2;
  int i, j, k;
  unsigned char pageIndex[512];

  printf(
"static const unsigned namingBitmap[] = {\n\
0x00000000, 0x00000000, 0x00000000, 0x00000000,\n\
0x00000000, 0x00000000, 0x00000000, 0x00000000,\n\
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,\n\
0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF,\n");
  for (i = 0; i < 512; i++) {
    int kind = tab[i*256];
    for (j = 1; j < 256; j++)
      if (tab[i*256 +j] != kind) {
        kind = -1;
        break;
      }
    if (i >= 256 &&  memcmp(tab + (i - 256)*256, tab + i*256, 256) == 0)
      pageIndex[i] = pageIndex[i - 256];
    else if (kind == -1) { 
      pageIndex[i] = nBitmaps++;
      for (j = 0; j < 8; j++) {
        unsigned val = 0;
        for (k = 0; k < 32; k++) {
          if (tab[i*256 + j*32 +k])
            val |= (1 << k);
        }
        printf("0x%08X,", val);
        putchar((((j + 1) & 3) == 0) ? '\n' : ' ');
      }
    }
    else
      pageIndex[i] = kind;
  }
  printf("};\n");
  printf("static const unsigned char nmstrtPages[] = {\n");
  for (i = 0; i < 512; i++) {
    if (i == 256)
      printf("};\nstatic const unsigned char namePages[] = {\n");
    printf("0x%02X,", pageIndex[i]);
    putchar((((i + 1) & 7) == 0) ? '\n' : ' ');
  }
  printf("};\n");
}

int
main()
{ 
  char tab[2*65536];
  memset(tab, 0, 65536);
  setTab(tab, nmstrt, sizeof(nmstrt)/sizeof(nmstrt[0]));
  memcpy(tab + 65536, tab, 65536);
  setTab(tab + 65536, name, sizeof(name)/sizeof(name[0]));
  printTabs(tab);
  return 0;
}
