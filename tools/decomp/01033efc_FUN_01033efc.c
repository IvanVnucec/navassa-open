
void FUN_01033efc(int param_1)

{
  int iVar1;
  undefined1 auStack_1528 [5408];
  
  iVar1 = FUN_010335c8();
  if (iVar1 == 0) {
    iVar1 = DAT_010343cc + (short)param_1 * 0x1ac;
    FUN_01033880(*(undefined4 *)(DAT_0103471c + param_1 * 4),*(int *)(iVar1 + 0xb8) + -1,
                 auStack_1528,iVar1 + 0xbc);
  }
  return;
}

