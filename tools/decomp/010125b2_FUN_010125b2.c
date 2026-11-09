
void FUN_010125b2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  char *pcVar7;
  bool bVar8;
  
  pcVar7 = DAT_01012b80;
  FUN_010292b2((&DAT_01012c08)[*(byte *)(param_1 + 5)]);
  FUN_0102925c();
  FUN_010292d6();
  iVar2 = FUN_010292c8((&DAT_01012c08)[*(byte *)(param_1 + 5)]);
  if (iVar2 != 0) {
    FUN_01029290();
    pcVar7[*(byte *)(param_1 + 5)] = '\x01';
    *(undefined1 *)(param_1 + 0x25) = 2;
  }
  uVar3 = DAT_01012b8c;
  iVar1 = DAT_01012b88;
  iVar2 = DAT_01012b84;
  puVar5 = (undefined1 *)(DAT_01012b84 + 0x14);
  if (*(char *)(param_1 + 5) == '\0') {
    if (*pcVar7 == '\x01') {
      *(undefined4 *)(DAT_01012b88 + 0x70) = DAT_01012b8c;
    }
    puVar5[(short)(ushort)(byte)(&DAT_01012c08)[*(byte *)(param_1 + 5)] * 0x18] = 0x88;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    if (pcVar7[1] == '\x01') {
      *(undefined4 *)(iVar1 + 0x78) = uVar3;
    }
    pcVar7 = (char *)((uint)(byte)(&DAT_01012c08)[*(byte *)(param_1 + 5)] * 0x18);
    puVar5[(int)pcVar7] = 0x88;
  }
  uVar6 = SUB41(pcVar7,0);
  if (*(char *)(param_1 + 5) == '\x02') {
    uVar6 = 0x44;
    *puVar5 = 0x44;
  }
  if (*(char *)(param_1 + 5) == '\x02') {
    uVar6 = 0x44;
    *puVar5 = 0x44;
  }
  if (*(char *)(param_1 + 5) == '\x04') {
    uVar6 = 0x11;
    *puVar5 = 0x11;
  }
  bVar8 = *(char *)(param_1 + 5) == '\x05';
  if (bVar8) {
    uVar6 = 0x11;
  }
  if (bVar8) {
    *(undefined1 *)(iVar2 + 0x2c) = uVar6;
  }
  FUN_0102988a((&DAT_01012c08)[*(byte *)(param_1 + 5)],
               iVar2 + (short)(ushort)(byte)(&DAT_01012c08)[*(byte *)(param_1 + 5)] * 0x18);
  FUN_010126c4((uint)*(byte *)(param_1 + 5),2,
               ((uint)(byte)(&DAT_01012c08)[*(byte *)(param_1 + 5)] << 0x19) >> 0x18);
  uVar3 = FUN_010126c4((uint)*(byte *)(param_1 + 5),4,
                       ((uint)(byte)(&DAT_01012c08)[*(byte *)(param_1 + 5)] << 0x1a) >> 0x18);
  uVar3 = FUN_010126c4(uVar3,1,1);
  FUN_010126c4(uVar3,0x10,0x10);
  FUN_01025880(*(undefined1 *)(param_1 + 5),*(int *)(param_1 + 0x1c) + 0x2c);
  cVar4 = *(char *)(param_1 + 0x2b);
  if (cVar4 != '\0') {
    cVar4 = '\x01';
  }
  FUN_0101198e((&DAT_01012c08)[*(byte *)(param_1 + 5)],cVar4,*(int *)(param_1 + 8) + 0x1a);
  return;
}

