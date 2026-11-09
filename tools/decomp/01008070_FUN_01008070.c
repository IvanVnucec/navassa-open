
undefined4 FUN_01008070(uint param_1,undefined1 *param_2)

{
  if (0x37 < param_1) {
    return 0x8000;
  }
  *param_2 = *(undefined1 *)(DAT_0100812c + param_1 * 8);
  return 0;
}

