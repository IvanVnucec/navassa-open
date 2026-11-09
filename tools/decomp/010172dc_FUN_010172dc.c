
void FUN_010172dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(&DAT_0101751c + param_1 * 4);
  iVar3 = *(int *)(&DAT_01017524 + param_1 * 4);
  uVar1 = pin_update(iVar2 + 0xe2,0x80,0x80);
  FUN_01017086(uVar1,0x10,*(byte *)(iVar3 + 0x2c) & 0x10 ^ 0x10);
  FUN_01017320();
  pin_update(iVar2 + 0xe3,0x80,0x80,param_4);
  return;
}

