
undefined1 * FUN_01006628(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0100667c + param_1 * 4);
  *(char *)(iVar1 + 0x1f) = (char)((uint)param_2 >> 0x18);
  *(char *)(iVar1 + 0x20) = (char)((uint)param_2 >> 0x10);
  *(char *)(iVar1 + 0x21) = (char)((uint)param_2 >> 8);
  *(undefined1 *)(iVar1 + 0x22) = (char)param_2;
  return (undefined1 *)(iVar1 + 0x22);
}

