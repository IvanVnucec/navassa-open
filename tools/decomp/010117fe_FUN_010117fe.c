
int FUN_010117fe(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_01011a18;
  if (*DAT_01011a18 == 0) {
    iVar2 = FUN_01025c68(DAT_01011a18 + 1);
    *piVar1 = iVar2;
  }
  return *piVar1;
}

