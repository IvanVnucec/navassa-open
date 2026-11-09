
uint FUN_0102553e(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 unaff_r4;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  FUN_01029642();
  FUN_0102969e(param_1);
  FUN_01025502(1,param_1,DAT_01025958);
  FUN_01037634(param_1);
  FUN_010296e8(param_1);
  pbVar5 = DAT_010378a0;
  pbVar4 = DAT_0103789c;
  iVar3 = DAT_01037894;
  iVar2 = DAT_0103788c;
  iVar1 = DAT_01037880;
  uVar11 = 0;
  do {
    if ((int)((param_1 >> (uVar11 & 0xff)) << 0x1f) < 0) {
      if (*(int *)(*(int *)(DAT_010378a4 + uVar11 * 4) + 0x34) << 0x17 < 0) {
        FUN_010376f0();
      }
      if (*(char *)(DAT_010378a8 + uVar11) == '\x01') {
        FUN_01037866(DAT_01037888,1,1,0,param_1,unaff_r4);
        iVar13 = DAT_0103787c + uVar11 * 0x2c;
        FUN_01037866(DAT_0103787c,uVar11 * 0x2c,2,((uint)*(byte *)(iVar13 + 0xb) << 0x19) >> 0x18);
        if (*(char *)(iVar1 + uVar11) == '\0') {
          FUN_0100fcae(uVar11 & 0xff,iVar13);
          *(undefined1 *)(iVar1 + uVar11) = 1;
        }
        else {
          FUN_0100fb98();
        }
        uVar9 = DAT_010378b0;
        uVar6 = DAT_010378ac;
        iVar12 = uVar11 * 0x14;
        if (uVar11 == 0) {
          *(byte *)(iVar3 + 5) = (byte)(((uint)*pbVar5 << 0x1a) >> 0x1f);
          *(byte *)(iVar3 + 4) = (byte)(((uint)*pbVar5 << 0x1b) >> 0x1f);
          pbVar7 = pbVar5;
          uVar9 = uVar6;
        }
        else {
          *(byte *)(iVar3 + 5 + iVar12) = (byte)(((uint)*pbVar4 << 0x1a) >> 0x1f);
          *(byte *)(iVar3 + 4 + iVar12) = (byte)(((uint)*pbVar4 << 0x1b) >> 0x1f);
          pbVar7 = pbVar4;
        }
        FUN_0100f6e6(pbVar7,uVar9,iVar3 + iVar12);
        uVar10 = DAT_010378c0;
        uVar8 = DAT_010378bc;
        uVar9 = DAT_010378b8;
        uVar6 = DAT_010378b4;
        if (uVar11 == 0) {
          *(byte *)(iVar2 + 5) = (byte)(((uint)pbVar5[7] << 0x1a) >> 0x1f);
          *(byte *)(iVar2 + 4) = (byte)(((uint)pbVar5[7] << 0x1b) >> 0x1f);
          uVar8 = uVar6;
          uVar10 = uVar9;
        }
        else {
          *(byte *)(iVar2 + 5 + iVar12) = (byte)(((uint)pbVar4[7] << 0x1a) >> 0x1f);
          *(byte *)(iVar2 + 4 + iVar12) = (byte)(((uint)pbVar4[7] << 0x1b) >> 0x1f);
        }
        FUN_0100f6e6(uVar8,uVar10,iVar2 + iVar12);
        FUN_0100fcea(uVar11 & 0xff,0x1f);
        thunk_FUN_0100fd16();
        FUN_0100fd14();
        FUN_0100fdb8(uVar11 & 0xff);
        FUN_0100fd1e(uVar11 & 0xff,1);
        FUN_0100fd5c(uVar11 & 0xff,*(undefined1 *)(iVar13 + 0xb));
        FUN_0100fd48(uVar11 & 0xff,*(undefined1 *)(iVar13 + 0xc));
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 2);
  return param_1;
}

