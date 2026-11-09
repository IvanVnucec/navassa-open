
undefined4 FUN_0100ab9c(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  code *pcVar2;
  
  uVar1 = 0;
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    pcVar2 = DAT_0100abf0;
    if (param_3 == 0) {
      pcVar2 = DAT_0100abec;
    }
    (*pcVar2)(param_3,*(int *)(DAT_0100abe0 + param_1 * 4) + 0xda,param_2,1);
  }
  else {
    uVar1 = 0xc801;
  }
  return uVar1;
}

