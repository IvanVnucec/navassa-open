
void FUN_0100ada4(uint param_1)

{
  char *pcVar1;
  uint *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  bool bVar9;
  
  uVar3 = FUN_0100ad8c();
  pcVar1 = DAT_0100aec0;
  iVar5 = *DAT_0100aecc;
  iVar7 = *(int *)(DAT_0100aec0 + 4);
  *(int *)(DAT_0100aec0 + 4) = iVar5;
  puVar2 = DAT_0100aec8;
  puVar8 = (uint *)*DAT_0100aec8;
  puVar6 = puVar8;
  if (*pcVar1 != '\0') {
    *puVar8 = param_1 | (iVar7 - iVar5) * 0x80;
    puVar6 = (uint *)puVar2[3];
    if (puVar8 < puVar6 + 0x1fff) {
      puVar6 = puVar8 + 1;
    }
    uVar4 = *(ushort *)((int)puVar2 + 6);
    bVar9 = uVar4 < 0x2000;
    if (bVar9) {
      uVar4 = uVar4 + 1;
    }
    if (bVar9) {
      *(ushort *)((int)puVar2 + 6) = uVar4;
    }
  }
  *puVar2 = (uint)puVar6;
  bVar9 = (bool)isCurrentModePrivileged();
  if (bVar9) {
    setBasePriority(uVar3);
  }
  return;
}

