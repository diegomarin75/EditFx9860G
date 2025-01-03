//Font functions -----------------------------------------------------------------------

//Include files
#include "fxlib.h"
#include "stdio.h"
#include "font.h"

// ------------------------------------------------------------------------------------- 
// Global variables

// Font 3x5 data
unsigned int _iFont3x5[128]={
 3960, //Character 000 [NUL]
 3960, //Character 001 [SOH]
 3960, //Character 002 [STX]
 3960, //Character 003 [ETX]
 3960, //Character 004 [EOT]
 3960, //Character 005 [ENQ]
 3960, //Character 006 [ACK]
 3960, //Character 007 [BEL]
 3960, //Character 008 [BS]
 3960, //Character 009 [TAB]
 3960, //Character 010 [LF]
 3960, //Character 011 [VT]
32000, //Character 012 [FF]
 3960, //Character 013 [CR]
 3960, //Character 014 [SO]
 3960, //Character 015 [SI]
 3960, //Character 016 [DEL]
 3960, //Character 017 [XON]
 3960, //Character 018 [DC2]
 3960, //Character 019 [XOFF]
 3960, //Character 020 [DC4]
 3960, //Character 021 [NAK]
 3960, //Character 022 [SYN]
 3960, //Character 023 [ETB]
 3960, //Character 024 [CAN]
 3960, //Character 025 [EM]
 3960, //Character 026 [SUB]
 3960, //Character 027 [ESC]
 3960, //Character 028 [FS]
 3960, //Character 029 [GS]
 3960, //Character 030 [RS]
 3960, //Character 031 [US]
    0, //Character 032 [SP]
 8338, //Character 033 [!]
   45, //Character 034 ["]
16254, //Character 035 [#]
32223, //Character 036 [$]
21157, //Character 037 [%]
10922, //Character 038 [&]
  166, //Character 039 [']
17556, //Character 040 [(]
 5265, //Character 041 [)]
 2728, //Character 042 [*]
 1488, //Character 043 [+]
10624, //Character 044 [,]
  448, //Character 045 [-]
13824, //Character 046 [.]
 4756, //Character 047 [/]
31599, //Character 048 [0]
29850, //Character 049 [1]
29671, //Character 050 [2]
31207, //Character 051 [3]
18925, //Character 052 [4]
31183, //Character 053 [5]
31695, //Character 054 [6]
18727, //Character 055 [7]
31727, //Character 056 [8]
31215, //Character 057 [9]
13851, //Character 058 [:]
 5147, //Character 059 [;]
17492, //Character 060 [<]
 3640, //Character 061 [=]
 5393, //Character 062 [>]
 8355, //Character 063 [?]
11171, //Character 064 [@]
23530, //Character 065 [A]
15083, //Character 066 [B]
25166, //Character 067 [C]
15211, //Character 068 [D]
29647, //Character 069 [E]
 5071, //Character 070 [F]
27470, //Character 071 [G]
23533, //Character 072 [H]
29847, //Character 073 [I]
11044, //Character 074 [J]
23277, //Character 075 [K]
29257, //Character 076 [L]
23421, //Character 077 [M]
23403, //Character 078 [N]
11114, //Character 079 [O]
 4843, //Character 080 [P]
17770, //Character 081 [Q]
23275, //Character 082 [R]
14478, //Character 083 [S]
 9367, //Character 084 [T]
31597, //Character 085 [U]
11117, //Character 086 [V]
12141, //Character 087 [W]
23213, //Character 088 [X]
 9389, //Character 089 [Y]
29351, //Character 090 [Z]
25750, //Character 091 [[]
17545, //Character 092 [\]
26918, //Character 093 []]
   42, //Character 094 [^]
28672, //Character 095 [_]
  139, //Character 096 [`]
27554, //Character 097 [a]
15225, //Character 098 [b]
25200, //Character 099 [c]
27516, //Character 100 [d]
29674, //Character 101 [e]
 9684, //Character 102 [f]
14766, //Character 103 [g]
23385, //Character 104 [h]
 9346, //Character 105 [i]
11012, //Character 106 [j]
22345, //Character 107 [k]
29843, //Character 108 [l]
23408, //Character 109 [m]
23376, //Character 110 [n]
11088, //Character 111 [o]
 5976, //Character 112 [p]
19824, //Character 113 [q]
 4840, //Character 114 [r]
14448, //Character 115 [s]
17586, //Character 116 [t]
27496, //Character 117 [u]
11112, //Character 118 [v]
32616, //Character 119 [w]
23208, //Character 120 [x]
 5480, //Character 121 [y]
29496, //Character 122 [z]
25814, //Character 123 [{]
 9362, //Character 124 [|]
13715, //Character 125 [}]
  408, //Character 126 [~]
 3960  //Character 127 []
};

