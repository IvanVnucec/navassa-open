
void FUN_01005c3c(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_01005b00();
  if (iVar1 == 0) {
    *(undefined1 *)(*(int *)(*param_1 + 0x20) + param_2 + 10) = 1;
  }
  iVar1 = 0;
  if (*(char *)(param_2 + 0x29c) != '\0') {
    iVar1 = 6;
  }
  *(undefined1 *)(param_2 + iVar1 + *(int *)(*param_1 + 0x20) * 2 + 0x290) =
       *(undefined1 *)((int)param_1 + 0x2f9);
  *(undefined1 *)(iVar1 + param_2 + *(int *)(*param_1 + 0x20) * 2 + 0x291) =
       *(undefined1 *)((int)param_1 + 0x2fa);
  return;
}

