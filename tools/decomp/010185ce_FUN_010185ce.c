
undefined8
FUN_010185ce(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar9 = DAT_0101929c;
  puVar2 = DAT_01018f68;
  DAT_01018f68[2] = param_1[2];
  iVar10 = 0;
  *puVar2 = *param_1;
  puVar2[1] = param_1[1];
  uVar8 = DAT_010192a8;
  if ((uint)(DAT_010192a0 + puVar2[2]) < uVar9) {
    if (((uint)*DAT_010192a4 << 0x1b) >> 0x1c == 0) {
      uVar9 = DAT_010192a4[2] & 7;
    }
    else {
      uVar9 = ((uint)DAT_010192a4[2] << 0x19) >> 0x1d;
    }
    uVar9 = (uint)param_1[2] / (uint)(1 << uVar9);
    puVar2[0xb] = uVar9;
    if (uVar8 <= uVar9) {
      iVar10 = 0xcb00;
    }
    uVar8 = 1 << (((uint)*DAT_010190d0 << 0x1b) >> 0x1d);
    uVar9 = (uint)param_1[2] / uVar8;
    puVar2[9] = uVar9;
    if (iVar10 == 0) {
      FUN_010186ec(uVar9,uVar8,1);
      puVar3 = DAT_010190d4;
      if ((int)((uint)(byte)DAT_010190d4[0x15] << 0x1f) < 0) {
        uVar6 = puVar2[9];
      }
      else {
        uVar6 = puVar2[1];
      }
      puVar2[3] = uVar6;
      uVar9 = DAT_010193c0;
      uVar7 = (uint)param_1[2] / (uint)(1 << (*DAT_010192ac & 7));
      puVar2[6] = uVar7;
      uVar8 = uVar7;
      if (uVar9 < uVar7) {
        uVar8 = 2;
      }
      uVar5 = (undefined1)uVar8;
      if (uVar7 <= uVar9) {
        uVar5 = 1;
      }
      *(undefined1 *)((int)puVar2 + 0x1d) = uVar5;
      if (*(char *)(param_1 + 4) != '\0') {
        uVar9 = DAT_010192b0;
      }
      if (uVar9 << 1 < (uint)puVar2[6]) {
        uVar5 = 4;
      }
      else if (uVar9 < (uint)puVar2[6]) {
        uVar5 = 2;
      }
      else {
        uVar5 = 1;
      }
      *(undefined1 *)(puVar2 + 7) = uVar5;
      uVar9 = DAT_010192b4;
      uVar8 = (uint)puVar2[9] / DAT_010192a8;
      uVar5 = (undefined1)uVar8;
      puVar3[1] = uVar5;
      uVar8 = (uint)puVar2[9] / ((uVar8 & 0xff) + 1);
      puVar2[8] = uVar8;
      pcVar4 = DAT_010192b8;
      cVar1 = (char)(uVar8 / uVar9) + -1;
      *(char *)(puVar2 + 0xc) = cVar1;
      *pcVar4 = cVar1;
      puVar2[10] = puVar2[8];
      *puVar3 = uVar5;
      pin_update(DAT_01019464,0x30,((uint)puVar2[10] / DAT_010192bc + 1) * 0x10000000 >> 0x18);
    }
  }
  else {
    iVar10 = 0xcb00;
  }
  return CONCAT44(param_4,iVar10);
}

