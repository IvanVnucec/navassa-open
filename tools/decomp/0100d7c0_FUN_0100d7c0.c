
void FUN_0100d7c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0100d838 + param_1 * 4);
  if (-1 < (int)((uint)*(byte *)(iVar2 + 0x9c) << 0x1d)) {
    pin_update((byte *)(iVar2 + 0x9c),4,4);
  }
  pin_update(*(int *)(DAT_0100d83c + param_1 * 4) + 0x106,1,1);
  iVar1 = iVar2 + 0xca;
  pin_update(iVar1,0xf8,0x28);
  pin_update(iVar1,2,2);
  pin_update(iVar1,1,1);
  iVar2 = iVar2 + 0xcb;
  pin_update(iVar2,0xf8,0x28);
  pin_update(iVar2,2,2);
  pin_update(iVar2,1,1,param_4);
  return;
}

