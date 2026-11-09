
undefined4 FUN_01009152(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_010091f8 + param_1 * 4);
  if (param_3 != 0) {
    uVar1 = FUN_01009a66(param_1,iVar2 + 2,param_2 * 0x11 & 0xff,0x1f);
    FUN_01009a66(uVar1,iVar2 + 3,(param_2 & 0xf) << 4,0x10);
    FUN_01009a66(param_2 * 0xe0,iVar2 + 4,param_2 * 0xf6 & 0xff,0xf6);
    FUN_01009a66(param_2 * 0xce,iVar2 + 5,param_2 * 0xcf & 0xff,0xcf);
    FUN_0100b782(param_3,(undefined1 *)(iVar2 + 0x3a),*(undefined1 *)(iVar2 + 0x3a));
    uVar1 = FUN_0100b594(param_3,param_4);
    return uVar1;
  }
  return param_4;
}

