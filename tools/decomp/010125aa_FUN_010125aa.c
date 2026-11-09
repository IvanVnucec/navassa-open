
void FUN_010125aa(int param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  
  puVar4 = DAT_01011a74;
  puVar3 = DAT_01011a70;
  iVar5 = *(int *)(param_1 + 8);
  uVar6 = 0;
  *DAT_01011a70 = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  *puVar3 = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3 = DAT_01011a78;
  DAT_01011a78[1] = 0;
  puVar3[2] = 0;
  *puVar4 = 0;
  do {
    iVar2 = uVar6 * 2;
    iVar1 = uVar6 * 2;
    uVar6 = uVar6 + 1;
    *(undefined2 *)(DAT_01011a7c + iVar1) = *(undefined2 *)(iVar5 + 0x1a + iVar2);
  } while (uVar6 < 0x18);
  *puVar3 = *(undefined2 *)(iVar5 + 0x4c);
  return;
}

