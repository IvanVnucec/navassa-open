
void spi_thunk_common(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 * 0xc + DAT_0100a3c4 + 4);
                    /* WARNING: Could not recover jumptable at 0x0100a3ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

