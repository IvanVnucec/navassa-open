
void FUN_01001204(void)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined2 *puVar4;
  byte *pbVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  puVar4 = DAT_01001b10;
  iVar9 = DAT_010018e0;
  iVar3 = DAT_01001748;
  *(undefined1 *)(DAT_010018e0 + 0x765) = *(undefined1 *)(DAT_010018e0 + 0x764);
  iVar14 = *(int *)(iVar3 + 8);
  iVar13 = *(int *)(iVar3 + 0x10);
  *(int *)(iVar3 + 8) = iVar13;
  *(int *)(iVar3 + 0x10) = iVar14;
  *(undefined4 *)(iVar14 + 0x1c) = 0;
  *(undefined4 *)(iVar14 + 0x38) = 0;
  if (*(char *)(iVar13 + 0x2d) == '\0') {
    *puVar4 = 0;
  }
  else {
    *puVar4 = 0xff0;
  }
  pbVar5 = DAT_01001b14;
  if (*(int *)(iVar9 + 0x2c) << 0x15 < 0) {
    bVar1 = *DAT_01001b14;
    *(uint *)(iVar9 + 0x7c8) = (uint)bVar1;
    uVar10 = (uint)CONCAT11(pbVar5[1],bVar1);
    *(uint *)(iVar9 + 0x7c8) = uVar10;
    iVar7 = DAT_01001b24;
    if ((*(int *)(iVar9 + 0x2c) << 0x1c < 0) &&
       (uVar10 = (uVar10 & *(uint *)(iVar9 + 0x7cc)) >> (*(uint *)(iVar9 + 2000) & 0xff),
       *(uint *)(iVar9 + 0x760) = uVar10, puVar11 = DAT_01001b30, uVar12 = DAT_01001b2c,
       puVar8 = DAT_01001b28, *(int *)(iVar7 + (uint)*(byte *)(iVar9 + 0x765) * 8) - 1U < uVar10)) {
      *(undefined4 *)(iVar9 + 0x760) = *(undefined4 *)(iVar13 + 0x18);
      *puVar8 = uVar12;
      *puVar11 = 0x622;
      boot_msg(1,0xeb00,1);
    }
  }
  uVar10 = (*DAT_01001b18 | DAT_01001b18[0x40]) & 0xaa0000;
  uVar10 = (uVar10 >> 0xf & 4 | uVar10 >> 0x10 & 8 | (uVar10 << 10) >> 0x1f | uVar10 >> 0x16) &
           *(uint *)(iVar9 + 0x78c);
  if (*(int *)(DAT_01001b24 + (uint)*(byte *)(iVar9 + 0x765) * 8) == 0) {
    *(undefined4 *)(iVar14 + 0x38) = 0xeb0c;
    FUN_010004b8(uVar10);
  }
  else if (uVar10 != 0) {
    bVar15 = true;
    bVar2 = true;
    if ((*DAT_01001b34 == '\x01') && (bVar15 = (uVar10 & 3) != 3, (uVar10 & 0xc) == 0xc)) {
      bVar2 = false;
    }
    *(uint *)(iVar14 + 0x1c) = uVar10;
    if ((int)(uVar10 << 0x1f) < 0) {
      (**(code **)(iVar9 + 0x1c))(0,iVar9,iVar9 + 0x6e0,iVar14);
    }
    if ((int)(uVar10 << 0x1e) < 0 && bVar15) {
      (**(code **)(iVar9 + 0x20))(1,iVar9,iVar9 + 0x6e0,iVar14);
    }
    if ((int)(uVar10 << 0x1d) < 0) {
      (**(code **)(iVar9 + 0x24))(2,iVar9,iVar9 + 0x6e0,iVar14);
    }
    if (uVar10 >> 3 != 0 && bVar2) {
      (**(code **)(iVar9 + 0x28))(3,iVar9,iVar9 + 0x6e0,iVar14);
    }
  }
  puVar6 = DAT_01001b1c;
  *DAT_01001b1c = *DAT_01001b1c & ~(((uint)(*(int *)(iVar13 + 0x1c) << 0x1c) >> 0x1e) << 5);
  puVar6[7] = puVar6[7] & ~((*(int *)(iVar14 + 0x30) + 1) * 0x2000);
  *DAT_01001b20 = (byte)(-(uint)(*(char *)(iVar13 + 0x2d) == '\0') >> 0x1f);
  if (-1 < (int)((uint)*(byte *)(iVar9 + 0x2c) << 0x1d)) {
    puVar11 = *(undefined4 **)(iVar3 + 0x10);
    puVar8 = *(undefined4 **)(iVar3 + 8);
    uVar12 = puVar11[1];
    *puVar8 = *puVar11;
    puVar8[1] = uVar12;
    *(undefined1 *)(puVar8 + 0xb) = *(undefined1 *)(puVar11 + 0xb);
    iVar13 = *(int *)(iVar3 + 0x10);
    iVar9 = *(int *)(iVar3 + 8);
    *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar13 + 0x30);
    *(undefined4 *)(iVar9 + 0x34) = *(undefined4 *)(iVar13 + 0x34);
    *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar13 + 8);
    *(undefined4 *)(iVar9 + 0xc) = *(undefined4 *)(iVar13 + 0xc);
    *(undefined1 *)(iVar9 + 0x20) = *(undefined1 *)(iVar13 + 0x20);
    *(undefined1 *)(*(int *)(iVar3 + 8) + 0x21) = *(undefined1 *)(*(int *)(iVar3 + 0x10) + 0x21);
    *(undefined4 *)(*(int *)(iVar3 + 8) + 0x1c) = *(undefined4 *)(*(int *)(iVar3 + 0x10) + 0x1c);
  }
  return;
}

