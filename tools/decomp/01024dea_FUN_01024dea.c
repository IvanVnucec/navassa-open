
void FUN_01024dea(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_01025444 + param_1 * 4);
  FUN_0102598c(uVar1,8,param_2 << 3);
  FUN_0102598c(uVar1,0x80000);
  return;
}

