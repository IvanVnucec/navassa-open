
int FUN_01025480(void)

{
  int iVar1;
  int iVar2;
  int unaff_r7;
  undefined8 uVar3;
  
  uVar3 = FUN_01025438();
  iVar2 = FUN_01025432((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x8000);
  iVar1 = iVar2;
  if (iVar2 != 0) {
    iVar1 = unaff_r7;
  }
  if (iVar2 != 0 && iVar1 != 0) {
    *DAT_01025460 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return unaff_r7;
}

