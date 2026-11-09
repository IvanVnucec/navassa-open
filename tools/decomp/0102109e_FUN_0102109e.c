
int FUN_0102109e(undefined4 param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_50;
  uint local_4c;
  undefined1 auStack_48 [4];
  uint local_44;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined1 local_37;
  int local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar2 = DAT_01021c78;
  uVar8 = *(uint *)(param_4 + 0xc);
  uVar5 = *(uint *)(param_4 + 0x10);
  uVar3 = *(uint *)(param_4 + 0x14);
  iVar7 = 0;
  local_38 = (undefined1)param_3;
  local_4c = 0;
  local_50 = 0;
  FUN_01020fbc(&local_50,&local_4c);
  local_30 = local_4c;
  uVar9 = 0;
  uVar4 = local_4c;
  if (local_4c < local_50) {
    uVar4 = local_50;
  }
  local_34 = uVar4 - local_4c;
  local_2c = 1;
  local_50 = uVar4;
  local_28 = param_1;
  do {
    bVar1 = *(byte *)(iVar2 + uVar9);
    if ((int)(((uVar8 | uVar5 | uVar3) >> (uint)bVar1) << 0x1f) < 0) {
      local_40 = local_2c << (uint)bVar1;
      local_44 = *(uint *)(param_4 + 0x1c) & local_40;
      local_40 = local_40 & *(uint *)(param_4 + 0x20);
      local_3c = FUN_0102126c(auStack_48);
      local_37 = *(undefined1 *)(param_2 + 0xc);
      pcVar6 = *(code **)(DAT_01021d74 + (short)(ushort)bVar1 * 0x24);
      if ((pcVar6 != (code *)0x0) && (iVar7 = (*pcVar6)(local_28,&local_3c), iVar7 != 0)) break;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x18);
  FUN_0102129c(2,param_4 + 0x18);
  if (iVar7 == 0) {
    if (param_3 == 1) {
      if (*DAT_01021d78 != '\x02') {
        iVar7 = FUN_010227ba();
      }
    }
    else if (param_3 == 3) {
      iVar7 = FUN_010227f8();
    }
  }
  return iVar7;
}

