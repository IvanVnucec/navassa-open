
void FUN_0104855c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  thunk_FUN_010071b4(param_2,0);
  uVar2 = FUN_010485d4();
  iVar1 = FUN_010485c8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1);
  if ((iVar1 != 0) && (*(char *)(DAT_01048b58 + param_2 + 2) == '\0')) {
    thunk_FUN_01008f08(param_2,*(undefined1 *)(DAT_01048b58 + param_2 + 0xbc));
    thunk_FUN_01009094(param_2,0);
    return;
  }
  return;
}

