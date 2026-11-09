
void FUN_0101c992(void)

{
  int unaff_r4;
  int unaff_r6;
  undefined8 uVar1;
  
  FUN_0101ccfa();
  uVar1 = FUN_0101c27c(1,*(undefined1 *)(unaff_r4 + 1));
  FUN_0101c7da((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),*(undefined1 *)(unaff_r4 + 2));
  uVar1 = pin_update(unaff_r6 + 0x95);
  FUN_0101c7da((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),*(undefined1 *)(unaff_r4 + 3));
  pin_update(unaff_r6 + 0x96);
  FUN_0101cb24();
  FUN_0101c27c(1,*(undefined1 *)(unaff_r4 + 1));
  return;
}

