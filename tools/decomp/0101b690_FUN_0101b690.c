
void FUN_0101b690(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 < 2) {
    if (param_1 == 0) {
      param_1 = *(int *)(DAT_0101ba48 + 0x78);
    }
    *(undefined4 *)(param_1 + param_2 * 4 + 0x44) = param_3;
  }
  return;
}

