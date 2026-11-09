
void FUN_010121c0(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 < *(uint *)(param_1 + 0x10)) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 0x10) = uVar1;
  uVar1 = *(uint *)(param_1 + 0x14);
  if (*(uint *)(param_1 + 0x14) < param_2) {
    uVar1 = param_2;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  return;
}

