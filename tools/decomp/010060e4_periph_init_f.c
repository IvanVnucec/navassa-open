
void periph_init_f(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint *extraout_r1;
  uint unaff_r4;
  
  get_periph_ptr();
  read_periph_reg();
  *extraout_r1 = (unaff_r4 & 3) << 2 | param_3 & 0xfffffff3;
  restore_priority();
  return;
}

