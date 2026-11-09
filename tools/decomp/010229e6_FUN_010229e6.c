
undefined4
FUN_010229e6(int param_1,int param_2,undefined1 *param_3,undefined1 *param_4,undefined1 *param_5,
            undefined1 *param_6)

{
  undefined1 *puVar1;
  
  if (1 < param_1) {
    return 0xcc00;
  }
  puVar1 = (undefined1 *)(DAT_01022ae0 + param_1 * 9);
  if ((param_2 << 0x1f < 0) && (param_3 != (undefined1 *)0x0)) {
    *param_3 = *puVar1;
  }
  if ((param_2 << 0x1d < 0) && (param_5 != (undefined1 *)0x0)) {
    *param_5 = puVar1[2];
  }
  if ((param_2 << 0x1e < 0) && (param_4 != (undefined1 *)0x0)) {
    *param_4 = puVar1[1];
  }
  if ((param_2 << 0x1c < 0) && (param_6 != (undefined1 *)0x0)) {
    *param_6 = puVar1[3];
  }
  return 0;
}

