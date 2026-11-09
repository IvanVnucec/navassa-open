
void FUN_0101e07c(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  int unaff_r4;
  
  uVar1 = FUN_0101e0fc();
  *(undefined1 *)(unaff_r4 + 0x1b7) = *(undefined1 *)(unaff_r4 + 0xdd);
  *(byte *)(unaff_r4 + 0x1b8) = *(byte *)(unaff_r4 + 0xde) & 3;
  *(byte *)(unaff_r4 + 0x1be) = *(byte *)(unaff_r4 + 0xda) & 0xf7;
  pin_update((byte *)(unaff_r4 + 0xda),3,1);
  restore_priority(uVar1,in_r3);
  return;
}

