
void mailbox_xfer(uint param_1,uint param_2)

{
  bool bVar1;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  ushort uVar10;
  
  iVar4 = FUN_0101bb08(*(undefined4 *)(DAT_0100aed0 + 8),*(undefined4 *)(DAT_0100aed0 + 0xc),param_1
                      );
  if (iVar4 << 0x1f < 0) {
    uVar5 = FUN_0100ad8c();
    pcVar2 = DAT_0100aec0;
    iVar4 = *DAT_0100aecc;
    iVar7 = *(int *)(DAT_0100aec0 + 4);
    *(int *)(DAT_0100aec0 + 4) = iVar4;
    puVar3 = DAT_0100aec8;
    puVar8 = (uint *)*DAT_0100aec8;
    uVar10 = *(ushort *)((int)DAT_0100aec8 + 6);
    puVar9 = puVar8;
    if (*pcVar2 != '\0') {
      *puVar8 = param_1 & 0x3f | param_2 >> 0x19 & 0x40 | (iVar7 - iVar4) * 0x80 | 0x80000000;
      puVar9 = (uint *)puVar3[3];
      puVar6 = puVar9;
      if (puVar8 < puVar9 + 0x1fff) {
        puVar6 = puVar8 + 1;
      }
      if (uVar10 < 0x2000) {
        uVar10 = uVar10 + 1;
      }
      *puVar6 = param_2 & 0x7fffffff;
      if (puVar6 < puVar9 + 0x1fff) {
        puVar9 = puVar6 + 1;
      }
      if (uVar10 < 0x2000) {
        uVar10 = uVar10 + 1;
      }
    }
    *(ushort *)((int)puVar3 + 6) = uVar10;
    *puVar3 = (uint)puVar9;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar5);
    }
    return;
  }
  return;
}

