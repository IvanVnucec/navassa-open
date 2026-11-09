
void FUN_0100ae0a(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_0101bb08(*(undefined4 *)(DAT_0100aed0 + 8),*(undefined4 *)(DAT_0100aed0 + 0xc),param_1
                      );
  if (iVar1 << 0x1f < 0) {
    FUN_0100ada4(param_1 | (param_2 & 1) << 6 | 0x80000000);
    return;
  }
  return;
}

