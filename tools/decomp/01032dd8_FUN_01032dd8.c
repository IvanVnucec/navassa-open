
undefined8 FUN_01032dd8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  float fVar2;
  char cVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  
  FUN_0102229c(param_4,0x41,1);
  fVar2 = DAT_010330d8;
  iVar6 = 0;
  if ((param_1 & 0xc) == 0 || (param_1 & 0xc) == 0xc) {
    iVar6 = 0x4402;
  }
  if ((int)(param_1 << 0x1d) < 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = extraout_r1;
    if ((int)(param_1 << 0x1c) < 0) {
      uVar4 = 1;
    }
  }
  if (iVar6 == 0) {
    uVar1 = (ushort)uVar4 & 0xff;
    iVar5 = (short)uVar1 * 0x5c + DAT_010335bc;
    *param_4 = *(undefined4 *)(iVar5 + 0x368);
    param_4[1] = *(undefined4 *)(iVar5 + 0x360);
    uVar10 = VectorFloatToUnsigned(*(float *)(iVar5 + 0x374) * fVar2,3);
    param_4[2] = uVar10;
    uVar10 = VectorFloatToUnsigned(*(float *)(iVar5 + 0x370) * fVar2,3);
    param_4[3] = uVar10;
    param_4[4] = *(undefined4 *)(iVar5 + 0x39c);
    param_4[5] = *(undefined4 *)(iVar5 + 0x3a0);
    *(undefined2 *)(param_4 + 6) = *(undefined2 *)(iVar5 + 0x3a6);
    *(undefined2 *)((int)param_4 + 0x1a) = *(undefined2 *)(iVar5 + 0x3a4);
    cVar3 = *(char *)(iVar5 + 0x364);
    if (cVar3 != '\0') {
      cVar3 = '\x01';
    }
    *(char *)(param_4 + 7) = cVar3;
    cVar3 = *(char *)(iVar5 + 0x398);
    if (cVar3 != '\0') {
      cVar3 = '\x01';
    }
    *(char *)((int)param_4 + 0x1d) = cVar3;
    *(undefined1 *)((int)param_4 + 0x1e) = 0;
    uVar10 = FUN_01024bec(uVar4 & 0xff);
    param_4[8] = uVar10;
    FUN_01032f04(*(undefined4 *)(iVar5 + 0x3a8),DAT_0103314c);
    uVar9 = FUN_010343fc();
    uVar10 = FUN_01035c84((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    param_4[9] = uVar10;
    iVar8 = (short)uVar1 * 0xc;
    iVar7 = DAT_010335c4 + iVar8;
    *(undefined1 *)(param_4 + 10) = *(undefined1 *)(iVar7 + 1);
    uVar9 = FUN_01012c10(*(undefined4 *)(iVar7 + 4));
    FUN_0101f250((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0,DAT_01033848);
    FUN_010343fc();
    uVar10 = FUN_010343f4();
    param_4[0xb] = uVar10;
    FUN_01032f04(*(undefined4 *)(iVar7 + 8),DAT_01033150);
    uVar9 = FUN_010343fc();
    uVar10 = FUN_01035c84((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    param_4[0xc] = uVar10;
    iVar8 = DAT_01033860 + iVar8;
    param_4[0xd] = *(undefined4 *)(iVar8 + 4);
    param_4[0xe] = *(undefined4 *)(iVar8 + 8);
    param_4[0xf] = *(undefined4 *)(iVar5 + 0x3ac);
    cVar3 = *(char *)(iVar5 + 0x3b0);
    if (cVar3 != '\0') {
      cVar3 = '\x01';
    }
    *(char *)(param_4 + 0x10) = cVar3;
  }
  return CONCAT44(param_4,iVar6);
}

