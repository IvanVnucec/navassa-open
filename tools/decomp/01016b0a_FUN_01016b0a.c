
undefined8 FUN_01016b0a(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = *(int *)(DAT_01016e54 + param_1 * 4);
  if (param_1 < 2) {
    if (param_3 == 0) {
      iVar1 = iVar1 + 3;
    }
    else {
      if (param_3 != 1) goto LAB_01016b3e;
      iVar1 = iVar1 + 6;
    }
    pin_update(iVar1,2,(param_2 & 0x7f) << 1);
  }
  else {
    uVar2 = 0xe703;
  }
LAB_01016b3e:
  return CONCAT44(param_4,uVar2);
}

