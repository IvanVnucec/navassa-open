
void FUN_01041a06(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *param_2;
  fVar3 = *(float *)(iVar1 + 0x20);
  if (-1 < (int)((uint)(*(float *)(iVar1 + 0x2c) < *(float *)(iVar1 + 0x20)) << 0x1f)) {
    fVar3 = *(float *)(iVar1 + 0x2c);
  }
  fVar4 = *(float *)(iVar1 + 0x24);
  if (-1 < (int)((uint)(*(float *)(iVar1 + 0x30) < *(float *)(iVar1 + 0x24)) << 0x1f)) {
    fVar4 = *(float *)(iVar1 + 0x30);
  }
  fVar5 = *(float *)(iVar1 + 0x28);
  if (-1 < (int)((uint)(*(float *)(iVar1 + 0x34) < *(float *)(iVar1 + 0x28)) << 0x1f)) {
    fVar5 = *(float *)(iVar1 + 0x34);
  }
  if ((int)((uint)(fVar3 < fVar4) << 0x1f) < 0) {
    if (-1 < (int)((uint)(fVar5 < fVar3) << 0x1f)) {
      *(undefined1 *)(iVar1 + 0x3c) = 0;
      piVar2 = (int *)(iVar1 + 0x14);
      goto LAB_01041a86;
    }
  }
  else if (-1 < (int)((uint)(fVar5 < fVar4) << 0x1f)) {
    *(undefined1 *)(iVar1 + 0x3c) = 1;
    piVar2 = (int *)(iVar1 + 0x18);
    goto LAB_01041a86;
  }
  *(undefined1 *)(iVar1 + 0x3c) = 2;
  piVar2 = (int *)(iVar1 + 0x1c);
LAB_01041a86:
  param_2[2] = *piVar2;
  FUN_01041d04(param_1,param_2 + 2);
  return;
}

