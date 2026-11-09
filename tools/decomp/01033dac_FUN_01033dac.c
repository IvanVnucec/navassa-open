
void FUN_01033dac(int param_1,undefined1 param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined2 local_64 [8];
  undefined4 local_54 [9];
  
  iVar3 = DAT_010343cc;
  fVar2 = DAT_010340a0;
  iVar4 = DAT_010343cc + param_1 * 0x5c;
  uVar11 = 0x100;
  if (*(char *)(iVar4 + 0x35b) == '\x01') {
    uVar11 = 0x200;
  }
  for (uVar10 = 0; uVar10 < uVar11; uVar10 = uVar10 + 1) {
    lVar12 = FUN_010333c8(uVar10,*(undefined1 *)(iVar4 + 0x35b));
    uVar13 = FUN_0101369c((int)(lVar12 << 2),(int)((ulonglong)(lVar12 << 2) >> 0x20),
                          *(undefined4 *)(iVar4 + 0x35c),0);
    uVar5 = FUN_010332fa((int)(uVar13 >> 2),(int)((uVar13 >> 2) >> 0x20));
    FUN_01033cf0(param_1,local_54,uVar5,(short)param_1 * 0x1ac + iVar3 + 0xbc,
                 *(undefined4 *)(iVar4 + 0x360),*(undefined1 *)(iVar4 + 0x35a));
    iVar9 = 0;
    do {
      FUN_01033ef0(local_54[iVar9 * 2]);
      FUN_010343fc();
      fVar6 = (float)FUN_01033ee8();
      FUN_01033ef0(local_54[iVar9 * 2 + 1]);
      FUN_010343fc();
      fVar7 = (float)FUN_01033ee8();
      uVar5 = FUN_01033ef4(fVar6 * fVar6 + fVar7 * fVar7);
      FUN_0103ba18(uVar5);
      fVar8 = (float)FUN_01033ee8();
      if (fVar8 < DAT_01034114 == (NAN(fVar8) || NAN(DAT_01034114))) {
        fVar6 = (fVar6 * fVar2) / fVar8;
        fVar7 = (fVar7 * fVar2) / fVar8;
      }
      *(short *)(local_54 + iVar9 + -4) = (short)(int)fVar6;
      iVar1 = iVar9 * 4;
      iVar9 = iVar9 + 1;
      *(short *)((int)local_54 + iVar1 + -0xe) = (short)(int)fVar7;
    } while (iVar9 < 4);
    FUN_01024d4a(uVar10,param_1,param_2,local_64);
  }
  return;
}

