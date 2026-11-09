
undefined4 FUN_01012cca(char *param_1,int param_2)

{
  *(byte *)(param_2 + 2) = *(byte *)(param_2 + 2) & 0x60;
  *(char *)(param_2 + 2) =
       param_1[1] << 4 | *param_1 << 7 | param_1[2] << 3 | param_1[3] << 2 | param_1[4] << 1 |
       param_1[5];
  return 0;
}

