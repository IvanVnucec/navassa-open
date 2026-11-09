
undefined8
FUN_0100c080(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  
  iVar10 = *(int *)(param_1 + 0xc);
  *(undefined1 *)(iVar10 + 0x44) = 0;
  if (*(char *)(iVar10 + 0xc) == '\0') {
    iVar6 = FUN_0100c3a2(param_1);
    iVar7 = 0x2114;
    if (iVar6 == 0x2114) goto LAB_0100c252;
  }
  FUN_0101d8cc(*param_1,1,0);
  *(undefined2 *)(iVar10 + 0xa0) = *(undefined2 *)(param_1 + 0x1a);
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_1 + 0x1a);
  iVar6 = *(int *)(param_1 + 0xc);
  cVar1 = *(char *)(iVar6 + 0xe);
  bVar13 = cVar1 != '\0';
  if (!bVar13) {
    cVar1 = *(char *)(iVar6 + 0xf);
  }
  pcVar8 = (char *)(iVar6 + 8);
  if (bVar13 || cVar1 != '\0') {
LAB_0100c0e0:
    *(undefined4 *)(iVar6 + 0x34) = 1;
  }
  else {
    cVar1 = *pcVar8;
    cVar2 = *(char *)(iVar6 + 9);
    bVar13 = cVar1 == cVar2;
    if (bVar13) {
      cVar1 = *(char *)(iVar6 + 0xd);
      cVar2 = *(char *)(iVar6 + 0xc);
    }
    if (!bVar13 || cVar1 != cVar2) goto LAB_0100c0e0;
  }
  cVar1 = *(char *)(iVar6 + 0xc);
  cVar2 = *(char *)(iVar6 + 0xd);
  if (*pcVar8 == *(char *)(iVar6 + 9)) {
    if (cVar2 != cVar1) goto LAB_0100c0f8;
  }
  else {
    *pcVar8 = *(char *)(iVar6 + 9);
LAB_0100c0f8:
    if (cVar2 != cVar1) {
      *(char *)(iVar6 + 0xd) = cVar1;
    }
  }
  cVar1 = *(char *)(iVar6 + 0xe);
  if (cVar1 == '\0') {
    cVar2 = *(char *)(iVar6 + 0xf);
  }
  if (cVar1 != '\0' || cVar2 != '\0') {
    iVar7 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar6 + 0x10) = DAT_0100cd8c;
    *(undefined4 *)(iVar6 + 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x18) = 0;
    if (cVar1 != '\0') {
      *(undefined1 *)(iVar6 + 0xe) = 0;
    }
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(iVar7 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = fVar14 * DAT_0100c464;
    *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfffe;
    *(float *)(param_1 + 0x28) = fVar14;
    if (*(char *)(iVar6 + 0xf) != '\0') {
      FUN_0100c7b2(param_1);
      *(undefined1 *)(iVar6 + 0xf) = 0;
    }
  }
  bVar9 = 0;
  do {
    *(byte *)(iVar10 + 0xa6) = bVar9;
    FUN_0100c31c(param_1);
    if (*(char *)(iVar10 + 0xc) == '\0') {
      FUN_0100b8d8(param_1);
    }
    *(char *)(iVar10 + 0x38) = '\0';
    iVar7 = FUN_0101e17c(param_1);
    if (iVar7 != 0) break;
    if (*(char *)(iVar10 + 0x38) != '\0') {
      *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + 1;
      break;
    }
    FUN_0100c820(param_1);
    if (bVar9 == 1) {
      FUN_0100c938(param_1);
      if (*(char *)(iVar10 + 0xc) == '\x01') {
        iVar6 = *(int *)(param_1 + 0xc);
        psVar12 = (short *)(iVar6 + 100);
        sVar3 = *(short *)(*(int *)(param_1 + 4) + 0x1c);
        sVar4 = -sVar3;
        if (sVar3 < *psVar12) {
          *psVar12 = sVar3;
        }
        if (*psVar12 < sVar4) {
          *psVar12 = sVar4;
        }
        if (sVar3 < *(short *)(iVar6 + 0x66)) {
          *(short *)(iVar6 + 0x66) = sVar3;
        }
        if (*(short *)(iVar6 + 0x66) < sVar4) {
          *(short *)(iVar6 + 0x66) = sVar4;
        }
      }
      iVar11 = *(int *)(param_1 + 0xc);
      *(undefined1 *)(iVar11 + 0x45) = 0;
      psVar12 = (short *)(iVar11 + 100);
      iVar6 = *(int *)(param_1 + 0x14);
      *(short *)(iVar11 + 0x60) = *(short *)(iVar6 + 0xc) - *(short *)(iVar11 + 0x60);
      *(short *)(iVar11 + 0x62) = *(short *)(iVar6 + 0xe) - *(short *)(iVar11 + 0x62);
      *psVar12 = *(short *)(iVar6 + 0xc) - *psVar12;
      *(short *)(iVar11 + 0x66) = *(short *)(iVar6 + 0xe) - *(short *)(iVar11 + 0x66);
      uVar5 = FUN_0100c4e2(psVar12,(int)*(short *)(*(int *)(param_1 + 4) + 0x1a));
      *(undefined1 *)(iVar11 + 0x44) = uVar5;
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = *(undefined4 *)psVar12;
      FUN_0100c62c(param_1);
      if (*(char *)(iVar11 + 0xc) == '\x01') {
        param_1[0x10e] = 1;
        param_1[0x10f] = **(undefined1 **)(param_1 + 0x14);
      }
      else {
        FUN_0100c50c(*param_1);
      }
    }
    bVar9 = bVar9 + 1;
  } while (bVar9 < 2);
  FUN_0101d920(*param_1,1);
LAB_0100c252:
  return CONCAT44(param_4,iVar7);
}

