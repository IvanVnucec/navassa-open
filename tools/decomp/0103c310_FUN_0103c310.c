
void FUN_0103c310(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 + param_1 * 0x16 + param_2 * 0xb;
  iVar2 = 0;
  *(undefined1 *)(iVar1 + 0x33a) = 0;
  do {
    iVar3 = iVar1 + iVar2;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar3 + 0x330) = 0;
    *(undefined1 *)(iVar3 + 0x335) = 0;
  } while (iVar2 < 5);
  return;
}

