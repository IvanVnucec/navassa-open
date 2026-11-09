
void FUN_0100fc32(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0100fd48(param_1,0);
  uVar2 = *(undefined4 *)(DAT_0100febc + param_1 * 4);
  uVar1 = FUN_0100fca6(uVar1,0x12a,0xffff,*(undefined2 *)(param_2 + 0x16));
  uVar1 = FUN_0100fca6(uVar1,300,0xffffffff,*(undefined4 *)(param_2 + 0x18));
  uVar1 = FUN_0100fca6(uVar1,0x132,0xffffffff,*(undefined4 *)(param_2 + 0x1c));
  uVar1 = FUN_0100fca6(uVar1,0x136,0xffffffff,*(undefined4 *)(param_2 + 0x20));
  uVar1 = FUN_0100fca6(uVar1,0x13a,0xffffffff,*(undefined4 *)(param_2 + 0x24));
  FUN_0100fcaa(uVar1,0x13e,*(undefined1 *)(param_2 + 0x28));
  FUN_0100f7bc(uVar2,0x13f,*(undefined1 *)(param_2 + 0x29),param_4);
  return;
}

