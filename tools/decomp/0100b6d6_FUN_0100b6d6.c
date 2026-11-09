
undefined4 FUN_0100b6d6(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(char *)((int)param_2 + 0xf) == *(char *)(param_1 + 0xf)) {
    uVar1 = FUN_0100b8b4(*param_2,param_3,param_4);
    FUN_0100b5ac(param_1,uVar1);
  }
  else {
    uVar2 = 0xcd0f;
  }
  return uVar2;
}

