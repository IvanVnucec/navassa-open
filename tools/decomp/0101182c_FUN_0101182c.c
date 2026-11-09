
undefined8 FUN_0101182c(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  int local_10;
  undefined4 uStack_c;
  
  *DAT_01011a60 = 0xffff;
  local_10 = 0;
  uStack_c = in_r3;
  iVar2 = FUN_0101beda(DAT_01011a64,*DAT_01011a18,1,&local_10);
  iVar1 = iVar2;
  if (iVar2 != 0) {
    iVar1 = local_10;
  }
  if (iVar2 != 0 && iVar1 != 0) {
    *DAT_01011a68 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return CONCAT44(uStack_c,local_10);
}

