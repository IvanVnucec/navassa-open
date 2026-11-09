
undefined4 FUN_01008334(uint param_1,int *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  undefined1 local_60;
  undefined1 local_5f;
  undefined2 local_5e;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  uint local_58;
  undefined1 *local_54;
  undefined1 local_50;
  uint local_4c [6];
  uint local_34 [3];
  uint local_28 [3];
  
  if ((int)param_1 < 2) {
    local_4c[1] = param_2[4];
    bVar3 = (uint)param_2[2] <= local_4c[1];
    uVar2 = param_1;
    if (!bVar3) goto LAB_010083de;
    if (*(char *)(*(int *)(DAT_010084f0 + param_1 * 4) + 0x2d) == '\0') {
      local_28[0] = 0x1a;
    }
    else {
      local_28[0] = 0x35;
    }
    if (local_28[0] <= (uint)param_2[1]) {
      local_28[0] = param_2[1];
    }
    local_28[1] = 1;
    local_28[2] = (*param_2 - local_28[0]) + -0x52;
    if ((int)local_28[2] < 1) {
      local_28[2] = 1;
    }
    local_4c[0] = param_2[2] - 0x25;
    if ((int)local_4c[0] < 1) {
      local_4c[0] = 1;
    }
    local_4c[1] = local_4c[1] - local_4c[0];
    local_4c[2] = 2;
    if (param_1 == 0) {
      FUN_010084ca(DAT_010084f8,DAT_010084f4,DAT_010084fc);
      local_34[1] = DAT_01008500;
      local_4c[5] = DAT_01008504;
      local_34[2] = DAT_01008508;
    }
    else {
      FUN_010084ca(DAT_01008510,DAT_0100850c,DAT_01008514);
      local_34[1] = DAT_01008518;
      local_4c[5] = DAT_0100851c;
      local_34[2] = DAT_01008520;
    }
  }
  else {
    if (1 < param_1 - 2) goto LAB_01008452;
    uVar2 = param_2[2];
    local_4c[1] = param_2[4];
    bVar3 = local_4c[1] <= uVar2;
LAB_010083de:
    if (!bVar3) {
      return 0xc100;
    }
    local_28[0] = 1;
    local_28[1] = param_2[1];
    local_28[2] = *param_2 + -0x52;
    if ((int)local_28[2] <= (int)local_28[1]) {
      local_28[2] = local_28[1] + 2;
    }
    local_4c[2] = (uVar2 - local_4c[1]) + -0x49;
    local_4c[0] = local_4c[1];
    if ((int)local_4c[2] < 7) {
      local_4c[2] = 7;
      if (0 < (int)(uVar2 - 0x50)) {
        local_4c[0] = uVar2 - 0x50;
      }
    }
    local_4c[1] = local_4c[2] + 1;
    if ((param_1 - 2 & 0xff) == 0) {
      FUN_010084ca(DAT_01008528,DAT_01008524,DAT_0100852c);
      local_34[1] = DAT_01008530;
      local_4c[5] = DAT_01008534;
      local_34[2] = DAT_01008538;
    }
    else {
      FUN_010084ca(DAT_01008540,DAT_0100853c,DAT_01008544);
      local_34[1] = DAT_01008548;
      local_4c[5] = DAT_0100854c;
      local_34[2] = DAT_01008550;
    }
  }
LAB_01008452:
  local_60 = 1;
  local_5f = 0;
  puVar1 = (undefined1 *)0x1;
  local_5e = 0;
  local_5c = 0;
  local_5b = 1;
  local_5a = 0;
  local_59 = 1;
  local_50 = 0;
  uVar2 = 0;
  do {
    local_58 = local_4c[uVar2 + 9];
    if (0xffffff >= local_58) {
      puVar1 = (undefined1 *)local_4c[uVar2];
    }
    if (0xffffff < local_58 || (undefined1 *)0xffffff < puVar1) {
      return 0xc100;
    }
    if (local_58 == 0) {
      local_58 = 1;
    }
    local_54 = puVar1;
    if (puVar1 == (undefined1 *)0x0) {
      local_54 = (undefined1 *)0x1;
    }
    puVar1 = &local_60;
    FUN_0100f6e6(local_4c[uVar2 + 6],local_4c[uVar2 + 3]);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return 0;
}

