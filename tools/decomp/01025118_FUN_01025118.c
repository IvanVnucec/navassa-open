
void FUN_01025118(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(DAT_01025444 + param_1 * 4);
  uVar3 = FUN_0102518c(param_1,0x20000,0);
  uVar1 = FUN_0102518a((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x40000);
  FUN_0102518c(uVar1,0x80000,param_4 << 0x13);
  *(undefined4 *)(iVar2 + 0x18) = param_2;
  uVar1 = FUN_01025184((undefined4 *)(iVar2 + 0x18),0x20000,0);
  uVar3 = FUN_01025184(uVar1,0x40000);
  *(undefined4 *)(iVar2 + 0x30) = param_3;
  FUN_0102518a((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0x10000);
  FUN_0102598c(iVar2 + 0x34,0x10000);
  return;
}

