
undefined4 FUN_01030658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  undefined4 unaff_s19;
  float local_38 [6];
  
  local_38[0] = 0.0;
  local_38[1] = 0.0;
  local_38[2] = 0.0;
  local_38[3] = 0.0;
  local_38[4] = 0.0;
  local_38[5] = 0.0;
  iVar3 = 0;
  do {
    uVar5 = VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = (float)FUN_01011240(unaff_s19,uVar5);
    iVar1 = iVar3 * 4;
    local_38[iVar3 + 3] = fVar4;
    pfVar2 = local_38 + iVar3;
    iVar3 = iVar3 + 1;
    *pfVar2 = *(float *)(param_1 + iVar1) * fVar4;
  } while (iVar3 < 3);
  return param_4;
}

