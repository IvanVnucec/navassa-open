
void FUN_01041d84(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 local_70;
  undefined1 auStack_6c [2];
  undefined1 local_6a;
  undefined1 local_69;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined2 local_5e;
  undefined1 local_5b;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_2e;
  undefined1 local_2d;
  
  iVar1 = DAT_01041e60;
  iVar3 = (short)param_1 * 0x158;
  iVar2 = DAT_01041e60 + iVar3;
  FUN_0101206c(local_4c,iVar2 + 8,0x34);
  FUN_0101204c(auStack_6c,iVar1 + iVar3,5);
  local_70 = *(undefined4 *)(iVar2 + 0x3c);
  fVar4 = (float)FUN_0101206c(&local_64,iVar2 + 0x40,0x18);
  local_2d = 0;
  local_44 = *(undefined4 *)(DAT_01041e64 + param_1 * 0x54 + 0x68);
  local_2e = 2;
  local_3c = 1;
  local_40 = 0;
  local_3e = 0;
  local_4c[0] = 0;
  local_3a = 0;
  local_48 = (int)fVar4;
  local_3b = 1;
  FUN_0101c40c(local_4c,param_1 + 2U & 0xff);
  local_6a = 2;
  local_69 = 0;
  FUN_0101c4b8(auStack_6c,&local_70,param_1);
  local_5b = 0;
  local_63 = 0;
  local_62 = 0;
  local_61 = 1;
  local_64 = 1;
  local_5e = 0;
  local_60 = 2;
  FUN_0101c55c(&local_64,param_1);
  FUN_0101cd80(1,param_1);
  return;
}

