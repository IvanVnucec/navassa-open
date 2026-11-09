
void FUN_0101ab4c(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0101ae38 + param_1 * 4);
  FUN_0101ac86();
  FUN_0101ac14();
  FUN_0101aacc();
  FUN_0101ac14();
  FUN_0101ab3c();
  if (param_1 == 0) {
    FUN_0101ab34();
  }
  else {
    FUN_0101ab2c();
  }
  pin_update();
  FUN_0101ac14();
  uVar1 = FUN_0101ac14();
  FUN_0101ac88(uVar1,0x16);
  uVar1 = FUN_0101ac14();
  FUN_0101ac88(uVar1,0x12);
  FUN_0101aad4();
  pin_update(iVar2 + 0xe7,1,1);
  iVar2 = FUN_0101aaec();
  if (iVar2 == 0) {
    FUN_0101a71c(param_1 & 0xff,0,param_3,param_4);
    return;
  }
  return;
}

