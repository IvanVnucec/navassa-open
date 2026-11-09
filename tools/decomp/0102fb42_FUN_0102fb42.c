
undefined4 FUN_0102fb42(ushort *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar1 = 0;
  uVar3 = (uint)*param_1;
  iVar4 = param_2 + (param_2 >> 2);
  bVar5 = SBORROW4(iVar4,uVar3);
  iVar2 = iVar4 - uVar3;
  if ((int)uVar3 <= iVar4) {
    iVar2 = param_2 - (param_2 >> 2);
    bVar5 = SBORROW4(uVar3,iVar2);
    iVar2 = uVar3 - iVar2;
  }
  if (iVar2 < 0 != bVar5) {
    *param_1 = 0;
    uVar1 = 0x2902;
  }
  return uVar1;
}

