
void FUN_01016132(uint param_1,uint param_2)

{
  uint uVar1;
  
  while ((param_2 != 0 && (param_1 != param_2))) {
    uVar1 = param_1 - param_2 * (param_1 / param_2);
    param_1 = param_2;
    param_2 = uVar1;
  }
  return;
}

