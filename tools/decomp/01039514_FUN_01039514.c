
void FUN_01039514(int param_1,int param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint in_fpscr;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  
  iVar8 = *(int *)(DAT_01039790 + param_1 * 4);
  iVar9 = iVar8 + 0x123;
  FUN_010027dc(iVar9,0x1e,1);
  uVar4 = FUN_01012c10(DAT_0103977c / *(float *)(param_2 + 0x34));
  uVar11 = FUN_0102fbe0(uVar4);
  uVar2 = FUN_01020608((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  FUN_01015e2c(uVar2);
  pbVar1 = DAT_01039794;
  bVar7 = *(byte *)(iVar8 + 0x132);
  uVar3 = (ushort)*DAT_01039794;
  bVar10 = uVar3 != 0;
  uVar6 = *(byte *)(iVar8 + 0x133) & 3;
  if (bVar10) {
    uVar3 = *(ushort *)(DAT_01039794 + 4);
  }
  uVar5 = (ushort)bVar7 + uVar6 * 0x100;
  if (bVar10 && uVar3 != 0) {
    bVar7 = DAT_01039794[1];
    uVar6 = (ushort)DAT_01039794[2];
  }
  else {
    *(ushort *)(DAT_01039794 + 4) = uVar5;
    pbVar1[1] = bVar7;
    pbVar1[2] = (byte)uVar6;
    *pbVar1 = 1;
    uVar3 = uVar5;
  }
  fVar12 = (float)VectorUnsignedToFloat((uint)uVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)VectorUnsignedToFloat
                            ((uint)*(byte *)(param_2 + 0x46),(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = VectorFloatToUnsigned
                    ((*(float *)(param_2 + 0x30) * DAT_01039780 * *(float *)(param_2 + 8) *
                     fVar12 * DAT_01039784) / (*(float *)(param_2 + 0x2c) * 1.25 * fVar13) + 0.5,3);
  *(undefined4 *)(param_2 + 0x18) = uVar4;
  *(char *)(iVar8 + 0x12a) = (char)uVar4;
  *(char *)(iVar8 + 299) = (char)((uint)*(undefined4 *)(param_2 + 0x18) >> 8);
  pin_update(iVar8 + 300,0x3f,*(uint *)(param_2 + 0x18) >> 0x10 & 0x3f);
  *(byte *)(iVar8 + 10) = bVar7;
  pin_update(iVar8 + 0xb,3,uVar6);
  *(byte *)(iVar8 + 0x13) = bVar7;
  FUN_0103950c((byte *)(iVar8 + 0x13),3,uVar6);
  uVar11 = pin_update(iVar8 + 0xb,4,4);
  FUN_0103950a((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),4);
  FUN_010027dc(iVar9,7,6);
  pin_update(iVar9,0x80,0);
  return;
}

