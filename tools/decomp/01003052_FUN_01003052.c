
int FUN_01003052(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  iVar17 = DAT_010032e8;
  iVar4 = DAT_010032e8 + 300;
  FUN_01003288(iVar4,param_2,DAT_010032e8,0x19);
  iVar11 = iVar17 + 0x140;
  FUN_01003288(iVar11,iVar11,iVar17 + 100,0x19);
  iVar5 = iVar17 + 0x154;
  uVar10 = extraout_r1;
  if (1 < param_1) {
    FUN_01003288(iVar5,extraout_r1,iVar17 + 200,0x19);
    uVar10 = extraout_r1_00;
  }
  iVar6 = iVar17 + 0x198;
  FUN_01003288(iVar6,uVar10,iVar17 + 0x168,4);
  iVar14 = iVar17 + 0x1ac;
  FUN_0100b698(iVar14,0,iVar17 + 0x178,4);
  iVar15 = iVar17 + 0x1c0;
  if (1 < param_1) {
    FUN_0100b698(iVar15,0,iVar17 + 0x188,4);
  }
  iVar7 = iVar17 + 0x1d4;
  iVar13 = iVar17 + 0x210;
  FUN_0100b698(iVar13,0,iVar7,5);
  iVar8 = iVar17 + 0x1e8;
  iVar16 = iVar17 + 0x224;
  FUN_0100b698(iVar16,0,iVar8,5);
  iVar9 = iVar17 + 0x1fc;
  iVar17 = iVar17 + 0x238;
  if (1 < param_1) {
    FUN_0100b698(iVar17,0,iVar9,5);
  }
  FUN_0100b6d6(iVar16,iVar11,0,0);
  uVar10 = FUN_0100b6d6(iVar16,iVar14,0,0);
  uVar10 = FUN_0100327e(uVar10,iVar4);
  FUN_0100327e(uVar10,iVar6);
  if (1 < param_1) {
    FUN_0100b6d6(iVar17,iVar5,0,0);
    FUN_0100b6d6(iVar17,iVar15,0,0);
  }
  piVar1 = DAT_01003304;
  FUN_0100b704(iVar16,DAT_01003304[1] + 0x33,1,1);
  FUN_0100b704(iVar13,*piVar1 + 0x33,1,1);
  if (1 < param_1) {
    FUN_0100b704(iVar17,piVar1[2] + 0x33,1,1);
  }
  FUN_0100b594(iVar16);
  FUN_0100b594(iVar13);
  if (1 < param_1) {
    FUN_0100b594(iVar17);
  }
  puVar2 = DAT_01003308;
  uVar10 = FUN_0100b89e(iVar7,1,1);
  *puVar2 = uVar10;
  uVar10 = FUN_0100b89e(iVar8,1,1);
  puVar2[1] = uVar10;
  if (1 < param_1) {
    uVar10 = FUN_0100b89e(iVar9,1,1);
    puVar2[2] = uVar10;
  }
  uVar10 = DAT_01003310;
  puVar3 = DAT_0100330c;
  *DAT_01003300 = puVar2[1];
  uVar12 = *puVar3;
  iVar17 = FUN_01002f26(0,2,uVar10,0,uVar12,iVar4,1,2,param_2);
  if (iVar17 == 0) {
    uVar12 = puVar3[1];
    iVar17 = FUN_01002f26(1,2,DAT_01003310,0,uVar12,iVar11,1,2,param_2);
  }
  if (iVar17 == 0) {
    if (param_1 < 2) goto LAB_01003232;
    iVar17 = FUN_01002f26(2,1,DAT_01003310,0,uVar12,iVar5,1,2,param_2);
  }
  if (iVar17 != 0) {
    return iVar17;
  }
LAB_01003232:
  FUN_0100b260(iVar6);
  FUN_0100b260(iVar14);
  if (1 < param_1) {
    FUN_0100b260(iVar15);
  }
  uVar10 = FUN_0100b1da();
  FUN_01009a04(0,uVar10,iVar6);
  uVar10 = FUN_0100b1da();
  FUN_01009a04(1,uVar10,iVar14);
  if (1 < param_1) {
    uVar10 = FUN_0100b1da();
    FUN_01009a04(2,uVar10,iVar15);
  }
  return iVar17;
}

