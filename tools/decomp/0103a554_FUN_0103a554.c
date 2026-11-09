
void FUN_0103a554(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0103a6b0;
  iVar2 = 0;
  do {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(iVar1 + iVar2 * 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}

