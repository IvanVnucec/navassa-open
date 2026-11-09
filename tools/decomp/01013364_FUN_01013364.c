
undefined4 FUN_01013364(char *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = *param_2;
  *param_2 = bVar2 & 0xef;
  *param_2 = bVar2 & 0xef | *param_1 << 4;
  bVar2 = param_2[1];
  param_2[1] = bVar2 & 0x7f;
  param_2[1] = bVar2 & 0x7f | param_1[2] << 7;
  bVar2 = param_2[2];
  param_2[2] = bVar2 & 0xf9;
  param_2[2] = bVar2 & 0xf9 | param_1[0x25] << 1;
  param_2[4] = (byte)*(undefined4 *)(param_1 + 0x1c);
  param_2[5] = (byte)((uint)*(undefined4 *)(param_1 + 0x1c) >> 8);
  param_2[6] = (byte)*(undefined4 *)(param_1 + 0x20);
  bVar2 = param_2[8];
  param_2[7] = (byte)((uint)*(undefined4 *)(param_1 + 0x20) >> 8);
  param_2[8] = bVar2 & 0xfd;
  bVar1 = param_2[9];
  param_2[8] = bVar2 & 0xfd | param_1[0x26] << 1;
  param_2[9] = bVar1 & 0xfe;
  param_2[9] = bVar1 & 0xfe | param_1[0x27];
  bVar2 = param_2[10] & 0xbf;
  param_2[10] = bVar2;
  if (param_1[0x24] != '\x01') {
    bVar2 = bVar2 | 0x40;
  }
  if (param_1[0x24] != '\x01') {
    param_2[10] = bVar2;
  }
  bVar2 = param_2[0xd];
  param_2[0xd] = bVar2 & 0xf7;
  param_2[0xd] = bVar2 & 0xf7 | param_1[0x14] << 3;
  param_2[0xe] = param_1[0x16];
  return 0;
}

