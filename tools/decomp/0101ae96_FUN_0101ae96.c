
void FUN_0101ae96(void)

{
  *DAT_0101af38 = *DAT_0101af38 | 0x80000;
                    /* WARNING: Could not recover jumptable at 0x0101aea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if ((code *)*DAT_0101af3c != (code *)0x0) {
    (*(code *)*DAT_0101af3c)();
    return;
  }
  return;
}

