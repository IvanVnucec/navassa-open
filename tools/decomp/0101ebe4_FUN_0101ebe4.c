
int FUN_0101ebe4(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = 0;
  iVar2 = DAT_0101eda4 + param_1 * 2;
  bVar3 = param_4 != 1;
  if (bVar3) {
    param_4 = (uint)*(byte *)(iVar2 + param_2);
  }
  if ((!bVar3 || param_4 == 0) && (iVar1 = FUN_0101ec0a(param_1), iVar1 == 0)) {
    *(undefined1 *)(iVar2 + param_2) = 1;
  }
  return iVar1;
}

