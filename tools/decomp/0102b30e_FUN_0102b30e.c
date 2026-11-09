
void FUN_0102b30e(uint *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1[3] + param_3;
  param_1[3] = uVar1;
  bVar2 = param_1[2] <= uVar1;
  if (bVar2) {
    uVar1 = *param_1;
  }
  if (bVar2) {
    param_1[3] = uVar1;
  }
  FUN_0101204c(param_4,param_1[3]);
  return;
}

