
void FUN_0102b5e4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 uStack_28;
  
  puVar2 = DAT_0102b764;
  puVar1 = DAT_0102b760;
  piVar4 = (int *)(DAT_0102b744 + (uint)*(byte *)(param_1 + 10) * 0x70);
  uStack_28 = param_4;
  if (*piVar4 == 0) {
    iVar3 = FUN_01025c68(param_1[7]);
    piVar4[3] = iVar3;
    if (iVar3 == 0) {
      *puVar2 = s_cal_task_core_c_0102b76c;
      FUN_0102b6f6(0x1a8);
    }
    if (param_1[6] == 0) {
      piVar4[2] = 0;
    }
    else {
      iVar3 = piVar4[0xb];
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      iVar3 = FUN_0101bb76(&DAT_0102b740,iVar3,0,piVar4,&DAT_0102b709,param_1[6]);
      piVar4[2] = iVar3;
      if (iVar3 == 0) {
        *puVar2 = s_cal_task_core_c_0102b76c;
        FUN_0102b6f6(0x1ca);
      }
    }
    iVar3 = FUN_0101af84(param_2,&DAT_0102b740,(int)(param_1[3] - param_1[2]) >> 2,piVar4,*param_1,
                         param_1[2],param_1[5]);
    *piVar4 = iVar3;
    if (iVar3 == 0) {
      *puVar2 = s_cal_task_core_c_0102b76c;
      *puVar1 = 0x1df;
      boot_msg(1,0xe302,3);
    }
    *(undefined1 *)((int)piVar4 + 5) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)((int)piVar4 + 6) = *(undefined1 *)((int)param_1 + 0x29);
    FUN_0102b5b4(*piVar4,(char)piVar4[1],piVar4);
    sched_channel_set_state(piVar4,1);
    FUN_0102b5d0(piVar4);
    for (uVar5 = 0; uVar5 < (uint)param_1[9]; uVar5 = uVar5 + 1) {
      if (*(int *)(param_1[8] + 4 + uVar5 * 0x24) != 0) {
        local_34 = 0;
        local_38 = 0;
        (**(code **)(param_1[8] + 4 + uVar5 * 0x24))(piVar4,&local_38);
      }
    }
  }
  else {
    *DAT_0102b764 = s_cal_task_core_c_0102b76c;
    *puVar1 = 0x198;
    boot_msg(1,0xe301,1);
  }
  return;
}

