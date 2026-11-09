
undefined8 FUN_01008790(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(DAT_010091f8 + param_1 * 4);
  FUN_01015c54(2);
  iVar1 = FUN_0100b008();
  iVar2 = 0;
  iVar4 = iVar3 + 0x8a;
  if (param_2 == 0) {
    pin_update(iVar4,1,0);
    *(char *)(iVar3 + 0x8b) = (char)iVar1;
    pin_update(iVar3 + 0x8c,0xf,(uint)(iVar1 << 0x10) >> 0x18);
    pin_update(iVar4,2,2);
    FUN_010093fc();
    if (((*(char *)(extraout_r1 + 0x47) == '\0') &&
        (iVar2 = FUN_0100893c(iVar3,*(char *)(extraout_r1 + 0x46) != '\0'), iVar2 == 0)) &&
       (iVar1 = FUN_0100a7dc(), iVar1 == 0)) {
      iVar1 = 0;
      do {
        FUN_01015e2c(1);
        if ((int)((uint)*(byte *)(iVar3 + 0x2b) << 0x1f) < 0) {
          if (iVar1 != 10000) goto LAB_0100883e;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 10000);
      iVar2 = 0xc900;
LAB_0100883e:
      FUN_010097d0(param_1);
    }
  }
  else {
    iVar2 = FUN_0100b704(param_2,iVar4,0,1);
    FUN_0100b594(param_2);
  }
  FUN_01015d2e(2);
  return CONCAT44(param_4,iVar2);
}

