
undefined4 FUN_01024aa8(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  if (0x18 < param_2) {
    return 0x6303;
  }
  if (param_3 + param_2 < 0x19) {
    if (param_1 << 0x1d < 0) {
      iVar1 = 0;
    }
    else {
      if (-1 < param_1 << 0x1c) {
        return 0x6304;
      }
      iVar1 = 0x18;
    }
    FUN_0101204c(param_4,param_2 + iVar1 + DAT_01024b8c);
    return 0;
  }
  return 0x6302;
}

