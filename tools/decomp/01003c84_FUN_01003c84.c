
void FUN_01003c84(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_010044a4 + param_1 * 0x10;
  iVar3 = DAT_010044b0 + param_1 * 0x10;
  iVar1 = DAT_010044ac + param_1 * 0x10;
  if (param_2 == 0) {
    FUN_0100d7b8(iVar1,0x10);
  }
  else {
    if (param_2 == 1) goto LAB_01003ccc;
    if (param_2 != 2) {
      iVar1 = iVar3;
      if (param_2 != 3) {
        return;
      }
      goto LAB_01003ccc;
    }
  }
  FUN_0100d7b8(iVar3,0x10);
  iVar1 = iVar2;
LAB_01003ccc:
  FUN_0100d7b8(iVar1,0x10);
  return;
}

