
void FUN_0102e77c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  int iVar7;
  
  fVar6 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(DAT_0102e814 + param_1 * 0x58 + 0x38),
                            (byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorUnsignedToFloat
                           (*(undefined4 *)((short)param_1 * 0xbc + DAT_0102e818 + 0x1b8),
                            (byte)(in_fpscr >> 0x15) & 3);
  iVar7 = VectorFloatToUnsigned
                    (fVar5 / (fVar6 * DAT_0102e800 * DAT_0102e804) + DAT_0102e808 + 0.5,3);
  iVar2 = FUN_010173a8(param_1);
  if (iVar2 == 1) {
    uVar4 = iVar7 - 2;
  }
  else {
    uVar4 = iVar7 - 1;
  }
  bVar3 = (byte)uVar4;
  if (9 < (uVar4 & 0xff)) {
    bVar3 = 9;
  }
  uVar1 = DAT_0101750c;
  if (param_1 != 0) {
    uVar1 = DAT_01017510;
  }
  pin_update(uVar1,0xf0,(bVar3 & 0xf) << 4);
  return;
}

