
int FUN_0103dafa(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (param_1 < 4) {
    uVar2 = -(uint)(param_1 == 0) >> 0x1f;
  }
  else {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    return -1;
  }
  uVar2 = 0;
  do {
    if (((int)((param_1 >> (uVar2 & 0xff)) << 0x1f) < 0) &&
       ((int)((uint)*(byte *)(*(int *)(DAT_0103de9c + uVar2 * 4) + 0xdd) << 0x1f) < 0)) {
      iVar1 = iVar1 + 1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return iVar1;
}

