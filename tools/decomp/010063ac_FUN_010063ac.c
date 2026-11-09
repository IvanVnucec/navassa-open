
undefined4 FUN_010063ac(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  uVar3 = param_2[1];
  iVar4 = *param_2;
  iVar1 = (int)uVar3 / 2;
  bVar6 = SCARRY4(iVar4,iVar1);
  bVar5 = iVar4 + iVar1 < 0;
  if (bVar5 == bVar6) {
    bVar6 = SBORROW4(iVar1,iVar4);
    bVar5 = iVar1 - iVar4 < 0;
  }
  if (bVar5 != bVar6) {
    return 0xc000;
  }
  if (iVar4 < 0) {
    iVar4 = uVar3 + iVar4;
  }
  uVar2 = FUN_0101369c(uVar3 >> 1,iVar4,uVar3,0);
  *param_3 = uVar2;
  return 0;
}

