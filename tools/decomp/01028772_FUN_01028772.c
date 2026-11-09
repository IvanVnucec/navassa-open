
void FUN_01028772(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 < 0xc0) {
    return;
  }
  uVar2 = param_2 - 0xc0;
  iVar3 = param_1 + (uVar2 >> 3);
  bVar1 = (byte)(1 << (uVar2 & 7));
  *(byte *)(iVar3 + 0x200) = *(byte *)(iVar3 + 0x200) & ~bVar1;
  *(undefined4 *)(param_1 + uVar2 * 8) = *param_3;
  *(undefined4 *)(param_1 + uVar2 * 8 + 4) = param_3[1];
  *(byte *)(iVar3 + 0x200) = bVar1 | *(byte *)(iVar3 + 0x200);
  return;
}

