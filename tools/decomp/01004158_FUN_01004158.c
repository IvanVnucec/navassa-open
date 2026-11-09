
void FUN_01004158(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = *(int *)(DAT_010044a8 + *(int *)(param_2 + 0x28) * 8 + param_1 * 4 + 4);
  if (*(int *)(param_2 + 0x28) == 2) {
    bVar3 = 0;
    iVar4 = DAT_010044e8 + param_1 * 3;
    do {
      if (*(char *)(param_1 + param_2 + 0x20) == *(char *)(iVar4 + (uint)bVar3)) {
        uVar5 = (uint)bVar3;
        if (uVar5 != 3) goto LAB_010041f6;
        break;
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < 3);
    bVar3 = 0;
    bVar1 = 0;
    fVar6 = DAT_0100442c;
    do {
      uVar5 = (uint)*(byte *)(param_1 + param_2 + 0x20);
      fVar7 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(iVar4 + (uint)bVar1),(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = in_fpscr & 0xfffffff;
      if (ABS(fVar8 - fVar7) < fVar6) {
        fVar6 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        fVar6 = ABS(fVar6 - fVar7);
        bVar3 = bVar1;
      }
      bVar1 = bVar1 + 1;
    } while (bVar1 < 3);
    uVar5 = (uint)bVar3;
  }
  else {
    uVar5 = 0;
  }
LAB_010041f6:
  *param_3 = *(int *)(iVar2 + 0xc) +
             ((uint)*(byte *)(iVar2 + 9) *
              (uint)*(byte *)(iVar2 + 7) * (uint)*(byte *)(param_2 + 0x2c) +
             (int)(short)(ushort)*(byte *)(iVar2 + 9) *
             (int)(short)(ushort)*(byte *)(*(int *)(param_2 + 0x30) + iVar2 + 4) + uVar5) * 8;
  *param_4 = 8;
  nmi_signal_helper(param_3 != (int *)0x0);
  return;
}