// Font 3x6 data
unsigned int _iFont3x6[128]={
 31608, //Character 000 [NUL]
 31608, //Character 001 [SOH]
 31608, //Character 002 [STX]
 31608, //Character 003 [ETX]
 31608, //Character 004 [EOT]
 31608, //Character 005 [ENQ]
 31608, //Character 006 [ACK]
 31608, //Character 007 [BEL]
 31608, //Character 008 [BS]
 31608, //Character 009 [TAB]
 31608, //Character 010 [LF]
 31608, //Character 011 [VT]
256000, //Character 012 [FF]
 31608, //Character 013 [CR]
 31608, //Character 014 [SO]
 31608, //Character 015 [SI]
 31608, //Character 016 [DEL]
 31608, //Character 017 [XON]
 31608, //Character 018 [DC2]
 31608, //Character 019 [XOFF]
 31608, //Character 020 [DC4]
 31608, //Character 021 [NAK]
 31608, //Character 022 [SYN]
 31608, //Character 023 [ETB]
 31608, //Character 024 [CAN]
 31608, //Character 025 [EM]
 31608, //Character 026 [SUB]
 31608, //Character 027 [ESC]
 31608, //Character 028 [FS]
 31608, //Character 029 [GS]
 31608, //Character 030 [RS]
 31608, //Character 031 [US]
     0, //Character 032 [SP]
 66706, //Character 033 [!]
    45, //Character 034 ["]
113526, //Character 035 [#]
 97530, //Character 036 [$]
169125, //Character 037 [%]
 87402, //Character 038 [&]
    83, //Character 039 [']
 70218, //Character 040 [(]
 84258, //Character 041 [)]
 21824, //Character 042 [*]
 11904, //Character 043 [+]
 84992, //Character 044 [,]
  3584, //Character 045 [-]
110592, //Character 046 [.]
 38052, //Character 047 [/]
252783, //Character 048 [0]
238746, //Character 049 [1]
234471, //Character 050 [2]
248295, //Character 051 [3]
149997, //Character 052 [4]
248271, //Character 053 [5]
252879, //Character 054 [6]
149799, //Character 055 [7]
252911, //Character 056 [8]
248303, //Character 057 [9]
110619, //Character 058 [:]
 42523, //Character 059 [;]
139860, //Character 060 [<]
 29120, //Character 061 [=]
 43281, //Character 062 [>]
 66851, //Character 063 [?]
 88995, //Character 064 [@]
187370, //Character 065 [A]
121579, //Character 066 [B]
201294, //Character 067 [C]
121707, //Character 068 [D]
234447, //Character 069 [E]
 37839, //Character 070 [F]
219726, //Character 071 [G]
187373, //Character 072 [H]
238743, //Character 073 [I]
 88356, //Character 074 [J]
186093, //Character 075 [K]
234057, //Character 076 [L]
187261, //Character 077 [M]
187243, //Character 078 [N]
 88938, //Character 079 [O]
 37611, //Character 080 [P]
142186, //Character 081 [Q]
187115, //Character 082 [R]
116878, //Character 083 [S]
 74903, //Character 084 [T]
252781, //Character 085 [U]
 88941, //Character 086 [V]
 97133, //Character 087 [W]
185517, //Character 088 [X]
 75117, //Character 089 [Y]
234151, //Character 090 [Z]
205974, //Character 091 [[]
148617, //Character 092 [\]
107667, //Character 093 []]
    42, //Character 094 [^]
229376, //Character 095 [_]
   139, //Character 096 [`]
220432, //Character 097 [a]
121721, //Character 098 [b]
201328, //Character 099 [c]
220028, //Character 100 [d]
204624, //Character 101 [e]
 75220, //Character 102 [f]
118128, //Character 103 [g]
187225, //Character 104 [h]
 74882, //Character 105 [i]
 88324, //Character 106 [j]
178760, //Character 107 [k]
238739, //Character 108 [l]
187248, //Character 109 [m]
187216, //Character 110 [n]
 88912, //Character 111 [o]
 47960, //Character 112 [p]
158576, //Character 113 [q]
 37608, //Character 114 [r]
115824, //Character 115 [s]
140466, //Character 116 [t]
220008, //Character 117 [u]
 88936, //Character 118 [v]
260968, //Character 119 [w]
185704, //Character 120 [x]
 43880, //Character 121 [y]
234808, //Character 122 [z]
140500, //Character 123 [{]
 74898, //Character 124 [|]
 42385, //Character 125 [}]
  2688, //Character 126 [~]
 31608  //Character 127 []
};

