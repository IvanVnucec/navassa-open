
void FUN_01005a40(byte param_1)

{
  int unaff_r6;
  
  *(byte *)(unaff_r6 + 0x12) = param_1 & 8;
  *(byte *)(unaff_r6 + 0x11) = param_1 & 4;
  return;
}

