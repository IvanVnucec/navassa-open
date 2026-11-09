
void FUN_0100ad8c(void)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getBasePriority();
  }
  if (((uVar2 == 0) || (0x60 < uVar2)) && (bVar1 = (bool)isCurrentModePrivileged(), bVar1)) {
    setBasePriority(0x60);
  }
  return;
}

