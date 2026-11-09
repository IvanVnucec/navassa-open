
int FUN_0101dcb0(int param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_0101e15c + param_1 * 4);
  if (param_3 == 0) {
    iVar3 = 2;
  }
  else {
    iVar3 = 0;
  }
  iVar1 = FUN_0100b782(param_4,iVar3 + iVar4 + 0xde,param_2 >> 8);
  if (iVar1 == 0) {
    iVar1 = FUN_0100b782(param_4,iVar3 + iVar4 + 0xdd,param_2 & 0xff);
  }
  if (iVar1 == 0) {
    uVar2 = param_4[2];
    if (uVar2 != 0) {
      uVar2 = 1;
    }
    nmi_signal_helper(uVar2 & 0xff);
    *(uint *)(*param_4 + (param_4[2] + -1) * 4) =
         *(uint *)(*param_4 + (param_4[2] + -1) * 4) | 0x20000000;
  }
  return iVar1;
}

