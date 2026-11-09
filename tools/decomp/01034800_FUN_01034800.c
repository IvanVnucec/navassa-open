
void FUN_01034800(undefined4 param_1,int param_2,byte param_3,int param_4)

{
  byte unaff_r4;
  int unaff_r5;
  
  *(byte *)(param_2 + 1) = param_3 | unaff_r4 | (byte)(unaff_r5 << 4) | (byte)(param_4 << 5);
  return;
}

