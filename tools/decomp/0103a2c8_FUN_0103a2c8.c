
void FUN_0103a2c8(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_0103a52a();
  iVar1 = DAT_0103a388 + param_1 * 0xbc;
  pcVar2 = (char *)(iVar1 + 0x201);
  FUN_0103a4be(*pcVar2,*(undefined1 *)(iVar1 + 0x202));
  if (*pcVar2 != '\0') {
    FUN_0103a4de(1);
    FUN_0103a4e6(1);
    return;
  }
  return;
}

