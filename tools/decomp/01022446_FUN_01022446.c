
undefined4 FUN_01022446(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_010226a2(param_1,param_2,*(undefined1 *)(param_3 + 0xe));
  FUN_0102267a(param_1,param_2,*(undefined1 *)(param_3 + 0xf));
  FUN_010225e4(param_1,param_2,*(undefined4 *)(param_3 + 8));
  FUN_01022638(param_1,param_2,*(undefined2 *)(param_3 + 0xc));
  FUN_010226d0(param_1,param_2,param_3);
  uVar2 = *(undefined4 *)(param_3 + 0x14);
  iVar1 = *(int *)(DAT_01022724 + param_1 * 4);
  iVar3 = *(int *)(DAT_01022728 + param_1 * 4);
  switch(param_2) {
  case 0:
    iVar1 = iVar1 + 0x10;
    break;
  case 1:
    iVar1 = iVar1 + 0x34;
    break;
  case 2:
    iVar1 = iVar1 + 0x48;
    break;
  case 3:
    *(char *)(iVar3 + 0x1ef) = (char)((uint)uVar2 >> 0x18);
    *(char *)(iVar3 + 0x2e) = (char)((uint)uVar2 >> 0x10);
    *(char *)(iVar3 + 0x2f) = (char)((uint)uVar2 >> 8);
    *(char *)(iVar3 + 0x30) = (char)uVar2;
    FUN_010225ca();
    uVar2 = pin_update(iVar3,4,4,param_4);
    return uVar2;
  default:
    return param_4;
  }
  uVar2 = FUN_0102598c(iVar1,0xffffff,uVar2,param_4);
  return uVar2;
}

