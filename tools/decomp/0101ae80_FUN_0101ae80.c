
void FUN_0101ae80(void)

{
  *DAT_0101af38 = *DAT_0101af38 | 0x40000;
                    /* WARNING: Could not recover jumptable at 0x0101ae92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (*(code **)(DAT_0101af3c + 4) != (code *)0x0) {
    (**(code **)(DAT_0101af3c + 4))();
    return;
  }
  return;
}

