
int FUN_010433b8(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  ushort uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  char local_e0 [4];
  byte local_dc [8];
  undefined1 local_d4;
  int local_cc;
  undefined4 local_bc;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  char local_2c;
  undefined1 local_2b;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_e0[0] = '\0';
  local_e0[1] = '\0';
  uVar6 = param_2[7];
  local_2c = *(char *)(DAT_01043668 + 0x77d);
  if (local_2c != '\0') {
    local_2c = '\x01';
  }
  uStack_24 = param_4;
  iVar3 = FUN_01023138(*param_2,local_e0);
  iVar1 = DAT_01043670;
  iVar7 = DAT_0104366c;
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar4 = *(ushort *)(DAT_0104366c + 0x2c);
  local_cc = DAT_0104366c;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  *(ushort *)(DAT_0104366c + 0x2c) = uVar4;
  uVar4 = *(ushort *)(iVar7 + 0x2e);
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  bVar5 = 0;
  *(ushort *)(iVar7 + 0x2e) = uVar4;
  iVar7 = 0;
  do {
    if (local_e0[bVar5] != '\0') {
      if (local_2c == '\x01') {
        local_2b = FUN_010026f0(param_2[4],param_2[3],*(undefined4 *)(iVar1 + 0x610),
                                *(undefined4 *)(iVar1 + 0x614),0x20);
        local_28 = param_2[10];
        FUN_0100eefe(bVar5,local_2b);
        iVar3 = FUN_010434fc();
        if (iVar3 == 0) {
          FUN_0100eeda(bVar5);
        }
        *(undefined1 *)(local_cc + 1) = 8;
        uVar2 = 3;
      }
      else {
        FUN_0100eeaa(bVar5);
        FUN_0100ee78(bVar5);
        *(undefined1 *)(local_cc + 1) = 0x40;
        uVar2 = 0;
      }
      *(undefined1 *)(local_cc + 3) = uVar2;
      local_d4 = 0;
      local_bc = 5000;
      local_dc[0] = bVar5;
      local_a8 = FUN_0101ed76(uVar6 & 0xff,bVar5);
      local_34 = 1;
      local_38 = 1;
      local_30 = 0;
      FUN_01043506(local_dc,bVar5);
      FUN_010434f0();
      iVar3 = FUN_0101f06a();
      if (iVar3 == 0) {
        return 0x2008;
      }
      if ((local_2c != '\x01') || (iVar3 = FUN_010434fc(), iVar3 != 1)) {
        FUN_010434f0();
        local_a4 = FUN_0101f078();
        FUN_0100e2da(local_dc);
        iVar7 = FUN_0100e762(local_dc);
      }
    }
    bVar5 = bVar5 + 1;
    if (1 < bVar5) {
      return iVar7;
    }
  } while (iVar7 == 0);
  return iVar7;
}

