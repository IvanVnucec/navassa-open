
undefined8 FUN_01009b7a(uint param_1,int param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte extraout_r1;
  int extraout_r1_00;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar6 = 0;
  if (param_1 < 2) {
    uVar1 = *(short *)(DAT_0100a1c4 + param_1 * 2 + 10) << 1;
    if (uVar1 == 0) {
      uVar6 = 0xc90f;
    }
    else {
      iVar5 = DAT_01009ee4 + param_1 * 0x60;
      if (*(int *)(iVar5 + 0x1c) == 0) {
        uVar6 = 0xc910;
      }
      else {
        FUN_010093fc();
        uVar7 = *(undefined4 *)(extraout_r1_00 + 0x1c);
        uVar3 = FUN_01008ada(*(uint *)(iVar5 + 8) << 0x18,
                             *(int *)(iVar5 + 0xc) << 0x18 | *(uint *)(iVar5 + 8) >> 8,uVar7);
        iVar5 = param_2 * 0xbc + DAT_0100a1a0;
        uVar4 = FUN_010098b0(param_1);
        *(undefined4 *)(iVar5 + 0x84) = uVar4;
        lVar2 = (ulonglong)uVar1 * (ulonglong)param_3 * 0x4000000;
        uVar4 = FUN_01008ada((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),uVar7);
        *(undefined4 *)(iVar5 + 0x80) = uVar4;
        *(undefined4 *)(iVar5 + 0x88) = uVar3;
        *(byte *)(iVar5 + 0x8c) = extraout_r1 & 7;
        *(undefined1 *)(iVar5 + 0x8d) = 1;
      }
    }
  }
  else {
    uVar6 = 0xc904;
  }
  return CONCAT44(param_4,uVar6);
}

