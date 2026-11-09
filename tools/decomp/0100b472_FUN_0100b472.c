
undefined4 FUN_0100b472(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(DAT_0100b544 + param_1 * 4);
  FUN_01015c54(2);
  FUN_01015c80(2,param_2,0,0);
  uVar1 = 0;
  pcVar3 = (char *)(iVar2 + 0x56);
  do {
    iVar2 = FUN_01015d78(2);
    if (iVar2 != 0) break;
  } while (*pcVar3 != '\0');
  if (*pcVar3 != '\0') {
    uVar1 = 0xc90e;
  }
  FUN_01015d2e(2);
  return uVar1;
}

