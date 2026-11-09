
void FUN_0102a094(void)

{
  byte bVar1;
  byte *pbVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint extraout_r1;
  undefined4 in_r3;
  uint uVar12;
  char cVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  uint local_70;
  int local_6c;
  undefined4 uStack_28;
  
  iVar11 = DAT_0102abe0;
  pcVar6 = DAT_0102abdc;
  iVar5 = DAT_0102a834;
  pbVar2 = DAT_0102a808;
  local_70 = (uint)*DAT_0102a808;
  local_6c = 1;
  uStack_28 = in_r3;
  if (*DAT_0102abdc != '\x03') {
    if (*(byte *)(DAT_0102abe0 + local_70) < 2) {
      FUN_0102ad18(0,0);
    }
    iVar4 = DAT_0102a81c;
    puVar3 = DAT_0102a80c;
    if ((*(byte *)(iVar5 + 0x12) & 7) != 0) goto LAB_0102a118;
    uVar12 = 1;
    do {
      if (((*(byte *)(iVar4 + 0x14 + uVar12) < 7) &&
          (((uint)*puVar3 & local_6c << (uVar12 & 0xff)) != 0)) &&
         (*(byte *)(iVar11 + (uint)pbVar2[uVar12]) < 2)) {
        FUN_0102ad18(uVar12 & 0xff,0);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < 4);
  }
  *(undefined1 *)(DAT_0102a820 + 0x10) = 1;
LAB_0102a118:
  dwt_sync_helper();
  iVar9 = DAT_0102ac88;
  iVar4 = DAT_0102ac84;
  puVar8 = DAT_0102ac80;
  *(undefined4 *)(DAT_0102ac84 + 0x18) = *DAT_0102ac80;
  thunk_EXT_FUN_20036634();
  dwt_sync_helper();
  *(undefined4 *)(iVar4 + 0x1c) = *puVar8;
  if (*(char *)(iVar9 + 0x10) == '\0') {
    FUN_010143cc(8,1);
    uVar10 = 9;
  }
  else {
    FUN_010143cc(10,1);
    uVar10 = 0xb;
  }
  FUN_010143cc(uVar10,1);
  dwt_sync_helper();
  *(undefined4 *)(iVar4 + 0x20) = *puVar8;
  FUN_010143cc(2,1);
  if (*pcVar6 != '\x03') {
    FUN_01015e2c(200);
    FUN_01014498(2);
    uVar12 = (uint)*(byte *)(iVar11 + local_70);
    if (uVar12 < 2) {
      FUN_0102ad88(0);
      uVar12 = extraout_r1;
    }
    uVar14 = CONCAT44(uVar12,(uint)*(byte *)(iVar5 + 0x12));
    if ((*(byte *)(iVar5 + 0x12) & 7) == 0) {
      uVar12 = 1;
      do {
        uVar14 = (ulonglong)CONCAT14(*(byte *)(DAT_0102ac8c + uVar12),DAT_0102ac8c);
        if (((*(byte *)(DAT_0102ac8c + uVar12) < 7) &&
            (uVar14 = (ulonglong)CONCAT24(*DAT_0102a80c,DAT_0102a80c),
            ((uint)*DAT_0102a80c & local_6c << (uVar12 & 0xff)) != 0)) &&
           (bVar1 = pbVar2[uVar12], uVar14 = (ulonglong)CONCAT14(bVar1,DAT_0102a80c),
           *(byte *)(iVar11 + (uint)bVar1) < 2)) {
          uVar14 = FUN_0102ad88(uVar12 & 0xff);
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < 4);
    }
    uVar15 = FUN_0102a2c0((int)uVar14,(int)(uVar14 >> 0x20),3);
    FUN_0102a2c0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),0);
  }
  dwt_sync_helper();
  *(undefined4 *)(iVar4 + 0x24) = *puVar8;
  FUN_01009b62();
  FUN_0100b0fa(0);
  FUN_0100b008();
  dwt_sync_helper();
  *(undefined4 *)(iVar4 + 0x28) = *puVar8;
  cVar13 = (*(byte *)(iVar9 + 0x10) & 1) + 3;
  FUN_01038ce6(cVar13);
  uVar10 = FUN_0100b1da();
  FUN_01009a04(cVar13,uVar10,0);
  FUN_010071b4(cVar13,0);
  FUN_01009a6c(cVar13);
  FUN_01029f66(1);
  FUN_0102e682();
  FUN_010198e0(6);
  FUN_0101852c();
  dwt_sync_helper();
  iVar7 = DAT_0102ac7c;
  *(undefined4 *)(iVar4 + 0x2c) = *puVar8;
  FUN_0100b074(1,*(undefined4 *)(iVar7 + 0x10));
  dwt_sync_helper();
  *(undefined4 *)(iVar4 + 0x34) = *puVar8;
  if (*(char *)(iVar11 + local_70) == '\0') {
    FUN_01029d1e();
  }
  dwt_sync_helper();
  *(undefined4 *)(iVar4 + 0x38) = *puVar8;
  local_70 = 1;
  if ((*pcVar6 != '\x03') && (iVar11 = FUN_0102fb76(0,&local_70), iVar11 == 0)) {
    if (*(char *)(iVar9 + 0x1c6) == '\0') {
      FUN_01038e54();
      FUN_0102e6fe(0,0);
      FUN_01039654(0);
      FUN_010391ac(0,&local_70);
    }
    else {
      FUN_0103a10c(0,&local_70);
    }
  }
  pcVar6[1] = '\x01';
  periph_init_f();
  pin_update(iVar5,2,0);
  return;
}

