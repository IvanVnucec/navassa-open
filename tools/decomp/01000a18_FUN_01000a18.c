
void FUN_01000a18(int param_1,int param_2,int param_3,int param_4)

{
  FUN_01002e0a(*(undefined4 *)(param_4 + 0x30),*(undefined1 *)(param_3 + 0x85),0,
               *(undefined4 *)(param_3 + 0x80),*(int *)(param_2 + 0x2c) >> 0x11 & 1);
  *DAT_01001744 = 1;
  FUN_010006e2(param_1 % 2 & 0xff,param_4,param_3,param_2);
  return;
}

