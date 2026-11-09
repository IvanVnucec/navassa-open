
void FUN_01000a60(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  FUN_01002e0a(*(undefined4 *)(param_4 + 0x30),*(undefined1 *)(param_3 + 0x85),1,
               *(undefined4 *)(param_3 + 0x80),*(int *)(param_2 + 0x2c) >> 0x11 & 1);
  *DAT_01001744 = 1;
  FUN_010008a2(param_1 % 2 & 0xff,param_4,param_3,param_2);
  uVar1 = (uint)*(byte *)(param_3 + 0x90);
  if (uVar1 != 0) {
    uVar1 = uVar1 - 1;
  }
  *(uint *)(param_3 + 0x90) = uVar1;
  return;
}

