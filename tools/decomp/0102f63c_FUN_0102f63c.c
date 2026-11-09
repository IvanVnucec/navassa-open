
undefined8 FUN_0102f63c(int param_1,uint param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xc201;
  if (param_1 < 2) {
    FUN_0102f4d0(0,param_1,param_2 & 0xff,1);
    uVar2 = FUN_0100aed4(param_3,param_4,0xb);
    FUN_0102f676((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_2 & 0xff);
    uVar1 = 0;
  }
  return CONCAT44(param_2,uVar1);
}

