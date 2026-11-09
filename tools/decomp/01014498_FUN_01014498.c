
void FUN_01014498(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  
  if (*(char *)(DAT_010144f0 + param_1) == '\x04') {
    uVar1 = param_1 - 2;
    bVar4 = 1 < uVar1;
    bVar3 = uVar1 == 2;
    if (2 < uVar1) {
      uVar1 = param_1 - 6;
      bVar4 = uVar1 != 0;
      bVar3 = uVar1 == 1;
    }
    if (((!bVar4 || bVar3) || (uVar1 == 7)) || (uVar1 == 9)) {
      FUN_01013d72(param_1,1);
      FUN_01013aac(param_1,0);
      if (param_1 < 0xd) {
        uVar2 = FUN_01014370(param_1,1);
        FUN_01013faa(param_1,uVar2);
        uVar2 = FUN_0101438c(param_1,1);
        FUN_0101402a(param_1,uVar2);
        return;
      }
    }
  }
  return;
}

