
void FUN_010419dc(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_01041d04(param_1,param_3,param_3,param_4,param_4);
  iVar1 = FUN_01041ef8(param_1,param_2[0x1f],2,param_2 + 3);
  if (iVar1 == 0) {
    *(short *)(*param_2 + 0x42) = *(short *)(*param_2 + 0x42) + 1;
  }
  return;
}

