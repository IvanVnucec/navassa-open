
void FUN_0100b4c2(void)

{
  int unaff_r5;
  undefined8 uVar1;
  
  uVar1 = FUN_0100b4f2();
  FUN_0100b4fc((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0);
  *(undefined1 *)(unaff_r5 + 0x54) = 10;
  FUN_0100b4b2();
  pin_update(unaff_r5 + 0x4f,0x80,0x80);
  FUN_0100b472();
  return;
}

