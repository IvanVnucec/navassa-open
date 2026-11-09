
undefined4 FUN_0103dba8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  undefined2 unaff_r11;
  char cVar9;
  float fVar10;
  undefined8 uVar11;
  
  uVar5 = 0;
  do {
    if ((int)((param_1 >> (uVar5 & 0xff)) << 0x1f) < 0) {
      pbVar4 = *(byte **)(DAT_0103dea0 + uVar5 * 4);
      pbVar6 = (byte *)(DAT_0103dea8 + uVar5 * 4);
      *pbVar6 = pbVar4[0x11];
      pbVar6[1] = pbVar4[0x51];
      pbVar6[2] = pbVar4[0x91];
      pbVar7 = pbVar4 + 1;
      cVar9 = (int)pbVar7 < 0;
      pbVar6[3] = pbVar4[0xd1];
      bVar1 = *pbVar4;
      bVar2 = *pbVar7;
      FUN_0103dd6a(*pbVar6);
      fVar10 = (float)FUN_0103dd38();
      if (cVar9 != '\0') {
        fVar10 = DAT_0103de94;
      }
      pbVar4[0x11] = (byte)(int)fVar10;
      iVar8 = DAT_0103dea8 + uVar5 * 8;
      *(ushort *)(iVar8 + 8) = (ushort)bVar1 | (ushort)((bVar2 & 3) << 8);
      *pbVar4 = 0;
      cVar9 = '\0';
      pin_update(pbVar7,3,0);
      FUN_0103dd28();
      FUN_0103dd50(pbVar6[1]);
      fVar10 = (float)FUN_0103dd38();
      if (cVar9 != '\0') {
        fVar10 = DAT_0103de94;
      }
      pbVar4[0x51] = (byte)(int)fVar10;
      *(undefined2 *)(iVar8 + 10) = unaff_r11;
      FUN_0103dd42();
      FUN_0103dd28();
      FUN_0103dd50(pbVar6[2]);
      fVar10 = (float)FUN_0103dd38();
      if (cVar9 != '\0') {
        fVar10 = DAT_0103de94;
      }
      pbVar4[0x91] = (byte)(int)fVar10;
      *(undefined2 *)(iVar8 + 0xc) = unaff_r11;
      FUN_0103dd42();
      bVar1 = pbVar4[0xc0];
      bVar2 = pbVar4[0xc1];
      FUN_0103dd6a(pbVar6[3]);
      fVar10 = (float)FUN_0103dd38();
      if (cVar9 != '\0') {
        fVar10 = DAT_0103de94;
      }
      pbVar4[0xd1] = (byte)(int)fVar10;
      *(ushort *)(iVar8 + 0xe) = (ushort)bVar1 | (ushort)((bVar2 & 3) << 8);
      pbVar4[0xc0] = 0;
      uVar3 = FUN_0103de60(0,3,0);
      FUN_0103de60(uVar3,4,4);
      uVar3 = FUN_01022254(2);
      FUN_0103de60(uVar3,4,0);
      FUN_0103de5c();
      uVar11 = FUN_01022254(1);
      FUN_0103de5e((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  return param_4;
}

