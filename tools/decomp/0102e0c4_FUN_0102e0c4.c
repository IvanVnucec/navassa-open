
void FUN_0102e0c4(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*(byte *)(param_1 + 1);
  iVar5 = 0;
  if (*(char *)(DAT_0102e530 + 0x1b) == '\0') {
    iVar5 = FUN_0103ae90(param_1,3);
    *(undefined1 *)(param_1 + 0x10) = 3;
  }
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *DAT_0102e500 | (byte)(1 << (uint)bVar1);
  *DAT_0102e500 = bVar2;
  FUN_010142d8((uint)bVar1,bVar2);
  if (1 < *(byte *)(DAT_0102e508 + 0x77f)) {
    *(char *)(*(int *)(DAT_0102e538 + (uint)*(byte *)(param_1 + 1) * 4) + 0x1d8) =
         *(char *)((short)(ushort)*(byte *)(param_1 + 1) * 0x54 + DAT_0102e534 + 0x124) + -1;
  }
  iVar4 = DAT_0102e53c + uVar6 * 0xc;
  if (*(char *)(iVar4 + 4) == '\x01') {
    *(undefined1 *)(iVar4 + 4) = 0;
    FUN_01013166(uVar6,0,0);
  }
  if (uVar6 == 0) {
    FUN_0103b556();
  }
  else {
    FUN_0103b56c();
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_01009daa(*(undefined1 *)(param_1 + 2),0,*(undefined4 *)(DAT_0102e540 + uVar6 * 4),1);
  }
  if (*(char *)(param_1 + 0x2d) == '\0') {
    if (*(char *)(DAT_0102e50c + 2 + *(int *)(DAT_0102e50c + 0x2c + uVar6 * 4)) != '\0') {
      iVar5 = FUN_0103b042(uVar6,0);
    }
    iVar4 = DAT_0102e510;
    if (*(char *)(DAT_0102e510 + 0x13 + (uint)*(byte *)(param_1 + 2)) == '\x01') {
      thunk_EXT_FUN_20034f7c();
      *(undefined1 *)(iVar4 + 0x13 + (uint)*(byte *)(param_1 + 2)) = 0;
    }
    *(undefined4 *)(param_1 + 0x14) = *DAT_0102e4e4;
    FUN_01028a98(param_1);
  }
  else if (-1 < (int)((*(uint *)(*(int *)(DAT_0102e544 +
                                         (uint)*(byte *)(DAT_0102e514 + (uint)*(byte *)(param_1 + 2)
                                                        ) * 4) + 0x1c) >>
                      (uint)*(byte *)(param_1 + 2)) << 0x1f)) {
    FUN_010016a2(*(undefined1 *)(param_1 + 1),0,0);
  }
  puVar3 = DAT_0102e4f8;
  if (iVar5 != 0) {
    *DAT_0102e4f4 = s_streams_interrupts_c_0102e550;
    *puVar3 = 0x2ec;
    boot_msg(1,iVar5,3);
    return;
  }
  return;
}

