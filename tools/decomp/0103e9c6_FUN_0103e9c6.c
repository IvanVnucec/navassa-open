
undefined8 FUN_0103e9c6(undefined4 param_1,undefined1 param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  int unaff_r6;
  char cVar6;
  undefined1 *unaff_r7;
  undefined2 uVar7;
  int unaff_r9;
  uint in_fpscr;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fStack_2c;
  
  unaff_r7[2] = param_2;
  fStack_2c = 0.0;
  cVar6 = unaff_r7[2];
  uVar3 = (undefined2)DAT_0103ef68;
  uVar7 = 0x1ff;
  if (cVar6 == '\0') {
    *(undefined4 *)(unaff_r7 + 4) = *(undefined4 *)(unaff_r6 + 0x6c);
    *(int *)(unaff_r7 + 8) = unaff_r6 + 0x7d;
    uVar8 = DAT_0103ef6c;
    unaff_r7[0xc] = 2;
    *(undefined4 *)(unaff_r7 + 0x10) = uVar8;
    uVar2 = FUN_0102ef9c(*unaff_r7,*(undefined1 *)(unaff_r6 + 5));
  }
  else {
    if (cVar6 != '\x01') {
      uVar7 = 0x3ff;
      if (cVar6 == '\x02') {
        *(undefined4 *)(unaff_r7 + 4) = *(undefined4 *)(unaff_r6 + 0x74);
        *(int *)(unaff_r7 + 8) = unaff_r6 + 0x81;
        uVar8 = DAT_0103ef74;
        unaff_r7[0xc] = 2;
        *(undefined4 *)(unaff_r7 + 0x14) = uVar8;
        uVar3 = FUN_0102f004(*unaff_r7,*(undefined1 *)(unaff_r6 + 5));
      }
      else {
        *(undefined4 *)(unaff_r7 + 4) = *(undefined4 *)(unaff_r6 + 0x78);
        *(int *)(unaff_r7 + 8) = unaff_r6 + 0x83;
        uVar8 = DAT_0103ef94;
        unaff_r7[0xc] = 2;
        *(undefined4 *)(unaff_r7 + 0x14) = uVar8;
        uVar3 = FUN_0102f02c(*unaff_r7,*(undefined1 *)(unaff_r6 + 5));
      }
      *(undefined2 *)(unaff_r7 + 0x1a) = uVar3;
      uVar3 = 0;
      goto LAB_0103ea7a;
    }
    *(undefined4 *)(unaff_r7 + 4) = *(undefined4 *)(unaff_r6 + 0x70);
    *(int *)(unaff_r7 + 8) = unaff_r6 + 0x7f;
    uVar8 = DAT_0103ef70;
    unaff_r7[0xc] = 2;
    *(undefined4 *)(unaff_r7 + 0x10) = uVar8;
    uVar2 = FUN_0102efd0(*unaff_r7,*(undefined1 *)(unaff_r6 + 5));
  }
  *(undefined2 *)(unaff_r7 + 0x18) = uVar2;
LAB_0103ea7a:
  *(undefined2 *)(unaff_r7 + 0x20) = uVar7;
  *(undefined2 *)(unaff_r7 + 0x1e) = uVar3;
  uVar9 = *(undefined4 *)(unaff_r6 + 0x58);
  uVar8 = VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
  uVar10 = FUN_0103ee42(uVar8,0x41200000);
  uVar8 = VectorUnsignedToFloat(*(undefined4 *)(unaff_r6 + 0x60),(byte)(in_fpscr >> 0x15) & 3);
  FUN_01012c10(uVar8);
  uVar11 = FUN_0103ee4e();
  FUN_0101f250((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
               (int)((ulonglong)uVar10 >> 0x20));
  uVar8 = FUN_01035c84();
  iVar5 = FUN_0103f04c(*unaff_r7,uVar9,*(undefined4 *)(unaff_r9 + 0x10),0x18,uVar8);
  if ((iVar5 == 0) &&
     (fStack_2c = (float)FUN_0103eba0(*(undefined4 *)(unaff_r9 + 0x10),
                                      *(undefined4 *)(unaff_r6 + 0x68)),
     (int)((uint)(*(float *)(unaff_r7 + 4) < ABS(fStack_2c)) << 0x1f) < 0)) {
    for (cVar6 = '\0'; (int)cVar6 < (int)(uint)(byte)unaff_r7[0xc]; cVar6 = cVar6 + '\x01') {
      bVar1 = *(byte *)(*(int *)(unaff_r7 + 8) + (int)cVar6);
      uVar4 = (ushort)bVar1;
      *(ushort *)(unaff_r7 + 0x1c) = uVar4;
      if (-1 < (int)((uint)(fStack_2c < 0.0) << 0x1f)) {
        uVar4 = -(ushort)bVar1;
      }
      *(ushort *)(unaff_r7 + 0x1c) = uVar4;
      iVar5 = FUN_0103ec98(&fStack_2c);
      if (iVar5 != 0) break;
    }
  }
  *(undefined1 *)(unaff_r9 + 0xc) = 1;
  if (iVar5 == 0x2f01) {
    iVar5 = 0;
    *(undefined1 *)(unaff_r9 + 0xc) = 0;
    FUN_0102ee8c(*unaff_r7,*(undefined1 *)(unaff_r6 + 5),
                 (int)*(short *)(unaff_r9 + 0x14 + (uint)(byte)unaff_r7[1] * 2));
    FUN_0102eebe(*unaff_r7,*(undefined1 *)(unaff_r6 + 5),
                 (int)*(short *)(unaff_r9 + (uint)(byte)unaff_r7[1] * 2 + 0x16));
    FUN_0103eb94(unaff_r9 + 0x18);
    FUN_0102eefc();
    FUN_0103eb94(unaff_r9 + 0x1a);
    FUN_0102ef44();
  }
  return CONCAT44(unaff_r7,iVar5);
}

