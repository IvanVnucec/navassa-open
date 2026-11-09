
undefined4 FUN_01042bca(uint param_1,byte *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = DAT_01042ca4;
  uVar3 = 0;
  uVar2 = param_1 & *(ushort *)(DAT_01042ca4 + 0x22) >> 2 & 3;
  if (uVar2 == 0) {
    uVar3 = 0x2400;
  }
  else {
    uVar4 = 0;
    do {
      if ((((int)((uVar2 >> (uVar4 & 0xff)) << 0x1f) < 0) &&
          (-1 < (int)((uint)(*param_2 >> (uVar4 & 0xff)) << 0x1f))) &&
         (*(char *)(uVar4 * 0xbc + iVar1 + 0x3c) != '\x02')) {
        *(undefined1 *)(param_3 + uVar4 * 2) = 1;
        *(char *)(param_3 + uVar4 * 2 + 1) = (char)uVar4;
      }
      else {
        *(undefined1 *)(param_3 + uVar4 * 2) = 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 2);
  }
  return uVar3;
}

