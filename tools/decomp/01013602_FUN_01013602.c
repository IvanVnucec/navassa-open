
void FUN_01013602(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(DAT_01013644 + 0xb);
  if (0x1b < uVar2) {
    return;
  }
  bVar1 = (byte)(1 << uVar2);
  if (uVar2 < 8) {
    if (param_1 != 0) {
      *DAT_01013654 = bVar1 | *DAT_01013654;
      return;
    }
    *DAT_01013654 = ~bVar1 & *DAT_01013654;
    return;
  }
  if (param_1 != 0) {
    DAT_01013654[1] = bVar1 | DAT_01013654[1];
    return;
  }
  DAT_01013654[1] = ~bVar1 & DAT_01013654[1];
  return;
}

