
undefined4 FUN_01024058(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    for (uVar1 = 0; uVar1 < *(uint *)(param_3 + 8); uVar1 = uVar1 + 1) {
      if (*(int **)(param_3 + 0xc + uVar1 * 4) == param_1) {
        *(undefined4 *)(param_3 + 0xc + uVar1 * 4) = 0;
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + -1;
        for (; uVar1 < *(uint *)(param_3 + 8); uVar1 = uVar1 + 1) {
          *(undefined4 *)(param_3 + 0xc + uVar1 * 4) = *(undefined4 *)(param_3 + uVar1 * 4 + 0x10);
        }
        *(undefined4 *)(param_3 + 0xc + *(uint *)(param_3 + 8) * 4) = 0;
        if (param_1[0x18] << 0x17 < 0) {
          uVar2 = 6;
        }
        else {
          uVar2 = 3;
        }
        uVar2 = sched_channel_set_state(param_1,uVar2);
        return uVar2;
      }
    }
  }
  return param_4;
}

