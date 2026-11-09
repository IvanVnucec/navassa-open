
int FUN_01009c88(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = DAT_01009ebc;
  iVar2 = 0;
  if ((param_2 < 2) && (param_1 < 2)) {
    param_3 = param_3 & 1;
    pcVar3 = DAT_0100a1ac;
    if (param_4 == 0) {
      pcVar3 = DAT_0100a1a4;
    }
    iVar2 = (*pcVar3)(param_4,*(int *)(DAT_0100a1c8 + param_2 * 4) + 0xc9,param_3,1);
    if ((iVar2 == 0) &&
       (iVar2 = (*pcVar3)(param_4,*(int *)(iVar1 + param_1 * 4) + 0xe2,param_3,1), iVar2 == 0)) {
      iVar2 = (*pcVar3)(param_4,*(int *)(iVar1 + param_1 * 4) + 0xe0,param_3,1);
    }
  }
  return iVar2;
}

