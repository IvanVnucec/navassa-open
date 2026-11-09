
void FUN_0100a3e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0100a3c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (*(code **)(DAT_0100a3c4 + 0x20) != (code *)0x0) {
    (**(code **)(DAT_0100a3c4 + 0x20))();
    return;
  }
  return;
}

