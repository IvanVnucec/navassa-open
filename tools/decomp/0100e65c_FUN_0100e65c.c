
int FUN_0100e65c(undefined1 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  
  fVar3 = DAT_0100e930;
  fVar6 = (float)VectorUnsignedToFloat
                           ((uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x2c),
                            (byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x84) = fVar6 * DAT_0100e930;
  uVar2 = *(ushort *)(*(int *)(param_1 + 0x10) + 0x2e);
  *(undefined2 *)(param_1 + 0x48) = 0x4000;
  fVar6 = (float)VectorUnsignedToFloat((uint)uVar2,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined2 *)(param_1 + 0x44) = 0x400;
  *(float *)(param_1 + 0x88) = fVar6 * fVar3;
  uVar4 = DAT_0100e998;
  *(undefined4 *)(param_1 + 0x8c) = DAT_0100e998;
  *(undefined4 *)(param_1 + 0x90) = uVar4;
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x46] = 7;
  FUN_0100d7b8(*(int *)(param_1 + 0x14) + 0x14,0x10);
  uVar1 = *param_1;
  *(undefined4 *)(*(int *)(param_1 + 0x18) + 4) = 0x3f800000;
  FUN_01023128(0x3f800000,uVar1);
  FUN_010241e8(*param_1,param_1 + 0x44,0,1);
  FUN_010241c4(*param_1,(int)*(short *)(param_1 + 0x48),1);
  FUN_010242b2(DAT_0100e99c,*param_1,1);
  FUN_0100e2ca(param_1);
  FUN_0100e108(param_1);
  iVar5 = FUN_0101ddf6(*param_1,param_2);
  if (iVar5 == 0) {
    FUN_0101deb2(*param_1,1,0);
  }
  return iVar5;
}

