
void FUN_0102e658(int param_1)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = DAT_0102e6ac;
  if ((*DAT_0102e6ac != '\0') && (param_1 != 0)) {
    *DAT_0102e6b0 = (char)param_1;
    uVar2 = *(uint *)(DAT_0102e6b4 + 0x14) / (param_1 + 1U);
    *(uint *)(DAT_0102e6b4 + 0x14) = uVar2;
    *DAT_0102e6b8 = uVar2;
    FUN_0102c03c();
    *pcVar1 = '\0';
  }
  return;
}

