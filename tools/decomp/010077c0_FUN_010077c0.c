
undefined8
FUN_010077c0(uint param_1,int param_2,uint param_3,int *param_4,undefined4 param_5,int param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined2 uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  undefined4 uVar9;
  
  uVar6 = 0;
  uVar5 = param_2 + -1 + (uint)CARRY4(param_1,DAT_01007cc0);
  if ((uVar5 < 2) && (uVar5 == 0 || param_1 + DAT_01007cc0 < DAT_01007cc4)) {
    if (param_3 < 3) {
      iVar7 = DAT_01007cd4 + param_3 * 2;
      if (param_6 < 2) {
        uVar5 = FUN_01007754(param_1,param_2,param_5,param_6);
        *(short *)(iVar7 + 10) = (short)uVar5;
        uVar8 = (uint)((ulonglong)uVar5 * (ulonglong)param_1);
        *param_4 = uVar8 << 1;
        param_4[1] = (uVar5 * param_2 + (int)((ulonglong)uVar5 * (ulonglong)param_1 >> 0x20)) * 2 |
                     uVar8 >> 0x1f;
      }
      else {
        uVar5 = 0;
        uVar8 = DAT_01007f8c;
        bVar4 = 1;
        do {
          uVar8 = (uint)bVar4 << 0x1f | uVar8 >> 1;
          if (param_2 != 0) break;
          if (param_1 < uVar8) {
            uVar5 = uVar5 + 1;
          }
          bVar4 = 0;
        } while (param_1 < uVar8 && uVar5 < 7);
        uVar9 = VectorUnsignedToFloat(uVar5 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
        FUN_01011240(0x40000000,uVar9);
        uVar3 = FUN_01007880();
        *(undefined2 *)(iVar7 + 10) = uVar3;
        uVar1 = *(ushort *)(iVar7 + 10);
        lVar2 = (ulonglong)(uint)uVar1 * (ulonglong)param_1;
        uVar5 = (uint)lVar2;
        *param_4 = uVar5 << 1;
        param_4[1] = ((uint)uVar1 * param_2 + (int)((ulonglong)lVar2 >> 0x20)) * 2 | uVar5 >> 0x1f;
      }
    }
  }
  else {
    uVar6 = 0xca00;
  }
  return CONCAT44(param_4,uVar6);
}

