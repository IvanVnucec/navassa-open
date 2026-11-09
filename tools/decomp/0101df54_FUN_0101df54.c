
undefined8 FUN_0101df54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_0101e168 + (param_1 + 2U & 0xff) * 4);
  iVar1 = FUN_0101df18();
  if (iVar1 == 0) {
    FUN_0101dee4(param_1);
    pin_update(iVar2 + 0xe7,2,2);
    param_3 = 100;
    FUN_01022164(iVar2,0xe7,2,0,100,param_4);
  }
  return CONCAT44(param_3,iVar1);
}

