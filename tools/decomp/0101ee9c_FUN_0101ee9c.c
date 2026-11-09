
undefined4
FUN_0101ee9c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_98 [2];
  char local_96 [2];
  int local_94;
  undefined1 local_90 [4];
  undefined4 local_8c;
  int local_88;
  undefined1 uStack_34;
  byte local_33;
  byte local_32;
  undefined4 uStack_28;
  
  puVar3 = DAT_0101f1bc;
  bVar1 = *DAT_0101f1b8;
  iVar11 = param_2[6];
  uStack_28 = param_4;
  iVar6 = FUN_0101f876(*param_2,local_96);
  if (((iVar11 == 2) || (iVar11 != 3)) || (*(char *)((int)param_2 + 0x41) == '\x03')) {
    uVar7 = FUN_0101b6d8();
    *(undefined4 *)(puVar3 + 4) = uVar7;
    *puVar3 = 1;
    iVar5 = DAT_0101f1c8;
    iVar4 = DAT_0101f1c4;
    if (iVar6 != 0) {
      local_8c = DAT_0101f1c0;
      uVar10 = 0;
      local_94 = iVar11;
      do {
        if (*(int *)(puVar3 + 8) != 0) break;
        if (local_96[uVar10] != '\0') {
          iVar6 = DAT_0101f1cc + uVar10 * 0xbc;
          if (*(char *)(iVar6 + 0x3c) == '\x01') {
            FUN_0101f13a(uVar10 & 0xff,1);
          }
          if (*(char *)(iVar5 + (uint)bVar1 * 2 + uVar10) == '\0') {
            *(undefined4 *)(puVar3 + 8) = 0x220c;
            return 0x220c;
          }
          FUN_0101f0a0(local_94,uVar10 & 0xff,&uStack_34);
          uVar12 = (uint)local_32;
          local_88 = (short)(ushort)bVar1 * 0xb70 + DAT_0101f1d0 + uVar10 * 0x5b8;
          uVar13 = (uint)local_33;
          *(uint *)(local_88 + 0x14) = uVar10 * 0x330 + (short)(ushort)bVar1 * 0x660 + DAT_0101f1d4;
          local_90[0] = (char)uVar10;
          FUN_0100a84c();
          if (*(int *)(puVar3 + 8) == 0) {
            FUN_01035e02();
            puVar8 = *(uint **)(iVar4 + uVar10 * 4);
            uVar9 = 0;
            bVar2 = (bool)isCurrentModePrivileged();
            if (bVar2) {
              uVar9 = isIRQinterruptsEnabled();
            }
            disableIRQinterrupts();
            *puVar8 = *puVar8 & 0xffffdfff;
            bVar2 = (bool)isCurrentModePrivileged();
            if (bVar2) {
              enableIRQinterrupts((uVar9 & 1) == 1);
            }
            iVar11 = FUN_0101f45c(local_90,auStack_98);
            *(int *)(puVar3 + 8) = iVar11;
            if (iVar11 == 0) {
              *(undefined1 *)
               (uVar10 * 6 + (short)(ushort)bVar1 * 0xc + iVar5 + uVar12 * 3 + uVar13 + 0xc) = 1;
            }
            FUN_01035dc0();
          }
          FUN_0100a854(local_88,*(undefined4 *)(puVar3 + 8));
          if (*(char *)(iVar6 + 0x3c) == '\x01') {
            FUN_0101f13a(uVar10 & 0xff,0);
          }
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < 2);
    }
    *puVar3 = 0;
  }
  return *(undefined4 *)(puVar3 + 8);
}

