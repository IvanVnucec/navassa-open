
undefined8 sched_set_state_then_pend(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int local_c;
  
  local_c = 0;
  sched_state_op_A(*param_2,param_3,1,0);
  if (local_c != 0) {
    *DAT_01023f10 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return CONCAT44(local_c,&local_c);
}

