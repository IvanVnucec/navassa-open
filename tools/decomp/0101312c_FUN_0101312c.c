
int FUN_0101312c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    uStack_20 = param_1;
    uStack_1c = param_2;
    uStack_18 = param_3;
    uStack_14 = param_4;
    iVar1 = FUN_01013364(param_3,&uStack_20);
    if ((iVar1 == 0) && (iVar1 = FUN_010133f8(param_1,&uStack_20,param_4), iVar1 == 0)) {
      iVar1 = FUN_01013166(param_1,param_2,param_4);
    }
  }
  else {
    iVar1 = 0xc801;
  }
  return iVar1;
}

