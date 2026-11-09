
void FUN_010153b8(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_3 != 0) {
    param_2 = 7;
  }
  FUN_0101539c(param_1,param_2);
  puVar2 = DAT_010154cc;
  puVar1 = DAT_01015434;
  *DAT_010154cc = s_ctrl_task_c_010154d8;
  *puVar1 = 0x760;
  boot_msg(0,param_3,1);
  iVar4 = DAT_010154c4 + (param_1 >> 1);
  if (*(char *)(iVar4 + 0xc) != '\x01') {
    *puVar2 = s_ctrl_task_c_010154d8;
    *puVar1 = 0x76d;
    boot_msg(1,0xe500,2);
    return;
  }
  uVar3 = set_priority(6);
  FUN_01006034(param_1);
  *(undefined1 *)(iVar4 + 0xc) = 0;
  restore_priority(uVar3);
  return;
}

