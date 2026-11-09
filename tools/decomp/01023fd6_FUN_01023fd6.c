
void FUN_01023fd6(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (*param_1 != 0) {
    for (uVar1 = 0; uVar1 < *(uint *)(param_3 + 8); uVar1 = uVar1 + 1) {
      if (param_1 == *(int **)(param_3 + 0xc + uVar1 * 4)) {
        param_4 = 1;
      }
    }
    if (param_4 == 0) {
      if ((char)param_1[7] == '\x06') {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        while ((uVar1 < *(uint *)(param_3 + 8) &&
               ((uint)param_1[0xf] <= *(uint *)(*(int *)(param_3 + 0xc + uVar1 * 4) + 0x3c)))) {
          uVar1 = uVar1 + 1;
        }
      }
      for (uVar2 = *(uint *)(param_3 + 8); uVar1 < uVar2; uVar2 = uVar2 - 1) {
        *(undefined4 *)(param_3 + 0xc + uVar2 * 4) = *(undefined4 *)(param_3 + uVar2 * 4 + 8);
      }
      *(int **)(param_3 + 0xc + uVar2 * 4) = param_1;
      *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      sched_channel_set_state(param_1,4);
      return;
    }
  }
  return;
}

