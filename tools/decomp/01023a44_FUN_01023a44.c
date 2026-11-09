
void FUN_01023a44(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    param_1[uVar1 + 0x17] = 0;
    param_1[uVar1 + 3] = 0;
    uVar1 = uVar2;
  } while (uVar2 < 0x14);
  return;
}

