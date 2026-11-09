
undefined4 FUN_01025d58(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    *DAT_01025d70 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  uVar1 = *(undefined4 *)(*(int *)(DAT_0101ba48 + 0x78) + 0x18);
  *(int *)(*(int *)(DAT_0101ba48 + 0x78) + 0x18) =
       6 - *(int *)(*(int *)(DAT_0101ba48 + 0x78) + 0x2c);
  return uVar1;
}

