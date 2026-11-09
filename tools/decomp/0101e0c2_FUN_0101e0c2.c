
void FUN_0101e0c2(void)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  int unaff_r4;
  
  uVar3 = FUN_0101e0fc();
  uVar1 = *(undefined1 *)(unaff_r4 + 0x1b7);
  bVar2 = *(byte *)(unaff_r4 + 0x1be);
  pin_update(unaff_r4 + 0xde,3,*(undefined1 *)(unaff_r4 + 0x1b8));
  *(undefined1 *)(unaff_r4 + 0xdd) = uVar1;
  pin_update(unaff_r4 + 0xda,3,bVar2 & 3);
  restore_priority(uVar3,in_r3);
  return;
}

