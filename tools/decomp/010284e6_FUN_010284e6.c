
void FUN_010284e6(float param_1,float param_2)

{
  int *unaff_r4;
  int unaff_r8;
  undefined4 in_stack_00000000;
  
  *(float *)(unaff_r8 + 0x20) = param_1 * param_2;
  *(float *)(unaff_r8 + 0x20) = param_1 * param_2 * *(float *)(*unaff_r4 + 0x14);
  FUN_0102727c(in_stack_00000000);
  return;
}

