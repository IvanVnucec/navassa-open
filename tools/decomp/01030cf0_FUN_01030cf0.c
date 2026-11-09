
undefined8 FUN_01030cf0(undefined4 param_1,float param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  uint uVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar10;
  float fVar11;
  
  uVar7 = (uint)((*(ushort *)(DAT_01030e24 + 0x22) & 0x155) != 0);
  if ((*(ushort *)(DAT_01030e24 + 0x22) & 0x2aa) != 0) {
    uVar7 = uVar7 + 2;
  }
  iVar9 = 0;
  if (uVar7 == 1) {
    bVar8 = 0;
    uVar4 = 4;
  }
  else {
    if (uVar7 == 2) {
      bVar8 = 4;
    }
    else {
      bVar8 = 0;
    }
    uVar4 = 8;
  }
  if ((int)(uVar7 << 0x1f) < 0) {
    FUN_01030768(0);
    param_2 = extraout_s1;
  }
  iVar2 = DAT_01030e28;
  if ((int)(uVar7 << 0x1e) < 0) {
    FUN_01030768(4);
    param_2 = extraout_s1_00;
    iVar2 = DAT_01030e28;
  }
  do {
    bVar6 = bVar8;
    if (uVar4 <= bVar6) {
LAB_01030df6:
      return CONCAT44(in_r3,iVar9);
    }
    puVar5 = (undefined8 *)(iVar2 + (short)(ushort)bVar6 * 0xc);
    fVar10 = (float)*puVar5;
    bVar1 = fVar10 != DAT_01030e10;
    if (bVar1) {
      param_2 = DAT_01030e1c;
    }
    if (bVar1 && (bVar1 && fVar10 != param_2)) {
      iVar9 = 0xff04;
      goto LAB_01030df6;
    }
    bVar8 = bVar6 + 1;
    if (*(char *)(puVar5 + 1) != '\x01') {
      fVar11 = (float)((ulonglong)*puVar5 >> 0x20);
      iVar9 = FUN_0102fd34(fVar10,fVar11,DAT_01030e20 + (uint)bVar6 * 0x36);
      iVar3 = iVar9;
      if (iVar9 == 0) {
        iVar3 = 1;
      }
      if (iVar9 == 0) {
        *(char *)(puVar5 + 1) = (char)iVar3;
      }
      param_2 = extraout_s1_02;
      for (uVar7 = (uint)bVar8; (int)uVar7 < (int)uVar4; uVar7 = uVar7 + 1) {
        iVar3 = uVar7 * 0xc;
        if ((fVar10 == *(float *)(iVar2 + iVar3)) &&
           (param_2 = *(float *)(iVar2 + 4 + iVar3), fVar11 == param_2)) {
          FUN_0103072e(bVar6,uVar7 & 0xff);
          *(undefined1 *)(iVar2 + 8 + iVar3) = 1;
          param_2 = extraout_s1_01;
        }
      }
    }
  } while( true );
}

