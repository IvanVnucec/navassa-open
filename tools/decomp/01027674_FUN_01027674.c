
undefined8 FUN_01027674(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar8;
  float local_28;
  float local_24;
  float local_20;
  
  local_24 = 0.0;
  local_20 = 1.0;
  pfVar2 = (float *)0x0;
  if (param_5 != 0) {
    pfVar2 = &local_28;
  }
  if (param_5 == 0) {
    pfVar2 = &local_20;
  }
  pfVar5 = (float *)(param_2 + 0x24c);
  *(undefined4 *)(param_2 + 0x250) = 0;
  *pfVar5 = 0.0;
  uVar7 = 1;
  do {
    iVar6 = *(int *)(param_1 + 8);
    local_28 = *(float *)(iVar6 + uVar7 * 4 + 4);
    if ((int)((*(uint *)(param_2 + 400) >> (uVar7 & 0xff)) << 0x1f) < 0) {
      *(float *)(param_2 + 0x250) =
           *(float *)(param_2 + 0x250) +
           *(float *)(param_2 + uVar7 * 4) * *pfVar2 * *(float *)(param_2 + 200 + uVar7 * 4);
      *pfVar5 = *pfVar5 + *pfVar2 * *pfVar2 * *(float *)(param_2 + 200 + uVar7 * 4);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x18);
  uVar8 = FUN_0102777a();
  iVar3 = (int)((ulonglong)uVar8 >> 0x20);
  pfVar1 = (float *)uVar8;
  *param_3 = extraout_s1;
  pfVar2 = pfVar1;
  if (pfVar1 != (float *)0x0) {
    pfVar2 = &local_28;
  }
  if (pfVar1 == (float *)0x0) {
    pfVar2 = &local_24;
  }
  *(undefined4 *)(param_2 + 0x250) = 0;
  *pfVar5 = 0.0;
  uVar7 = 1;
  do {
    local_28 = *(float *)(iVar6 + uVar7 * 4 + 0x68);
    if ((int)((*(uint *)(iVar3 + 400) >> (uVar7 & 0xff)) << 0x1f) < 0) {
      iVar4 = iVar3 + uVar7 * 4;
      *(float *)(param_2 + 0x250) =
           *(float *)(param_2 + 0x250) +
           (*(float *)(iVar4 + 300) - *(float *)(iVar4 + 100) * *pfVar2) * *(float *)(iVar4 + 200);
      *pfVar5 = *pfVar5 + *(float *)(iVar4 + 200) * *(float *)(iVar4 + 200);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 0x18);
  FUN_0102777a();
  *param_4 = extraout_s1_00;
  return CONCAT44(local_24,local_28);
}

