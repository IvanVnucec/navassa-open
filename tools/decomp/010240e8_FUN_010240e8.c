
void FUN_010240e8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_01024324 + param_1 * 4);
  *(undefined1 *)(iVar1 + 0xff) = 0x40;
  *(undefined1 *)(iVar1 + 0x11b) = 0x40;
  pin_update(iVar1 + 0xf9,4,4);
  return;
}

