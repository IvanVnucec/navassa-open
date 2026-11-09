
undefined8 FUN_0101b5bc(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int unaff_r5;
  int unaff_r6;
  
  *(uint *)(unaff_r6 + 0x7c) = *(uint *)(unaff_r6 + 0x7c) | 1 << (param_3 & 0xff);
  return CONCAT44(unaff_r5 + 4,unaff_r6 + param_3 * 0x14);
}

