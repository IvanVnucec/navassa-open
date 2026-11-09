
undefined4 FUN_01035274(char param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_010358ec;
  if (param_1 == '\0') {
    iVar1 = DAT_010358e8;
  }
  pin_update(iVar1 + 0x10a,2,2);
  return param_4;
}

