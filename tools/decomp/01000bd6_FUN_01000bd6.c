
void FUN_01000bd6(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_010008a2(param_1 % 2 & 0xff,param_4,param_3,param_2);
  uVar1 = FUN_01001950(*param_4,param_4[1]);
  *(undefined1 *)(param_4 + 0xb) = uVar1;
  uVar2 = *(undefined4 *)(param_3 + param_1 * 4 + 0x9c);
  param_4[0xc] = uVar2;
  param_4[0xd] = uVar2;
  uVar3 = (uint)*(byte *)(param_3 + 0x90);
  if (uVar3 != 0) {
    uVar3 = uVar3 - 1;
  }
  *(uint *)(param_3 + 0x90) = uVar3;
  return;
}

