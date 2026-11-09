
undefined8 FUN_0100f00e(undefined4 param_1,int param_2,undefined2 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 *apuStack_18 [2];
  
  iVar1 = DAT_0100f0bc;
  apuStack_18[0] = param_3;
  apuStack_18[1] = (undefined2 *)param_4;
  FUN_0101f876(*(undefined2 *)(DAT_0100f0bc + 0x22),apuStack_18);
  if (*(char *)((int)apuStack_18 + param_2) != '\0') {
    if (*(char *)(iVar1 + param_2 * 0xbc + 0x3c) != '\x02') {
      param_3[2] = 0;
      param_3[1] = 0;
      *param_3 = 0x40;
      return CONCAT44(apuStack_18[1],apuStack_18[0]);
    }
    param_3[2] = 0;
    param_3[1] = 0;
    *param_3 = 1;
  }
  return CONCAT44(apuStack_18[1],apuStack_18[0]);
}

