
undefined4 FUN_0101db5c(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = *(int *)(DAT_0101e15c + param_1 * 4);
  if (param_3 == 0) {
    pin_update(iVar1 + 0xe0,3,param_2 >> 8);
    puVar2 = (undefined1 *)(iVar1 + 0xdf);
  }
  else {
    pin_update(iVar1 + 0xde,3,param_2 >> 8);
    puVar2 = (undefined1 *)(iVar1 + 0xdd);
  }
  *puVar2 = (char)param_2;
  return param_4;
}

