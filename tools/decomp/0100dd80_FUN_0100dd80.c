
undefined4 FUN_0100dd80(undefined4 param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  uint *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (*(char *)(param_2 + 4) == '\x01') {
    FUN_0100dc92();
    iVar10 = DAT_0100e09c;
    pbVar5 = DAT_0100e098;
    pbVar4 = DAT_0100e094;
    puVar3 = DAT_0100e090;
    piVar2 = DAT_0100e08c;
    if (*DAT_0100e010 != '\0') {
      bVar6 = FUN_0100e0d2(800);
      *pbVar5 = bVar6;
      bVar6 = FUN_0100de3c(*(undefined2 *)(iVar10 + 8),0x32);
      pbVar5[1] = bVar6;
      uVar7 = FUN_0100de3c(*(undefined2 *)(iVar10 + 10),0x32);
      uVar8 = (uint)*pbVar5;
      pbVar5[2] = (byte)uVar7;
      uVar9 = uVar8;
      if (pbVar5[1] < uVar8) {
        uVar9 = (uint)pbVar5[1];
      }
      if (uVar9 < *pbVar4) {
        uVar9 = (uint)*pbVar4;
      }
      if ((int)uVar8 < (int)uVar7) {
        uVar8 = uVar7;
      }
      if ((int)(uint)pbVar4[5] < (int)uVar8) {
        uVar8 = (uint)pbVar4[5];
      }
      uVar7 = 0;
      do {
        if (pbVar4[uVar7] == uVar9) break;
        if (uVar9 < pbVar4[uVar7]) {
          uVar7 = uVar7 - 1;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 6);
      *puVar3 = uVar7;
      iVar10 = 0;
      while( true ) {
        if (((int)(6 - uVar7) <= iVar10) || (pbVar4[5 - iVar10] == uVar8)) goto LAB_0100de1a;
        if ((int)(uint)pbVar4[5 - iVar10] < (int)uVar8) break;
        iVar10 = iVar10 + 1;
      }
      iVar10 = iVar10 + -1;
LAB_0100de1a:
      *piVar2 = *piVar2 - iVar10;
    }
    bVar6 = pbVar4[*puVar3];
    *DAT_0100e0a0 = bVar6;
    bVar1 = pbVar4[*piVar2];
    *DAT_0100e0a4 = bVar1;
    *DAT_0100e0a8 = (ushort)bVar1 - (ushort)bVar6;
  }
  return 0;
}

