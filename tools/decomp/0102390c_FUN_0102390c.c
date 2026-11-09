
void FUN_0102390c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  undefined4 local_20 [2];
  
  uVar6 = 0;
  local_20[0] = 0;
  piVar8 = (int *)(param_1 + 0xc);
  while( true ) {
    if (*(uint *)(param_1 + 8) <= uVar6) {
      return;
    }
    iVar7 = *piVar8;
    uVar1 = FUN_0102382c(iVar7);
    bVar9 = uVar1 != 0;
    if (bVar9) {
      uVar1 = (uint)*(byte *)(iVar7 + 0x1c);
    }
    if (((((bVar9 && uVar1 != 5) && uVar1 != 7) &&
         (((int)((uint)*(byte *)(param_1 + 200) << 0x1b) < 0 ||
          (-1 < (int)((uint)*(byte *)(iVar7 + 0x60) << 0x1a))))) &&
        ((iVar2 = FUN_01023644(param_1,uVar6,local_20), iVar2 == 0 ||
         ((sched_dependence_scanner(param_1,uVar6,local_20[0]), (*(byte *)(iVar7 + 0x14) & 0xc) == 0
          || ((iVar3 = FUN_0102b506(3), *(char *)(iVar3 + 0x1c) != '\x06' &&
              (iVar3 = FUN_0102b506(4), *(char *)(iVar3 + 0x1c) != '\x06')))))))) && (iVar2 != 0))
    break;
    uVar6 = uVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  if (*(char *)(iVar7 + 0x1c) == '\b') {
    crit_lock_check_A(6,0xb);
    crit_lock_check_B(6,0xb);
    mailbox_xfer(0x24,*(undefined1 *)(iVar7 + 4));
    iVar2 = DAT_01023f14;
    iVar3 = (short)(ushort)*(byte *)(iVar7 + 4) * 0x4c;
    iVar5 = DAT_01023f14 + 0x18;
    *(int *)(DAT_01023f14 + 0x18 + iVar3) = *(int *)(iVar5 + iVar3) + 1;
    iVar3 = (short)(ushort)*(byte *)(iVar7 + 4) * 0x4c;
    if (*(int *)(iVar5 + iVar3) == -1) {
      *(undefined4 *)(iVar2 + 0x18 + iVar3) = 0;
    }
    if (*(code **)(iVar7 + 0x4c) != (code *)0x0) {
      (**(code **)(iVar7 + 0x4c))(*(undefined4 *)(iVar7 + 0x5c));
    }
    sched_ss_helper2(iVar7,0);
    sched_channel_set_state(iVar7,5);
    mailbox_xfer(0x24,0);
  }
  else {
    sched_channel_op_22(param_1,iVar7);
  }
  if (uVar6 == 0) {
    return;
  }
  uVar1 = 0;
  piVar8 = (int *)(param_1 + 0xc);
  do {
    if ((*(uint *)(*piVar8 + 0x20) <= *(uint *)(iVar7 + 0x20)) && (*(byte *)(*piVar8 + 0x1c) < 5))
    break;
    uVar1 = uVar1 + 1;
    piVar8 = piVar8 + 1;
  } while (uVar1 <= uVar6);
  if (uVar1 < uVar6) {
    uVar4 = *(undefined4 *)(param_1 + 0xc + uVar1 * 4);
    *(int *)(param_1 + 0xc + uVar1 * 4) = iVar7;
    *(undefined4 *)(param_1 + 0xc + uVar6 * 4) = uVar4;
  }
  return;
}

