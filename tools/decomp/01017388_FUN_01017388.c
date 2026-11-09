
byte FUN_01017388(int param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(int *)(&DAT_0101751c + param_1 * 4) + 0x4f);
  return *pbVar1 & 4 | *pbVar1 & 2 | *pbVar1 & 1;
}

