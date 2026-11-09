
void FUN_01041760(int param_1,int param_2,short *param_3,undefined4 *param_4,int param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auStack_38 [4];
  float local_34;
  float local_30;
  
  iVar3 = DAT_01041ce8;
  sVar1 = *(short *)(param_1 + 4);
  sVar2 = sVar1 / 2 + -2;
  iVar6 = (int)(short)((short)param_2 - sVar2);
  iVar5 = (int)(short)(sVar2 + (short)param_2);
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  if (sVar1 <= iVar5) {
    iVar5 = sVar1 + -1;
  }
  uVar4 = (iVar5 - iVar6) + 1U & 0xffff;
  FUN_01016164(DAT_01041ce8 + iVar6 * 2,DAT_01041ce8 + 0x2c + iVar6 * 4);
  fVar9 = (float)FUN_0101ee64(-(local_34 / (local_30 * 2.0)));
  bVar7 = local_30 < 0.0;
  bVar8 = NAN(local_30);
  if (bVar7 == bVar8) {
    uVar4 = (uint)*(short *)(iVar3 + iVar6 * 2);
  }
  sVar1 = (short)(int)fVar9;
  if (bVar7 == bVar8) {
    bVar8 = SBORROW4((int)sVar1,uVar4);
    bVar7 = (int)((int)sVar1 - uVar4) < 0;
  }
  if (bVar7 == bVar8) {
    iVar5 = (int)*(short *)(iVar3 + (short)iVar5 * 2);
    bVar8 = SBORROW4(iVar5,(int)sVar1);
    bVar7 = iVar5 - sVar1 < 0;
  }
  if (bVar7 == bVar8) {
    *param_3 = sVar1;
    uVar10 = FUN_01016372((int)sVar1,auStack_38);
    *param_4 = uVar10;
    *(short *)(param_5 + 0x44) = *(short *)(param_5 + 0x44) + 1;
  }
  else {
    *param_3 = *(short *)(iVar3 + param_2 * 2);
    *param_4 = *(undefined4 *)(iVar3 + 0x2c + param_2 * 4);
    *(short *)(param_5 + 0x46) = *(short *)(param_5 + 0x46) + 1;
  }
  return;
}

