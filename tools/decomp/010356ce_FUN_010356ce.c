
undefined4
FUN_010356ce(float param_1,uint param_2,char param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  bool local_a0 [8];
  undefined4 local_98;
  undefined1 auStack_94 [2];
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_86;
  undefined1 local_84;
  undefined1 local_74;
  undefined1 local_70 [2];
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_69;
  undefined1 local_67;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  undefined1 local_3a;
  undefined1 local_39;
  
  iVar1 = DAT_010358f8;
  FUN_0101206c(&local_58,(param_2 & 0xff) * 0x158 + DAT_010358f8 + 8,0x34);
  FUN_0101204c(auStack_94,(param_2 & 0xff) * 0x158 + iVar1,5);
  local_98 = *(undefined4 *)((param_2 & 0xff) * 0x158 + iVar1 + 0x3c);
  FUN_0101206c(local_70,(param_2 & 0xff) * 0x158 + iVar1 + 0x40,0x18);
  FUN_0101206c(&local_8c,iVar1 + (param_2 & 0xff) * 0x158 + 0x58,0x1c);
  FUN_0101204c(local_a0,DAT_010358fc + (param_2 & 0xff) * 0xbc + 0x78,8);
  uVar2 = FUN_01012c10(param_1 / 8.0);
  uVar5 = FUN_0103b9b0(uVar2);
  local_54 = FUN_01020608((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  iVar1 = DAT_01035904;
  local_50 = DAT_01035900;
  local_4c = 0;
  local_4a = 0;
  local_39 = 0;
  local_3a = 0;
  local_58 = 1;
  local_57 = 1;
  local_46 = 0;
  if ((*(char *)(DAT_01035904 + 2) == '\x01') && (*(char *)(DAT_01035904 + 1) == '\0')) {
    local_48 = 1;
    local_47 = 1;
  }
  else {
    local_48 = 2;
    local_47 = 2;
  }
  uVar4 = 0xfffffffd < param_2;
  FUN_0101c40c(&local_58,param_2 + 2 & 0xff,1);
  local_92 = 2;
  local_91 = 0;
  FUN_0101c4b8(auStack_94,&local_98,param_2 & 0xff);
  local_67 = 0;
  local_6e = 0;
  local_70[0] = 0;
  local_6d = 0;
  local_6c = 2;
  local_69 = 2;
  FUN_0101c55c(local_70,param_2 & 0xff);
  FUN_0101cd66(1,param_2 & 0xff);
  local_a0[1] = false;
  local_a0[2] = false;
  local_a0[3] = false;
  local_a0[4] = false;
  local_a0[5] = false;
  FUN_0102025c(*(undefined4 *)(DAT_01035908 + (param_2 & 0xff) * 0x54 + 0x50));
  uVar3 = 1;
  uVar5 = FUN_0102035c();
  FUN_01012c58((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),DAT_01035910,DAT_01035914);
  local_a0[0] = !(bool)uVar4 || (bool)uVar3;
  FUN_0101a8a8(param_2 + 2 & 0xff,local_a0);
  FUN_0101cd80(0,param_2 & 0xff);
  if (param_3 == '\0') {
    local_74 = 0;
    local_86 = 0;
    local_88 = 0;
    local_89 = 0;
    local_8b = *(char *)(iVar1 + 2) == '\0';
    local_84 = 1;
    local_8c = 1;
    FUN_0101c698(&local_8c,param_2 & 0xff);
    FUN_0101cdb4(1,param_2 & 0xff);
  }
  return param_5;
}

