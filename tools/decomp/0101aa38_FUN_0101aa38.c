
void FUN_0101aa38(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_0101ab02();
  FUN_0101aafc(uVar1,2,2);
  iVar2 = FUN_0101aadc();
  if (iVar2 == 0) {
    FUN_0101aacc();
    uVar3 = FUN_01034ce4(param_1);
    FUN_0101a94c((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0);
    FUN_0101ab22();
    FUN_0101ac14();
    FUN_0101ab3c();
    if (param_1 == 0) {
      FUN_0101ab34();
    }
    else {
      FUN_0101ab2c();
    }
    pin_update();
    FUN_0101ac14();
    uVar3 = FUN_0101ac14();
    FUN_0101a956((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0);
    FUN_0101ab18();
    FUN_0101ac14();
    FUN_0101ab0e();
    FUN_0101ac14();
    uVar1 = FUN_0101aad4();
    FUN_0101aafc(uVar1,1,1);
    iVar2 = FUN_0101aaec();
    if (iVar2 == 0) {
      FUN_0101a71c(param_1 & 0xff,0,param_4);
      return;
    }
  }
  return;
}

