
void FUN_01015e60(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = param_1 * 0xc + DAT_01015e84;
  if (*(char *)(iVar1 + 1) == '\0') {
    FUN_01015d68();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + 8);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01015e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

