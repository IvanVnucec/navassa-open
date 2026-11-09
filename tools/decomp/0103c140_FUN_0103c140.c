
undefined4
FUN_0103c140(float param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  int unaff_r5;
  int iVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined8 unaff_d8;
  float unaff_s18;
  
  uVar4 = 0;
  *param_3 = 0;
  iVar5 = DAT_0103cd74;
  do {
    if (((int)((*(uint *)(param_2 + 0x14) >> (uVar4 & 0xff)) << 0x1f) < 0) &&
       (*(char *)(iVar5 + uVar4) == '\x01')) {
      *param_3 = *param_3 | 1 << (uVar4 & 0xff);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  uVar4 = 0;
  do {
    if ((int)((*(uint *)(param_2 + 0x14) >> (uVar4 & 0xff)) << 0x1f) < 0) {
      uVar2 = FUN_0101175c(0,uVar4 & 0xff);
      iVar5 = uVar4 * 0xbc + DAT_0103cd78;
      param_1 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
      unaff_r5 = *(int *)(iVar5 + 0x1a8) / 2;
      unaff_d8 = CONCAT44(param_1 * DAT_0103c498,param_1 * 0.125);
      unaff_s18 = (float)VectorUnsignedToFloat
                                   (*(undefined4 *)(iVar5 + 0x19c),(byte)(in_fpscr >> 0x15) & 3);
      if (*(char *)(DAT_0103cd7c + uVar4 * 0x80 + 0x2e9) == '\0') {
        puVar3 = (uint *)0x1;
      }
      else {
        puVar3 = (uint *)0xffffffff;
      }
      break;
    }
    uVar4 = uVar4 + 1;
    puVar3 = param_3;
  } while (uVar4 < 2);
  fVar8 = (float)VectorSignedToFloat(unaff_r5,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)unaff_d8 * 0.25;
  uVar4 = in_fpscr & 0xfffffff;
  if (ABS(fVar8) < fVar7) {
    unaff_r5 = (int)fVar7;
  }
  iVar5 = unaff_r5 * (char)puVar3;
  uVar1 = uVar4 | (uint)(unaff_s18 < DAT_0103c49c) << 0x1f;
  uVar6 = uVar1 | (uint)(NAN(unaff_s18) || NAN(DAT_0103c49c)) << 0x1c;
  fVar7 = DAT_0103c4a0;
  if (((byte)(uVar1 >> 0x1f) != ((byte)(uVar6 >> 0x1c) & 1)) &&
     (uVar6 = uVar4, fVar7 = unaff_s18, unaff_s18 < DAT_0103c4a4)) {
    fVar7 = DAT_0103c4a4;
  }
  *(undefined2 *)(param_3 + 1) = 0;
  *(undefined2 *)((int)param_3 + 6) = 0;
  *(undefined2 *)((int)param_3 + 0x12) = 0x400a;
  param_3[2] = (uint)param_1;
  if (iVar5 < 1) {
    uVar4 = 0xbf800000;
  }
  else {
    uVar4 = 0x3f800000;
  }
  *(undefined2 *)(param_3 + 4) = 0x10;
  param_3[3] = uVar4;
  *(undefined2 *)(param_3 + 5) = 0x103a;
  *(undefined2 *)((int)param_3 + 0x16) = 0xa40;
  uVar4 = FUN_01011240(0x41200000,DAT_0103c4a8);
  param_3[6] = uVar4;
  fVar8 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
  param_3[7] = (int)ABS(fVar8);
  param_3[8] = 0;
  *(undefined2 *)(param_3 + 9) = 0;
  iVar5 = DAT_0103cd80;
  param_3[0xd] = (uint)(float)unaff_d8;
  param_3[10] = iVar5 + param_3[7];
  param_3[0xe] = 0x3f000000;
  param_3[0xf] = (uint)((ulonglong)unaff_d8 >> 0x20);
  param_3[0x10] = 0x3f000000;
  param_3[0x11] = (uint)fVar7;
  uVar4 = DAT_0103cd84;
  param_3[0xc] = DAT_0103cd84;
  param_3[0xb] = uVar4 + iVar5 + param_3[7];
  *(undefined2 *)(param_3 + 0x13) = 3;
  *(undefined2 *)((int)param_3 + 0x4e) = 3;
  *(undefined2 *)(param_3 + 0x14) = 3;
  *(undefined2 *)(param_3 + 0x15) = 2;
  *(undefined2 *)((int)param_3 + 0x52) = 0;
  *(undefined2 *)((int)param_3 + 0x56) = 0;
  *(undefined2 *)((int)param_3 + 0x5a) = 0;
  *(undefined2 *)(param_3 + 0x16) = 0xc0;
  *(undefined2 *)(param_3 + 0x17) = 0xc0;
  *(undefined2 *)((int)param_3 + 0x5e) = 0x2020;
  *(undefined2 *)((int)param_3 + 0x62) = 2;
  *(undefined2 *)(param_3 + 0x19) = 9;
  return param_5;
}

