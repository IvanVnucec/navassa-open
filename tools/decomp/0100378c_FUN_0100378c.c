
undefined8
FUN_0100378c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  
  uVar1 = -(uint)(param_5 == 0) >> 0x1f;
  FUN_01003652(param_1,param_2,*(undefined4 *)(DAT_01003a90 + param_1 * 4),
               *(undefined4 *)(DAT_01003a94 + param_1 * 4),uVar1,param_3,param_4);
  return CONCAT44(param_3,uVar1);
}

