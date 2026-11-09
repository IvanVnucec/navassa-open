
void FUN_0102b304(uint *param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  
  if (param_1[0x10] == 0) {
    return;
  }
  uVar1 = param_1[3] + param_1[0x10];
  param_1[3] = uVar1;
  bVar2 = param_1[2] <= uVar1;
  if (bVar2) {
    uVar1 = *param_1;
  }
  if (bVar2) {
    param_1[3] = uVar1;
  }
  FUN_0101204c(param_2,param_1[3]);
  return;
}

