
undefined4 FUN_01009cf0(uint param_1,undefined1 param_2,undefined1 param_3,uint param_4)

{
  int iVar1;
  
  if (param_1 < 5) {
    iVar1 = param_1 * 0x60 + DAT_01009ee4;
    *(undefined1 *)(iVar1 + 0x59) = param_2;
    *(undefined1 *)(iVar1 + 0x5a) = param_3;
    *(undefined *)(iVar1 + 0x45) = (&DAT_0100a1f8)[param_4 & 3];
    return 0;
  }
  return 0xc904;
}

