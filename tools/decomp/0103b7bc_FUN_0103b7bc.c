
undefined4 FUN_0103b7bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = *(int *)(DAT_0103b8f8 + param_1 * 4);
  uVar4 = 0;
  iVar1 = 0;
  iVar3 = 0;
  iVar6 = 0;
  switch(param_3) {
  case 0:
    break;
  case 1:
    iVar6 = 1;
    break;
  case 2:
    iVar3 = 1;
    break;
  default:
    uVar4 = 0xc800;
    break;
  case 4:
    iVar1 = 1;
  }
  iVar2 = iVar1 << 1;
  switch(param_2) {
  case 0:
    iVar7 = iVar5 + 0x1a;
    FUN_0103b85c(iVar1,param_2,iVar2);
    iVar5 = iVar5 + 0x4f;
    break;
  case 1:
    iVar7 = iVar5 + 0x17d;
    FUN_0103b85c(iVar1,param_2,iVar2);
    iVar5 = iVar5 + 0x180;
    break;
  case 2:
    iVar7 = iVar5 + 0x197;
    FUN_0103b85c(iVar1,param_2,iVar2);
    iVar5 = iVar5 + 0x19a;
    break;
  case 3:
    iVar7 = iVar5 + 0x1b1;
    FUN_0103b85c(iVar1,param_2,iVar2);
    iVar5 = iVar5 + 0x1b4;
    break;
  default:
    return 0xe700;
  }
  pin_update(iVar5,8,iVar3 << 3);
  pin_update(iVar7,8,iVar6 << 3);
  return uVar4;
}

