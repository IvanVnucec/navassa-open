
longlong FUN_0101d920(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(DAT_0101dac0 + param_1 * 4);
    uVar2 = FUN_0102598c(iVar1 + 0xf00,1,0);
    FUN_0101d97e((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0);
    FUN_0102598c(iVar1 + 4,8,0);
    FUN_0101da54(param_1,0,0,0);
  }
  else {
    iVar1 = *(int *)(DAT_0101dac8 + param_1 * 4) + 0x6e;
    pin_update(iVar1,4,4);
    pin_update(iVar1,1,0);
  }
  return (ulonglong)param_4 << 0x20;
}

