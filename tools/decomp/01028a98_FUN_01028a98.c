
undefined8 FUN_01028a98(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  uint local_20;
  undefined4 uStack_1c;
  
  iVar2 = DAT_01028cf8;
  bVar7 = 0;
  bVar1 = false;
  local_20 = param_3 & 0xffffff00;
  uStack_1c = param_4;
  do {
    iVar6 = *(int *)(iVar2 + (uint)bVar7 * 4);
    uVar3 = (uint)*(byte *)(iVar6 + 0xd);
    if ((uVar3 & 1 << (uint)*(byte *)(param_1 + 2)) != 0) {
      bVar8 = *(char *)(iVar6 + 1) == '\x03';
      if (bVar8) {
        uVar3 = (uint)*(byte *)(iVar6 + 0xc);
      }
      if (((bVar8 && uVar3 == 0) && (*(int *)(iVar6 + 4) != 0)) &&
         (iVar4 = FUN_0102382c(), iVar4 != 0)) {
        if (*(char *)(*(int *)(iVar6 + 4) + 0x1c) != '\x05') {
          sched_ss_helper1(*(int *)(iVar6 + 4),&local_20);
          bVar1 = true;
          if ((char)local_20 != '\0') goto LAB_01028b46;
          iVar4 = *(int *)(iVar6 + 4);
          if (*(char *)(iVar4 + 4) == '\x03' || *(char *)(iVar4 + 4) == '\x04') {
            if (*(code **)(iVar4 + 0x44) != (code *)0x0) {
              (**(code **)(iVar4 + 0x44))(*(undefined4 *)(iVar4 + 0x5c));
            }
            pcVar5 = *(code **)(*(int *)(iVar6 + 4) + 0x48);
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x5c));
            }
            pcVar5 = *(code **)(*(int *)(iVar6 + 4) + 0x4c);
            if (pcVar5 != (code *)0x0) {
              (*pcVar5)(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x5c));
            }
          }
          sched_channel_set_state(*(undefined4 *)(iVar6 + 4),5);
          crit_lock_check_A(3,0xc);
          crit_lock_check_B(3,0xc);
        }
        *(undefined1 *)(iVar6 + 1) = 2;
      }
    }
    bVar7 = bVar7 + 1;
  } while (bVar7 < 5);
  if (bVar1) {
    FUN_0100adea(0x28);
  }
  stream_flag_tail(*DAT_01028cfc,0x11);
LAB_01028b46:
  return CONCAT44(uStack_1c,local_20);
}

