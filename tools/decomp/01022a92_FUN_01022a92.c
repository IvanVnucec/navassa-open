
undefined4 FUN_01022a92(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0;
  if ((param_1 & 3) == 0) {
    return 0xcc03;
  }
  uVar3 = 0;
  do {
    if ((int)((param_1 >> (uVar3 & 0xff)) << 0x1f) < 0) {
      iVar2 = DAT_01022adc + uVar3 * 0x1c;
      uVar1 = VectorFloatToUnsignedFixed(*param_4,0x20,0x1f);
      *(undefined4 *)(iVar2 + 0xc) = uVar1;
      *(undefined4 *)(iVar2 + 0x10) = uVar1;
      uVar1 = FUN_01036974(uVar3 & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 2);
  return uVar1;
}

