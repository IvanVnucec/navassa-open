
byte FUN_01035486(byte param_1)

{
  return *(byte *)(*(int *)(DAT_010358f4 + (uint)param_1 * 4) + 0xa2) & 1 ^ 1;
}

