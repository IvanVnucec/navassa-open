
void FUN_0100b506(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0100b544 + param_1 * 4);
  *(undefined1 *)(iVar1 + 0x51) = 0x60;
  pin_update(iVar1 + 0x52,0xf,0xb);
  *(undefined1 *)(iVar1 + 0x57) = 0xb0;
  *(undefined1 *)(iVar1 + 0x58) = 1;
  *(undefined1 *)(iVar1 + 0x59) = 0;
  *(undefined1 *)(iVar1 + 0x50) = 0;
  return;
}

