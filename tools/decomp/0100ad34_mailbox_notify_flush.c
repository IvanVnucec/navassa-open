
void mailbox_notify_flush(void)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  
  uVar4 = FUN_0100ad8c();
  uVar6 = 0;
  bVar10 = (bool)isCurrentModePrivileged();
  if (bVar10) {
    uVar6 = isIRQinterruptsEnabled();
  }
  disableIRQinterrupts();
  *puRam0100aebc = *puRam0100aebc | 2;
  uVar2 = uRam0100aec4;
  pcVar1 = DAT_0100aec0;
  bVar10 = (bool)isCurrentModePrivileged();
  if (bVar10) {
    enableIRQinterrupts((uVar6 & 1) == 1);
  }
  iVar8 = *(int *)(DAT_0100aec0 + 4);
  pcVar1[4] = -1;
  piVar3 = DAT_0100aec8;
  pcVar1[5] = -1;
  pcVar1[6] = -1;
  pcVar1[7] = '\0';
  puVar9 = (uint *)*DAT_0100aec8;
  puVar7 = puVar9;
  if (*pcVar1 != '\0') {
    *puVar9 = uVar2 | iVar8 << 7;
    puVar7 = (uint *)piVar3[3];
    if (puVar9 < puVar7 + 0x1fff) {
      puVar7 = puVar9 + 1;
    }
    uVar5 = *(ushort *)((int)piVar3 + 6);
    bVar10 = uVar5 < 0x2000;
    if (bVar10) {
      uVar5 = uVar5 + 1;
    }
    if (bVar10) {
      *(ushort *)((int)piVar3 + 6) = uVar5;
    }
  }
  *piVar3 = (int)puVar7;
  bVar10 = (bool)isCurrentModePrivileged();
  if (bVar10) {
    setBasePriority(uVar4);
  }
  return;
}

