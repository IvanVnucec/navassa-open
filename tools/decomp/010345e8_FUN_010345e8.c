
undefined8 FUN_010345e8(undefined4 param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  iVar6 = 0;
  if (param_2 == (byte *)0x0) {
    iVar6 = 0x4400;
  }
  if ((param_2[2] == 0) || (*(short *)(param_2 + 10) != 0)) {
    if (iVar6 == 0) {
      uVar10 = 0x41800000;
      if (param_2[2] != 0) {
        uVar10 = VectorSignedToFloat((int)*(short *)(param_2 + 10),(byte)(in_fpscr >> 0x15) & 3);
      }
      uVar2 = FUN_01024bec(param_1);
      fVar7 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      bVar1 = param_2[1];
      uVar11 = FUN_01012c10(fVar7 * fVar9);
      uVar11 = FUN_0101f250((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_01034740,DAT_01034744);
      uVar12 = FUN_01012c10(uVar10);
      FUN_0101f250((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar11,
                   (int)((ulonglong)uVar11 >> 0x20));
      FUN_010343fc();
      iVar3 = FUN_010343f4();
      uVar4 = iVar3 + (uint)bVar1;
      uVar5 = 0;
      uVar8 = VectorFloatToUnsigned(uVar10,3);
      if ((int)uVar4 < 0) {
        iVar3 = -uVar4;
        uVar4 = uVar8 * (iVar3 / (int)uVar8) + uVar8 + uVar4;
        uVar5 = ~(iVar3 / (int)uVar8);
      }
      if (uVar8 <= uVar4) {
        uVar5 = (int)uVar4 / (int)uVar8;
        uVar4 = uVar4 - uVar8 * uVar5;
      }
      param_2[1] = (byte)uVar4;
      param_2[0xd] = (byte)uVar4;
      bVar1 = (byte)(*param_2 - uVar5);
      if ((int)(*param_2 - uVar5) < 0) {
        *param_2 = bVar1;
        iVar6 = 0x4400;
      }
      else {
        *param_2 = bVar1;
        if (param_2[2] != 0) {
          *(uint *)(param_2 + 4) = DAT_01034748 + (uint)param_2[1] * 0x2e;
        }
      }
    }
  }
  else {
    iVar6 = 0x4400;
  }
  return CONCAT44(param_4,iVar6);
}

