
undefined8
FUN_010091fc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_1 < 3) {
    if ((param_5 != 1) || (iVar1 = FUN_01009d1c(param_3,param_4,param_1), iVar1 == 0)) {
      iVar1 = FUN_01008b46(param_1,param_6);
    }
    if (iVar1 == 0) {
      if (param_6 == 0 || param_7 == 0) {
        FUN_010076ee(param_1,1);
      }
      iVar1 = FUN_01008790(param_1,param_6);
      if (param_7 != 0) {
        if (iVar1 == 0) {
          iVar1 = FUN_0100b704(param_7,*(int *)(DAT_01009ebc + param_1 * 4) + 0x2c,
                               ((uint)*(byte *)(DAT_010097e8 + param_1) << 0x1a) >> 0x18,0xc);
        }
        if (param_6 != 0) goto LAB_01009290;
      }
      FUN_010076ee(param_1,0);
    }
    if ((iVar1 == 0 && param_6 == 0) && (param_7 == 0)) {
      puVar2 = (undefined4 *)(DAT_01009ee4 + param_1 * 0x60);
      *puVar2 = param_3;
      puVar2[1] = param_4;
    }
  }
  else {
    iVar1 = 0xc904;
  }
LAB_01009290:
  return CONCAT44(param_4,iVar1);
}

