
void FUN_0102d692(int param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  bool bVar4;
  
  if (param_2 == 3 || param_2 == 2) {
    *param_3 = 0;
    param_3[4] = 0;
  }
  else {
    if (param_2 != 1) {
      *param_3 = 1;
      param_3[4] = 1;
      iVar3 = DAT_0102da60 + param_1 * 0xbc;
      param_3[5] = 0;
      cVar1 = *(char *)(iVar3 + 0x1c8);
      bVar4 = cVar1 != '\0';
      if (bVar4) {
        cVar1 = '\0';
        iVar3 = 1;
      }
      uVar2 = (undefined1)iVar3;
      if (!bVar4) {
        cVar1 = '\x01';
        uVar2 = 0;
      }
      goto LAB_0102d6e2;
    }
    *param_3 = 1;
    param_3[4] = 1;
  }
  cVar1 = '\x01';
  uVar2 = 0;
  param_3[5] = 0;
LAB_0102d6e2:
  param_3[3] = uVar2;
  param_3[2] = uVar2;
  param_3[1] = cVar1;
  return;
}

