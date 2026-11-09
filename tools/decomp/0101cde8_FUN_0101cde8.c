
void FUN_0101cde8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = DAT_0101d5a8 + param_2 * 8;
  iVar1 = DAT_0101d5a8;
  if (param_3 == 1) {
    iVar1 = *(int *)(*(int *)(iVar4 + param_1 * 4) + 0xc);
  }
  if (param_3 == 1 && iVar1 == 0) {
    param_3 = 0;
  }
  iVar3 = DAT_0101d5ac + (short)param_1 * 0xbc;
  bVar5 = param_2 == 4;
  iVar1 = DAT_0101d42c + param_1 * 0x80;
  switch(param_2) {
  case 0:
  case 4:
    FUN_0101bf9c(iVar1 + 0x2b0,param_1,0,param_4);
    FUN_0101c0c0(iVar1 + 0x2b8,param_1,0,param_4);
    FUN_0101c154(iVar1 + 0x2cc,param_1,*(undefined1 *)(*(int *)(iVar4 + param_1 * 4) + 0x10),param_4
                );
    if (*(char *)(*(int *)(iVar4 + param_1 * 4) + 0x10) == '\0') {
      return;
    }
    bVar5 = param_4 == 0;
  default:
    if (!bVar5) {
      return;
    }
    iVar1 = iVar1 + 0x2e8;
    uVar2 = 0;
    break;
  case 1:
    FUN_0101bf9c(iVar1 + 0x3b0,param_1,1,param_4);
    FUN_0101c0c0(iVar1 + 0x3b8,param_1,1,param_4);
    FUN_0101c154(iVar1 + 0x3cc,param_1,param_3,param_4);
    return;
  case 2:
    FUN_0101bf9c(iVar1 + 0x4b0,param_1,2,param_4);
    FUN_0101c0c0(iVar1 + 0x4b8,param_1,2,param_4);
    FUN_0101c154(iVar1 + 0x4cc,param_1,param_3,param_4);
    if (*(int *)(iVar3 + 0x498) == 0) {
      return;
    }
    if (param_4 != 0) {
      return;
    }
    iVar1 = iVar1 + 0x4e8;
    uVar2 = 2;
    break;
  case 3:
    FUN_0101bf9c(iVar1 + 0x5b0,param_1,3,param_4);
    FUN_0101c0c0(iVar1 + 0x5b8,param_1,3,param_4);
    FUN_0101c154(iVar1 + 0x5cc,param_1,param_3,param_4);
    if (*(int *)(iVar3 + 0x610) == 0) {
      return;
    }
    if (param_4 != 0) {
      return;
    }
    iVar1 = iVar1 + 0x5e8;
    uVar2 = 3;
  }
  FUN_0100a998(param_1,uVar2,iVar1);
  return;
}

