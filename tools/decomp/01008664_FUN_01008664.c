
undefined8 FUN_01008664(uint param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = param_2 + -1 + (uint)CARRY4(param_1,DAT_010091cc);
  if (((param_3 == 0) || (param_3 == 2)) || (param_3 < 2)) {
    if ((uVar1 != 0) && ((1 < uVar1 || (DAT_010092c8 <= param_1 + DAT_010091cc)))) {
      uVar2 = 0xc903;
    }
  }
  else {
    uVar2 = 0xc904;
  }
  return CONCAT44(param_4,uVar2);
}

