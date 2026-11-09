
undefined4 FUN_010353de(byte param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010358f4 + (uint)param_1 * 4);
  *(char *)(iVar1 + 0xab) = (char)param_2;
  pin_update(iVar1 + 0xaa,0x70,(param_2 >> 8 & 0xf) << 4);
  return param_4;
}

