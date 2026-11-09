
void FUN_0100611a(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  set_priority_6_wrapper();
  uVar1 = read_periph_reg();
  *(uint *)((ulonglong)uVar1 >> 0x20) = param_1 & param_2 | param_3 & ~param_1;
  restore_priority((int)uVar1,param_4);
  return;
}

