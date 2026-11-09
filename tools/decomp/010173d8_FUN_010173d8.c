
undefined8 FUN_010173d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  uVar5 = 0;
  if (param_1 < 2) {
    iVar4 = *(int *)(&DAT_0101753c + param_1 * 4);
    uVar1 = FUN_0102fb60();
    uVar2 = FUN_0102fb6c();
    iVar3 = DAT_010174ec + param_1 * 0xbc;
    fVar6 = (float)VectorUnsignedToFloat(*(undefined4 *)(iVar3 + 0x40),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar6 = (2.0 / (fVar6 * DAT_010174c0)) / DAT_010174c4;
    fVar8 = (float)VectorFloatToUnsignedFixed(uVar1,0x10,8);
    fVar9 = (float)VectorFloatToUnsignedFixed(uVar2,0x10,0xb);
    uVar7 = (uint)((fVar8 * fVar6) / fVar9 + 0.5);
    if (((int)(fVar6 * 1.5) & 0xffffU) <= (uVar7 & 0xffff)) {
      uVar5 = 0x2404;
      uVar7 = (int)(fVar6 * 1.5);
    }
    if ((uVar7 & 0xffff) <= ((int)(fVar6 * 0.5) & 0xffffU)) {
      uVar5 = 0x2405;
      uVar7 = (int)(fVar6 * 0.5);
    }
    if (0x1ff < (uVar7 & 0xffff)) {
      uVar7 = 0x1ff;
      uVar5 = 0x2406;
    }
    uVar7 = uVar7 * 2 - 1 & 0xffff;
    if (*(uint *)(iVar3 + 0x24) < DAT_01017518) {
      uVar7 = 0x3ff;
    }
    *(char *)(iVar4 + 0x1f) = (char)(uVar7 >> 2);
    pin_update(iVar4 + 0x20,3,uVar7 & 3);
    return CONCAT44(param_4,uVar5);
  }
  return CONCAT44(param_4,0x2901);
}

