
void dependency_search(int param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = false;
  if (param_2 == (int *)0x0) {
    return;
  }
  if (*param_2 != 0) {
    for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 8); uVar2 = uVar2 + 1) {
      if (param_2 == *(int **)(param_1 + 0xc + uVar2 * 4)) {
        bVar1 = true;
      }
    }
    if (!bVar1) {
      if ((char)param_2[7] == '\x06') {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        while ((uVar2 < *(uint *)(param_1 + 8) &&
               ((uint)param_2[0xf] <= *(uint *)(*(int *)(param_1 + 0xc + uVar2 * 4) + 0x3c)))) {
          uVar2 = uVar2 + 1;
        }
      }
      for (uVar3 = *(uint *)(param_1 + 8); uVar2 < uVar3; uVar3 = uVar3 - 1) {
        *(undefined4 *)(param_1 + 0xc + uVar3 * 4) = *(undefined4 *)(param_1 + uVar3 * 4 + 8);
      }
      *(int **)(param_1 + 0xc + uVar3 * 4) = param_2;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      sched_channel_set_state(param_2,4);
      return;
    }
  }
  return;
}

