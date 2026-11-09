
void FUN_010214bc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_01009518(param_3,param_4,param_5,1);
  iVar1 = DAT_01022114;
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)(param_3 * 0x60 + DAT_01022110);
    *puVar3 = param_1;
    puVar3[1] = param_2;
    if (*(char *)(iVar1 + param_3 + 2) == '\0') {
      FUN_01009784(param_1,param_2,param_3,*(undefined1 *)(iVar1 + param_3 + 0xbc));
      return;
    }
  }
  return;
}

