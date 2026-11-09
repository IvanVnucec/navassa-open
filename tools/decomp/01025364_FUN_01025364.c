
undefined8 FUN_01025364(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_01025354(0x100000,DAT_01025478);
  iVar2 = FUN_0101beda((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x40);
  iVar1 = iVar2;
  if (iVar2 != 0) {
    iVar1 = param_3;
  }
  if (iVar2 != 0 && iVar1 != 0) {
    *DAT_01025460 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return CONCAT44(param_4,param_3);
}

