
undefined4 xPortSysTickHandler_wrapper(void)

{
  bool bVar1;
  int iVar2;
  undefined4 unaff_r7;
  
  FUN_0102bfca();
  iVar2 = xTaskIncrementTick();
  if (iVar2 != 0) {
    *DAT_0102c030 = 0x10000000;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  return unaff_r7;
}

