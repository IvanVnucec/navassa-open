
undefined4 FUN_010142d8(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_0101456c;
  if (param_2 == 0) {
    uVar1 = *(undefined1 *)(DAT_01014568 + 0x10);
  }
  else {
    uVar1 = *(undefined1 *)(DAT_01014568 + 0xe);
  }
  pin_update(DAT_010144f4,7,uVar1);
  uVar3 = DAT_010144f8;
  if (((param_1 != 0) && (uVar3 = DAT_01014500, param_1 != 1)) &&
     (uVar3 = DAT_010144fc, param_1 != 2)) {
    uVar3 = DAT_01014504;
  }
  pin_update(uVar3,7);
  pin_update(DAT_010143c8,7);
  return uVar2;
}

