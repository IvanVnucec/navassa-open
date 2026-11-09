
undefined8 FUN_0103fa42(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  undefined4 uVar8;
  undefined8 uVar9;
  int local_5c;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [20];
  
  iVar2 = FUN_01009518(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),param_3,0);
  if (iVar2 == 0) {
    FUN_01009ae4(*(undefined4 *)(param_1 + 0x3c),param_3,*(undefined1 *)(param_1 + 0x48),
                 *(undefined1 *)(param_1 + 0x49));
  }
  else {
    FUN_0100974e(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),param_3);
  }
  uVar8 = DAT_01040364;
  FUN_0103f48c(DAT_01040364,0x38,0x31);
  FUN_0103f48c(uVar8,0x4d,0x31);
  *(undefined1 *)(param_1 + 0x5f) = 0;
  bVar7 = *(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c);
  if (!bVar7) {
    iVar3 = FUN_01025910(param_2,param_3);
    uVar8 = VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
    if (iVar3 == 0) {
      FUN_01012c10(uVar8);
      uVar9 = FUN_0103fbc6();
      uVar6 = 0x80000000;
      uVar8 = DAT_0104036c;
    }
    else {
      FUN_01012c10(uVar8);
      uVar9 = FUN_0103fbc6();
      uVar6 = 0;
      uVar8 = DAT_01040368;
    }
    FUN_0101f250((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar6,uVar8);
    fVar4 = (float)FUN_0101f3f4();
    fVar5 = (float)FUN_01014570(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
    if (-1 < (int)((uint)(fVar4 < fVar5) << 0x1f)) goto LAB_0103fbba;
    bVar7 = *(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x1c);
  }
  if (!bVar7) {
    *(undefined1 *)(param_1 + 0x5f) = 1;
    FUN_0101206c(auStack_3c,&DAT_010403a0,0x14);
    FUN_0101c0c0(auStack_3c,param_3);
    FUN_0101206c(auStack_4c,&DAT_010403b4,0x10);
    FUN_0101c154(auStack_4c,param_3,0,0);
    local_54 = DAT_010403c4;
    uStack_50 = DAT_010403c8;
    FUN_01025880(param_3,&local_54);
    if (*(char *)(param_1 + 4) == '\x03' || *(char *)(param_1 + 4) == '\x01') {
      iVar2 = param_3;
      if (param_3 != 0) {
        iVar2 = 2;
      }
      uVar1 = (undefined1)iVar2;
      if (param_3 == 0) {
        uVar1 = 0;
      }
    }
    else {
      iVar2 = param_3;
      if (param_3 == 0) {
        iVar2 = 1;
      }
      uVar1 = (undefined1)iVar2;
      if (param_3 != 0) {
        uVar1 = 3;
      }
    }
    local_5c = DAT_01040370 + param_3 * 0x58;
    if (*(char *)(param_1 + 0xd) == '\0') {
      local_5c = local_5c + 0x16ec;
    }
    else {
      local_5c = local_5c + 0x14dc;
    }
    FUN_0102f63c(0,uVar1,local_5c,0x15);
    iVar2 = FUN_0103b7bc(param_3,*(undefined4 *)(param_1 + 0x3c),2);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  }
LAB_0103fbba:
  return CONCAT44(param_4,iVar2);
}

