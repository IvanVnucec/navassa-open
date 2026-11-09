
undefined8 FUN_01044104(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int extraout_r1;
  int unaff_r4;
  undefined8 uVar2;
  
  FUN_0104412e();
  if (extraout_r1 != 0) {
    uVar2 = FUN_01044126();
    iVar1 = FUN_01044134((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x10);
    if (iVar1 != 0) {
      iVar1 = param_3;
    }
    FUN_0104413a(iVar1);
  }
  if (*(code **)(unaff_r4 + 4) != (code *)0x0) {
    (**(code **)(unaff_r4 + 4))();
  }
  return CONCAT44(param_4,param_3);
}

