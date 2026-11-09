
undefined4 FUN_0100f628(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  bVar1 = 0;
  iVar3 = 0;
  iVar4 = 0;
  uVar5 = 1;
  do {
    if ((int)((*(uint *)(*(int *)(param_1 + 0xc) + 8) >> (uVar5 & 0xff)) << 0x1f) < 0) {
      bVar1 = bVar1 + 1;
      iVar4 = iVar4 + *(int *)(param_1 + uVar5 * 4 + 0x40);
      iVar3 = *(int *)(param_1 + uVar5 * 4 + 0xa0) + iVar3;
    }
    if ((int)((*(uint *)(*(int *)(param_1 + 0xc) + 4) >> (uVar5 & 0xff)) << 0x1f) < 0) {
      bVar1 = bVar1 + 1;
      iVar4 = *(int *)(param_1 + uVar5 * 4 + 0x100) + iVar4;
      iVar3 = *(int *)(param_1 + uVar5 * 4 + 0x160) + iVar3;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x17);
  fVar8 = (float)VectorUnsignedToFloat((uint)bVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = FUN_01012c10(fVar6 / fVar8);
  uVar7 = FUN_010205a4(uVar2);
  bVar1 = *param_1;
  uVar2 = FUN_01020608((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  *(undefined4 *)(param_1 + (uint)bVar1 * 4 + 0x1c8) = uVar2;
  fVar6 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = FUN_01012c10(fVar6 / fVar8);
  uVar7 = FUN_010205a4(uVar2);
  bVar1 = *param_1;
  uVar2 = FUN_01020608((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  *(undefined4 *)(param_1 + (uint)bVar1 * 4 + 0x1c0) = uVar2;
  return param_4;
}

