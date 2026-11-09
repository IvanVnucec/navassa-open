
undefined4 FUN_01031d86(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((param_2 != 0) && (*(int *)(param_1 + 4) == 2 || *(int *)(param_1 + 4) == 3)) {
    iVar3 = DAT_01032748 + (uint)*(byte *)(param_1 + 1) * 0x1c;
    iVar2 = FUN_0100a7dc();
    if (iVar2 == 0xf5) {
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*DAT_0103274c + 200);
    }
    if (param_3 == 0) {
      uVar1 = 5;
    }
    else {
      uVar1 = 7;
    }
    *(undefined1 *)(iVar3 + 1) = uVar1;
    uVar4 = FUN_0100a7dc();
    *(undefined4 *)(iVar3 + 4) = uVar4;
    uVar4 = FUN_010362b0(iVar3,0);
    iVar2 = FUN_0103619a(iVar3);
    if (iVar2 == 0) {
      return uVar4;
    }
  }
  *(int *)(param_1 + 0x28) = param_2;
  return uVar4;
}

