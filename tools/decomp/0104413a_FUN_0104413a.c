
void FUN_0104413a(void)

{
  char in_ZR;
  
  if (in_ZR == '\0') {
    *DAT_01044158 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}

