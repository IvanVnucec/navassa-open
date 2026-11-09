
undefined4 FUN_01043b6c(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0103b9b0((int)DAT_01043bb0);
  uVar1 = FUN_01035c84((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return 0;
}

