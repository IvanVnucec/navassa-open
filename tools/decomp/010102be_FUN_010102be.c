
undefined4 FUN_010102be(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  
  uVar2 = 0;
  if (param_1 < 2) {
    iVar4 = *(int *)(DAT_01010678 + param_1 * 4);
    pbVar3 = DAT_0101066c;
    iVar1 = DAT_01010668;
    if (param_1 != 0) {
      pbVar3 = DAT_01010674;
      iVar1 = DAT_01010670;
    }
    *param_2 = *(undefined1 *)(iVar1 + 0x4c);
    param_2[2] = *(undefined1 *)(iVar1 + 0x5d);
    param_2[4] = *(undefined1 *)(iVar1 + 0x5f);
    param_2[6] = *pbVar3 & 7;
    param_2[1] = *(undefined1 *)(iVar1 + 0x4d);
    param_2[3] = *(undefined1 *)(iVar1 + 0x5e);
    param_2[5] = *(undefined1 *)(iVar1 + 0x60);
    param_2[7] = (byte)(((uint)*pbVar3 << 0x1a) >> 0x1d);
    param_2[8] = *(byte *)(iVar1 + 0x4a) & 3;
    param_2[10] = *(undefined1 *)(iVar1 + 0x4b);
    param_2[0xb] = *(byte *)(iVar4 + 0x167) & 1;
    param_2[0xc] = *(byte *)(iVar4 + 0x165) & 1;
    param_2[0xd] = *(byte *)(iVar1 + 0x15c) & 3;
  }
  else {
    uVar2 = 0xc400;
  }
  return uVar2;
}

