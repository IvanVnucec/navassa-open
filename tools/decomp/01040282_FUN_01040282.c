
longlong FUN_01040282(undefined4 param_1,uint *param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  bool bVar9;
  
  iVar3 = DAT_01040380;
  iVar2 = DAT_01040350;
  bVar1 = true;
  uVar6 = 0;
  do {
    if ((int)((*param_2 >> (uVar6 & 0xff)) << 0x1f) < 0) {
      iVar5 = iVar2 + uVar6 * 0x50;
      uVar4 = param_2[6];
      if (uVar4 == 0) {
        iVar5 = iVar5 + 0x50;
        uVar7 = 3;
        cVar8 = '\0';
        if ((*(char *)(iVar3 + 0x20) != '\0') && (FUN_0104038c(), cVar8 != '\0')) {
          iVar5 = extraout_r1 + 0x78;
LAB_010402c4:
          uVar7 = 5;
        }
      }
      else if (uVar4 == 4) {
        uVar7 = 1;
        cVar8 = *(char *)(iVar3 + 0x20) == '\0';
        iVar5 = iVar5 + 0xf0;
        if ((!(bool)cVar8) && (FUN_0104038c(), cVar8 != '\0')) {
          iVar5 = extraout_r1_00 + 0x118;
LAB_01040318:
          uVar7 = 4;
        }
      }
      else {
        iVar5 = uVar6 * 0x28;
        if (uVar4 == 1) {
          iVar5 = iVar2 + iVar5;
          goto LAB_01040318;
        }
        if (uVar4 != 2) {
          if (uVar4 == 3) {
            iVar5 = DAT_01040388 + iVar5;
            goto LAB_010402c4;
          }
          bVar1 = false;
          goto LAB_010402f0;
        }
        iVar5 = DAT_01040384 + iVar5;
        uVar7 = 6;
      }
      if (bVar1) {
        cVar8 = *(char *)(iVar5 + 4);
        bVar9 = cVar8 == '\0';
        if (bVar9) {
          cVar8 = *(char *)(DAT_01040348 + 0x7a3);
        }
        if (!bVar9 || cVar8 != '\0') {
          FUN_0102ee4a(uVar6 & 0xff,uVar7,*(undefined2 *)(iVar5 + 0x1c));
          FUN_0102ee6c(uVar6 & 0xff,uVar7,*(undefined2 *)(iVar5 + 0x1e));
        }
      }
    }
LAB_010402f0:
    uVar6 = uVar6 + 1;
    if (1 < (int)uVar6) {
      return (ulonglong)param_4 << 0x20;
    }
  } while( true );
}

