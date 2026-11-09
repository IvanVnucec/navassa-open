
undefined4 FUN_0100b9fa(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 unaff_r7;
  
  uVar2 = (undefined2)unaff_r7;
  if (param_2 == 5) {
    uVar1 = 2;
  }
  else if (param_2 == 6) {
    uVar1 = 1;
  }
  else {
    if (param_2 != 7) goto LAB_0100ba16;
    uVar1 = 0;
  }
  uVar2 = (undefined2)CONCAT31((int3)((uint)unaff_r7 >> 8),uVar1);
LAB_0100ba16:
  if (param_3 != 0) {
    param_3 = 1;
  }
  FUN_0101ccc6(&stack0xfffffff8,param_1);
  return CONCAT13((char)param_3,CONCAT12(1,uVar2));
}

