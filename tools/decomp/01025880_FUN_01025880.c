
void FUN_01025880(int param_1,byte *param_2)

{
  byte *pbVar1;
  
  FUN_010027dc(*(int *)(DAT_01025978 + param_1 * 4) + 0xf8,0xc0,
               ((uint)*param_2 << 6 | (uint)param_2[1] << 7) & 0xff);
  pbVar1 = DAT_0102597c;
  *DAT_0102597c = param_2[2];
  pbVar1[1] = (byte)*(undefined2 *)(param_2 + 4);
  pin_update(DAT_01025980,0x7f,*(ushort *)(param_2 + 4) >> 8 & 0x7f);
  return;
}

