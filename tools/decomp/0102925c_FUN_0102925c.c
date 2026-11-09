
void FUN_0102925c(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0;
  do {
    uVar2 = 0;
    do {
      iVar3 = (int)(short)(&DAT_010293bc)[uVar1 * 2 + uVar2];
      FUN_01002880(iVar3);
      FUN_010028fc(iVar3,6);
      FUN_01002896(iVar3);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 2);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return;
}

