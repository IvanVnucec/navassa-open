
void FUN_010424ce(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010425c0 + param_1 * 4);
  pin_update(iVar1 + 0x1a8,2,(uint)(param_2 << 0x19) >> 0x18);
  pin_update(*(int *)(DAT_010425c4 + param_1 * 4) + 0x1a7,0x80,(uint)(param_3 << 0x1f) >> 0x18);
  pin_update(iVar1 + 0xab,0x30,(uint)(param_4 << 0x1c) >> 0x18,param_4);
  return;
}

