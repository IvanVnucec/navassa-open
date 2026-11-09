
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0103f89e(undefined4 *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  
  iVar7 = DAT_01040354;
  uVar5 = (uint)*(byte *)(param_1 + 1);
  param_1[0xe] = *(undefined4 *)(DAT_01040354 + (uint)*param_2 * 4 + 0x7c);
  uVar9 = 0;
  if (uVar5 == 6) {
    param_1[0xe] = *(undefined4 *)(iVar7 + (uint)*param_2 * 4 + 0x84);
  }
  *(undefined1 *)((int)param_1 + 0x5e) = 0xff;
  iVar4 = DAT_0104035c;
  iVar3 = DAT_01040358;
  iVar7 = DAT_01040348;
  uVar6 = *param_1;
  iVar8 = DAT_01040358 + 0x2b0;
  iVar10 = DAT_0104035c + 0xe8;
  if (uVar5 == 3) {
    param_1[4] = (short)(ushort)*param_2 * 0xbc + DAT_01040348 + 0x19c;
    param_1[7] = *(undefined4 *)(iVar10 + (short)(ushort)*param_2 * 0x54);
    iVar8 = iVar8 + (uint)*param_2 * 0x80;
    goto LAB_0103f910;
  }
  if (uVar5 == 1) {
    param_1[4] = DAT_01040348 + (short)(ushort)*param_2 * 0xbc + 0x19c;
    param_1[7] = *(undefined4 *)(iVar10 + (short)(ushort)*param_2 * 0x54);
    bVar2 = *param_2;
    param_1[0xf] = 0;
    param_1[5] = iVar8 + (uint)bVar2 * 0x80;
  }
  else {
    if (uVar5 == 4) {
      uVar11 = FUN_0103fa36();
      param_2 = (byte *)((ulonglong)uVar11 >> 0x20);
      uVar5 = (uint)uVar11;
      param_1[7] = _DAT_000001e4;
      iVar8 = iVar3 + (uint)*param_2 * 0x80 + 0x3b0;
LAB_0103f910:
      param_1[5] = iVar8;
    }
    else {
      if (uVar5 != 6) {
        if (uVar5 != 5) {
          uVar9 = 0x2e05;
          param_1[0xf] = uVar6;
          goto LAB_0103fa30;
        }
        uVar11 = FUN_0103fa36();
        param_2 = (byte *)((ulonglong)uVar11 >> 0x20);
        uVar5 = (uint)uVar11;
        param_1[7] = _DAT_00000334;
        iVar8 = iVar3 + (uint)*param_2 * 0x80 + 0x5b0;
        goto LAB_0103f910;
      }
      *(undefined1 *)((int)param_1 + 0x5e) = 7;
      param_1[4] = iVar7 + (short)(ushort)*param_2 * 0xbc + 0x48c;
      param_1[7] = *(undefined4 *)(iVar4 + (short)(ushort)*param_2 * 0x54 + 0x238);
      param_1[5] = iVar3 + (uint)*param_2 * 0x80 + 0x4b0;
    }
    param_1[0xf] = uVar6;
  }
  iVar7 = param_1[4];
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)(iVar7 + 0x2a);
  if (uVar5 == 1) {
    *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)(DAT_01040360 + 0x15);
  }
  if (*(char *)((int)param_1 + 0xd) == '\x01') {
    *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)(iVar7 + 0x12);
    uVar6 = *(undefined4 *)(iVar7 + 0x20);
    uVar1 = *(undefined1 *)(iVar7 + 0x28);
  }
  else {
    *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)(iVar7 + 0x13);
    uVar6 = *(undefined4 *)(iVar7 + 0x24);
    uVar1 = *(undefined1 *)(iVar7 + 0x29);
  }
  *(undefined1 *)(param_1 + 3) = uVar1;
  param_1[2] = uVar6;
  uVar6 = FUN_0101175c(param_1[0xf],*param_2);
  param_1[6] = uVar6;
  param_1[0xd] = *(undefined4 *)(param_1[4] + 0xc);
  if (*(char *)((int)param_1 + 6) == '\x01') {
    param_1[0x10] = (uint)param_1[2] >> 1;
    param_1[0x11] = 0;
    param_1[0x18] = 0;
  }
  else {
    param_1[0x10] = param_1[2];
    param_1[0x11] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
LAB_0103fa30:
  return CONCAT44(param_4,uVar9);
}

