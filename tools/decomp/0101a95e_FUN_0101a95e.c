
void FUN_0101a95e(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = *(int *)(DAT_0101ae38 + param_1 * 4);
  iVar2 = *(int *)(DAT_0101ae34 + param_1 * 4);
  FUN_0101ab02();
  iVar3 = iVar3 + 0xe7;
  pin_update(iVar3,2,2);
  iVar1 = FUN_0101aadc();
  if (iVar1 == 0) {
    FUN_0101aafc(0,0x20,0);
    pin_update(iVar2 + 6,1,1);
    pin_update(iVar2 + 0x36,3,3);
    FUN_0101ab3c();
    if (param_1 == 0) {
      FUN_0101ab34();
    }
    else {
      FUN_0101ab2c();
    }
    pin_update();
    uVar4 = FUN_0101ab22();
    FUN_0101a956((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
    FUN_0101ab18();
    FUN_0101ab0e();
    FUN_0101aad4();
    pin_update(iVar3,1,1);
    iVar1 = FUN_0101aaec();
    if (iVar1 == 0) {
      FUN_0101a71c(param_1 & 0xff,0,param_3,param_4);
      return;
    }
  }
  return;
}

