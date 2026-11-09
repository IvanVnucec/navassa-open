
void FUN_0102b55e(void)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    sched_state_op_user(bVar1);
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0x14);
  return;
}

