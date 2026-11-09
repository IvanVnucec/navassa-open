
undefined4 FUN_0100ece0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_010026f0(*(undefined1 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 4),*DAT_0100ee34,
                       DAT_0100ee34[1],0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x30);
  uVar2 = FUN_0100a768(param_1,*(undefined2 *)(param_2 + param_1 * 2 + 0x22));
  if (*DAT_0100ee38 == '\0') {
    FUN_0100e9a0(param_1,uVar1,uVar3,uVar2,DAT_0100ee3c + param_1 * 8);
  }
  else {
    FUN_0100eafa(param_1,uVar1,1,uVar3);
  }
  return 0;
}

