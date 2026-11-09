
uint FUN_01014694(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  do {
    if ((int)((param_1 >> *(sbyte *)(*(int *)(DAT_01015388 + uVar2 * 4) + 0x10)) << 0x1f) < 0) {
      uVar1 = uVar1 | 1 << (uVar2 & 0xff);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 4);
  return uVar1 & 0xff;
}

