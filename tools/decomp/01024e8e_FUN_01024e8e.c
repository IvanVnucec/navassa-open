
void FUN_01024e8e(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_01025448 + param_1 * 4);
  FUN_0102598c(uVar1,0x700,(param_2 & 0xff) << 8);
  FUN_0102598c(uVar1,0xf0,param_3 << 4);
  return;
}

