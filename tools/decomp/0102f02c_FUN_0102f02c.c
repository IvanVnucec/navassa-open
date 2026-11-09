
uint FUN_0102f02c(int param_1,int param_2)

{
  return (uint)*(byte *)(*(int *)(&DAT_0102f294 + param_1 * 4) + (param_2 * 0x11 + 0x96U & 0xffff))
         | (*(byte *)(*(int *)(&DAT_0102f294 + param_1 * 4) + (param_2 * 0x11 + 0x97U & 0xffff)) &
           0xc) << 6;
}

