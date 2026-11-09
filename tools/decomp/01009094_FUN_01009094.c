
undefined4 FUN_01009094(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_010091f8 + param_1 * 4);
  uVar1 = FUN_01009a5e(DAT_010091f8,param_2,param_2 << 4 & 0xff);
  FUN_01009a60(uVar1,0xf,param_2);
  uVar1 = pin_update(iVar2 + 3,0x10,param_2 << 4 & 0xff);
  uVar1 = FUN_01009146(uVar1,0x80,param_2 << 7 & 0xff);
  uVar1 = FUN_01009146(uVar1,0x40,param_2 << 6 & 0xff);
  uVar1 = FUN_01009146(uVar1,0x20,(param_2 & 7) << 5);
  uVar1 = FUN_01009146(uVar1,4,param_2 << 2 & 0xff);
  uVar1 = FUN_01009146(uVar1,2,param_2 << 1 & 0xff);
  uVar1 = FUN_0100914c(uVar1,0x80,param_2 << 7 & 0xff);
  uVar1 = FUN_0100914c(uVar1,0x40,param_2 << 6 & 0xff);
  uVar1 = FUN_0100914c(uVar1,8,(param_2 & 0x1f) << 3);
  uVar1 = FUN_0100914c(uVar1,4,param_2 << 2 & 0xff);
  uVar1 = FUN_0100914c(uVar1,2,param_2 << 1 & 0xff);
  FUN_0100914c(uVar1,1,param_2);
  if (param_2 != 0) {
    param_2 = 1;
  }
  *(char *)(DAT_01009cec + param_1 + 6) = (char)param_2;
  return param_4;
}

