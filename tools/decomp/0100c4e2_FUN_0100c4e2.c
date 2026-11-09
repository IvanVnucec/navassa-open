
undefined4 FUN_0100c4e2(short *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (int)*param_1;
  iVar2 = (int)(short)~(ushort)param_2;
  bVar4 = SBORROW4(iVar3,param_2);
  iVar1 = iVar3 - param_2;
  if (iVar3 < param_2) {
    bVar4 = SBORROW4(iVar2,iVar3);
    iVar1 = iVar2 - iVar3;
  }
  if (iVar1 < 0 != bVar4) {
    iVar3 = (int)param_1[1];
    bVar4 = SBORROW4(iVar3,param_2);
    iVar1 = iVar3 - param_2;
    if (iVar3 < param_2) {
      bVar4 = SBORROW4(iVar2,iVar3);
      iVar1 = iVar2 - iVar3;
    }
    if (iVar1 < 0 != bVar4) {
      return 0;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return 1;
}

