
int FUN_01005c82(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_01005e50 + param_2 * 0x2a0;
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 == 1) {
    iVar2 = iVar2 + 0xfc0;
  }
  else if (uVar1 != 0) {
    if (uVar1 == 3) {
      iVar2 = iVar2 + 0xa80;
    }
    else if (uVar1 < 3) {
      iVar2 = iVar2 + 0x540;
    }
  }
  iVar3 = 0;
  if (*(char *)(iVar2 + 0x29c) != '\0') {
    iVar3 = 6;
  }
  return iVar2 + iVar3 + *(int *)(param_1 + 0x30) * 2 + 0x290;
}

