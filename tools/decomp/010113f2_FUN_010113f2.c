
undefined4 FUN_010113f2(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  *(undefined4 *)(param_1 + 0x60) = param_2[0x19];
  uVar2 = 1;
  uVar3 = 0;
  uVar4 = 0;
  uVar6 = 0;
  uVar7 = 0x17;
  iVar1 = 2;
  do {
    for (; uVar6 <= uVar7; uVar6 = uVar6 + 1) {
      uVar8 = param_2[uVar6 + 1];
      if ((int)uVar8 <= (int)uVar3) {
        uVar3 = uVar8;
      }
      if ((int)uVar4 <= (int)uVar8) {
        uVar4 = uVar8;
      }
    }
    uVar6 = 0x19;
    uVar7 = 0x2f;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar4 = uVar4 & 0xfffff000;
  uVar3 = uVar3 & 0xfffff000;
  if ((int)uVar4 < DAT_01011a24) {
    if (-0x8000001 < (int)uVar3) {
      uVar5 = 0;
      goto LAB_0101147e;
    }
LAB_0101144a:
    if (-0x10000001 < (int)uVar3) {
      uVar5 = 1;
      goto LAB_0101147e;
    }
LAB_0101145c:
    if (-0x20000001 < (int)uVar3) {
      uVar5 = 2;
      goto LAB_0101147e;
    }
LAB_0101146c:
    if (-0x40000001 < (int)uVar3) {
      uVar5 = 3;
      goto LAB_0101147e;
    }
  }
  else {
    if ((int)uVar4 < 0x10000000) goto LAB_0101144a;
    if ((int)uVar4 < 0x20000000) goto LAB_0101145c;
    if ((int)uVar4 < 0x40000000) goto LAB_0101146c;
  }
  uVar5 = 3;
  uVar2 = 0;
LAB_0101147e:
  uVar3 = 0;
  uVar4 = 0x17;
  iVar1 = 2;
  do {
    for (; uVar3 <= uVar4; uVar3 = uVar3 + 1) {
      *(int *)(param_1 + uVar3 * 4) = (int)param_2[uVar3 + 1] >> uVar5;
    }
    uVar3 = 0x19;
    uVar4 = 0x2f;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(ushort *)(param_1 + 0xc0) = uVar5 | 0x30;
  *(undefined4 *)(param_1 + 0xc4) = *param_2;
  return uVar2;
}

