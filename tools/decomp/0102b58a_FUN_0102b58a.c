
int FUN_0102b58a(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int unaff_r7;
  
  iVar2 = FUN_0101beda(DAT_0102b758,*(undefined4 *)(param_1 + 0xc),param_2,&stack0xfffffff8);
  iVar1 = iVar2;
  if (iVar2 != 0) {
    iVar1 = unaff_r7;
  }
  if (iVar2 != 0 && iVar1 != 0) {
    *DAT_0102b768 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return unaff_r7;
}

