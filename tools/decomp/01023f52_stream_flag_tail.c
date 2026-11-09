
void stream_flag_tail(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x30);
  }
  uVar4 = FUN_01023fbe(param_1,param_2,0x30);
  puVar2 = (undefined4 *)uVar4;
  puVar2[6] = (uint)((ulonglong)uVar4 >> 0x20) | puVar2[6];
  (*(code *)*puVar2)();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  return;
}

