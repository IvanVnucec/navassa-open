
longlong FUN_01036c88(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_01036cf0 + param_1 * 4);
  pin_update(iVar1 + 0x140,2,(uint)(param_2 << 0x19) >> 0x18);
  pin_update(iVar1 + 0x13e,0x20,(uint)(param_3 << 0x1d) >> 0x18);
  return (ulonglong)param_4 << 0x20;
}

