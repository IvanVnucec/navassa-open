
undefined8 boot_msg(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  undefined4 local_18;
  
  *DAT_01002af0 = in_lr;
  mailbox_xfer(8,param_2);
  if (param_1 == 0) {
    periph_init_b(param_2);
  }
  else if (param_1 == 2) {
    periph_init_c(param_2);
  }
  else {
    periph_init_a(param_2);
    param_1 = 1;
  }
  pbVar3 = DAT_01002af4;
  local_18 = param_3;
  if (1 < param_3) {
    bVar2 = *(byte *)(param_1 + 0x1002afc);
    bVar1 = *DAT_01002af4;
    local_18 = CONCAT31((int3)((uint)param_3 >> 8),bVar1);
    *DAT_01002af4 = bVar1 | bVar2;
    *pbVar3 = bVar1 & ~bVar2;
  }
  if (param_3 == 3) {
    *DAT_01002af8 = 0x80000000;
  }
  return CONCAT44(param_4,local_18);
}

