
int FUN_0102ef9c(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(*(int *)(&DAT_0102f294 + param_1 * 4) + (param_2 * 0x11 + 0x92U & 0xffff))
          | (*(byte *)(*(int *)(&DAT_0102f294 + param_1 * 4) + (param_2 * 0x11 + 0x94U & 0xffff)) &
            0x30) << 4;
  sVar1 = (short)uVar2;
  if (0x1ff < uVar2) {
    sVar1 = sVar1 + -0x400;
  }
  return (int)sVar1;
}