// Font 4x6 data
unsigned int _iFont4x6[128]={
 1022448, //Character 000 [NUL]
 1022448, //Character 001 [SOH]
 1022448, //Character 002 [STX]
 1022448, //Character 003 [ETX]
 1022448, //Character 004 [EOT]
 1022448, //Character 005 [ENQ]
 1022448, //Character 006 [ACK]
 3511600, //Character 007 [BEL]
 1022448, //Character 008 [BS]
 1022448, //Character 009 [TAB]
 1022448, //Character 010 [LF]
 1022448, //Character 011 [VT]
 7749632, //Character 012 [FF]
 1022448, //Character 013 [CR]
 1022448, //Character 014 [SO]
 1022448, //Character 015 [SI]
 1022448, //Character 016 [DEL]
 1022448, //Character 017 [XON]
 1022448, //Character 018 [DC2]
 1022448, //Character 019 [XOFF]
 1022448, //Character 020 [DC4]
 1022448, //Character 021 [NAK]
 1022448, //Character 022 [SYN]
 1022448, //Character 023 [ETB]
 1022448, //Character 024 [CAN]
 1022448, //Character 025 [EM]
 1022448, //Character 026 [SUB]
 1022448, //Character 027 [ESC]
 1022448, //Character 028 [FS]
 1022448, //Character 029 [GS]
 1022448, //Character 030 [RS]
 1022448, //Character 031 [US]
       0, //Character 032 [SP]
 4211776, //Character 033 [!]
      85, //Character 034 ["]
 6247925, //Character 035 [#]
16578036, //Character 036 [$]
 9577545, //Character 037 [%]
10855762, //Character 038 [&]
     582, //Character 039 [']
 4334116, //Character 040 [(]
 2376770, //Character 041 [)]
  616080, //Character 042 [*]
  320512, //Character 043 [+]
 2383872, //Character 044 [,]
   57344, //Character 045 [-]
 6684672, //Character 046 [.]
 1188936, //Character 047 [/]
 6929814, //Character 048 [0]
14959716, //Character 049 [1]
15803542, //Character 050 [2]
 6917270, //Character 051 [3]
 4519253, //Character 052 [4]
 7898911, //Character 053 [5]
 6910358, //Character 054 [6]
 2237583, //Character 055 [7]
 6919830, //Character 056 [8]
 6875542, //Character 057 [9]
 6684774, //Character 058 [:]
 2383974, //Character 059 [;]
 4329764, //Character 060 [<]
  986880, //Character 061 [=]
 2394178, //Character 062 [>]
 4212886, //Character 063 [?]
 6937223, //Character 064 [@]
10090902, //Character 065 [A]
 7960983, //Character 066 [B]
 6885782, //Character 067 [C]
 7969175, //Character 068 [D]
15855903, //Character 069 [E]
 1175839, //Character 070 [F]
16355615, //Character 071 [G]
10090905, //Character 072 [H]
14959694, //Character 073 [I]
 6916232, //Character 074 [J]
 9778009, //Character 075 [K]
15798545, //Character 076 [L]
10066425, //Character 077 [M]
10067385, //Character 078 [N]
 6920598, //Character 079 [O]
 1145239, //Character 080 [P]
 8821142, //Character 081 [Q]
10058135, //Character 082 [R]
 7889182, //Character 083 [S]
 4473934, //Character 084 [T]
16357785, //Character 085 [U]
 6920601, //Character 086 [V]
 7313817, //Character 087 [W]
10053273, //Character 088 [X]
 4475545, //Character 089 [Y]
15820943, //Character 090 [Z]
 6431270, //Character 091 [[]
 8667681, //Character 092 [\]
 6571078, //Character 093 []]
     164, //Character 094 [^]
15728640, //Character 095 [_]
    1062, //Character 096 [`]
 6940768, //Character 097 [a]
 7969137, //Character 098 [b]
14750176, //Character 099 [c]
15309288, //Character 100 [d]
14809440, //Character 101 [e]
 4476488, //Character 102 [f]
 7924064, //Character 103 [g]
10066289, //Character 104 [h]
 4473860, //Character 105 [i]
 2442244, //Character 106 [j]
 9778576, //Character 107 [k]
14959686, //Character 108 [l]
10066400, //Character 109 [m]
10066768, //Character 110 [n]
 6920544, //Character 111 [o]
 1546608, //Character 112 [p]
 9345504, //Character 113 [q]
 1119184, //Character 114 [r]
 7889376, //Character 115 [s]
 4334178, //Character 116 [t]
11377040, //Character 117 [u]
 6920592, //Character 118 [v]
 7313808, //Character 119 [w]
10053264, //Character 120 [x]
 1198736, //Character 121 [y]
15821040, //Character 122 [z]
 4334372, //Character 123 [{]
 4473924, //Character 124 [|]
 2378818, //Character 125 [}]
   23040, //Character 126 [~]
 1022448  //Character 127 []
};

