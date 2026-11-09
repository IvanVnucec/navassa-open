
void FUN_0100f6e6(byte *param_1,undefined4 param_2,byte *param_3,undefined4 param_4)

{
  *param_1 = *param_3 & 1 | (byte)((param_3[1] & 1) << 1) | (byte)((param_3[2] & 1) << 2) |
             (byte)((param_3[3] & 1) << 3) | (byte)((param_3[4] & 1) << 4) |
             (byte)((param_3[5] & 1) << 5) | (byte)((param_3[6] & 1) << 6) | param_3[7] << 7;
  FUN_010027f4(param_1 + 1,0xffffff,*(undefined4 *)(param_3 + 8));
  FUN_010027f4(param_1 + 4,0xffffff,*(undefined4 *)(param_3 + 0xc));
  FUN_010027d8(param_2,param_3[0x10],param_4);
  return;
}

