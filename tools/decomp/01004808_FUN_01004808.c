
uint FUN_01004808(undefined4 param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 extraout_r1;
  undefined1 uVar4;
  undefined1 extraout_r1_00;
  int extraout_r1_01;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  char cVar13;
  
  uVar7 = param_2[8];
  bVar12 = (char)param_2[5] == '\0';
  uVar10 = 0;
  if (bVar12) {
    param_3 = (uint)*(byte *)(DAT_010050d0 + 0x77d);
    cVar13 = '\0';
    if (param_3 == 0) {
      cVar13 = *(char *)(DAT_010050cc + 0x20);
    }
    if ((param_3 != 0 || cVar13 != '\0') || (bVar12 = param_2[4] == 0, bVar12)) {
      bVar12 = *(char *)(DAT_01005444 + 3) == '\0';
    }
  }
  if (bVar12) {
    if (param_3 == 1) {
      uVar5 = 0x1e;
    }
    else if (*(char *)(DAT_010050cc + 0x20) == '\x01') {
      uVar5 = 0x1f;
    }
    else {
      uVar5 = 1;
    }
    uVar9 = 0;
    do {
      if ((int)((*param_2 >> (uVar9 & 0xff)) << 0x1f) < 0) {
        bVar1 = FUN_010026f0(param_2[4],DAT_010054f0,*DAT_010054f0,DAT_010054f0[1],uVar5);
        uVar8 = (uint)bVar1;
        FUN_0101098c(uVar9 & 0xff);
        iVar2 = DAT_010054f4 + uVar9;
        iVar6 = DAT_010052c8 + uVar9;
        iVar11 = DAT_01005448 + uVar9 * 4;
        if (param_2[6] == 0) {
          bVar12 = uVar7 == *(uint *)(iVar11 + 0x4c);
          if (bVar12) {
            FUN_01010bc2(uVar9 & 0xff,0);
            uVar10 = FUN_010049e4(uVar9 & 0xff,param_2);
            cVar13 = uVar10 == 0;
            if ((bool)cVar13) {
              FUN_010049dc();
              if (cVar13 == '\0') {
                cVar13 = *(char *)(DAT_010050cc + 0x20) == '\x01';
              }
              if (cVar13 == '\0') {
                *(undefined1 *)(iVar6 + 0x1bc0) = 1;
              }
              else {
                *(undefined1 *)(iVar2 + 0x68a0) = 1;
              }
            }
            goto LAB_010048ee;
          }
LAB_0100490c:
          if (bVar12) {
            uVar3 = (uint)(byte)param_2[0x10];
            bVar12 = uVar3 == 0;
            if (bVar12) {
              uVar3 = (uint)*(byte *)(uVar8 + param_2[8]);
            }
            if (bVar12 && uVar3 == 0) {
              uVar10 = FUN_01004b86(uVar9 & 0xff,param_2[6]);
              cVar13 = uVar10 == 0;
              uVar3 = uVar10;
              if ((bool)cVar13) {
                FUN_010049dc();
                uVar4 = extraout_r1;
                if (cVar13 != '\0') {
                  uVar4 = 1;
                }
                if (cVar13 == '\0') {
                  *(undefined1 *)(iVar6 + 0x1bc2) = 1;
                }
                else {
                  *(undefined1 *)(iVar2 + 0x68a2) = uVar4;
                }
                uVar3 = param_2[8];
                *(undefined1 *)(uVar8 + uVar3) = 1;
              }
            }
            goto LAB_01004944;
          }
        }
        else {
LAB_010048ee:
          uVar8 = uVar9 * 0x5d + DAT_010050c4 + uVar8 * 3;
          uVar3 = param_2[6];
          if (param_2[6] == 1) {
            bVar12 = uVar7 == *(uint *)(iVar11 + 0x54);
            goto LAB_0100490c;
          }
LAB_01004944:
          if (param_2[6] == 3) {
            if (uVar7 != *(uint *)(iVar11 + 100)) goto LAB_010049c6;
            cVar13 = (char)param_2[0x10];
            uVar3 = uVar7;
            if (cVar13 == '\0') {
              uVar3 = (uint)*(byte *)(uVar8 + param_2[8]);
            }
            if (cVar13 == '\0' && uVar3 == 0 || cVar13 == '\x01') {
              uVar10 = FUN_01004b86(uVar9 & 0xff,3,param_2);
              cVar13 = uVar10 == 0;
              uVar3 = uVar10;
              if ((bool)cVar13) {
                FUN_010049dc();
                uVar4 = extraout_r1_00;
                if (cVar13 != '\0') {
                  uVar4 = 1;
                }
                if (cVar13 == '\0') {
                  *(undefined1 *)(iVar6 + 0x1bc4) = 1;
                }
                else {
                  *(undefined1 *)(iVar2 + 0x68a4) = uVar4;
                }
                uVar3 = param_2[8];
                *(undefined1 *)(uVar8 + uVar3) = 1;
              }
            }
          }
          uVar8 = param_2[6];
          bVar12 = uVar8 == 2;
          if (bVar12) {
            uVar8 = *(uint *)(iVar11 + 0x5c);
            uVar3 = uVar7;
          }
          if (bVar12 && uVar3 == uVar8) {
            uVar10 = FUN_01004a9a(uVar9 & 0xff,param_2);
            cVar13 = uVar10 == 0;
            if ((bool)cVar13) {
              FUN_010049dc();
              iVar11 = extraout_r1_01;
              if (cVar13 == '\0') {
                cVar13 = *(char *)(DAT_010050cc + 0x20) == '\x01';
                iVar11 = DAT_010050cc;
              }
              uVar4 = (undefined1)iVar11;
              if (cVar13 != '\0') {
                uVar4 = 1;
              }
              if (cVar13 == '\0') {
                *(undefined1 *)(iVar6 + 0x1bc6) = 1;
              }
              else {
                *(undefined1 *)(iVar2 + 0x68a6) = uVar4;
              }
            }
          }
        }
LAB_010049c6:
        FUN_0101098c(uVar9 & 0xff);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 2);
  }
  return uVar10;
}

