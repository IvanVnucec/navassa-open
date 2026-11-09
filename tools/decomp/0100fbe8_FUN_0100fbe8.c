
void FUN_0100fbe8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0100fd5c(param_1,0);
  uVar2 = *(undefined4 *)(DAT_0100febc + param_1 * 4);
  uVar1 = FUN_0100fcaa(uVar1,0x156,*(undefined1 *)(param_2 + 8));
  uVar1 = FUN_0100fcaa(uVar1,0x157,*(undefined1 *)(param_2 + 9));
  uVar1 = FUN_0100fcaa(uVar1,0x158,*(undefined1 *)(param_2 + 10));
  FUN_0100fcaa(uVar1,0x130,*(undefined1 *)(param_2 + 6));
  FUN_0100f7bc(uVar2,0x131,*(undefined1 *)(param_2 + 7),param_4);
  return;
}

