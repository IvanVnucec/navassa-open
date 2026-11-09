
void FUN_01012840(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int *unaff_r5;
  uint unaff_r6;
  int unaff_r7;
  
  *unaff_r5 = unaff_r6 + param_3;
  unaff_r5[1] = param_4 + unaff_r7 + (uint)CARRY4(unaff_r6,param_3);
  return;
}

