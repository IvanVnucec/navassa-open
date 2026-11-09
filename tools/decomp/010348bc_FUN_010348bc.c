
undefined4 FUN_010348bc(uint param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  if (-1 < (int)((param_1 >> (param_2 & 0xff)) << 0x1f)) {
    return 0;
  }
  iVar2 = DAT_01034c24 + param_2;
  *(undefined1 *)(DAT_01034c24 + param_2) = 1;
  *(char *)(iVar2 + 4) = (char)param_4;
  if (param_3 == 0) {
    uVar1 = FUN_01002c90(0,param_4);
    return uVar1;
  }
  uVar1 = FUN_01002cec(param_2,param_3,param_4,param_5);
  return uVar1;
}

