
undefined8 FUN_01022cc2(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint local_10;
  int local_c;
  
  local_10 = param_3;
  local_c = param_4;
  uVar1 = FUN_01022af4(param_2,&local_c,&local_10);
  uVar1 = FUN_01022bea(uVar1,0x7fe0,local_c << 5);
  FUN_01022bea(uVar1,0x1f,local_10 & 0xffff);
  return CONCAT44(local_10,(1 << (local_10 & 0xff)) * local_c);
}

