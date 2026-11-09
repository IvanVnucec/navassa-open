
undefined8
FUN_01023224(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  puStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  local_c = param_4;
  FUN_0101ddf6(*param_1,&puStack_18);
  param_1[0xae] = (undefined1)local_c;
  FUN_010231a0(param_1 + 0x1c);
  return CONCAT44(uStack_14,puStack_18);
}

