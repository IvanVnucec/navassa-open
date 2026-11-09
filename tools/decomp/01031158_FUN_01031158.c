
undefined4 FUN_01031158(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  
  fVar7 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_2 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 / DAT_010313bc;
  bVar1 = fVar7 < DAT_010313b8;
  *(float *)(param_2 + 0x10) = fVar7;
  iVar6 = DAT_010313f4;
  if (((int)((uint)bVar1 << 0x1f) < 0) ||
     (fVar7 < DAT_010313c0 == (NAN(fVar7) || NAN(DAT_010313c0)))) {
    uVar5 = 0x2408;
  }
  else {
    *(float *)(param_2 + 0x14) = fVar7;
    if (*(char *)(iVar6 + 2) == '\0') {
      uVar2 = FUN_01031274(fVar7,fVar7,0x3f800000,1,param_1);
      *(undefined1 *)(param_2 + 0x19) = uVar2;
      uVar2 = FUN_01031274(*(float *)(param_2 + 0x14) * 0.75,*(undefined4 *)(param_2 + 0x10),
                           0x3f800000,2,param_1);
    }
    else {
      FUN_0103126c();
      uVar2 = FUN_01031348();
      *(undefined1 *)(param_2 + 0x19) = uVar2;
      fVar7 = (float)FUN_0103126c();
      uVar2 = (undefined1)(int)fVar7;
    }
    FUN_0103126c();
    uVar3 = FUN_01031348();
    *(undefined1 *)(param_2 + 0x1b) = uVar3;
    *(undefined1 *)(param_2 + 0x1a) = uVar2;
    iVar6 = FUN_01034dba(param_1);
    if (iVar6 == 1) {
      *(char *)(param_2 + 0x19) = *(char *)(param_2 + 0x19) + '<';
      *(char *)(param_2 + 0x1a) = *(char *)(param_2 + 0x1a) + '<';
      *(char *)(param_2 + 0x1b) = *(char *)(param_2 + 0x1b) + '<';
    }
    fVar7 = *(float *)(param_2 + 0x14) * DAT_010313cc;
    *(char *)(param_2 + 0x1c) =
         (char)(int)((*(float *)(param_2 + 0x14) * DAT_010313c4) / DAT_010313c8);
    FUN_0101ee64((fVar7 * 0.75) / DAT_010313c8);
    uVar4 = FUN_01031348();
    *(undefined2 *)(param_2 + 0x1e) = uVar4;
    uVar5 = 0;
  }
  return uVar5;
}

