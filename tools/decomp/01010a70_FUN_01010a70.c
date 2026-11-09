
void FUN_01010a70(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_01010e3c + param_1 * 4);
  pin_update(iVar1 + 0xe7,0x7f,param_2);
  pin_update(iVar1 + 0xe8,0x7f,param_3);
  pin_update(iVar1 + 0xd4,0xc,(uint)(param_4 << 0x1a) >> 0x18);
  return;
}

