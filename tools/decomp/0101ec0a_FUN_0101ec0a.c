
undefined8 FUN_0101ec0a(uint param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  ushort *puVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  byte local_28;
  
  iVar8 = param_2 * 6;
  local_28 = (byte)param_1;
  iVar13 = (short)(ushort)local_28 * 0xc;
  puVar6 = (ushort *)(DAT_0101edb0 + iVar13 + iVar8);
  FUN_010330dc(param_1 & 0xff,param_2,puVar6);
  puVar7 = (ushort *)(DAT_0101edb4 + iVar13 + iVar8);
  FUN_0100f00e(param_1 & 0xff,param_2,puVar7);
  puVar11 = (ushort *)(DAT_0101edb8 + iVar13 + iVar8);
  FUN_0100cf16(param_1 & 0xff,param_2,puVar11);
  pbVar5 = (byte *)(DAT_0101edbc + iVar13 + iVar8);
  uVar2 = puVar6[2] | puVar6[1] | *puVar6;
  *pbVar5 = (byte)((byte)(puVar6[2] >> 8) | (byte)(puVar6[1] >> 8)) >> 7;
  uVar4 = uVar2 & 0x7fff;
  pbVar5[3] = (byte)(*puVar6 >> 0xf);
  uVar12 = 0;
  uVar9 = (uint)(ushort)(puVar7[2] | puVar7[1] | *puVar7);
  pbVar5[2] = (byte)((byte)(puVar7[2] >> 8) | (byte)(puVar7[1] >> 8)) >> 7;
  uVar10 = uVar9 & 0x7fff;
  pbVar5[5] = (byte)(*puVar7 >> 0xf);
  uVar3 = (uint)(ushort)(*puVar11 | puVar11[1] | puVar11[2]);
  uVar14 = uVar3 & 0x7fff;
  pbVar5[1] = (byte)((byte)(puVar11[2] >> 8) | (byte)(puVar11[1] >> 8)) >> 7;
  pbVar5[4] = (byte)(*puVar11 >> 0xf);
  uVar1 = (ushort)((uVar9 << 0x11) >> 0x11);
  param_3[1] = uVar1;
  param_3[3] = uVar1;
  uVar1 = (ushort)((uVar3 << 0x11) >> 0x11);
  param_3[2] = uVar1;
  param_3[4] = uVar1;
  if ((uVar2 & 0x7ffe) == 0) {
    *param_3 = 0;
    puVar6[2] = 1;
    puVar6[1] = 1;
    *puVar6 = 1;
  }
  else {
    *param_3 = (ushort)(((uint)uVar2 << 0x11) >> 0x11);
    if ((uVar10 == uVar14 || uVar10 == 1) || (uVar14 == 1)) {
      if (((uVar10 < uVar4) && (uVar10 != 1)) || ((uVar14 < uVar4 && (uVar14 != 1)))) {
        uVar2 = uVar2 & 0x7ffe;
        if (1 < uVar10) {
          param_3[1] = uVar2;
          if (1 < puVar7[2]) {
            puVar7[2] = puVar7[2] & 0x8001 | uVar2;
          }
          if (1 < puVar7[1]) {
            puVar7[1] = puVar7[1] & 0x8001 | uVar2;
          }
          if (1 < *puVar7) {
            *puVar7 = *puVar7 & 0x8001 | uVar2;
          }
        }
        if (1 < uVar14) {
          param_3[2] = uVar2;
          if (1 < puVar11[2]) {
            puVar11[2] = puVar11[2] & 0x8001 | uVar2;
          }
          if (1 < puVar11[1]) {
            puVar11[1] = puVar11[1] & 0x8001 | uVar2;
          }
          if (1 < *puVar11) {
            *puVar11 = uVar2 | *puVar11 & 0x8001;
          }
        }
      }
    }
    else {
      uVar12 = 0x2210;
    }
  }
  return CONCAT44(param_1,uVar12);
}

