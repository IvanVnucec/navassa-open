
void FUN_010352b4(byte param_1,int param_2,int param_3,uint param_4,undefined1 param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010358f4 + (uint)param_1 * 4);
  pin_update(iVar1 + 0xa3,0xff,(param_4 | param_2 << 6 | param_3 << 3) & 0xff);
  pin_update(iVar1 + 0xa4,7,param_5);
  return;
}

