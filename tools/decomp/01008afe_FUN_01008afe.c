
void FUN_01008afe(void)

{
  undefined4 uVar1;
  undefined4 unaff_r7;
  
  uVar1 = DAT_01009644;
  if (*(char *)(DAT_0100935c + 0x10) == '\0') {
    uVar1 = DAT_01009640;
  }
  pin_update(uVar1,0x1f,0x11);
  pin_update(DAT_01009648,0x1f,0x11);
  pin_update(DAT_0100964c,0x1f,0x11);
  pin_update(DAT_010097a8,0x1f,0x11,unaff_r7);
  return;
}

