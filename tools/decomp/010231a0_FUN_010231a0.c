
void FUN_010231a0(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  FUN_01022b48(uVar2);
  uVar1 = FUN_01022cc2(uVar2,*(undefined4 *)(param_1 + 8));
  *DAT_01023218 = uVar1;
  FUN_01036758(uVar2,param_4);
  FUN_0102598c(*(int *)(DAT_01022db4 + uVar2 * 4) + 4,1,1);
  return;
}

