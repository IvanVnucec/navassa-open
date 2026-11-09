
undefined4 FUN_0101b6a4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 < 2) {
    if (param_1 == 0) {
      param_1 = *(int *)(DAT_0101ba48 + 0x78);
    }
    uVar1 = *(undefined4 *)(param_1 + param_2 * 4 + 0x44);
  }
  return uVar1;
}

