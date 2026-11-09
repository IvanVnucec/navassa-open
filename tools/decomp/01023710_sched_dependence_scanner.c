
void sched_dependence_scanner(int param_1,uint param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined2 local_24;
  char local_22 [2];
  
  uVar5 = *(undefined4 *)(param_1 + 0xc + param_2 * 4);
  iVar3 = 0;
  local_22[0] = '\0';
  local_24 = 0;
  if (*(uint *)(param_1 + 8) <= param_2) {
    *DAT_01023f18 = s_scheduler_c_01023820;
    *DAT_01023f1c = 0x2d5;
    boot_msg(1,0xff30,3);
  }
  uVar2 = *(int *)(param_1 + 8) - 1;
  if (param_2 < uVar2) {
    piVar6 = (int *)(param_1 + 0xc + uVar2 * 4);
    iVar4 = uVar2 - param_2;
    do {
      iVar7 = *piVar6;
      sched_dep_compare(iVar7,uVar5,local_22,(int)&local_24 + 1,&local_24);
      if (local_22[0] == '\0') {
        if (local_24._1_1_ == '\0') {
          if (*(char *)(iVar7 + 0x1c) == '\a') {
            if ((char)local_24 != '\0') goto LAB_010237a4;
          }
          else if (((*(char *)(iVar7 + 0x1c) == '\x05') &&
                   (-1 < (int)((uint)*(byte *)(iVar7 + 0x60) << 0x1b))) &&
                  (param_3 = param_3 + 1, iVar3 == 0)) {
            iVar3 = iVar7;
          }
        }
        else {
LAB_010237a4:
          sched_channel_op_23(param_1,iVar7);
        }
      }
      else {
        sched_channel_op_25(param_1,iVar7,0);
      }
      iVar4 = iVar4 + -1;
      piVar6 = piVar6 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = DAT_01023f1c;
  if (1 < param_3) {
    *DAT_01023f18 = s_scheduler_c_01023820;
    *puVar1 = 0x316;
    boot_msg(1,0xff31,3);
    return;
  }
  if (param_3 == 1) {
    if (iVar3 == 0) {
      *DAT_01023f18 = s_scheduler_c_01023820;
      *puVar1 = 0x323;
      boot_msg(1,0xff32,3);
    }
    sched_channel_op_23(param_1,iVar3);
  }
  return;
}

