
void FUN_01024fa2(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_01024cb4();
  FUN_01024ca2(param_1,1);
  iVar3 = *(int *)(DAT_0102544c + param_1 * 4);
  param_2 = param_2 << 2;
  if (param_4 == 0) {
    FUN_0102598c(iVar3 + 0x20028,0x3fff,param_2);
    iVar2 = FUN_01025058();
    FUN_0102598c(iVar2 + 0x2c);
    FUN_0102598c(iVar3 + 0x20020,0x3fff,param_2);
    iVar2 = FUN_01025058();
    iVar2 = iVar2 + 0x24;
  }
  else {
    FUN_0102598c(iVar3 + 0x20038,0x3fff,param_2);
    iVar2 = FUN_01025058();
    FUN_0102598c(iVar2 + 0x3c);
    FUN_0102598c(iVar3 + 0x20030,0x3fff,param_2);
    iVar2 = FUN_01025058();
    iVar2 = iVar2 + 0x34;
  }
  FUN_0102598c(iVar2);
  FUN_0102598c(iVar3 + 0x2001c,0x200);
  FUN_01024bf8(param_1);
  FUN_0102598c(iVar3 + 0x2001c,0x200,0);
  FUN_01024ca2(param_1,uVar1);
  return;
}

