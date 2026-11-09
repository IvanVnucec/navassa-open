
undefined4 FUN_0101bab6(void)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  puVar2 = DAT_0101baf0;
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x60);
  }
  uVar4 = *DAT_0101baf0;
  *DAT_0101baf0 = uVar4 | 2;
  *puVar2 = uVar4 & 0xfffffffd;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  return uVar3;
}

