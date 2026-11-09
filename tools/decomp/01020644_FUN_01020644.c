
void FUN_01020644(int param_1,undefined1 *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0102076c + param_1 * 4);
  *(undefined1 *)(iVar1 + 0x16) = *param_2;
  *(undefined1 *)(iVar1 + 0x17) = param_2[1];
  *(undefined1 *)(iVar1 + 0x18) = param_2[2];
  *(undefined1 *)(iVar1 + 0x19) = param_2[3];
  *(undefined1 *)(iVar1 + 0x1a) = param_2[4];
  pin_update(iVar1 + 0x20,7,3);
  pin_update(iVar1 + 0x1d,7,param_3);
  pin_update(iVar1 + 0x1d,8,8);
  *(char *)(iVar1 + 0x1b) = (char)param_4;
  pin_update(iVar1 + 0x1c,0xf,param_4 >> 8,param_4);
  return;
}

