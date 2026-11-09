
void FUN_0103f0ee(uint param_1)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  iVar1 = DAT_0103f12c;
  FUN_0103f134(DAT_0103f12c,0x7f,param_1 | 0x20);
  uVar2 = VectorSignedToFloat(*(undefined4 *)(iVar1 + 4),(byte)(in_fpscr >> 0x15) & 3);
  FUN_0103856c(uVar2,0xffffffe1);
  return;
}

