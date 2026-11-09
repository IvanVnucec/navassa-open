
int FUN_01031c74(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  int extraout_r1;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char cVar8;
  
  iVar5 = 0;
  bVar1 = *(byte *)(param_1 + 1);
  uVar6 = (uint)bVar1;
  if (*(char *)(param_1 + 0x24) != '\0') goto LAB_01031cca;
  sVar3 = FUN_01031d72();
  iVar7 = extraout_r1 + (int)sVar3 * (int)(short)(ushort)bVar1;
  param_3 = param_3 + uVar6 * 4;
  cVar8 = *(int *)(param_1 + 4) == 4;
  switch(*(int *)(param_1 + 4)) {
  case 0:
  case 4:
    if (((uint)*DAT_010325fc & 1 << uVar6) == 0) {
      return 0xe706;
    }
    iVar5 = FUN_010165ae(uVar6,*(undefined1 *)(iVar7 + 0x1c6));
    break;
  case 1:
    cVar8 = uVar6 == 0xfffffffc;
    FUN_01031d4e();
    if (cVar8 != '\0') {
      return 0xe706;
    }
    uVar2 = *(undefined1 *)(iVar7 + 0x33e);
    uVar4 = 1;
LAB_01031ce8:
    iVar5 = FUN_01016668(uVar6,uVar4,uVar2);
    break;
  case 2:
    cVar8 = uVar6 == 0xfffffffa;
    FUN_01031d4e();
    if (cVar8 != '\0') {
      return 0xe706;
    }
    iVar5 = FUN_01031d7c();
    if (iVar5 == 0) {
      FUN_01031d56();
      iVar5 = FUN_01025698(uVar6);
    }
    if (iVar5 == 0) {
      iVar5 = FUN_01016754(uVar6,*(undefined1 *)(iVar7 + 0x4b6));
    }
    break;
  case 3:
    FUN_01031d4e((uint)*DAT_010325fc,uVar6 + 8);
    if (cVar8 != '\0') {
      return 0xe706;
    }
    iVar5 = FUN_010255b6(3,uVar6,*(undefined4 *)(param_3 + 0x54),0,*(undefined4 *)(param_3 + 100),0)
    ;
    if (iVar5 == 0) {
      uVar2 = *(undefined1 *)(iVar7 + 0x62e);
      uVar4 = 3;
      goto LAB_01031ce8;
    }
  }
  if (iVar5 != 0) {
    return iVar5;
  }
LAB_01031cca:
  *(char *)(param_1 + 0x24) = '\x01';
  FUN_01031d62(*(undefined4 *)(param_1 + 4),*(undefined1 *)(param_1 + 0x25));
  return iVar5;
}