//Current context
int _iCntx=0;

//Font definition
struct FData _sFData[FONTMAX]={
{4,6,128/4,64/6,_iFont3x5},  //3x5 Font
{4,7,128/4,64/7,_iFont3x6},  //3x6 Font
{5,7,128/5,64/7,_iFont4x6},  //4x6 Font
{6,8,128/6,64/8,NULL     }}; //7x8 Font (Standard large font)

//Font contexts (default context defined)
struct FCntx _sFCntx[CONTMAX]={{FONTL,COLNOR,0,0}};

// ------------------------------------------------------------------------------------- 
// Set font context
void DefineFontContext(int iCntx, int iFont, int iColor, int iPx0, int iPy0)
{
  _sFCntx[iCntx].iFont  = iFont;
  _sFCntx[iCntx].iColor = iColor;
  _sFCntx[iCntx].iPx0   = iPx0;
  _sFCntx[iCntx].iPy0   = iPy0;
}

// ------------------------------------------------------------------------------------- 
// Set font context
void SetFontContext(int iCntx)
{
  _iCntx=iCntx;
}

// ------------------------------------------------------------------------------------- 
// Set font (changes to default font context)
void SetFont(int iFont)
{
  _iCntx=0;
  _sFCntx[_iCntx].iFont=iFont;
}

// ------------------------------------------------------------------------------------- 
// Set color (changes to default context)
void SetColor(int iColor)
{
  _iCntx=0;
  _sFCntx[_iCntx].iColor=iColor;
}

// ------------------------------------------------------------------------------------- 
// Set offset(changes to default context)
void SetOffset(int iPx0, int iPy0)
{
  _iCntx=0;
  _sFCntx[_iCntx].iPx0=iPx0;
  _sFCntx[_iCntx].iPy0=iPy0;
}

// ------------------------------------------------------------------------------------- 
// Set color in current context
void SetColorCntx(int iColor)
{
  _sFCntx[_iCntx].iColor=iColor;
}

// ------------------------------------------------------------------------------------- 
// Get screen sizes in chars
int GetScrCAx(void){ return(_sFData[_sFCntx[_iCntx].iFont].iSx); }
int GetScrCAy(void){ return(_sFData[_sFCntx[_iCntx].iFont].iSy); }

// ------------------------------------------------------------------------------------- 
// Print char function
void PrintCharXY(int iPx0,int iPy0, char cChr)
{
  //Variables
  int i,j;
  int iPx,iPy;
  int iAy,iAx;
  int iColF,iColB;
  unsigned int iCount;
  unsigned int iBitmap;
  char sStr[2];
  unsigned char cChr0;
  
  //Init variables
  cChr0=cChr;
  cChr0=(cChr0<=126?cChr0:127);
  iPx=iPx0+_sFCntx[_iCntx].iPx0;
  iPy=iPy0+_sFCntx[_iCntx].iPy0;
  
  //Use standard 6x8 Font
  if(_sFData[_sFCntx[_iCntx].iFont].iChData==NULL)
  {
    sStr[0]=cChr0;
    sStr[1]=0;
    if(cChr0==127) sStr[0]=0xD8;
    PrintXY(iPx,iPy,sStr,(_sFCntx[_iCntx].iColor==COLNOR?0:1));    
  }  

  //Print with custom fonts
  else
  {
    //Print loop
    iCount = 1;
    iAx=_sFData[_sFCntx[_iCntx].iFont].iAx;
    iAy=_sFData[_sFCntx[_iCntx].iFont].iAy;
    iColF=(_sFCntx[_iCntx].iColor==COLNOR?1:0);
    iColB=(_sFCntx[_iCntx].iColor==COLNOR?0:1);
    iBitmap=_sFData[_sFCntx[_iCntx].iFont].iChData[cChr0];
    for(j=0;j<=iAy-1;j++){
    for(i=0;i<=iAx-1;i++){
      if(iPx+i>=0 && iPx+i<=127 && iPy+j>=0 && iPy+j<=63)
      {
        if(i<iAx-1 && j<iAy-1)
        {
          if(iBitmap&iCount) 
            Bdisp_SetPoint_VRAM(iPx+i,iPy+j,iColF);
          else
            Bdisp_SetPoint_VRAM(iPx+i,iPy+j,iColB);
          iCount=iCount*2;
        }
        else
          Bdisp_SetPoint_VRAM(iPx+i,iPy+j,iColB);
      }
    }}
  
  }

}

