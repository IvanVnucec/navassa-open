
uint FUN_010296e8(uint param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  
  iVar6 = DAT_01029968;
  pbVar5 = DAT_01029964;
  iVar4 = DAT_01029960;
  pbVar3 = DAT_0102995c;
  iVar2 = DAT_01029958;
  iVar1 = DAT_01029950;
  uVar13 = 0;
  do {
    if ((int)((param_1 >> (uVar13 & 0xff)) << 0x1f) < 0) {
      iVar8 = uVar13 * 0x18;
      if (uVar13 == 0) {
        *(undefined1 *)(iVar1 + 0x14) = 0x88;
      }
      else if (uVar13 == 1) {
        *(undefined1 *)(iVar1 + 0x14 + iVar8) = 0x88;
      }
      *(undefined1 *)(iVar1 + iVar8) = 1;
      FUN_0102988a(uVar13 & 0xff,iVar1 + iVar8);
      *DAT_0102996c = 0x11;
      if (*(char *)(iVar6 + uVar13) == '\0') {
        FUN_010027dc(*(int *)(DAT_01029970 + uVar13 * 4) + 0x1ac,1,1);
        FUN_0100ff12(uVar13 & 0xff,uVar13 * 10 + DAT_01029948);
        uVar11 = DAT_01029978;
        uVar7 = DAT_01029974;
        iVar8 = uVar13 * 0x14;
        if (uVar13 == 0) {
          *(byte *)(iVar4 + 5) = (byte)(((uint)*pbVar5 << 0x1a) >> 0x1f);
          *(byte *)(iVar4 + 4) = (byte)(((uint)*pbVar5 << 0x1b) >> 0x1f);
          pbVar9 = pbVar5;
          uVar11 = uVar7;
        }
        else {
          *(byte *)(iVar4 + 5 + iVar8) = (byte)(((uint)*pbVar3 << 0x1a) >> 0x1f);
          *(byte *)(iVar4 + 4 + iVar8) = (byte)(((uint)*pbVar3 << 0x1b) >> 0x1f);
          pbVar9 = pbVar3;
        }
        FUN_0100f6e6(pbVar9,uVar11,iVar4 + iVar8);
        uVar12 = DAT_01029988;
        uVar10 = DAT_01029984;
        uVar11 = DAT_01029980;
        uVar7 = DAT_0102997c;
        if (uVar13 == 0) {
          *(byte *)(iVar2 + 5) = (byte)(((uint)pbVar5[7] << 0x1a) >> 0x1f);
          *(byte *)(iVar2 + 4) = (byte)(((uint)pbVar5[7] << 0x1b) >> 0x1f);
          uVar10 = uVar7;
          uVar12 = uVar11;
        }
        else {
          *(byte *)(iVar2 + 5 + iVar8) = (byte)(((uint)pbVar3[7] << 0x1a) >> 0x1f);
          *(byte *)(iVar2 + 4 + iVar8) = (byte)(((uint)pbVar3[7] << 0x1b) >> 0x1f);
        }
        FUN_0100f6e6(uVar10,uVar12,iVar2 + iVar8);
        FUN_0100fcea(uVar13 & 0xff,0x1f);
        thunk_FUN_0100fd16();
        FUN_0100fd14();
        FUN_0100ff3c(uVar13 & 0xff,1);
      }
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 2);
  return param_1;
}

