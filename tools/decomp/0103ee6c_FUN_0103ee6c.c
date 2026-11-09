
longlong FUN_0103ee6c(undefined4 param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  
  iVar4 = DAT_0103ef88;
  iVar3 = DAT_0103ef84;
  iVar2 = DAT_0103ef80;
  bVar1 = true;
  uVar7 = 0;
  do {
    if ((int)((*param_2 >> (uVar7 & 0xff)) << 0x1f) < 0) {
      iVar6 = iVar4 + uVar7 * 0x48;
      uVar5 = param_2[6];
      if (uVar5 == 0) {
        iVar6 = iVar6 + 0x48;
        uVar8 = 3;
        cVar9 = '\0';
        if ((*(char *)(iVar3 + 0x20) != '\0') && (FUN_0103efa8(), cVar9 != '\0')) {
          iVar6 = extraout_r1 + 0x6c;
          goto LAB_0103eeb6;
        }
      }
      else if (uVar5 == 4) {
        uVar8 = 1;
        cVar9 = *(char *)(iVar3 + 0x20) == '\0';
        iVar6 = iVar6 + 0xd8;
        if ((!(bool)cVar9) && (FUN_0103efa8(), cVar9 != '\0')) {
          iVar6 = extraout_r1_00 + 0xfc;
LAB_0103eeb6:
          uVar8 = 4;
        }
      }
      else {
        iVar6 = uVar7 * 0x24;
        if (uVar5 == 1) {
          iVar6 = iVar4 + iVar6;
          goto LAB_0103eeb6;
        }
        if (uVar5 == 2) {
          iVar6 = DAT_0103ef8c + iVar6;
          uVar8 = 6;
        }
        else {
          if (uVar5 != 3) {
            bVar1 = false;
            goto LAB_0103eefe;
          }
          iVar6 = DAT_0103efa4 + iVar6;
          uVar8 = 5;
        }
      }
      if (bVar1) {
        cVar9 = *(char *)(iVar6 + 4);
        bVar10 = cVar9 == '\0';
        if (bVar10) {
          cVar9 = *(char *)(iVar2 + 0x7a3);
        }
        if (!bVar10 || cVar9 != '\0') {
          FUN_0102ee8c(uVar7 & 0xff,uVar8,(int)*(short *)(iVar6 + 0x1c));
          FUN_0102eebe(uVar7 & 0xff,uVar8,(int)*(short *)(iVar6 + 0x1e));
          if ((*(char *)(iVar6 + 4) != '\0') && (*(char *)(iVar2 + 0x7a3) == '\0')) {
            FUN_0102eefc(uVar7 & 0xff,uVar8,*(undefined2 *)(iVar6 + 0x20));
            FUN_0102ef44(uVar7 & 0xff,uVar8,*(undefined2 *)(iVar6 + 0x22));
          }
        }
      }
    }
LAB_0103eefe:
    uVar7 = uVar7 + 1;
    if (1 < (int)uVar7) {
      return ZEXT48(param_2) << 0x20;
    }
  } while( true );
}

