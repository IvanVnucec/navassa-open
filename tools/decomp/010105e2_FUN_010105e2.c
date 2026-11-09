
undefined4 FUN_010105e2(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = ((param_1 & 3) >> (uVar2 & 0xff)) << 0x1f;
    if (iVar1 < 0) {
      FUN_0101064e(iVar1,0,0xff,0);
    }
    iVar1 = (((param_1 << 0x1a) >> 0x1e) >> (uVar2 & 0xff)) << 0x1f;
    if (iVar1 < 0) {
      FUN_0101064e(iVar1,1,9,0);
    }
    iVar1 = (((param_1 << 0x18) >> 0x1e) >> (uVar2 & 0xff)) << 0x1f;
    if (iVar1 < 0) {
      FUN_0101064e(iVar1,2,3,0);
    }
    iVar1 = ((param_1 >> 8 & 3) >> (uVar2 & 0xff)) << 0x1f;
    if (iVar1 < 0) {
      FUN_0101064e(iVar1,3,9,0);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return 0;
}

