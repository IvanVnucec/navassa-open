
undefined4 FUN_0100804c(uint param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  
  if (0x37 < param_1) {
    return 0x8000;
  }
  puVar1 = (undefined1 *)(DAT_0100812c + param_1 * 8);
  *param_2 = *puVar1;
  *param_3 = puVar1[2];
  *param_4 = puVar1[3];
  return 0;
}

