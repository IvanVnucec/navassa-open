
undefined1 * FUN_010423fc(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_010425bc + param_1 * 4);
  *(undefined1 *)(iVar1 + 0xf2) = *param_2;
  *(undefined1 *)(iVar1 + 0xf3) = param_2[1];
  *(undefined1 *)(iVar1 + 0xf4) = param_2[2];
  *(undefined1 *)(iVar1 + 0xf5) = param_2[3];
  return (undefined1 *)(iVar1 + 0xf5);
}

