
void FUN_010127f6(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    puVar3 = (undefined4 *)(param_2 + uVar2 * 8);
    uVar2 = uVar2 + 1;
    *puVar3 = *(undefined4 *)(param_1 + iVar1);
    puVar3[1] = 0;
  } while (uVar2 < 0x18);
  return;
}

