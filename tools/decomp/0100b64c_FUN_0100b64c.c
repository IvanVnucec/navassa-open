
void FUN_0100b64c(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(&DAT_0100b86c + param_3 * 4);
  uVar3 = 0;
  iVar2 = 3;
  if (param_2 < 5) goto LAB_0100b67a;
  param_2 = 4;
  do {
    *(char *)(iVar2 + iVar1 + 4) = (char)(param_1 >> (uVar3 & 0xff));
    iVar2 = iVar2 + -1;
    param_2 = param_2 - 1;
    uVar3 = uVar3 + 8;
LAB_0100b67a:
  } while ((param_2 & 0xff) != 0);
  return;
}

