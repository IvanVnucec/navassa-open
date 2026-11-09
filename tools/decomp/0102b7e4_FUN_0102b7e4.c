
undefined4 FUN_0102b7e4(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_r3;
  byte unaff_r4;
  byte *pbVar7;
  byte bVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  
  iVar1 = DAT_0102bbe4;
  *DAT_0102bbdc = 0x22;
  *DAT_0102bbe8 = 0x22;
  FUN_01018076(0);
  FUN_01019a84(0);
  bVar8 = 0;
  do {
    iVar5 = DAT_0102bbec + (uint)*(byte *)(iVar1 + (uint)bVar8) * 0xbc;
    iVar3 = *(int *)(iVar5 + 0x1a8);
    bVar10 = iVar3 == 0;
    if (bVar10) {
      iVar3 = *(int *)(iVar5 + 0x30);
    }
    if (!bVar10 || iVar3 != 0) {
      uVar11 = FUN_0102b920(iVar3,iVar5,0);
      FUN_0102b920((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),1);
    }
    iVar3 = DAT_0102bc00;
    uVar2 = DAT_0102bbfc;
    bVar8 = bVar8 + 1;
  } while (bVar8 < 4);
  *DAT_0102bbf0 = 0x7f;
  uVar11 = FUN_0102bba8();
  uVar4 = FUN_0102bbaa((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),1);
  uVar4 = FUN_0102b922(uVar4,8,8);
  FUN_0102b922(uVar4,0x40,0x40);
  pin_update(DAT_0102bc04,2,2);
  uVar4 = pin_update(DAT_0102bc08,0x40,0x40);
  FUN_0102b922(uVar4,0x10,0);
  uVar9 = 0;
  do {
    pbVar7 = *(byte **)(iVar3 + uVar9 * 4);
    uVar6 = (uint)*pbVar7;
    uVar4 = 0x2f;
    if ((-1 < (int)((uint)pbVar7[4] << 0x19)) && (uVar6 = uVar6 << 0x1a, (int)uVar6 < 0)) {
      uVar4 = 0x3f;
      unaff_r4 = 0;
    }
    FUN_010027d8(pbVar7 + 0x45,uVar4,uVar6,pbVar7[0x23]);
    pbVar7[0x48] = unaff_r4;
    pbVar7[0x49] = 0xc;
    pin_update(pbVar7 + 10,2,0);
    pin_update(uVar2,0x40,0);
    uVar4 = pin_update(uVar2,0x80,0);
    do {
      uVar9 = uVar9 + 1;
      if (4 < uVar9) {
        FUN_0102b922(uVar4,0x10,0x10);
        *DAT_0102bc0c = 0xf;
        return in_r3;
      }
    } while (uVar9 == 2);
  } while( true );
}

