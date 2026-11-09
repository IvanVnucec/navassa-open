
undefined4 FUN_0101a9fa(int param_1,uint param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = 0;
  bVar2 = DAT_0101ae40 <= *(uint *)(param_1 * 0xbc + DAT_0101ae3c + 0x24);
  if (!bVar2) {
    param_2 = 3;
  }
  if (bVar2 && 3 < param_2) {
    uVar1 = 0xcf02;
  }
  else {
    pin_update(*(int *)(DAT_0101ae34 + param_1 * 4) + 6,6,(param_2 << 0x19) >> 0x18);
  }
  return uVar1;
}

