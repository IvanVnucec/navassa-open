
void FUN_01012868(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4e8) == 0) {
    FUN_010127f6(param_1 + 0x38,param_1 + 0x1c0);
    FUN_010127f6(param_1 + 0x98,param_1 + 0x288);
    FUN_01012810(param_1 + 0xf8,param_1 + 0x350);
    FUN_01012810(param_1 + 0x158,param_1 + 0x418);
    iVar1 = 1;
  }
  else {
    FUN_01012826();
    FUN_01012826(param_1 + 0x98,param_1 + 0x288);
    FUN_0101284e(param_1 + 0xf8,param_1 + 0x350);
    FUN_0101284e(param_1 + 0x158,param_1 + 0x418);
    iVar1 = *(int *)(param_1 + 0x4e8) + 1;
  }
  *(int *)(param_1 + 0x4e8) = iVar1;
  *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x1c4);
  return;
}

