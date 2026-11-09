
undefined8 FUN_01023180(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_010231a0();
  iVar1 = FUN_010231e2(param_1);
  if (iVar1 == 0) {
    FUN_010231c2(param_1);
  }
  return CONCAT44(param_4,iVar1);
}

