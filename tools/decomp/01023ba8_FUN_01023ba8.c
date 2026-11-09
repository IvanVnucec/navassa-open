
undefined4
FUN_01023ba8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,int param_11)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int aiStack_54 [6];
  undefined4 auStack_3c [6];
  
  iVar1 = FUN_01023e86();
  ulTaskNotifyTake(1,0);
  uVar2 = FUN_010232b8();
  uVar6 = 6;
  iVar3 = FUN_0102b5a2(iVar1);
  if (iVar3 != 0) {
    uVar6 = 5;
    goto LAB_01023ca2;
  }
  crit_lock_check_A(1,*(undefined1 *)(iVar1 + 4));
  crit_lock_check_B(1,*(undefined1 *)(iVar1 + 4));
  iVar3 = DAT_01023f14;
  iVar5 = (uint)*(byte *)(iVar1 + 4) * 0x4c;
  *(int *)(DAT_01023f14 + iVar5) = *(int *)(DAT_01023f14 + iVar5) + 1;
  if (*(int *)(iVar3 + (uint)*(byte *)(iVar1 + 4) * 0x4c) == -1) {
    *(undefined4 *)(iVar3 + (short)(ushort)*(byte *)(iVar1 + 4) * 0x4c) = 0;
  }
  *(undefined4 *)(iVar1 + 0x44) = param_5;
  *(undefined4 *)(iVar1 + 0x48) = param_6;
  *(undefined4 *)(iVar1 + 0x4c) = param_7;
  *(undefined4 *)(iVar1 + 0x50) = param_8;
  *(undefined4 *)(iVar1 + 0x54) = param_9;
  *(undefined4 *)(iVar1 + 0x58) = param_10;
  *(undefined4 *)(iVar1 + 0x60) = param_3;
  *(undefined4 *)(iVar1 + 0x5c) = param_2;
  *(char *)(iVar1 + 100) = (char)param_4;
  FUN_0101206c(auStack_3c,&DAT_010240b8,0x18);
  *(undefined4 *)(iVar1 + 0x68) = auStack_3c[param_4];
  FUN_0101206c(aiStack_54,&DAT_010240d0,0x18);
  iVar3 = aiStack_54[param_4];
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  *(char *)(iVar1 + 0x6c) = (char)iVar3;
  *(char *)(iVar1 + 0x40) = (char)param_11;
  if (param_11 == 0) {
    *(undefined4 *)(iVar1 + 0x3c) = 3;
  }
  else {
    if (param_11 == 1) {
      uVar4 = 4;
    }
    else {
      if (param_11 != 2) {
        uVar6 = 3;
        goto LAB_01023c90;
      }
      uVar4 = 3;
    }
    *(undefined4 *)(iVar1 + 0x3c) = uVar4;
  }
LAB_01023c90:
  dependency_search(param_1,iVar1);
  stream_flag_set_1(DAT_01023f28);
LAB_01023ca2:
  restore_priority(uVar2);
  return uVar6;
}

