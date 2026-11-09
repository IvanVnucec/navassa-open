
int * sched_vm_op(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_2 == (int *)0x0) {
    return param_2;
  }
  if (*param_2 != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 8); uVar2 = uVar2 + 1) {
      if (*(int **)(param_1 + 0xc + uVar2 * 4) == param_2) {
        *(undefined4 *)(param_1 + 0xc + uVar2 * 4) = 0;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
        for (; uVar2 < *(uint *)(param_1 + 8); uVar2 = uVar2 + 1) {
          *(undefined4 *)(param_1 + 0xc + uVar2 * 4) = *(undefined4 *)(param_1 + uVar2 * 4 + 0x10);
        }
        *(undefined4 *)(param_1 + 0xc + *(uint *)(param_1 + 8) * 4) = 0;
        if (param_2[0x18] << 0x17 < 0) {
          uVar3 = 6;
        }
        else {
          uVar3 = 3;
        }
        piVar1 = (int *)sched_channel_set_state(param_2,uVar3);
        return piVar1;
      }
    }
  }
  return param_4;
}

