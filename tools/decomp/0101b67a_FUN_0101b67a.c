
void FUN_0101b67a(void)

{
  char in_CY;
  
  if (in_CY != '\0') {
    *DAT_0101ba4c = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}

