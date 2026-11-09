
void stream_flag_set_0x40(undefined4 param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x30);
  }
  puVar2 = (undefined4 *)FUN_01023fbe(param_1,0x30);
  puVar2[6] = puVar2[6] | 0x40;
  (*(code *)*puVar2)();
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  return;
}

