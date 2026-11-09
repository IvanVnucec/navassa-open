
void FUN_01011eac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_618;
  undefined1 local_614;
  char local_613;
  int local_610;
  undefined4 local_608;
  undefined4 local_604;
  undefined4 *local_600;
  int local_5fc;
  int local_5f8;
  undefined1 auStack_5f4 [104];
  char local_58c;
  undefined1 auStack_1b4 [204];
  undefined4 local_e8 [51];
  undefined4 uStack_1c;
  
  uVar5 = (uint)*(byte *)(param_1 + 4);
  local_618 = 0;
  uStack_1c = param_4;
  local_613 = FUN_010116f2(uVar5,*(undefined1 *)(param_1 + 0x10));
  local_610 = param_1 + 0x174;
  local_614 = *(undefined1 *)(param_1 + 0x2f4);
  iVar4 = 1;
  local_608 = *(undefined4 *)(param_1 + 0x160);
  local_600 = local_e8;
  local_604 = *(undefined4 *)(param_1 + 0x164);
  local_5fc = *(int *)(param_1 + 0x14) + 0x24;
  local_e8[0] = 0;
  FUN_01011e70(param_1,&local_618);
  if (*(char *)(param_1 + 0x2f5) == '\x01') {
    FUN_01011b10(param_1,&local_618);
    return;
  }
  if (local_58c == '\x02') {
    return;
  }
  FUN_0101206c(param_1 + 0x20,auStack_1b4,0xcc);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0101206c(*(int *)(param_1 + 0x18),local_e8,0xcc);
  }
  iVar1 = FUN_01011616(uVar5);
  if (iVar1 == 0) {
    return;
  }
  FUN_01011668();
  *(int *)(param_1 + 0xec) = local_5f8;
  if (local_5f8 == 0) {
    iVar4 = FUN_01011648(iVar1,0,auStack_5f4);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0x15b) = 1;
    }
    else {
      FUN_0101206c(param_1 + 0xf0,auStack_5f4,0x68);
    }
  }
  iVar1 = FUN_01011648(iVar1,auStack_1b4,0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x15a) = 1;
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  if (local_613 == '\0') {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 0:
    uVar3 = 0;
    if ((*(char *)(DAT_01011fdc + 0x20) != '\0') &&
       (*(char *)(*(int *)(DAT_01011fe0 + uVar5 * 4) + 0x2f) == '\x01'))
    goto switchD_01011f9e_caseD_3;
    break;
  case 1:
    uVar3 = 1;
    break;
  case 2:
    uVar3 = 2;
    break;
  case 3:
switchD_01011f9e_caseD_3:
    uVar3 = 3;
    break;
  default:
    goto switchD_01011f9e_default;
  }
  FUN_01011690(uVar5,uVar2,uVar3);
switchD_01011f9e_default:
  return;
}

