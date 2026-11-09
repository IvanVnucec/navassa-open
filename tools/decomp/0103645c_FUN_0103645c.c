
void FUN_0103645c(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  iVar3 = DAT_010364d0;
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 2);
  uVar2 = *(undefined1 *)(*(int *)(param_1 + 0x10) + 1);
  uVar4 = FUN_01008f08(2,*(undefined1 *)(DAT_010364d0 + 0xbe));
  uVar5 = FUN_010364a2(uVar4,param_2,uVar2);
  FUN_01009518(2,param_2,uVar1,1);
  FUN_01009784((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),2,*(undefined1 *)(iVar3 + 0xbe));
  return;
}

