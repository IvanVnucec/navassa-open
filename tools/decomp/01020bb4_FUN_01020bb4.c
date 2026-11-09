
undefined4 FUN_01020bb4(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = DAT_01020f68;
  if ((param_1 == 0) || (uVar1 = DAT_01020f6c, param_1 == 1)) {
    FUN_010027dc(uVar1,0x30,(param_2 & 7) << 5 | 0x10);
  }
  else {
    uVar2 = 0x6100;
  }
  return uVar2;
}

