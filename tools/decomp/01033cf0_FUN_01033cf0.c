
void FUN_01033cf0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 short param_6)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 local_48 [8];
  int iStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  iStack_28 = param_2;
  uStack_24 = param_3;
  iStack_20 = param_4;
  FUN_0103337e(local_48,param_3,param_5);
  fVar2 = DAT_0103402c;
  iVar3 = 0;
  iVar4 = 0;
  do {
    uVar5 = 0;
    *(undefined4 *)(param_2 + iVar4 * 8) = 0;
    *(undefined4 *)(param_2 + 4 + iVar4 * 8) = 0;
    do {
      if ((int)((*(uint *)(DAT_01034714 + param_6 * 0x38 + param_1 * 4 + iVar4 * 0xc) >>
                (uVar5 & 0xff)) << 0x1f) < 0) {
        fVar7 = (float)VectorSignedToFloat(local_48[uVar5],(byte)(in_fpscr >> 0x15) & 3);
        pfVar6 = (float *)(param_2 + iVar4 * 8);
        *pfVar6 = *pfVar6 + fVar7 * *(float *)(param_4 + iVar3 * 8) * fVar2;
        iVar1 = iVar3 * 8;
        iVar3 = iVar3 + 1;
        *(float *)(param_2 + 4 + iVar4 * 8) =
             *(float *)(param_2 + 4 + iVar4 * 8) + fVar7 * *(float *)(param_4 + 4 + iVar1) * fVar2;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}

