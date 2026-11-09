
void FUN_01022af4(uint param_1,uint *param_2,short *param_3)

{
  int iVar1;
  short sVar2;
  
  sVar2 = 0;
  iVar1 = 0x1f;
  do {
    if ((param_1 >> 1) * 2 - param_1 != 0) {
      *param_2 = param_1;
      break;
    }
    sVar2 = sVar2 + 1;
    iVar1 = iVar1 + -1;
    param_1 = param_1 >> 1;
  } while (iVar1 != 0);
  *param_3 = sVar2;
  if (*param_3 == 0x1f) {
    *param_2 = 1;
  }
  return;
}

