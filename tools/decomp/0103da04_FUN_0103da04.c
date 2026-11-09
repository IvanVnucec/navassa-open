
longlong FUN_0103da04(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0xc;
  }
  FUN_0102e77c();
  uVar1 = FUN_0103dba8(uVar2);
  uVar1 = FUN_0103d938(uVar1,1);
  FUN_0103d930(uVar1,1);
  FUN_0103dd84(uVar2);
  uVar2 = FUN_0103da5c(DAT_0103da50 + param_1 * 0xbc,1);
  FUN_0103d928(uVar2,0);
  FUN_01017246(param_1,0);
  return (ulonglong)param_4 << 0x20;
}

