
undefined8
FUN_0103cdf4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            int param_5,int param_6,int param_7)

{
  float fVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  
  puVar2 = DAT_0103d5e8;
  *DAT_0103d5e8 = (ushort)(param_6 << 8) | (ushort)(param_7 << 10) | 0x808c;
  uVar5 = VectorUnsignedToFloat(((puVar2[9] & 0xfff) + 1) * 0x200,(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = FUN_01012c10(uVar5);
  uVar6 = VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  uVar13 = FUN_01012c10(uVar6);
  uVar13 = FUN_0102035c(0,DAT_0103d5ec,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20));
  FUN_0103d440((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),uVar5);
  FUN_01035c84();
  uVar5 = 0;
  iVar4 = 1;
  do {
    if (param_5 == 0) {
      uVar6 = 4;
    }
    else {
      uVar6 = 8;
    }
    iVar3 = FUN_010221f6(puVar2,uVar6);
    if (iVar3 == 0) goto LAB_0103ce8e;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (iVar3 == 0xe102) {
    uVar5 = 0xe102;
  }
  else {
LAB_0103ce8e:
    uVar6 = *(undefined4 *)(puVar2 + 0xc);
    *param_1 = uVar6;
    uVar12 = *(undefined4 *)(puVar2 + 0xe);
    param_1[1] = uVar12;
    uVar10 = *(undefined4 *)(puVar2 + 0x2c);
    param_1[2] = uVar10;
    uVar11 = *(undefined4 *)(puVar2 + 0x2e);
    param_1[3] = uVar11;
    fVar1 = DAT_0103d01c;
    if (param_3 != (undefined4 *)0x0) {
      uVar9 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      uVar7 = VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0103cf18(uVar7,uVar6,uVar9,0x40c00000);
      uVar6 = FUN_0103cf20();
      *param_3 = uVar6;
      uVar6 = VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0103cf18(uVar6);
      uVar6 = FUN_0103cf20();
      param_3[1] = uVar6;
      uVar6 = VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0103cf18(uVar6);
      uVar6 = FUN_0103cf20();
      param_3[2] = uVar6;
      fVar8 = (float)VectorUnsignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0101edc0(fVar8 * fVar1);
      uVar6 = FUN_0103cf20();
      param_3[3] = uVar6;
    }
  }
  return CONCAT44(param_2,uVar5);
}

