
int FUN_01013220(uint param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte local_38;
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar4 = 0;
  uVar5 = 0;
  local_38 = 0;
  local_28 = 0;
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    local_30 = *(int *)(DAT_010134ec + param_1 * 4);
  }
  else {
    iVar4 = 0xc800;
  }
  switch(param_2) {
  case 0:
  case 4:
    cVar7 = *(char *)(param_3 + 1);
    local_2c = *(int *)(DAT_010134f0 + (uint)*(byte *)(DAT_010134e0 + param_1) * 4);
    *(undefined1 *)(local_2c + 0x1aa) = *(undefined1 *)(param_3 + 0x15);
    uVar6 = 1;
    uVar8 = 0xce;
    uVar9 = 0xcf;
    uVar10 = 0xc1;
    uVar11 = 0xaa;
    goto LAB_01013282;
  case 1:
    uVar6 = 2;
    cVar7 = *(char *)(param_3 + 1) << 1;
    uVar8 = 0x193;
    uVar9 = 0x194;
    uVar10 = 0x195;
    uVar11 = 0x196;
    break;
  case 2:
    uVar6 = 4;
    cVar7 = *(char *)(param_3 + 1) << 2;
    uVar8 = 0x1ad;
    uVar9 = 0x1ae;
    uVar10 = 0x1af;
    uVar11 = 0x1b0;
    break;
  case 3:
    uVar6 = 8;
    cVar7 = *(char *)(param_3 + 1) << 3;
    uVar8 = 0x1c7;
    uVar9 = 0x1c8;
    uVar10 = 0x1c9;
    uVar11 = 0x1ca;
    break;
  default:
    return 0xe700;
  }
  local_2c = local_30;
LAB_01013282:
  if (iVar4 != 0) {
    return iVar4;
  }
  if (*(char *)(param_3 + 0x25) != '\x01') {
    if (*(char *)(param_3 + 0x25) != '\x02') goto LAB_010132fa;
    local_38 = 2;
  }
  local_28 = 0x10;
  uVar5 = 2;
LAB_010132fa:
  uVar1 = *(undefined1 *)(param_3 + 0x18);
  bVar2 = *(byte *)(param_3 + 4);
  cVar3 = *(char *)(param_3 + 0x15);
  FUN_01013094(local_30,0xac,uVar6,cVar7);
  FUN_01013094(local_30,uVar8,0x10,local_28);
  FUN_01013094(local_30,uVar9,7,local_38 | bVar2 & 0xfb | cVar3 << 2);
  FUN_01013094(local_30,uVar10,1,uVar1);
  FUN_01013094(local_2c,uVar11,2,uVar5);
  return 0;
}

