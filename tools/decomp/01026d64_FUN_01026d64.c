
void FUN_01026d64(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = 0;
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    param_1[uVar1 + 1] = 0x3f800000;
    param_1[uVar1 + 0x1a] = 0;
    uVar1 = uVar2;
  } while (uVar2 < 0x19);
  return;
}

