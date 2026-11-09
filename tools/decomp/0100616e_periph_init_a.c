
void periph_init_a(void)

{
  uint unaff_r4;
  
  get_periph_ptr();
  *DAT_01006388 = unaff_r4 & 0xffff | *DAT_01006388 & 0xffff0000;
  restore_priority();
  return;
}

