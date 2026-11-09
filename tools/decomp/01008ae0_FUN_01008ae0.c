
void FUN_01008ae0(int param_1)

{
  pin_update(*(int *)(DAT_010091f8 + param_1 * 4) + 0x37,0xf,
             *(undefined1 *)(param_1 * 0x60 + DAT_010091f0 + 0x45));
  return;
}

