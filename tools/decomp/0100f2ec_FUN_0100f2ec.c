
undefined4 FUN_0100f2ec(int param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 uVar7;
  
  FUN_0100f2a8(param_2);
  FUN_0100f2d8(param_2);
  pbVar5 = param_2 + 0x1d0;
  pbVar4 = param_2 + 0x2c;
  param_2[0x1e4] = 0;
  param_2[0x3c] = 0;
  param_2[0x1e5] = 0;
  pbVar5[0] = 0;
  pbVar5[1] = 0;
  pbVar5[2] = 0;
  pbVar5[3] = 0;
  iVar6 = DAT_0100f588 + (uint)*param_2 * 4;
  iVar1 = *(int *)(param_2 + 4);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(iVar6 + 0x7c);
  if (iVar1 == 2) {
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(iVar6 + 0x84);
    param_2[0x28] = 2;
    param_2[0x29] = 0;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
    param_2[8] = 2;
    param_2[0x15] = 2;
    *(undefined1 *)(param_1 + 0xf4) = 3;
    iVar1 = DAT_0100f590;
    uVar2 = 0;
    do {
      *(undefined1 *)(param_1 + uVar2 + 0xf5) = *(undefined1 *)(iVar1 + (uint)*param_2 * 3 + uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
    uVar7 = FUN_0100f3f8();
    pbVar4 = (byte *)((ulonglong)uVar7 >> 0x20);
    piVar3 = (int *)((int)uVar7 + 0x498);
LAB_0100f3ae:
    iVar1 = *piVar3;
joined_r0x0100f3d2:
    if (0 < iVar1) {
LAB_0100f3d4:
      *(int *)(pbVar5 + 0x10) = iVar1;
      goto LAB_0100f3e8;
    }
    uVar2 = (uint)piVar3[5] >> 3;
  }
  else {
    if (iVar1 != 0 && iVar1 != 4) {
      if (iVar1 == 1) {
        param_2[0x28] = 1;
        param_2[0x29] = 0;
        param_2[0x2a] = 0;
        param_2[0x2b] = 0;
        param_2[8] = 1;
        param_2[0x15] = 1;
        uVar7 = FUN_0100f3f2();
        pbVar4 = (byte *)((ulonglong)uVar7 >> 0x20);
        piVar3 = (int *)((int)uVar7 + 800);
        goto LAB_0100f3ae;
      }
      if (iVar1 != 3) {
        **(undefined4 **)(param_2 + 0x10) = 0x3101;
        goto LAB_0100f3e8;
      }
      param_2[0x28] = 3;
      param_2[0x29] = 0;
      param_2[0x2a] = 0;
      param_2[0x2b] = 0;
      param_2[8] = 3;
      param_2[0x15] = 4;
      uVar7 = FUN_0100f3f2();
      pbVar4 = (byte *)((ulonglong)uVar7 >> 0x20);
      piVar3 = (int *)((int)uVar7 + 0x610);
      iVar1 = *piVar3;
      goto joined_r0x0100f3d2;
    }
    param_2[0x28] = 0;
    param_2[0x29] = 0;
    param_2[0x2a] = 0;
    param_2[0x2b] = 0;
    param_2[8] = 0;
    param_2[0x15] = 0;
    *(undefined1 *)(param_1 + 0xf4) = 1;
    uVar7 = FUN_0100f3f6(0xff);
    pbVar4 = (byte *)((ulonglong)uVar7 >> 0x20);
    iVar1 = *(int *)((int)uVar7 + 0x1a8);
    if (0 < iVar1) goto LAB_0100f3d4;
    uVar2 = *(uint *)((int)uVar7 + 0x19c) >> 2;
  }
  *(uint *)(pbVar5 + 0x10) = uVar2;
LAB_0100f3e8:
  *pbVar4 = 0;
  pbVar4[1] = 0;
  return param_4;
}

