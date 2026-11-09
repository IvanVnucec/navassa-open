
void FUN_0103620a(void)

{
  char *pcVar1;
  
  FUN_010232b8();
  FUN_01036202();
  pcVar1 = DAT_010364c8;
  if (*DAT_010364c8 != '\x03') {
    if (DAT_010364c8[0x1c] != '\x03') goto LAB_01036228;
    pcVar1 = DAT_010364c8 + 0x1c;
  }
  FUN_010362b0(pcVar1);
LAB_01036228:
  restore_priority();
  return;
}

