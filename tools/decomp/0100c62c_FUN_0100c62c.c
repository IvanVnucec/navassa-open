
undefined4
FUN_0100c62c(undefined4 param_1,undefined4 param_2,byte *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint in_fpscr;
  short sVar7;
  short sVar8;
  float fVar9;
  undefined4 extraout_s1;
  
  iVar3 = *(int *)(param_3 + 0xc);
  uVar6 = (uint)*(byte *)(iVar3 + 0x58);
  if (*(char *)(iVar3 + 0x44) != '\0') {
    FUN_0100c48e(param_3,uVar6,0);
    uVar4 = FUN_0100c4b0(param_3,uVar6,0,param_6);
    return uVar4;
  }
  iVar5 = *(int *)(param_3 + 4);
  if (*(char *)(iVar3 + 0xc) == '\x01') {
    iVar3 = FUN_0101bb08(*(undefined4 *)(*(int *)(param_3 + 0x14) + 0x20),
                         *(undefined4 *)(*(int *)(param_3 + 0x14) + 0x24),uVar6);
    if (iVar3 << 0x1f < 0) {
      VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
      param_2 = DAT_0100c818;
    }
    else {
      FUN_0100c4b0(param_3,uVar6,1);
      param_2 = extraout_s1;
    }
  }
  iVar3 = DAT_0100cac0;
  iVar5 = *(int *)(param_3 + 0x14);
  fVar9 = (float)FUN_0100c796(0x3f800000,param_2,(int)*(short *)(iVar5 + 0xc));
  sVar7 = (short)(int)fVar9;
  fVar9 = (float)FUN_0100c796((int)*(short *)(iVar5 + 0xe));
  sVar8 = (short)(int)fVar9;
  iVar5 = FUN_0100c474(param_3,uVar6);
  if (iVar5 != 0) {
    if (*(char *)(iVar3 + 0x12 + (uint)*param_3) == '\0') {
      iVar5 = FUN_0100c788();
      sVar2 = *(short *)(*(int *)(*(int *)(param_3 + 0x14) + 0x14) + iVar5 * 4);
      iVar5 = *(int *)(*(int *)(param_3 + 0x14) + 0x14) + iVar5 * 4;
    }
    else {
      iVar5 = *(int *)(param_3 + 0xe4);
      sVar2 = *(short *)(iVar5 + uVar6 * 4);
      iVar5 = iVar5 + uVar6 * 4;
    }
    uVar4 = VectorSignedToFloat((int)sVar7,(byte)(in_fpscr >> 0x15) & 3);
    sVar1 = *(short *)(iVar5 + 2);
    fVar9 = (float)FUN_0100c7a2(uVar4,(int)sVar2);
    sVar7 = (short)(int)fVar9;
    uVar4 = VectorSignedToFloat((int)sVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)FUN_0100c7a2(uVar4,(int)sVar1);
    sVar8 = (short)(int)fVar9;
  }
  if (*(short *)(param_3 + 0x18) == 1) {
    if (*(char *)(iVar3 + 0x12 + (uint)*param_3) == '\0') {
      iVar3 = FUN_0100c788();
      iVar5 = *(int *)(param_3 + 0x14);
      *(short *)(*(int *)(iVar5 + 0x14) + iVar3 * 4) = sVar7;
      iVar3 = *(int *)(iVar5 + 0x14) + iVar3 * 4;
    }
    else {
      iVar3 = *(int *)(param_3 + 0xe4);
      *(short *)(iVar3 + uVar6 * 4) = sVar7;
      iVar3 = iVar3 + uVar6 * 4;
    }
    *(short *)(iVar3 + 2) = sVar8;
    FUN_0100c48e(param_3,uVar6,1);
    *(undefined1 *)(*(int *)(param_3 + 0x14) + 0x10) = 1;
  }
  iVar3 = *(int *)(param_3 + 0x14);
  *(short *)(iVar3 + 0xc) = sVar7;
  *(short *)(iVar3 + 0xe) = sVar8;
  return param_6;
}

