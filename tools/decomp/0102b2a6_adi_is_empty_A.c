
uint adi_is_empty_A(void)

{
  int unaff_r6;
  
  return -(uint)(*(int *)(unaff_r6 + 0x40) == 0) >> 0x1f;
}

