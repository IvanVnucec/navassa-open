
undefined4 FUN_0102de20(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 in_r3;
  int iVar8;
  int iVar9;
  
  iVar4 = DAT_0102e504;
  iVar7 = *(int *)(DAT_0102e4fc + 0xc);
  bVar1 = *(byte *)(iVar7 + 2);
  bVar2 = *DAT_0102e500 | (byte)(1 << (uint)bVar1);
  *DAT_0102e500 = bVar2;
  FUN_010142d8((uint)bVar1,bVar2);
  bVar1 = *(byte *)(iVar7 + 1);
  iVar8 = 0;
  if (*(char *)(iVar4 + 8 + (short)(ushort)bVar1 * 0xc) != '\0') {
    FUN_01012f06(bVar1 + 2 & 0xff,DAT_0102e508 + (uint)bVar1 * 0xbc + 0x90);
    *(undefined1 *)(iVar4 + 8 + (short)(ushort)*(byte *)(iVar7 + 1) * 0xc) = 0;
  }
  iVar4 = DAT_0102e50c;
  if (*(char *)(iVar7 + 0x2c) == '\0') {
    FUN_01009daa(*(undefined1 *)(iVar7 + 2),5,
                 *(undefined4 *)(DAT_0102e50c + 0x34 + (uint)*(byte *)(iVar7 + 1) * 4),1);
  }
  iVar5 = DAT_0102e510;
  if (*(char *)(iVar7 + 0x2d) == '\0') {
    FUN_0101a626(*(undefined1 *)(iVar7 + 2),1);
    iVar9 = *(int *)(iVar4 + 0x34 + (uint)*(byte *)(iVar7 + 1) * 4);
    iVar8 = FUN_0103ae90(iVar7,3);
    FUN_0100c578(*(undefined1 *)(iVar7 + 1),1);
    if (*(char *)(iVar5 + 0x13 + (uint)*(byte *)(iVar7 + 2)) == '\x01') {
      thunk_EXT_FUN_20034f7c();
      *(undefined1 *)(iVar5 + 0x13 + (uint)*(byte *)(iVar7 + 2)) = 0;
    }
    if (*(char *)(iVar4 + 2 + iVar9) == '\0') {
      FUN_01016000(iVar9);
    }
    else {
      iVar8 = FUN_0103b042(*(undefined1 *)(iVar7 + 1),5);
    }
  }
  else {
    *(undefined1 *)(iVar7 + 0x10) = 3;
    *DAT_0102e51c =
         (*(int *)(*(int *)(DAT_0102e518 +
                           (uint)*(byte *)(DAT_0102e514 + (uint)*(byte *)(iVar7 + 2)) * 4) + 0x30) +
         1) * 0x2000;
    FUN_01035dc8(*(undefined1 *)(iVar7 + 1));
  }
  if (*(char *)(iVar7 + 0x31) != '\0') {
    *(undefined4 *)(iVar7 + 0x14) = *DAT_0102e4e4;
    FUN_01028a98(iVar7);
  }
  puVar3 = DAT_0102e4f8;
  if (iVar8 != 0) {
    *DAT_0102e4f4 = s_streams_interrupts_c_0102e550;
    *puVar3 = 0x22f;
    uVar6 = boot_msg(1,iVar8,3,in_r3);
    return uVar6;
  }
  return in_r3;
}

