
int FUN_01031b7c(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  
  iVar7 = 0;
  bVar1 = *(byte *)(param_1 + 1);
  uVar8 = (uint)bVar1;
  if (*(char *)(param_1 + 0x24) == '\0') goto LAB_01031c60;
  sVar3 = FUN_01031d72();
  iVar9 = extraout_r1 + (int)sVar3 * (int)(short)(ushort)bVar1;
  param_3 = param_3 + uVar8 * 4;
  uVar5 = (uint)*DAT_010325fc;
  cVar10 = *(int *)(param_1 + 4) == 4;
  iVar4 = 0xe706;
  switch(*(int *)(param_1 + 4)) {
  case 0:
  case 4:
    cVar10 = (uVar5 & 1 << uVar8) == 0;
    iVar7 = iVar4;
    if (!(bool)cVar10) {
      iVar7 = FUN_0101681c(uVar8,*(undefined1 *)(iVar9 + 0x1c6));
    }
    break;
  case 1:
    cVar10 = (uVar5 & 1 << (uVar8 + 4 & 0xff)) == 0;
    iVar7 = iVar4;
    if (!(bool)cVar10) {
      uVar2 = *(undefined1 *)(iVar9 + 0x33e);
      uVar6 = 1;
LAB_01031c44:
      cVar10 = '\0';
      iVar7 = FUN_010168dc(uVar8,uVar6,uVar2);
    }
    break;
  case 2:
    cVar10 = (uVar5 & 1 << (uVar8 + 6 & 0xff)) == 0;
    iVar7 = iVar4;
    if (!(bool)cVar10) {
      iVar4 = FUN_01031d7c();
      iVar7 = iVar4;
      if (iVar4 == 0) {
        FUN_01031d56();
        iVar7 = 0;
      }
      cVar10 = iVar4 == 0;
      if (iVar7 == 0) {
        iVar7 = FUN_010169a8(uVar8,*(undefined1 *)(iVar9 + 0x4b6));
      }
    }
    break;
  case 3:
    cVar10 = (uVar5 & 1 << (uVar8 + 8 & 0xff)) == 0;
    iVar7 = iVar4;
    if (!(bool)cVar10) {
      iVar7 = FUN_01025622(3,uVar8,*(undefined4 *)(param_3 + 0x54),0,*(undefined4 *)(param_3 + 100),
                           0);
      cVar10 = iVar7 == 0;
      if ((bool)cVar10) {
        uVar2 = *(undefined1 *)(iVar9 + 0x62e);
        uVar6 = 3;
        goto LAB_01031c44;
      }
    }
  }
  FUN_01031d4e(*(undefined1 *)(param_1 + 0x25),*(undefined4 *)(param_1 + 4));
  if (cVar10 != '\0') {
    FUN_01017972(*(undefined1 *)(param_1 + 2),1);
  }
  if (iVar7 != 0) {
    return iVar7;
  }
LAB_01031c60:
  *(char *)(param_1 + 0x24) = '\0';
  FUN_01031d62(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 0x25));
  return iVar7;
}

