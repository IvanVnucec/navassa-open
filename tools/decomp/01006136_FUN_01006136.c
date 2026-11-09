
void FUN_01006136(uint param_1,int param_2)

{
  uint uVar1;
  
  set_priority_6_wrapper();
  uVar1 = 0x300 << ((param_1 & 0x7f) << 1);
  *DAT_01006384 = param_2 << (param_1 * 2 + 8 & 0xff) & uVar1 | *DAT_01006384 & ~uVar1;
  restore_priority();
  return;
}

