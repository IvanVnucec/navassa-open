
undefined4 FUN_01020c14(int param_1,ushort *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar6 = 0;
  if (param_1 < 2) {
    iVar7 = *(int *)(DAT_01020f4c + param_1 * 4);
    uVar5 = FUN_01002806(iVar7 + 0x187,0xffff);
    bVar1 = *(byte *)(iVar7 + 0x186);
    bVar2 = *(byte *)(iVar7 + 0x189);
    uVar8 = FUN_010027dc((byte *)(iVar7 + 0x185),0x80,0x80);
    bVar3 = *(byte *)(iVar7 + 0x185);
    bVar4 = *(byte *)(iVar7 + 0xab);
    *param_2 = uVar5;
    *(byte *)(param_2 + 1) = bVar1;
    fVar9 = (float)FUN_01020cd4(uVar8,0xc1700000);
    fVar11 = (float)VectorUnsignedToFloat((uint)uVar5,(byte)(in_fpscr >> 0x15) & 3);
    iVar7 = ((((uint)bVar4 << 0x1a) >> 0x1e) * 2 + 0xc) * -((int)((uint)bVar3 << 0x1a) >> 0x1f) -
            (uint)bVar1;
    uVar8 = VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)FUN_01020cd4(iVar7,uVar8);
    *(float *)(param_2 + 2) = fVar11 * fVar9 * fVar10;
    fVar9 = (float)FUN_0101edc0();
    *(float *)(param_2 + 4) = fVar9 * 10.0;
    *(byte *)(param_2 + 6) = bVar2 & 2;
    *(byte *)((int)param_2 + 0xd) = bVar2 & 4;
  }
  else {
    uVar6 = 0x6100;
  }
  return uVar6;
}

