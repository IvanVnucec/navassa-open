
undefined8 spi_wait_flag(undefined1 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_18;
  undefined1 local_14;
  undefined3 uStack_13;
  undefined4 local_10;
  
  _local_14 = CONCAT31((int3)((uint)param_3 >> 8),param_1);
  puVar3 = (undefined4 *)0x0;
  local_18 = 0;
  local_10 = param_2;
  iVar1 = adi_wait_recv_B(*(undefined4 *)(DAT_01015280 + 4),&local_14,&local_18);
  uVar4 = 0;
  if (iVar1 == 0) {
    uVar2 = FUN_01014d0e();
    *puVar3 = 0x392;
    uVar4 = 0xe405;
    FUN_01014c38(uVar2,0xe405,2);
  }
  else if (local_18 != 0) {
    *DAT_01015480 = 0x10000000;
    DataSynchronizationBarrier(0xf);
    InstructionSynchronizationBarrier(0xf);
  }
  return CONCAT44(local_18,uVar4);
}

