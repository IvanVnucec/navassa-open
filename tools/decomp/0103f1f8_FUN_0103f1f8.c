
undefined4
FUN_0103f1f8(float param_1,float param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_28;
  int local_24;
  
  *param_3 = 0;
  if (((((((int)param_1 << 1) >> 0x18 != -1) || (((uint)param_1 & 0x7fffff) != 0)) &&
       ((((int)param_2 << 1) >> 0x18 != -1 || (((uint)param_2 & 0x7fffff) != 0)))) &&
      ((((int)param_1 << 1) >> 0x18 != -1 || (((uint)param_1 & 0x7fffff) == 0)))) &&
     ((((int)param_2 << 1) >> 0x18 != -1 || (((uint)param_2 & 0x7fffff) == 0)))) {
    fVar1 = ABS(param_1);
    if ((uint)fVar1 < 0x800000) {
      local_28 = 0;
      if (fVar1 != 0.0) {
        param_1 = (float)FUN_010259a4(param_1,&local_28);
      }
    }
    else {
      local_28 = ((uint)fVar1 >> 0x17) - 0x7e;
      param_1 = (float)((uint)param_1 & 0x807fffff | 0x3f000000);
    }
    fVar1 = ABS(param_2);
    if ((uint)fVar1 < 0x800000) {
      local_24 = 0;
      if (fVar1 != 0.0) {
        param_2 = (float)FUN_010259a4(param_2,&local_24);
      }
    }
    else {
      local_24 = ((uint)fVar1 >> 0x17) - 0x7e;
      param_2 = (float)((uint)param_2 & 0x807fffff | 0x3f000000);
    }
    iVar4 = local_28;
    fVar2 = ABS(param_1);
    fVar3 = ABS(param_2);
    fVar1 = fVar3;
    if (ABS(param_2) == 0.0) {
      if (ABS(param_1) == 0.0) {
        return param_6;
      }
    }
    else if (((ABS(param_1) == 0.0) || (local_28 < local_24)) ||
            ((local_28 == local_24 && ((int)((uint)(fVar2 < fVar3) << 0x1f) < 0)))) {
      local_28 = local_24;
      local_24 = iVar4;
      fVar1 = fVar2;
      fVar2 = fVar3;
    }
    iVar4 = ((int)(local_28 + ((uint)(local_28 >> 1) >> 0x1e)) >> 2) << 1;
    if (iVar4 == 0) {
      iVar4 = 2;
    }
    *param_3 = iVar4;
    uVar5 = (uint)ABS(fVar2) >> 0x17;
    iVar6 = (local_28 - iVar4) + uVar5;
    if ((uVar5 == 0) || (iVar6 < 1)) {
      if (ABS(fVar2) != 0.0) {
        fVar2 = (float)FUN_0103856c(fVar2,local_28 - iVar4);
      }
    }
    else if (iVar6 < 0xff) {
      fVar2 = (float)((uint)fVar2 & 0x807fffff | iVar6 * 0x800000);
    }
    else {
      fVar2 = (float)((uint)fVar2 & 0x80000000 | 0x7f800000);
    }
    uVar5 = (uint)ABS(fVar1) >> 0x17;
    iVar6 = (local_24 - iVar4) + uVar5;
    if ((uVar5 == 0) || (iVar6 < 1)) {
      if (ABS(fVar1) != 0.0) {
        fVar1 = (float)FUN_0103856c(fVar1,local_24 - iVar4);
      }
    }
    else if (iVar6 < 0xff) {
      fVar1 = (float)((uint)fVar1 & 0x807fffff | iVar6 * 0x800000);
    }
    else {
      fVar1 = (float)((uint)fVar1 & 0x80000000 | 0x7f800000);
    }
    fVar3 = fVar2 - fVar1;
    if (fVar3 != fVar2) {
      if ((int)((uint)(fVar1 < fVar3) << 0x1f) < 0) {
        FUN_01036d04((fVar2 / fVar1) * (fVar2 / fVar1) + 1.0);
      }
      else {
        uVar7 = FUN_01012c10(fVar3 / fVar1);
        uVar7 = FUN_010200e0((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,0x40000000);
        uVar8 = FUN_01012c10(fVar3 / fVar1);
        FUN_0101f250((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,
                     (int)((ulonglong)uVar7 >> 0x20));
        fVar1 = (float)FUN_0101f3f4();
        FUN_01036d04(fVar1 + 2.0);
      }
    }
  }
  return param_6;
}

