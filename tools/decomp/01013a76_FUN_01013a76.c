
uint FUN_01013a76(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint local_10;
  
  local_10 = param_4;
  FUN_01013b90(param_1,&local_10);
  if ((((param_1 < 0x13) && ((local_10 & 0xff) != param_2)) &&
      (FUN_010143cc(param_1), (char)local_10 == '\0')) && (param_2 != 0)) {
    FUN_01015e2c(200);
    FUN_01014498(param_1);
  }
  return local_10;
}

