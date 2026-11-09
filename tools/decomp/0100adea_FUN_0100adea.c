
undefined4 FUN_0100adea(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0101bb08(*(undefined4 *)(DAT_0100aed0 + 8),*(undefined4 *)(DAT_0100aed0 + 0xc),param_1
                      );
  if (iVar1 << 0x1f < 0) {
    uVar2 = FUN_0100ada4(param_1 | 0x80000000,param_4);
    return uVar2;
  }
  return param_4;
}

