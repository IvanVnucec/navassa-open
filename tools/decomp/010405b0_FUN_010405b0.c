
int FUN_010405b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0103ae90(param_1,1);
  FUN_01008252(*(byte *)(param_1 + 1) + 4,2);
  FUN_01008252(*(byte *)(param_1 + 1) + 2,2);
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 2) == '\x02') {
      FUN_010412ca();
      FUN_010412ea();
      uVar2 = 0x79;
    }
    else {
      if (*(char *)(param_1 + 2) != '\x03') {
        return 0xe702;
      }
      FUN_0104130a();
      FUN_0104132a();
      uVar2 = 0x7d;
    }
    FUN_010028ac(uVar2);
    iVar1 = FUN_01040692();
    if (iVar1 == 0) {
      FUN_010406a8();
    }
  }
  return iVar1;
}

