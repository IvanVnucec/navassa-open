
undefined8 FUN_0103fc46(undefined4 param_1,int param_2,int param_3,undefined1 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = 0;
  FUN_0103fcd6(param_2,param_4);
  for (uVar5 = 0; uVar5 < *(byte *)(param_2 + 0x4a); uVar5 = uVar5 + 1 & 0xff) {
    iVar4 = param_3 + uVar5 * 2;
    uVar1 = FUN_0102ef64(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0xe) = uVar1;
    uVar1 = FUN_0102ef7c(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0x10) = uVar1;
    param_4[1] = (char)uVar5;
    param_4[2] = 0;
    iVar3 = FUN_0103fcce();
    if (*(char *)(param_2 + 6) == '\x02') {
      iVar2 = 2;
      if (iVar3 != 0) {
        iVar2 = 0x2e04;
      }
      if (iVar3 == 0 || iVar3 == iVar2) {
        param_4[2] = 1;
        iVar3 = FUN_0103fcce();
      }
    }
    uVar1 = FUN_0102ef64(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0x1c) = uVar1;
    uVar1 = FUN_0102ef7c(*param_4,*(undefined1 *)(param_2 + 5));
    *(undefined2 *)(iVar4 + 0x1e) = uVar1;
    if (iVar3 != 0) break;
  }
  return CONCAT44(param_4,iVar3);
}

