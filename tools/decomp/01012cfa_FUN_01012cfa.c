
undefined4 FUN_01012cfa(int param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_2;
  *param_2 = bVar1 & 3;
  *param_2 = bVar1 & 3 |
             *(char *)(param_1 + 0x1e) << 6 | *(char *)(param_1 + 0x1d) << 7 |
             *(char *)(param_1 + 0x1f) << 5 | *(char *)(param_1 + 0x20) << 4 |
             *(char *)(param_1 + 0x21) << 3 | *(char *)(param_1 + 0x22) << 2;
  param_2[1] = 0;
  param_2[1] = *(byte *)(param_1 + 0x1c) | *(char *)(param_1 + 0x23) << 6 |
               *(char *)(param_1 + 0x14) << 5 | *(char *)(param_1 + 0x15) << 4 |
               *(char *)(param_1 + 0x16) << 3 | *(char *)(param_1 + 0x17) << 2 |
               *(char *)(param_1 + 0x18) << 1 | *(char *)(param_1 + 0x19) << 7;
  param_2[2] = param_2[2] & 0x60;
  param_2[2] = *(char *)(param_1 + 0x29) << 4 | *(char *)(param_1 + 0x28) << 7 |
               *(char *)(param_1 + 0x2a) << 3 | *(char *)(param_1 + 0x2b) << 2 |
               *(char *)(param_1 + 0x2c) << 1 | *(byte *)(param_1 + 0x2d);
  bVar1 = param_2[3];
  param_2[3] = bVar1 & 0xf0;
  param_2[3] = bVar1 & 0xf0 | *(char *)(param_1 + 0x24) - 1U;
  return 0;
}

