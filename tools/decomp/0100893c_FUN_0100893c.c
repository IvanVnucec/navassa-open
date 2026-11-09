
undefined4 FUN_0100893c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_r7;
  
  uVar3 = 0;
  iVar1 = param_2;
  if (param_1 != DAT_01009414) {
    iVar1 = DAT_01009420;
  }
  uVar2 = DAT_01009510;
  if (param_1 != DAT_01009414 && param_1 != iVar1) {
    uVar2 = 10000;
  }
  FUN_01015c80(param_3,uVar2,0,0);
  pin_update(param_1 + 0x33,1,1);
  do {
    iVar1 = FUN_010089c0();
  } while (-1 < unaff_r7 << 0x1e && iVar1 == 0);
  if (iVar1 == 0) {
    do {
      iVar1 = FUN_010089c0();
      if (-1 < unaff_r7 << 0x1e) break;
    } while (iVar1 == 0);
    if (iVar1 != 0) {
      if (param_2 == 1) {
        uVar3 = 0xc90a;
      }
      else {
        uVar3 = 0xc908;
      }
    }
  }
  else if (param_2 == 1) {
    uVar3 = 0xc909;
  }
  else {
    uVar3 = 0xc907;
  }
  FUN_01015d08(param_3);
  return uVar3;
}

