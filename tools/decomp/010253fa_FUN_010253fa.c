
void FUN_010253fa(void)

{
  *DAT_01025460 = 0x10000000;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return;
}

