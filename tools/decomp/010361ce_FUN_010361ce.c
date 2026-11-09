
void FUN_010361ce(void)

{
  char *pcVar1;
  
  FUN_010232b8();
  FUN_01036202();
  pcVar1 = DAT_010364c8;
  if (*DAT_010364c8 == '\x01') {
    FUN_010362b0(DAT_010364c8,2);
  }
  if (pcVar1[0x1c] == '\x01') {
    FUN_010362b0(pcVar1 + 0x1c,2);
  }
  restore_priority();
  return;
}

