
undefined8 FUN_0103e450(undefined4 *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  undefined8 uVar14;
  
  iVar6 = DAT_0103ef54;
  cVar1 = *(char *)(param_1 + 1);
  param_1[0xb] = *(undefined4 *)(DAT_0103ef54 + (uint)*param_2 * 4 + 0x7c);
  uVar10 = 0;
  if (cVar1 == '\x06') {
    param_1[0xb] = *(undefined4 *)(iVar6 + (uint)*param_2 * 4 + 0x84);
  }
  *(undefined1 *)((int)param_1 + 0x56) = 0xff;
  iVar3 = DAT_0103ef5c;
  iVar2 = DAT_0103ef58;
  iVar6 = DAT_0103ee5c;
  uVar5 = *param_1;
  iVar9 = DAT_0103ef58 + 0x2b0;
  iVar12 = DAT_0103ef5c + 0xe8;
  puVar11 = param_1 + 0x17;
  if (cVar1 == '\x03') {
    param_1[5] = DAT_0103ee5c + (short)(ushort)*param_2 * 0xbc + 0x19c;
    *puVar11 = *(undefined4 *)(iVar12 + (short)(ushort)*param_2 * 0x54);
    param_1[6] = iVar9 + (uint)*param_2 * 0x80;
LAB_0103e4ca:
    param_1[0xc] = uVar5;
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x04') {
        param_1[5] = DAT_0103ee5c + (short)(ushort)*param_2 * 0xbc + 0x314;
        *puVar11 = *(undefined4 *)(iVar3 + (short)(ushort)*param_2 * 0x54 + 400);
        iVar6 = iVar2 + (uint)*param_2 * 0x80 + 0x3b0;
      }
      else {
        if (cVar1 == '\x06') {
          *(undefined1 *)((int)param_1 + 0x56) = 7;
          param_1[5] = iVar6 + (short)(ushort)*param_2 * 0xbc + 0x48c;
          *puVar11 = *(undefined4 *)(iVar3 + (short)(ushort)*param_2 * 0x54 + 0x238);
          param_1[6] = iVar2 + (uint)*param_2 * 0x80 + 0x4b0;
          goto LAB_0103e50a;
        }
        if (cVar1 != '\x05') {
          uVar10 = 0x2f02;
          param_1[0xc] = uVar5;
          goto LAB_0103e610;
        }
        param_1[5] = DAT_0103ee5c + (short)(ushort)*param_2 * 0xbc + 0x604;
        *puVar11 = *(undefined4 *)(iVar3 + (short)(ushort)*param_2 * 0x54 + 0x2e0);
        iVar6 = iVar2 + (uint)*param_2 * 0x80 + 0x5b0;
      }
      param_1[6] = iVar6;
      goto LAB_0103e4ca;
    }
    param_1[5] = DAT_0103ee5c + (short)(ushort)*param_2 * 0xbc + 0x19c;
    *puVar11 = *(undefined4 *)(iVar12 + (short)(ushort)*param_2 * 0x54);
    param_1[6] = iVar9 + (uint)*param_2 * 0x80;
LAB_0103e50a:
    param_1[0xc] = 0;
  }
  iVar6 = param_1[5];
  if (*(char *)(iVar6 + 0x2a) == '\x01') {
    *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)(iVar6 + 0x12);
    uVar7 = *(uint *)(iVar6 + 0x20);
    uVar8 = *(undefined1 *)(iVar6 + 0x28);
  }
  else {
    *(undefined1 *)((int)param_1 + 6) = *(undefined1 *)(iVar6 + 0x13);
    uVar7 = *(uint *)(iVar6 + 0x24);
    uVar8 = *(undefined1 *)(iVar6 + 0x29);
  }
  *(undefined1 *)(param_1 + 3) = uVar8;
  param_1[2] = uVar7;
  if (*(char *)((int)param_1 + 6) == '\x01') {
    uVar7 = uVar7 >> 1;
  }
  else {
    fVar13 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    uVar7 = VectorFloatToUnsigned(fVar13 / DAT_0103e8f4 + 0.5,3);
  }
  param_1[4] = uVar7;
  uVar5 = FUN_0101175c(uVar5,*param_2);
  param_1[0x18] = uVar5;
  uVar4 = FUN_010117d2(*param_2,*param_1);
  *(undefined2 *)(param_1 + 0x19) = uVar4;
  uVar5 = VectorUnsignedToFloat(param_1[0x18],(byte)(in_fpscr >> 0x15) & 3);
  uVar14 = FUN_0103e7c8(uVar5,DAT_0103e8f8);
  *(undefined8 *)(param_1 + 0xe) = uVar14;
LAB_0103e610:
  return CONCAT44(param_4,uVar10);
}

