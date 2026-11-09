
void FUN_01029d1e(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = FUN_01006ce2();
  if (uVar2 < 2) {
    iVar3 = DAT_0102a81c + uVar2;
    cVar1 = *(char *)(iVar3 + 0x18);
    bVar4 = cVar1 != '\0';
    if (bVar4) {
      cVar1 = *(char *)(iVar3 + 6);
    }
    if (bVar4 && cVar1 != '\0') {
      FUN_0102dc40(param_1,3,0);
      FUN_0102dc40(param_1,0,0);
      *(undefined1 *)(iVar3 + 6) = 0;
      FUN_010071b4(uVar2,0);
      return;
    }
  }
  return;
}

