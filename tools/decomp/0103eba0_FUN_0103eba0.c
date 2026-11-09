
float FUN_0103eba0(int param_1,int param_2)

{
  undefined8 uVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float local_90 [12];
  float local_60 [12];
  undefined4 uVar8;
  
  fVar11 = DAT_0103ee60;
  uVar5 = 0;
  do {
    iVar3 = param_1 + uVar5 * -8;
    uVar1 = *(undefined8 *)(param_1 + uVar5 * 8);
    uVar7 = FUN_0103f186(*(undefined4 *)(iVar3 + 0xb8),*(undefined4 *)(iVar3 + 0xbc));
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar9 = (undefined4)uVar1;
    uVar10 = (undefined4)((ulonglong)uVar1 >> 0x20);
    FUN_01035fb4(uVar9,uVar10,(int)uVar7,uVar8);
    fVar6 = (float)thunk_FUN_0103f19c();
    local_60[uVar5] = fVar6;
    FUN_01035fda((int)uVar7,uVar8,uVar9,uVar10);
    fVar6 = (float)thunk_FUN_0103f19c();
    pfVar2 = local_90 + uVar5;
    uVar5 = uVar5 + 1;
    *pfVar2 = fVar6;
  } while (uVar5 < 0xc);
  iVar3 = 0xb;
  do {
    pfVar4 = local_90 + iVar3;
    local_60[iVar3] = local_60[iVar3] / local_60[0];
    pfVar2 = local_90 + iVar3;
    iVar3 = iVar3 + -1;
    *pfVar2 = *pfVar4 / local_90[0];
  } while (-1 < iVar3);
  uVar5 = 0;
  do {
    pfVar2 = local_90 + uVar5;
    pfVar4 = local_60 + uVar5;
    iVar3 = uVar5 * 4;
    uVar5 = uVar5 + 1;
    fVar11 = fVar11 + (*pfVar2 - *pfVar4) * *(float *)(param_2 + iVar3);
  } while (uVar5 < 0xc);
  return fVar11;
}

