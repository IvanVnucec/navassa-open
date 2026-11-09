
undefined4 FUN_0101d7c8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(DAT_0101d868 + param_1 * 4);
  uVar1 = (uint)(param_3 == 0);
  uVar5 = (uint)(param_3 != 0);
  if (param_2 == 0) {
    iVar4 = iVar4 + 4;
    FUN_0102598c(iVar4,2,uVar1 << 1);
    iVar3 = uVar5 << 2;
    uVar2 = 4;
  }
  else {
    iVar4 = iVar4 + 0x20;
    if (param_2 == 1) {
      FUN_0102598c(iVar4,1,uVar1);
      iVar3 = uVar5 << 1;
      uVar2 = 2;
    }
    else {
      if (param_2 != 2) {
        return param_4;
      }
      FUN_0102598c(iVar4,0x100,uVar1 << 8);
      iVar3 = uVar5 << 9;
      uVar2 = 0x200;
    }
  }
  uVar2 = FUN_0102598c(iVar4,uVar2,iVar3,param_4);
  return uVar2;
}

