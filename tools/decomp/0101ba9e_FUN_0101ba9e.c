
void FUN_0101ba9e(void)

{
  *DAT_0101bad8 = 0x4000;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  *DAT_0101baf0 = 0;
  return;
}

