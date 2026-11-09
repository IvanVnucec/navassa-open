
undefined8
FUN_01002f26(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar1 = param_3;
  uVar4 = param_4;
  FUN_0100b260(param_6);
  FUN_01009cf0(param_1,0,param_7,param_8,param_2,uVar1,uVar4);
  piVar3 = param_6;
  uVar1 = FUN_010097ac(param_3,param_4,param_1,param_5,param_6,0);
  if (param_9 != 0) {
    iVar2 = FUN_0100b26a(param_6);
    *(uint *)(*param_6 + iVar2 * 4) = *(uint *)(*param_6 + iVar2 * 4) & 0xdfffffff;
    uVar1 = FUN_0100b280(*(undefined4 *)(param_1 * 0x60 + DAT_010032f8 + 0x28));
    uVar1 = FUN_0100b2c4(param_1,uVar1,param_6);
    FUN_0100b594(param_6);
  }
  return CONCAT44(piVar3,uVar1);
}

