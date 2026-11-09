
void FUN_01012eea(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0101a818();
  uVar1 = FUN_0101369c(0,uVar1,*(undefined4 *)(param_2 + 0x18),0);
  *(undefined4 *)(param_2 + 4) = uVar1;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}

