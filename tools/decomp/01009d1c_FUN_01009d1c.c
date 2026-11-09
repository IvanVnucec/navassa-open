
undefined8 FUN_01009d1c(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar3 = DAT_01009ee4 + param_3 * 0x60;
  uVar1 = (uint)*(byte *)(uVar3 + 0x59);
  uVar4 = FUN_010077c0(param_1,param_2,param_3,uVar3 + 8,uVar1,*(undefined1 *)(uVar3 + 0x5a));
  iVar2 = (int)uVar4;
  if (*(char *)(uVar3 + 0x36) == '\0') {
    FUN_010154e4(param_3,(int)((ulonglong)uVar4 >> 0x20),param_1,param_2);
    uVar1 = uVar3;
  }
  if (iVar2 == 0) {
    iVar2 = FUN_010089cc(param_3);
  }
  return CONCAT44(uVar1,iVar2);
}

