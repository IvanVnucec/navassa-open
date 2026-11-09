
undefined4 FUN_0103de66(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_0103de9c;
  uVar2 = 0;
  do {
    if ((int)((param_1 >> (uVar2 & 0xff)) << 0x1f) < 0) {
      pin_update(*(int *)(iVar1 + uVar2 * 4) + 0xf7,1,param_2);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return param_4;
}

