
void prvGetNextUnblockTime(void)

{
  undefined4 uVar1;
  
  if (**(int **)(DAT_0101ba44 + 0x28) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_0101ba44 + 0x28) + 0xc) + 0xc) + 4);
  }
  *(undefined4 *)(DAT_0101ba44 + 100) = uVar1;
  return;
}

