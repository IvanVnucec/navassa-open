
undefined4 FUN_0103c33a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    FUN_0103c2e0(bVar1,0,param_1);
    FUN_0103c2f8(bVar1,0,param_1);
    FUN_0103c310(bVar1,0,param_1);
    FUN_0103c310(bVar1,1,param_1);
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0x12);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return param_4;
}

