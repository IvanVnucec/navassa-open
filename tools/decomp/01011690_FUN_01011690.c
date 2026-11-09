
undefined4 FUN_01011690(uint param_1,int param_2,int param_3)

{
  if ((param_1 < 2) && (param_2 != 0)) {
    *DAT_01011a38 =
         ((ushort)(param_2 << (*(uint *)(&DAT_01011a9c + param_1 * 4) & 0xff)) |
         (ushort)(param_3 << 4)) & (ushort)*(undefined4 *)(&DAT_01011aa4 + param_1 * 4) |
         *DAT_01011a38 & ~(ushort)*(undefined4 *)(&DAT_01011aa4 + param_1 * 4);
    return 1;
  }
  return 0;
}

