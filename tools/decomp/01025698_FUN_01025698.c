
undefined4 FUN_01025698(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined1 auStack_28 [8];
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  
  uVar1 = 0x3101;
  if (param_2 < 8 && param_4 < 0x40) {
    local_1c = (undefined1)param_4;
    auStack_28[param_1] = (char)param_2;
    local_20 = 2;
    local_18 = param_3;
    FUN_010256e8();
    FUN_010256d4();
    FUN_010256de();
    uVar1 = 0;
  }
  return uVar1;
}

