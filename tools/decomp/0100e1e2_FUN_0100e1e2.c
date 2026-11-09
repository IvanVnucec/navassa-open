
void FUN_0100e1e2(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = *param_1;
  param_1[0x1c] = uVar1;
  if (param_1[8] == '\0') {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x34);
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x38);
  }
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  uVar3 = 6;
  uVar5 = (uint)**(byte **)(param_1 + 0x38);
  FUN_0100e276();
  FUN_01022c68();
  iVar4 = *(int *)(param_1 + 0x38);
  if (*(char *)(iVar4 + 2) != '\0') {
    uVar2 = (undefined1)*(undefined2 *)(iVar4 + 8);
    FUN_0101d740(uVar1,0,0,*(undefined4 *)(iVar4 + 4),uVar2,*(undefined4 *)(iVar4 + 4),uVar2,uVar5,
                 uVar3);
    FUN_0100e278();
    FUN_0101d826();
    FUN_0101d7c8(uVar1,0,0);
    return;
  }
  FUN_0100e276();
  FUN_0101d676();
  FUN_0100e278();
  FUN_0101d7c8();
  FUN_0101d826(uVar1,0,0);
  return;
}

