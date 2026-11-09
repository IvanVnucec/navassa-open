
undefined8 FUN_0100b704(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 0;
  if ((param_2 & 0xffffc000) != 0x46000000) {
    uVar3 = FUN_0100b76c();
    *(undefined4 *)uVar3 = (int)((ulonglong)uVar3 >> 0x20);
    *DAT_0100b7bc = 0x179;
    FUN_0100b7c4();
  }
  if ((param_2 & 0xfffffe00) != *(uint *)(param_1 + 0x10)) {
    iVar2 = FUN_0100b782(param_1,*(int *)(&DAT_0100b86c + (uint)*(byte *)(param_1 + 0xf) * 4) + 3,
                         param_2 >> 9 & 0x3f);
    *(uint *)(param_1 + 0x10) = param_2 & 0xfffffe00;
    if (iVar2 != 0) goto LAB_0100b766;
  }
  uVar1 = FUN_0100b880(param_2,param_3,param_4);
  FUN_0100b5ac(param_1,uVar1);
LAB_0100b766:
  return CONCAT44(param_4,iVar2);
}

