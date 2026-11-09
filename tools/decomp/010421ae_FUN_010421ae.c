
void FUN_010421ae(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_38;
  undefined1 auStack_34 [2];
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_23;
  undefined4 uStack_14;
  
  uVar1 = *(uint *)(DAT_010423e8 + (short)param_1 * 0xbc + 0x48c);
  if ((uVar1 < DAT_010423ec) || (*(char *)(DAT_010423e8 + 0x77d) != '\x01')) {
    uVar1 = uVar1 >> 2;
  }
  else {
    uVar1 = uVar1 >> 4;
  }
  uStack_14 = param_4;
  FUN_0101d554(param_1 + 2U & 0xff,uVar1);
  iVar2 = DAT_010423f0;
  FUN_0101204c(auStack_34,DAT_010423f0 + param_1 * 0x158,5);
  iVar2 = iVar2 + param_1 * 0x158;
  local_38 = *(undefined4 *)(iVar2 + 0x3c);
  FUN_0101206c(&local_2c,iVar2 + 0x40,0x18);
  local_32 = 2;
  local_31 = 0;
  FUN_0101c4b8(auStack_34,&local_38,param_1);
  local_2c = 1;
  local_2b = 1;
  local_23 = 0;
  FUN_0101c55c(&local_2c,param_1);
  FUN_0101cd66(1,param_1);
  return;
}

