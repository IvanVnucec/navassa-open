
undefined4 FUN_01035588(byte param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010358f4 + (uint)param_1 * 4);
  pin_update(iVar1 + 0xb7,3,param_2 & 3);
  *(char *)(iVar1 + 0xb6) = (char)(param_2 >> 2);
  return param_4;
}

