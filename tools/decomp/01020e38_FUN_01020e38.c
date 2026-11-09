
undefined4 FUN_01020e38(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 < 2) {
    uVar2 = FUN_0102025c(param_2);
    uVar3 = FUN_0102025c(*(undefined4 *)(DAT_01020f48 + param_1 * 0xbc + 0x1a0));
    uVar2 = FUN_0102035c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,
                         (int)((ulonglong)uVar3 >> 0x20));
    uVar2 = FUN_0101f250((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x33333333,DAT_01020f98);
    uVar1 = FUN_0101f250((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,DAT_01020f9c);
    uVar2 = FUN_0102fbe0(uVar1);
    uVar1 = FUN_01035c84((int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
    return uVar1;
  }
  return 0;
}

