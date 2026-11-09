
undefined8 FUN_0102025c(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != 0) {
    uVar1 = param_1 << LZCOUNT(param_1);
    iVar2 = (0x420 - (LZCOUNT(param_1) + 3)) * 0x100000 + (uVar1 >> 0xb);
    param_1 = uVar1 << 0x15;
  }
  return CONCAT44(iVar2,param_1);
}

