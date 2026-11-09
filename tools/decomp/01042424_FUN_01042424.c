
void FUN_01042424(int param_1,undefined1 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010425c0 + param_1 * 4);
  pin_update(iVar1 + 0x1d,8,8);
  pin_update(iVar1 + 0x20,7,3);
  *(undefined1 *)(iVar1 + 0x1a) = param_2;
  pin_update(iVar1 + 0x1d,7,param_3);
  *(char *)(iVar1 + 0x1b) = (char)param_4;
  pin_update(iVar1 + 0x1c,0xf,param_4 >> 8);
  return;
}

