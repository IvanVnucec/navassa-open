
undefined4 FUN_01006cb8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_010071b0 + param_2 * 4;
  switch(param_1) {
  case 0:
  case 4:
    return *(undefined4 *)(iVar1 + 0x4c);
  case 1:
    return *(undefined4 *)(iVar1 + 0x54);
  case 2:
    return *(undefined4 *)(iVar1 + 0x5c);
  case 3:
    return *(undefined4 *)(iVar1 + 100);
  case 5:
    param_1 = *(undefined4 *)(iVar1 + 0x34);
  }
  return param_1;
}

