
undefined8 FUN_01020d22(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  iVar1 = FUN_01014702(param_1,&local_10);
  if ((iVar1 == 0) && ((local_10 & 0xff) == 2 || (local_10 & 0xff) == 3)) {
    FUN_01020bb4(param_1,0);
    *(char *)(DAT_01020f58 + param_1 * 0xb + 5) = (char)*(undefined4 *)(DAT_01020f70 + param_1 * 4);
    FUN_0102d748(param_1);
    FUN_01020be6(param_1);
    FUN_01020bb4(param_1,1);
  }
  return CONCAT44(uStack_c,local_10);
}

