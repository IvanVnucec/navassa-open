
undefined8 FUN_01006cfc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((int)((0xfU >> (param_1 & 0xff)) << 0x1f) < 0) {
    iVar2 = DAT_010071b0 + param_1 * 8;
    *(undefined4 *)(iVar2 + 0x90) = param_3;
    *(undefined4 *)(iVar2 + 0x94) = param_4;
    if ((int)param_1 < 2) {
      uVar1 = FUN_01005ed8(*(undefined4 *)(DAT_010078e8 + param_1 * 4));
    }
  }
  else {
    uVar1 = 0xe702;
  }
  return CONCAT44(param_4,uVar1);
}

