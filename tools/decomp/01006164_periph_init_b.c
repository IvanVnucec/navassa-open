
void periph_init_b(void)

{
  int unaff_r4;
  
  get_periph_ptr();
  *DAT_01006384 = *DAT_01006384 & 0xffff | unaff_r4 << 0x10;
  restore_priority();
  return;
}

