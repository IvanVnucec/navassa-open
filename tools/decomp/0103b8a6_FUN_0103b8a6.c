
void FUN_0103b8a6(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    if (-1 < (int)((0x1fU >> (param_2 & 0xff)) << 0x1f)) {
      iVar1 = 0xe700;
    }
  }
  else {
    iVar1 = 0xc801;
  }
  if (param_2 == 4) {
    param_2 = 0;
  }
  if (iVar1 != 0) {
    return;
  }
  FUN_010027dc(*(int *)(DAT_0103b8f8 + param_1 * 4) + (uint)*(ushort *)(DAT_0103b90c + param_2 * 2),
               7,*(undefined1 *)(param_3 + 1));
  FUN_0103b7bc(param_1,param_2,*(undefined1 *)(param_3 + 2),param_4);
  return;
}

