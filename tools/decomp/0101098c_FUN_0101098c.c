
void FUN_0101098c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = pin_update(*(int *)(DAT_01010e3c + param_1 * 4) + 0xd3,2,0);
  uVar2 = FUN_010109d4((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x40);
  FUN_010109d4((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0);
  iVar1 = *(int *)(DAT_01010e40 + param_1 * 4);
  FUN_01010d6a(DAT_01010e40,2,2);
  pin_update(iVar1 + 0x175,2,0,param_4);
  return;
}

