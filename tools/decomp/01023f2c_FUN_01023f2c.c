
void FUN_01023f2c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  
  task_enter_critical();
  uVar1 = extraout_r1;
  if (param_2 == 0) {
    uVar1 = 5;
  }
  if (param_2 != 0) {
    *(int *)(param_1 + 0xc4) = param_2;
    uVar1 = 3;
  }
  *(undefined4 *)(param_1 + 200) = uVar1;
  (**(code **)(param_1 + 0xb0))();
  FUN_0102bf96(param_4);
  return;
}

