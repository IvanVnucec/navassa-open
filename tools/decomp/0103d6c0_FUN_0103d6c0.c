
uint FUN_0103d6c0(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  
  iVar3 = DAT_0103d768;
  iVar2 = DAT_0103d764;
  pcVar1 = DAT_0103d760;
  if (*DAT_0103d760 == '\0') {
    iVar5 = 8;
    do {
      iVar5 = iVar5 + -1;
      *(uint *)(pcVar1 + 4) = (uint)(iVar3 * *(int *)(pcVar1 + 4) + iVar2) % 0x7fffffff;
      puVar4 = DAT_0103d76c;
    } while (iVar5 != 0);
    iVar5 = 0x10;
    puVar8 = DAT_0103d76c;
    do {
      uVar10 = (uint)(iVar3 * *(int *)(pcVar1 + 4) + iVar2) % 0x7fffffff;
      *(uint *)(pcVar1 + 4) = uVar10;
      puVar9 = puVar8 + 1;
      *puVar8 = uVar10;
      uVar10 = (iVar3 * uVar10 + iVar2) % 0x7fffffff;
      *(uint *)(pcVar1 + 4) = uVar10;
      iVar5 = iVar5 + -1;
      puVar8 = puVar8 + 2;
      *puVar9 = uVar10;
    } while (iVar5 != 0);
    puVar4[0x20] = puVar4[0x1f];
    *pcVar1 = '\x01';
  }
  puVar4 = DAT_0103d76c;
  uVar6 = (uint)(iVar3 * *(int *)(pcVar1 + 4) + iVar2) % 0x7fffffff;
  *(uint *)(pcVar1 + 4) = uVar6;
  uVar7 = (byte)puVar4[0x20] & 0x1f;
  uVar10 = puVar4[uVar7];
  puVar4[0x20] = uVar10;
  puVar4[uVar7] = uVar6;
  return uVar10 & 0x3fffffff;
}

