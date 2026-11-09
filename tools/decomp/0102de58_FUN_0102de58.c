
void FUN_0102de58(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  bool bVar14;
  
  iVar5 = *DAT_0102e4fc;
  uVar10 = (uint)*(byte *)(iVar5 + 1);
  uVar6 = uVar10 + 2 & 0xff;
  iVar9 = 0;
  cVar1 = *(char *)(DAT_0102e4fc[uVar6] + 0x2d);
  uVar13 = 0;
  cVar2 = *(char *)(DAT_0102e4fc[uVar6] + 0x31);
  if (cVar2 != '\0') {
    stream_flag_tail(*DAT_0102e52c,4);
    uVar13 = FUN_010232b8();
  }
  iVar4 = DAT_0102e538;
  iVar11 = *(int *)(DAT_0102e54c + uVar10 * 4);
  iVar12 = *(int *)(DAT_0102e538 + uVar10 * 4);
  uVar8 = (uint)*(byte *)(DAT_0102e514 + uVar6);
  bVar14 = *(int *)(iVar5 + 4) != 1;
  uVar6 = DAT_0102e514;
  if (bVar14) {
    uVar6 = (uint)*(byte *)(iVar5 + 0x24);
  }
  if (bVar14 && uVar6 != 0) {
    event_action_executor(uVar10);
    iVar9 = FUN_01031b7c(iVar5);
  }
  iVar3 = DAT_0102e518;
  if (cVar1 != '\0') {
    *(char *)(iVar12 + 0x1bc) = (char)*(undefined4 *)(*(int *)(DAT_0102e518 + uVar8 * 4) + 0x30);
    puVar7 = *(undefined4 **)(iVar3 + uVar8 * 4);
    FUN_01016d9c(uVar10,*(undefined1 *)((int)puVar7 + 0x2d),*puVar7,puVar7[1],
                 *(undefined1 *)((int)puVar7 + 0x2d),*(undefined1 *)(iVar5 + 0x30));
  }
  *(byte *)(iVar11 + 0x178) = *(byte *)(iVar11 + 0x178) | 1;
  *(undefined1 *)(iVar11 + 0xd6) = 3;
  *(undefined1 *)(iVar11 + 0x3c) = 1;
  *(undefined1 *)(iVar11 + 0x163) = 0x55;
  if (cVar1 == '\0') {
    iVar9 = DAT_0102e50c + uVar10 * 4;
    iVar9 = FUN_01025622(3,uVar10,*(undefined4 *)(iVar9 + 0x54),0,*(undefined4 *)(iVar9 + 100),0);
  }
  else {
    FUN_010036a6(uVar10,1,0,uVar8);
  }
  *(undefined1 *)(iVar12 + 0x1b9) = 0;
  *(undefined4 *)(iVar5 + 4) = 1;
  *(undefined1 *)(iVar5 + 0x24) = 1;
  *(undefined1 *)(iVar5 + 0x27) = 1;
  if (cVar2 != '\0') {
    stream_flag_tail(*DAT_0102e52c,4);
    restore_priority(uVar13);
  }
  puVar7 = DAT_0102e4f8;
  if (iVar9 != 0) {
    *DAT_0102e4f4 = s_streams_interrupts_c_0102e550;
    *puVar7 = 0x3aa;
    boot_msg(1,iVar9,3);
  }
  if (*(byte *)(DAT_0102e508 + 0x77f) < 2) {
    return;
  }
  FUN_010027d8(*(int *)(iVar4 + (uint)*(byte *)(iVar5 + 1) * 4) + 0x1d8,
               *(char *)((short)(ushort)*(byte *)(iVar5 + 1) * 0x54 + DAT_0102e534 + 0x1cc) + -1);
  return;
}

