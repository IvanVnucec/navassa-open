
undefined8 FUN_01043338(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint local_c;
  
  local_c = param_4 & 0xffffff00;
  iVar1 = FUN_0100a822(&local_c,1,0,param_3);
  if (iVar1 == 0) {
    pin_update(DAT_010433ac,1,local_c & 0xff);
  }
  return CONCAT44(param_4,iVar1);
}

