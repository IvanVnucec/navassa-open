
void init_write_boot_byte(undefined4 param_1,undefined4 param_2,byte param_3)

{
  byte *unaff_r4;
  
  get_periph_ptr();
  read_periph_reg();
  *unaff_r4 = param_3 >> 4;
  restore_priority();
  return;
}

