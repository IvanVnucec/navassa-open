
undefined8 FUN_01009d6a(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2;
  iVar1 = FUN_01008664();
  if (iVar1 == 0) {
    iVar1 = DAT_0100a19c + param_3 * 0x60;
    uVar2 = (uint)*(byte *)(iVar1 + 0x59);
    iVar1 = FUN_010077c0(param_1,param_2,param_3,iVar1 + 8,uVar2,*(undefined1 *)(iVar1 + 0x5a),
                         param_4);
    FUN_010086e6(param_3);
  }
  return CONCAT44(uVar2,iVar1);
}

