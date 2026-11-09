
void FUN_0102980a(int param_1)

{
  ushort uVar1;
  
  uVar1 = *DAT_0102998c;
  if ((param_1 << 0x1f < 0) && (*(char *)(DAT_01029938 + 0x1c6) != *(char *)(DAT_01029990 + 0x15)))
  {
    uVar1 = uVar1 & 0xffef;
  }
  if ((param_1 << 0x1e < 0) && (*(char *)(DAT_01029938 + 0x282) != *(char *)(DAT_01029990 + 0x15)))
  {
    uVar1 = uVar1 & 0xffdf;
  }
  *DAT_0102998c = uVar1;
  return;
}

