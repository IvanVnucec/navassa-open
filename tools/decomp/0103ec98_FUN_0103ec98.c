
int FUN_0103ec98(float *param_1,int param_2,int param_3,undefined1 *param_4)

{
  short sVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  uint in_fpscr;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar8 = 0;
  do {
    if (param_4[2] == '\0') {
      iVar6 = (int)*(short *)(param_4 + 0x1e);
      sVar1 = *(short *)(param_4 + 0x1c) + *(short *)(param_4 + 0x18);
      iVar5 = (int)sVar1;
      *(short *)(param_4 + 0x18) = sVar1;
      bVar10 = SBORROW4(iVar5,iVar6);
      iVar2 = iVar5 - iVar6;
      if (iVar6 <= iVar5) {
        bVar10 = SBORROW4((int)*(short *)(param_4 + 0x20),(int)sVar1);
        iVar2 = (int)*(short *)(param_4 + 0x20) - (int)sVar1;
      }
      if (iVar2 < 0 != bVar10) {
        sVar1 = sVar1 - *(short *)(param_4 + 0x1c);
LAB_0103ecfe:
        *(short *)(param_4 + 0x18) = sVar1;
        return 0x2f01;
      }
LAB_0103ed06:
      (**(code **)(param_4 + 0x10))
                (*param_4,*(undefined1 *)(param_2 + 5),(int)*(short *)(param_4 + 0x18));
    }
    else {
      sVar1 = *(short *)(param_4 + 0x1c);
      if (param_4[2] == '\x01') {
        iVar6 = (int)*(short *)(param_4 + 0x1e);
        sVar3 = *(short *)(param_4 + 0x18) - sVar1;
        iVar5 = (int)sVar3;
        *(short *)(param_4 + 0x18) = sVar3;
        bVar10 = SBORROW4(iVar5,iVar6);
        iVar2 = iVar5 - iVar6;
        if (iVar6 <= iVar5) {
          bVar10 = SBORROW4((int)*(short *)(param_4 + 0x20),(int)sVar3);
          iVar2 = (int)*(short *)(param_4 + 0x20) - (int)sVar3;
        }
        if (iVar2 < 0 != bVar10) {
          sVar1 = sVar1 + sVar3;
          goto LAB_0103ecfe;
        }
        goto LAB_0103ed06;
      }
      iVar5 = (int)*(short *)(param_4 + 0x1e);
      uVar4 = *(short *)(param_4 + 0x1a) - sVar1;
      uVar7 = (uint)uVar4;
      bVar10 = SBORROW4(uVar7,iVar5);
      iVar2 = uVar7 - iVar5;
      if (iVar5 <= (int)uVar7) {
        bVar10 = SBORROW4((int)*(short *)(param_4 + 0x20),uVar7);
        iVar2 = (int)*(short *)(param_4 + 0x20) - uVar7;
      }
      if (iVar2 < 0 != bVar10) {
        *(ushort *)(param_4 + 0x1a) = sVar1 + uVar4;
        return 0x2f01;
      }
      *(ushort *)(param_4 + 0x1a) = uVar4;
      (**(code **)(param_4 + 0x14))(*param_4,*(undefined1 *)(param_2 + 5),uVar4);
    }
    uVar13 = *(undefined4 *)(param_2 + 0x58);
    uVar11 = VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
    uVar15 = FUN_0103ee42(uVar11,0x41200000);
    uVar11 = VectorUnsignedToFloat(*(undefined4 *)(param_2 + 0x60),(byte)(in_fpscr >> 0x15) & 3);
    FUN_01012c10(uVar11);
    uVar16 = FUN_0103ee4e();
    FUN_0101f250((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,
                 (int)((ulonglong)uVar15 >> 0x20));
    uVar11 = FUN_01035c84();
    iVar2 = FUN_0103f04c(*param_4,uVar13,*(undefined4 *)(param_3 + 0x10),0x18,uVar11);
    if (iVar2 != 0) {
      return iVar2;
    }
    fVar12 = (float)FUN_0103eba0(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_2 + 0x68));
    sVar1 = *(short *)(param_4 + 0x1c);
    cVar9 = '\x01';
    uVar15 = DAT_0103ef78;
    if (-1 < sVar1) {
      uVar15 = DAT_0103ef98;
    }
    fVar14 = *param_1;
    uVar16 = FUN_01012c10(*(undefined4 *)(param_4 + 4));
    uVar11 = (undefined4)uVar16;
    uVar17 = FUN_01012c10(fVar12);
    uVar15 = FUN_0101f250((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar15,
                          (int)((ulonglong)uVar15 >> 0x20));
    FUN_01012c88((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar11,
                 (int)((ulonglong)uVar16 >> 0x20));
    in_fpscr = in_fpscr & 0xfffffff;
    if (cVar9 == '\0') {
      iVar2 = 0;
      if (ABS(fVar14) < ABS(fVar12)) {
        if (param_4[2] == '\0') {
          sVar1 = *(short *)(param_4 + 0x18) - sVar1;
LAB_0103edee:
          *(short *)(param_4 + 0x18) = sVar1;
          (**(code **)(param_4 + 0x10))(*param_4,*(undefined1 *)(param_2 + 5),(int)sVar1);
        }
        else {
          if (param_4[2] == '\x01') {
            sVar1 = sVar1 + *(short *)(param_4 + 0x18);
            goto LAB_0103edee;
          }
          sVar3 = *(short *)(param_4 + 0x1a);
          *(short *)(param_4 + 0x1a) = sVar1 + sVar3;
          (**(code **)(param_4 + 0x14))(*param_4,*(undefined1 *)(param_2 + 5),sVar1 + sVar3);
        }
        fVar12 = *param_1;
      }
      goto LAB_0103ee32;
    }
    if (ABS(fVar14) < ABS(fVar12)) {
      uVar8 = uVar8 + 1;
      if (5 < uVar8) {
        iVar2 = 0x2f01;
LAB_0103ee32:
        *param_1 = fVar12;
        return iVar2;
      }
    }
    else {
      uVar8 = 0;
    }
    *param_1 = fVar12;
  } while( true );
}

