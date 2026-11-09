
undefined4 FUN_0101402a(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = DAT_0101453c;
  if ((((((param_1 == 0) || (uVar1 = DAT_01014540, param_1 == 1)) ||
        (uVar1 = DAT_010144f4, param_1 == 2)) ||
       ((uVar1 = DAT_010144f8, param_1 == 3 || (uVar1 = DAT_010144fc, param_1 == 4)))) ||
      ((uVar1 = DAT_010143c8, param_1 == 5 ||
       ((uVar1 = DAT_01014500, param_1 == 6 || (uVar1 = DAT_01014504, param_1 == 7)))))) ||
     (uVar1 = DAT_01014544, param_1 == 0x12)) {
    pin_update(uVar1,0x18,(param_2 & 3) << 3);
  }
  else {
    uVar2 = 0xce00;
  }
  return uVar2;
}

