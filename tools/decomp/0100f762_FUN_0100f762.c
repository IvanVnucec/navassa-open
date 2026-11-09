
undefined4 FUN_0100f762(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  bVar1 = *param_1;
  uVar2 = (uint)bVar1;
  *param_3 = bVar1 & 1;
  param_3[1] = (byte)((uVar2 << 0x1e) >> 0x1f);
  param_3[2] = (byte)((uVar2 << 0x1d) >> 0x1f);
  param_3[3] = (byte)((uVar2 << 0x1c) >> 0x1f);
  param_3[4] = (byte)((uVar2 << 0x1b) >> 0x1f);
  param_3[5] = (byte)((uVar2 << 0x1a) >> 0x1f);
  param_3[6] = (byte)((uVar2 << 0x19) >> 0x1f);
  param_3[7] = bVar1 >> 7;
  uVar3 = FUN_01002806(param_1 + 1,0xffffff);
  *(undefined4 *)(param_3 + 8) = uVar3;
  uVar3 = FUN_01002806(param_1 + 4,0xffffff);
  *(undefined4 *)(param_3 + 0xc) = uVar3;
  param_3[0x10] = *param_2;
  return param_4;
}

