
void FUN_01005b60(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  FUN_01005ae8();
  *(undefined1 *)((uint)*(byte *)(param_2 + 0x29d) + param_2 + 8) = 0;
  uVar1 = FUN_01005bb2();
  *(int *)((int)uVar1 + 0x20) = (int)((ulonglong)uVar1 >> 0x20);
  FUN_0100d7b8((uint)*(byte *)(param_2 + 0x29d) * 0x138 + param_2 + 0x24,200);
  FUN_01005a50(param_3);
  uVar1 = FUN_01005bb2();
  *(int *)((int)uVar1 + 0xec) = (int)((ulonglong)uVar1 >> 0x20);
  FUN_0100d7b8(param_2 + (short)(ushort)*(byte *)(param_2 + 0x29d) * 0x138 + 0xf0,0x68);
  return;
}

