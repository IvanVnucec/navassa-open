
undefined8 FUN_01032f10(uint param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  iVar2 = thunk_EXT_FUN_20036204(3);
  iVar4 = 0;
  if (iVar2 == 0) {
    if ((param_1 & 0xc) == 0) {
      iVar4 = 0x4402;
    }
    if (*param_4 < 0x1001) {
      if (iVar4 == 0) {
        uVar5 = 0;
        do {
          if ((int)((param_1 >> (uVar5 + 2 & 0xff)) << 0x1f) < 0) {
            iVar3 = uVar5 * 0x5c + DAT_010335bc;
            *(uint *)(iVar3 + 0x368) = *param_4;
            *(uint *)(iVar3 + 0x360) = param_4[1];
            uVar9 = FUN_01033024((uint *)(iVar3 + 0x360),iVar3,param_4[2]);
            *(undefined4 *)((int)uVar9 + 0x14) = extraout_s0;
            iVar2 = FUN_01033024((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),param_4[3]);
            *(undefined4 *)(iVar2 + 0x10) = extraout_s0_00;
            *(uint *)(iVar3 + 0x39c) = param_4[4];
            *(uint *)(iVar3 + 0x3a0) = param_4[5];
            *(undefined2 *)(iVar3 + 0x3a4) = *(undefined2 *)((int)param_4 + 0x1a);
            *(short *)(iVar3 + 0x3a6) = (short)param_4[6];
            cVar1 = (char)param_4[7];
            if (cVar1 != '\0') {
              cVar1 = '\x01';
            }
            *(char *)(iVar2 + 4) = cVar1;
            cVar1 = *(char *)((int)param_4 + 0x1d);
            if (cVar1 != '\0') {
              cVar1 = '\x01';
            }
            *(char *)(iVar3 + 0x398) = cVar1;
            if (*(char *)((int)param_4 + 0x1e) != '\0') {
              FUN_010344a8(uVar5 & 0xff);
            }
            uVar6 = VectorFloatToUnsignedFixed(param_4[9],0x20,0x1f);
            *(undefined4 *)(iVar3 + 0x3a8) = uVar6;
            fVar8 = DAT_01033290;
            cVar1 = (char)param_4[10];
            if (cVar1 != '\0') {
              cVar1 = '\x01';
            }
            iVar2 = DAT_010335c4 + uVar5 * 0xc;
            *(char *)(iVar2 + 1) = cVar1;
            fVar7 = (float)VectorSignedToFloat(param_4[0xb],(byte)(in_fpscr >> 0x15) & 3);
            *(float *)(iVar2 + 4) = fVar7 / fVar8;
            fVar8 = (float)VectorUnsignedToFloat(param_4[0xc],(byte)(in_fpscr >> 0x15) & 3);
            *(float *)(iVar2 + 8) = fVar8 * DAT_01033294;
            *(uint *)(iVar3 + 0x3ac) = param_4[0xf];
            cVar1 = (char)param_4[0x10];
            if (cVar1 != '\0') {
              cVar1 = '\x01';
            }
            *(char *)(iVar3 + 0x3b0) = cVar1;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < 2);
      }
    }
    else {
      iVar4 = 0x4400;
    }
  }
  else {
    iVar4 = 0xd203;
  }
  return CONCAT44(param_4,iVar4);
}

