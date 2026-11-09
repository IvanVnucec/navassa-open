
void FUN_01022d12(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int unaff_r4;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_01022dc0;
  if ((param_1 != 0) && (iVar2 = unaff_r4, param_1 == 1)) {
    iVar2 = DAT_01022dc4;
  }
  uVar1 = 0;
  do {
    *(undefined4 *)(param_2 + uVar1 * 4) = *(undefined4 *)(iVar2 + uVar1 * 4);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x3a);
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      iVar2 = param_2 + uVar1 * 8;
      iVar3 = *(int *)(iVar2 + 0x60);
      *(int *)(iVar2 + 0x60) = -iVar3;
      *(uint *)(iVar2 + 100) = -*(int *)(iVar2 + 100) - (uint)(iVar3 != 0);
      iVar3 = *(int *)(iVar2 + 0x90);
      *(int *)(iVar2 + 0x90) = -iVar3;
      *(uint *)(iVar2 + 0x94) = -*(int *)(iVar2 + 0x94) - (uint)(iVar3 != 0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    iVar2 = *(int *)(param_2 + 0xd0);
    *(int *)(param_2 + 0xd0) = -iVar2;
    *(uint *)(param_2 + 0xd4) = -*(int *)(param_2 + 0xd4) - (uint)(iVar2 != 0);
  }
  if (param_4 != 0) {
    uVar1 = 0;
    do {
      iVar2 = param_2 + uVar1 * 8;
      iVar3 = *(int *)(iVar2 + 0x78);
      *(int *)(iVar2 + 0x78) = -iVar3;
      *(uint *)(iVar2 + 0x7c) = -*(int *)(iVar2 + 0x7c) - (uint)(iVar3 != 0);
      iVar3 = *(int *)(iVar2 + 0xa8);
      *(int *)(iVar2 + 0xa8) = -iVar3;
      *(uint *)(iVar2 + 0xac) = -*(int *)(iVar2 + 0xac) - (uint)(iVar3 != 0);
      uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    iVar2 = *(int *)(param_2 + 0xd8);
    *(int *)(param_2 + 0xd8) = -iVar2;
    *(uint *)(param_2 + 0xdc) = -*(int *)(param_2 + 0xdc) - (uint)(iVar2 != 0);
  }
  return;
}