// ------------------------------------------------------------------------------------- 
// Print string function (location by pixels)
void PrintStrXY(int iPx, int iPy,char *sStr)
{
  //Variables
  int i;
  int iPx0=0,iPy0=0;
  int iIgnChar=0;
  char cChr;

  //Char loop
  for(i=0;sStr[i]!=0;i++)
  {
    PrintCharXY(iPx+_sFData[_sFCntx[_iCntx].iFont].iAx*(i-iIgnChar),iPy,sStr[i]);
  }
}

// ------------------------------------------------------------------------------------- 
// Print char function (location by chars)
void PrintChar(int iCx, int iCy,char cChr)
{
  PrintCharXY(iCx*_sFData[_sFCntx[_iCntx].iFont].iAx,
             iCy*_sFData[_sFCntx[_iCntx].iFont].iAy,
             cChr);
}

// ------------------------------------------------------------------------------------- 
// Print string function (location by chars)
void PrintStr(int iCx, int iCy,char *sStr)
{
  PrintStrXY(iCx*_sFData[_sFCntx[_iCntx].iFont].iAx,
             iCy*_sFData[_sFCntx[_iCntx].iFont].iAy,
             sStr);
}

// ----------------------------------------------------------------
// SetCursor
void SetCursor(int iCx, int iCy, int iColor, int iClip)
{
  //Variables
  int iPx;
  int iPy;
  int iAy;
  
  //Calculate cursor position
  iPx=iCx*_sFData[_sFCntx[_iCntx].iFont].iAx;
  iPy=_sFCntx[_iCntx].iPy0+iCy*_sFData[_sFCntx[_iCntx].iFont].iAy;
  
  //Draw cursor (normal)
  if(iClip==0)
  {
    iAy=_sFData[_sFCntx[_iCntx].iFont].iAy-1;
    if(iAy>=0) Bdisp_SetPoint_DDVRAM(iPx+0,iPy+0,iColor);
    if(iAy>=1) Bdisp_SetPoint_DDVRAM(iPx+0,iPy+1,iColor);
    if(iAy>=2) Bdisp_SetPoint_DDVRAM(iPx+0,iPy+2,iColor);
    if(iAy>=3) Bdisp_SetPoint_DDVRAM(iPx+0,iPy+3,iColor);
    if(iAy>=4) Bdisp_SetPoint_DDVRAM(iPx+0,iPy+4,iColor);
    if(iAy>=5) Bdisp_SetPoint_DDVRAM(iPx+0,iPy+5,iColor);
    if(iAy>=6) Bdisp_SetPoint_DDVRAM(iPx+0,iPy+6,iColor);
    if(iAy>=7) Bdisp_SetPoint_DDVRAM(iPx+0,iPy+7,iColor);
  }
  
  //Draw cursor (Clip mode)
  else
  {
    Bdisp_SetPoint_DDVRAM(iPx+0,iPy+0,iColor);
    Bdisp_SetPoint_DDVRAM(iPx+0,iPy+1,iColor);
    if(iPx-1>=0  ) Bdisp_SetPoint_DDVRAM(iPx-1,iPy+0,iColor);
    if(iPx+1<=127) Bdisp_SetPoint_DDVRAM(iPx+1,iPy+0,iColor);
    if(iPx-2>=0  ) Bdisp_SetPoint_DDVRAM(iPx-2,iPy+0,iColor);
    if(iPx+2<=127) Bdisp_SetPoint_DDVRAM(iPx+2,iPy+0,iColor);
    iPy=iPy+_sFData[_sFCntx[_iCntx].iFont].iAy-8;
    Bdisp_SetPoint_DDVRAM(iPx+0,iPy+6,iColor);
    Bdisp_SetPoint_DDVRAM(iPx+0,iPy+7,iColor);
    if(iPx-1>=0  ) Bdisp_SetPoint_DDVRAM(iPx-1,iPy+7,iColor);
    if(iPx+1<=127) Bdisp_SetPoint_DDVRAM(iPx+1,iPy+7,iColor);
    if(iPx-2>=0  ) Bdisp_SetPoint_DDVRAM(iPx-2,iPy+7,iColor);
    if(iPx+2<=127) Bdisp_SetPoint_DDVRAM(iPx+2,iPy+7,iColor);
  }

}