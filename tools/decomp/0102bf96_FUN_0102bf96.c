
void FUN_0102bf96(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0102c018;
  nmi_signal_helper(*(undefined4 *)(DAT_0102c018 + 4));
  iVar3 = *(int *)(iVar2 + 4) + -1;
  *(int *)(iVar2 + 4) = iVar3;
  if ((iVar3 == 0) && (bVar1 = (bool)isCurrentModePrivileged(), bVar1)) {
    setBasePriority(0);
  }
  return;
}

