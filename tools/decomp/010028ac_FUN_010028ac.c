
void FUN_010028ac(uint param_1)

{
  if (-1 < (int)param_1) {
    *(int *)(DAT_01002928 + (param_1 >> 5) * 4) = 1 << (param_1 & 0x1f);
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return;
}

