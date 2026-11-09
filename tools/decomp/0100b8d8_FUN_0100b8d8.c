
undefined4 FUN_0100b8d8(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 local_a0 [4];
  undefined1 auStack_98 [4];
  undefined4 local_94;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_68;
  undefined1 local_67;
  bool local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 auStack_60 [56];
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined4 uStack_20;
  
  iVar5 = *(int *)(param_1 + 0xc);
  uVar6 = (uint)*param_1;
  bVar1 = param_1[100];
  cVar2 = *(char *)(iVar5 + 0xb);
  local_a0[0] = 0;
  local_6c = 1;
  uStack_20 = param_4;
  FUN_0101206c(auStack_98,*(int *)(param_1 + 4) + 0x40,0x28);
  local_6f = 0;
  local_27 = 0;
  local_26 = 0;
  iVar4 = DAT_0100bccc + uVar6 * 0x54;
  if (bVar1 == 5) {
    local_67 = 2;
    local_94 = *(undefined4 *)(iVar4 + 0x54);
  }
  else if (bVar1 == 6) {
    local_67 = 1;
    local_94 = *(undefined4 *)(iVar4 + 0x6c);
  }
  else if (bVar1 == 7) {
    local_67 = 0;
    local_94 = *(undefined4 *)(iVar4 + 0x68);
  }
  local_63 = *(char *)(iVar5 + 0xa6) != '\0';
  local_66 = !(bool)local_63;
  local_70 = 1;
  bVar3 = !(bool)local_63;
  param_1[0x104] = bVar3;
  local_28 = local_63;
  FUN_0100ba30(*param_1,param_1[0x104],1);
  FUN_0100bc76(uVar6,bVar3);
  local_6d = 0;
  local_6e = 1;
  local_68 = 1;
  local_65 = 0;
  local_64 = 0;
  FUN_0101206c(auStack_60,local_a0,0x38);
  FUN_0101cb40(&local_68,uVar6);
  FUN_0101d740(uVar6,0,0,(short)cVar2 * 0x2e + DAT_0100bcd0,0x17);
  FUN_0101d826(uVar6,0,1);
  FUN_0101d7c8(uVar6,0,0);
  return 0;
}

