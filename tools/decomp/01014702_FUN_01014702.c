
undefined4 FUN_01014702(uint param_1,undefined1 *param_2)

{
  if (-1 < (int)((0xfU >> (param_1 & 0xff)) << 0x1f)) {
    return 0xe702;
  }
  *param_2 = *(undefined1 *)(*(int *)(DAT_01015280 + param_1 * 4 + 0x9c) + 0x10);
  return 0;
}

