
void FUN_010226a2(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_01022724 + param_1 * 4);
  if (param_2 == 0) {
    iVar1 = iVar1 + 0x10;
  }
  else if (param_2 == 2) {
    iVar1 = iVar1 + 0x48;
  }
  else {
    if (1 < param_2) {
      return;
    }
    iVar1 = iVar1 + 0x34;
  }
  FUN_0102598c(iVar1,0x2000000,param_3 << 0x19);
  return;
}

