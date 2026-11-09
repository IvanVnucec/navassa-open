
undefined8 FUN_01020fbc(int *param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char in_CY;
  char cVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  uint local_20;
  undefined4 uStack_1c;
  
  iVar2 = DAT_01021c74;
  iVar1 = DAT_01021500;
  uVar7 = 0;
  bVar9 = true;
  local_20 = param_3 & 0xffffff00;
  uStack_1c = param_4;
  if (*(char *)(DAT_01021504 + 0x77d) == '\0') {
    uVar10 = *(char *)(DAT_01021500 + 0x20) == '\0';
    cVar8 = true;
    if ((bool)uVar10) goto LAB_01021074;
    uVar3 = DAT_01021504;
    uVar11 = FUN_01021092();
    if (!(bool)cVar8 || (bool)uVar10) {
      if ((bool)cVar8 != false) {
        cVar8 = (uint)uVar11 <= uVar3;
        uVar10 = uVar3 == (uint)uVar11;
      }
      if (cVar8 == '\0') {
        uVar11 = CONCAT44(param_4,uVar3);
      }
    }
    FUN_01001950((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    uVar11 = FUN_01021084();
    if (!(bool)cVar8 || (bool)uVar10) {
      if ((bool)cVar8 != false) {
        cVar8 = (uint)uVar11 <= uVar3;
      }
      if (cVar8 == '\0') goto LAB_01021060;
    }
    uVar11 = CONCAT44(param_4,uVar3);
  }
  else if (*(char *)(DAT_01021500 + 0x20) == '\0') {
    uVar7 = FUN_01001950(*(undefined4 *)(DAT_01021c74 + 0x10),*(undefined4 *)(DAT_01021c74 + 0x14));
    uVar11 = *(undefined8 *)(iVar2 + 0x18);
  }
  else {
    uVar3 = DAT_01021504;
    uVar11 = FUN_01021092();
    if (!(bool)in_CY || bVar9) {
      if ((bool)in_CY != false) {
        in_CY = (uint)uVar11 <= uVar3;
      }
      if (in_CY == '\0') {
        uVar11 = CONCAT44(param_4,uVar3);
      }
    }
    uVar4 = (uint)((ulonglong)uVar11 >> 0x20);
    uVar3 = (uint)uVar11;
    uVar5 = *(uint *)(iVar2 + 0x10);
    uVar6 = *(uint *)(iVar2 + 0x14);
    bVar9 = uVar6 <= uVar4;
    uVar10 = uVar4 == uVar6;
    cVar8 = bVar9;
    if (!bVar9 || (bool)uVar10) {
      if (bVar9) {
        uVar10 = uVar3 == uVar5;
      }
      cVar8 = bVar9 && uVar5 <= uVar3;
      if (!bVar9 || uVar5 > uVar3) {
        uVar11 = *(undefined8 *)(iVar2 + 0x10);
      }
    }
    FUN_01001950((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    uVar11 = FUN_01021084();
    if ((bool)cVar8 && !(bool)uVar10) {
LAB_0102104c:
      uVar11 = CONCAT44(uVar6,uVar5);
    }
    else {
      if ((bool)cVar8 != false) {
        cVar8 = (uint)uVar11 <= uVar5;
      }
      if (cVar8 != '\0') goto LAB_0102104c;
    }
    uVar3 = (uint)((ulonglong)uVar11 >> 0x20);
    if ((*(uint *)(iVar2 + 0x1c) <= uVar3) &&
       (*(uint *)(iVar2 + 0x1c) < uVar3 || *(uint *)(iVar2 + 0x18) < (uint)uVar11)) {
      uVar11 = *(undefined8 *)(iVar2 + 0x18);
    }
  }
LAB_01021060:
  uVar10 = FUN_01001950((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  local_20 = CONCAT31(local_20._1_3_,uVar10);
  if (*(char *)(iVar1 + 0x20) != '\0') {
    FUN_010004ec(&local_20);
  }
LAB_01021074:
  *param_2 = uVar7 & 0xff;
  *param_1 = (local_20 & 0xff) + 1;
  return CONCAT44(uStack_1c,local_20);
}

