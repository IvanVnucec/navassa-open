
void FUN_0102742c(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float afStack_48 [6];
  float local_30 [5];
  
  uVar1 = 0;
  while (uVar2 = uVar1, uVar2 < param_3) {
    for (uVar1 = 0; uVar1 <= uVar2; uVar1 = uVar1 + 1) {
      fVar5 = DAT_01027670;
      for (uVar4 = 0; uVar4 < uVar1; uVar4 = uVar4 + 1) {
        fVar5 = fVar5 + *(float *)(param_1 + (uVar4 + uVar1 * param_3) * 4) *
                        *(float *)(param_1 + (uVar4 * param_3 + uVar2) * 4);
      }
      iVar3 = uVar2 + uVar1 * param_3;
      *(float *)(param_1 + iVar3 * 4) = *(float *)(param_1 + iVar3 * 4) - fVar5;
    }
    fVar5 = 1.0 / *(float *)(param_1 + (uVar2 * param_3 + uVar2) * 4);
    afStack_48[uVar2 + 6] = fVar5;
    for (uVar4 = uVar2 + 1; uVar1 = uVar2 + 1, uVar4 < param_3; uVar4 = uVar4 + 1) {
      fVar6 = DAT_01027670;
      for (uVar1 = 0; uVar1 < uVar2; uVar1 = uVar1 + 1) {
        fVar6 = fVar6 + *(float *)(param_1 + (uVar1 + uVar4 * param_3) * 4) *
                        *(float *)(param_1 + (uVar1 * param_3 + uVar2) * 4);
      }
      iVar3 = uVar2 + uVar4 * param_3;
      *(float *)(param_1 + iVar3 * 4) = (*(float *)(param_1 + iVar3 * 4) - fVar6) * fVar5;
    }
  }
  afStack_48[1] = (float)*param_2;
  for (uVar1 = 1; uVar1 < param_3; uVar1 = uVar1 + 1) {
    fVar5 = DAT_01027670;
    for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
      fVar5 = fVar5 + *(float *)(param_1 + (uVar1 * param_3 + uVar2) * 4) * afStack_48[uVar2 + 1];
    }
    afStack_48[uVar1 + 1] = (float)param_2[uVar1] - fVar5;
  }
  param_2[param_3 - 1] = afStack_48[param_3] * afStack_48[param_3 + 5];
  for (uVar1 = param_3 - 2; fVar5 = DAT_01027670, uVar2 = uVar1, -1 < (int)uVar1; uVar1 = uVar1 - 1)
  {
    while (uVar2 = uVar2 + 1, uVar2 < param_3) {
      fVar5 = fVar5 + *(float *)(param_1 + (uVar1 * param_3 + uVar2) * 4) * (float)param_2[uVar2];
    }
    param_2[uVar1] = (afStack_48[uVar1 + 1] - fVar5) * afStack_48[uVar1 + 6];
  }
  return;
}

