
/* WARNING: Removing unreachable block (ram,0x01010e72) */
/* WARNING: Removing unreachable block (ram,0x01010e70) */
/* WARNING: Removing unreachable block (ram,0x010111c2) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_01011240(float param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  undefined4 in_r3;
  bool bVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  int aiStack_20 [2];
  
  bVar4 = ABS(param_2) == 0.0;
  if (!bVar4) {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(param_1 == 1.0) << 0x1e;
    bVar4 = SUB41(in_fpscr >> 0x1e,0);
  }
  if (bVar4 == false) {
    uVar5 = in_fpscr & 0xfffffff | (uint)(param_1 == -1.0) << 0x1e;
    if ((((byte)(uVar5 >> 0x1e) == 0) || (((int)param_2 << 1) >> 0x18 != -1)) ||
       (((uint)param_2 & 0x7fffff) != 0)) {
      if (((((int)param_1 << 1) >> 0x18 == -1) || (ABS(param_1) == 0.0)) ||
         (((int)param_2 << 1) >> 0x18 == -1)) {
        if ((((((int)param_1 << 1) >> 0x18 != -1) || (((uint)param_1 & 0x7fffff) == 0)) &&
            ((((int)param_2 << 1) >> 0x18 != -1 || (((uint)param_2 & 0x7fffff) == 0)))) &&
           (((((((int)param_1 << 1) >> 0x18 != -1 || (((uint)param_1 & 0x7fffff) != 0)) &&
              (((int)param_2 << 1) >> 0x18 == -1)) &&
             ((((uint)param_2 & 0x7fffff) == 0 && ((uint)ABS(param_1) < 0x800000)))) &&
            (aiStack_20[0] = 0, ABS(param_1) != 0.0)))) {
          FUN_010259a4(aiStack_20);
        }
      }
      else {
        fVar3 = param_2;
        if ((int)param_2 << 1 != 0) {
          iVar1 = -((uint)((int)param_2 << 1) >> 0x18);
          uVar2 = iVar1 + 0x96;
          if (0x17 < (int)uVar2) {
            fVar3 = (float)((uint)param_2 & 0x80000000);
          }
          if ((iVar1 + 0x7e < 0 != SBORROW4(uVar2,0x18)) && (0 < (int)uVar2)) {
            fVar3 = (float)(((uint)fVar3 >> (uVar2 & 0xff)) << (uVar2 & 0xff));
          }
        }
        bVar4 = -1 < (int)param_1;
        if (!bVar4) {
          uVar5 = in_fpscr & 0xfffffff | (uint)(param_2 == fVar3) << 0x1e;
          bVar4 = SUB41(uVar5 >> 0x1e,0);
        }
        if (bVar4 != false) {
          fVar3 = ABS(param_1);
          if ((uint)fVar3 < 0x800000) {
            aiStack_20[0] = 0;
            if (fVar3 != 0.0) {
              param_1 = (float)FUN_010259a4(aiStack_20);
            }
          }
          else {
            aiStack_20[0] = ((uint)fVar3 >> 0x17) - 0x7e;
            param_1 = (float)((uint)param_1 & 0x807fffff | 0x3f000000);
          }
          if ((int)param_1 < 0) {
            param_1 = ABS(param_1);
            uVar5 = uVar5 & 0xfffffff;
          }
          if (param_1 < fRam01011220) {
            aiStack_20[0] = aiStack_20[0] + -1;
            param_1 = param_1 * 2.0;
          }
          fVar6 = param_1 + -1.0;
          fVar3 = fVar6 / (param_1 + 1.0);
          fVar7 = fVar3 * fVar3;
          fVar6 = fVar6 + ((fRam0101122c + (fRam01011228 + fVar7 * fRam01011224) * fVar7) * fVar7 -
                          fVar6) * fVar3;
          fVar7 = (float)VectorSignedToFloat(aiStack_20[0],(byte)((uVar5 & 0xfffffff) >> 0x15) & 3);
          fVar3 = (fVar7 + fVar6 * fRam01011230) * param_2;
          if ((fRam01011234 <= fVar3) && (fVar3 < fRam01011238 != (NAN(fVar3) || NAN(fRam01011238)))
             ) {
            if ((int)fVar3 < 0) {
              fVar3 = fVar3 + -0.5;
            }
            else {
              fVar3 = fVar3 + 0.5;
            }
            fVar8 = (float)VectorSignedToFloat((int)fVar3,(byte)((uVar5 & 0xfffffff) >> 0x15) & 3);
            FUN_010259ec(fVar6 * param_2 + (fVar7 * param_2 - fVar8) * fRam0101123c,0x3f800000,
                         (int)fVar3);
          }
        }
      }
    }
  }
  return in_r3;
}

