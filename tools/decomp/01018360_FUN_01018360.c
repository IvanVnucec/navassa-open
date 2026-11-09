
undefined8 FUN_01018360(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 < 2) {
    iVar1 = DAT_01018e2c + (short)param_1 * 0xbc;
    iVar3 = DAT_010190c0 + param_1 * 0x80;
    iVar2 = (short)param_1 * 0x54 + DAT_010190c4;
    switch(param_2) {
    case 0:
    case 4:
      iVar2 = FUN_01018e00(DAT_01018e2c,param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_01019012(param_1);
      }
      break;
    case 1:
      iVar2 = FUN_01018aa2(iVar1 + 0x314,iVar3 + 0x3b0,iVar2 + 0x184);
      if (iVar2 == 0) {
        iVar2 = FUN_010190d8(param_1);
      }
      break;
    case 2:
      iVar2 = FUN_01018aa2(iVar1 + 0x48c,iVar3 + 0x4b0,iVar2 + 0x22c);
      if (iVar2 == 0) {
        iVar2 = FUN_01019176(param_1);
      }
      break;
    case 3:
      iVar2 = FUN_01018aa2(iVar1 + 0x604,iVar3 + 0x5b0,iVar2 + 0x2d4);
      if (iVar2 == 0) {
        iVar2 = FUN_010192d4(param_1);
      }
      break;
    default:
      iVar2 = 0xe700;
      goto LAB_010183c6;
    }
    if (iVar2 == 0) {
      pin_update(*(int *)(DAT_010190c8 + param_1 * 4) + 0x170,1,1);
    }
  }
  else {
    iVar2 = 0xe703;
  }
LAB_010183c6:
  return CONCAT44(param_4,iVar2);
}

