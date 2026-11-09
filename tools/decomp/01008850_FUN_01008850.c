
undefined8 FUN_01008850(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  bool bVar6;
  
  FUN_01015c54(param_2);
  pin_update(param_1 + 0x26,2,2);
  pin_update(param_1 + 0x26,1,1);
  FUN_01015c80(param_2,DAT_01009364,0,0);
  iVar5 = 0;
  do {
    cVar1 = *(char *)(param_1 + 0x27);
    iVar2 = FUN_010089c2();
    if (cVar1 < '\0') goto LAB_0100889e;
  } while (iVar2 == 0);
  if (-1 < cVar1) {
    iVar5 = 0xc901;
  }
LAB_0100889e:
  FUN_01015d08(param_2);
  FUN_01015d2e(param_2);
  FUN_010085c8(param_1,0,0);
  FUN_01008934();
  FUN_010085c8(param_1,0,0xff);
  FUN_01008934();
  if (iVar5 == 0) {
    if (param_1 == DAT_01009408) {
      DAT_0100940c[2] = DAT_01009410[0x12] & 0x3f;
    }
    else if (param_1 == DAT_01009414) {
      DAT_0100940c[3] = DAT_01009410[9] & 0x3f;
    }
    else if (param_1 == DAT_01009418) {
      *DAT_0100940c = DAT_01009410[0x1b] & 0x3f;
    }
    else if (param_1 == DAT_0100941c) {
      DAT_0100940c[1] = *DAT_0100950c & 0x3f;
    }
    else {
      bVar6 = param_1 == DAT_01009420;
      pbVar4 = DAT_01009410;
      if (bVar6) {
        pbVar4 = (byte *)(uint)*DAT_01009410;
      }
      bVar3 = (byte)pbVar4;
      if (bVar6) {
        bVar3 = bVar3 & 0x3f;
      }
      if (bVar6) {
        DAT_0100940c[4] = bVar3;
      }
    }
  }
  return CONCAT44(param_4,iVar5);
}

