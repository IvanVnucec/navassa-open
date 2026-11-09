
void periph_init_c(void)

{
  int unaff_r4;
  
  get_periph_ptr();
  *DAT_01006388 = *DAT_01006388 & 0xffff | unaff_r4 << 0x10;
  restore_priority();
  return;
}

