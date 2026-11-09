
void FUN_0101aeac(void)

{
  *DAT_0101af38 = *DAT_0101af38 | 0x20000;
                    /* WARNING: Could not recover jumptable at 0x0101aebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (*(code **)(DAT_0101af3c + 8) != (code *)0x0) {
    (**(code **)(DAT_0101af3c + 8))();
    return;
  }
  return;
}

