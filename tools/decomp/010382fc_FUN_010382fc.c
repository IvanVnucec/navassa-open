
longlong FUN_010382fc(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  uint in_r3;
  int iVar5;
  int unaff_r4;
  
  FUN_0103837e();
  puVar2 = DAT_01038560;
  if (**(short **)(unaff_r4 + 0xc) != 0) {
    **(undefined2 **)(unaff_r4 + 0x38) = (*(undefined2 **)(unaff_r4 + 0x38))[4];
    iVar5 = 1;
    *(undefined4 *)(*(int *)(unaff_r4 + 0x38) + 0x14) =
         *(undefined4 *)(*(int *)(unaff_r4 + 0x38) + 0x24);
    puVar3 = puVar2;
    puVar4 = (undefined4 *)(puVar2 + 8);
    do {
      *(undefined2 *)(*(int *)(unaff_r4 + 0x38) + iVar5 * 2) = *puVar3;
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(unaff_r4 + 0x38) + iVar1 + 0x14) = *puVar4;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < 5);
  }
  if (*(short *)(*(int *)(unaff_r4 + 0xc) + 2) != 0) {
    *(undefined2 *)(*(int *)(unaff_r4 + 0x38) + 0x40) =
         *(undefined2 *)(*(int *)(unaff_r4 + 0x38) + 0x48);
    *(undefined4 *)(*(int *)(unaff_r4 + 0x38) + 0x54) =
         *(undefined4 *)(*(int *)(unaff_r4 + 0x38) + 100);
    iVar5 = 1;
    puVar3 = puVar2 + 0x20;
    puVar4 = (undefined4 *)(puVar2 + 0x28);
    do {
      *(undefined2 *)(*(int *)(unaff_r4 + 0x38) + iVar5 * 2 + 0x40) = *puVar3;
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(unaff_r4 + 0x38) + iVar1 + 0x54) = *puVar4;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < 5);
  }
  return (ulonglong)in_r3 << 0x20;
}

