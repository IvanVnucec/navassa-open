
void spi_thunk_1(void)

{
                    /* WARNING: Could not recover jumptable at 0x0100a3ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (*(code **)(DAT_0100a3c4 + 0x10) != (code *)0x0) {
    (**(code **)(DAT_0100a3c4 + 0x10))();
    return;
  }
  return;
}

