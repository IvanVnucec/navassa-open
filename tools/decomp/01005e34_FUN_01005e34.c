
void FUN_01005e34(int param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(DAT_01005e4c + 0x77d) != '\0') {
    puVar1 = (undefined4 *)(DAT_01005e74 + param_1 * 4);
    *puVar1 = puVar1[2];
    puVar1[2] = puVar1[4];
  }
  return;
}

