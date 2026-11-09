
void FUN_0102a2ca(void)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  short sVar10;
  int iVar11;
  bool bVar12;
  
  FUN_01020e22();
  pbVar2 = DAT_0102abdc;
  DAT_0102abdc[1] = 0;
  FUN_0100ae0a(0x3b,1);
  if (*(char *)(*DAT_0102ac90 + 0x10) == '\x03') {
    FUN_0100817e(2,9,1);
  }
  iVar1 = DAT_0102a820;
  if (*pbVar2 == 5) {
    iVar6 = FUN_0102a866();
    if (*(char *)((DAT_0102a81c - ((int)-(uint)(iVar6 == 0) >> 0x1f)) + 0x18) != '\0') {
      FUN_01029cec(-(uint)(iVar6 == 0) >> 0x1f);
    }
    puVar3 = DAT_0102ac94;
    FUN_01029c96();
    FUN_0102a49a(*puVar3);
    puVar5 = DAT_0102ac98;
    FUN_0102a49a(puVar3[1]);
    FUN_0102a48e(*puVar5);
    FUN_0102a48e(puVar5[1]);
    bVar9 = 1;
LAB_0102a352:
    FUN_0102ad18(bVar9,1);
    bVar9 = bVar9 + 1;
    *(undefined1 *)(iVar1 + 0x10) = 0;
    if (bVar9 < 4) {
      if (bVar9 != 2) goto LAB_0102a344;
      uVar7 = 0;
      goto LAB_0102a34e;
    }
    thunk_EXT_FUN_200348e4(1);
  }
  FUN_0102a866();
  FUN_01029cec();
  if (*pbVar2 != 3) {
    FUN_0102ad18(0,1);
  }
  FUN_0100b060();
  FUN_0100b008();
  FUN_01029c96();
  dwt_sync_helper();
  iVar6 = DAT_0102ac9c;
  puVar3 = DAT_0102ac80;
  *(undefined4 *)(DAT_0102ac9c + 0x1c) = *DAT_0102ac80;
  FUN_010184a8();
  FUN_0100b0fa(1);
  if (*pbVar2 != 3) {
    FUN_010143cc(2,0);
  }
  iVar4 = DAT_0102ac88;
  sVar10 = (*(byte *)(DAT_0102ac88 + 0x10) & 1) + 3;
  uVar7 = FUN_0100b1da();
  FUN_01009a04(sVar10,uVar7,0);
  iVar11 = DAT_0102a818 + sVar10 * 0x60;
  bVar12 = *(char *)(iVar11 + 0x46) != '\x01';
  uVar8 = DAT_0102a818;
  if (bVar12) {
    uVar8 = (uint)*pbVar2;
  }
  if (bVar12 && uVar8 != 3) {
    FUN_01008f08(sVar10,1);
    *(undefined1 *)(iVar11 + 0x46) = 1;
  }
  FUN_01038caa(sVar10);
  FUN_01009094(sVar10,1);
  if (*(char *)(iVar4 + 0x10) == '\0') {
    if (*pbVar2 == 3) goto LAB_0102a448;
    FUN_010143cc(9,0);
    uVar7 = 8;
  }
  else {
    if (*pbVar2 == 3) goto LAB_0102a448;
    FUN_010143cc(0xb,0);
    uVar7 = 10;
  }
  FUN_010143cc(uVar7,0);
LAB_0102a448:
  FUN_01029f66(0);
  dwt_sync_helper();
  *(undefined4 *)(iVar6 + 0x28) = *puVar3;
  if (*(char *)(iVar1 + 8) == '\0') {
    dwt_sync_helper();
    *(undefined4 *)(iVar6 + 0x2c) = *puVar3;
    spi_wait_flag(4,0);
  }
  periph_init_f(0);
  pbVar2[1] = 0;
  if (*pbVar2 == 5) {
    return;
  }
  pin_update(DAT_0102a834,2,2);
  return;
LAB_0102a344:
  if (bVar9 == 3) {
    uVar7 = 1;
LAB_0102a34e:
    FUN_01036000(uVar7,1,0);
  }
  goto LAB_0102a352;
}

