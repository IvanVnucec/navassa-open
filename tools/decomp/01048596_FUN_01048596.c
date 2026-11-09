
void FUN_01048596(int param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  
  thunk_FUN_010071b4(param_1,1);
  uVar3 = FUN_010485d4();
  uVar1 = FUN_010485c8((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0);
  bVar2 = uVar1 == 0;
  if (bVar2) {
    uVar1 = (uint)*(byte *)(DAT_01048b58 + param_1 + 2);
  }
  if (!bVar2 || uVar1 != 0) {
    return;
  }
  thunk_FUN_01009094(param_1,1);
  return;
}

