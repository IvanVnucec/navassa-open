
void FUN_01028a2a(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = DAT_01028cf8;
  bVar4 = 0;
  bVar1 = false;
  do {
    iVar5 = *(int *)(iVar2 + (uint)bVar4 * 4);
    uVar3 = (uint)*(byte *)(iVar5 + 0xd);
    if ((uVar3 & 1 << (uint)*(byte *)(param_1 + 2)) != 0) {
      bVar6 = *(char *)(iVar5 + 1) == '\x02';
      if (bVar6) {
        uVar3 = (uint)*(byte *)(iVar5 + 0xc);
      }
      if (bVar6 && uVar3 == 0) {
        *(undefined1 *)(iVar5 + 1) = 3;
        uVar3 = *(uint *)(iVar5 + 4);
        bVar6 = uVar3 != 0;
        if (bVar6) {
          uVar3 = (uint)*(byte *)(uVar3 + 0x1c);
        }
        if (bVar6 && uVar3 != 7) {
          crit_lock_check_A(2,0xc);
          crit_lock_check_B(2,0xc);
          sched_channel_set_state(*(undefined4 *)(iVar5 + 4),7);
          bVar1 = true;
        }
      }
    }
    bVar4 = bVar4 + 1;
  } while (bVar4 < 5);
  if (!bVar1) {
    return;
  }
  FUN_0100adea(0x27);
  return;
}

