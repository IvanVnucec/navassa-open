
undefined8 FUN_0100e348(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  float fVar10;
  float unaff_s16;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  uint local_12c;
  uint local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 auStack_118 [232];
  
  bVar2 = *param_1;
  if (param_2 == 1) {
    unaff_s16 = *(float *)(param_1 + 0x84);
  }
  if (param_2 != 1) {
    unaff_s16 = *(float *)(param_1 + 0x88);
  }
  *(undefined1 **)(param_1 + 0x28) = auStack_118;
  uVar3 = DAT_0100ee00;
  bVar1 = false;
  FUN_01022f48(*(undefined4 *)(param_1 + 0xc));
  uVar9 = 0;
  pbVar8 = param_1 + 0xad;
  do {
    if (param_1[8] != 0) {
      if (bVar2 == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = 2;
      }
      if (*(char *)(DAT_0100edf4 + 0x77c) == '\0') {
        uVar6 = uVar6 | 0x20;
      }
      local_120 = 0;
      local_128 = uVar3;
      local_12c = uVar3;
      local_138 = DAT_0100ee04;
      local_124 = DAT_0100ee08;
      local_130 = DAT_0100ee0c;
      local_134 = DAT_0100ee10;
      FUN_01023ba8(*(undefined4 *)(param_1 + 0xa0),param_1,uVar6 | 0x40,2);
      iVar4 = FUN_01023cb0(*(undefined4 *)(param_1 + 0xa0),0xffffffff);
      if (iVar4 == 1) {
        uVar5 = FUN_010232b8();
        FUN_01023224(param_1);
        restore_priority(uVar5);
        iVar4 = FUN_01023d26(*(undefined4 *)(param_1 + 0xa0),0xffffffff);
        FUN_0101ddf6(*param_1,&local_138);
        param_1[0xaf] = (byte)local_12c;
        if ((local_12c & 0xff) != (uint)param_1[0xae]) {
          *pbVar8 = 1;
        }
        FUN_0100e8d4(param_1,*(undefined1 *)(DAT_0100ee14 + (uint)*param_1 * 0x24c + 0x248));
      }
      if (iVar4 == 0) {
        *pbVar8 = 1;
        goto LAB_0100e454;
      }
      if (iVar4 == 2 || iVar4 == 5) {
        iVar4 = 0x4001;
      }
      else {
        iVar4 = 0x4000;
      }
LAB_0100e514:
      if (param_1[8] == 1) {
LAB_0100e51a:
        FUN_01023ea0(*(undefined4 *)(param_1 + 0xa0));
      }
      break;
    }
    FUN_0100e2ca(param_1);
    iVar4 = FUN_01023180(param_1 + 0x1c);
    if (iVar4 != 0) goto LAB_0100e514;
LAB_0100e454:
    if (param_1[8] == 1) {
      FUN_01023e8e(*(undefined4 *)(param_1 + 0xa0));
    }
    *(short *)(*(int *)(param_1 + 0x14) + 0x14) = *(short *)(*(int *)(param_1 + 0x14) + 0x14) + 1;
    FUN_01022f4e(bVar2,*(undefined4 *)(param_1 + 0xc),auStack_118,*(undefined4 *)(param_1 + 0x74));
    iVar4 = FUN_01022dc8(*(undefined4 *)(param_1 + 0xc),param_1 + 0x54);
    if (iVar4 != 0) {
      if (param_1[8] != 1) goto LAB_0100e514;
      iVar4 = 0;
      *pbVar8 = 0;
      goto LAB_0100e51a;
    }
    if (unaff_s16 < *(float *)(param_1 + 100) == (NAN(unaff_s16) || NAN(*(float *)(param_1 + 100))))
    {
      FUN_01022ea4(bVar2,param_1 + 0x54);
      fVar10 = *(float *)(param_1 + 100);
      bVar1 = fVar10 < DAT_0100e71c;
      if (bVar1) {
        fVar10 = **(float **)(param_1 + 0xc);
      }
      if (bVar1 && (bVar1 && fVar10 < DAT_0100e71c)) {
        if (param_1[8] == 0) {
          iVar4 = 0x2000;
        }
        else {
          *pbVar8 = 0;
        }
      }
      bVar1 = true;
    }
    uVar7 = (uint)*(ushort *)(*(int *)(param_1 + 0x14) + 0x22);
    uVar9 = uVar9 + 1;
    uVar6 = uVar9;
    if (uVar9 < uVar7) {
      uVar6 = uVar7;
    }
    *(short *)(*(int *)(param_1 + 0x14) + 0x22) = (short)uVar6;
    if (bVar1) goto LAB_0100e514;
    if (param_1[8] == 1) {
      *pbVar8 = 0;
      goto LAB_0100e51a;
    }
    if (0x100 < (uVar9 & 0xffff)) {
      iVar4 = 0x2001;
      break;
    }
  } while (iVar4 == 0);
  return CONCAT44(param_4,iVar4);
}

