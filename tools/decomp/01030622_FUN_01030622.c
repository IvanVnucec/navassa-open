
int FUN_01030622(int param_1,float *param_2)

{
  int unaff_r5;
  
  *param_2 = *param_2 * *(float *)(unaff_r5 + param_1 * 4);
  return param_1 + 1;
}

