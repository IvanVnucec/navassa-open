
byte FUN_01014d1e(int *param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  
  iVar4 = DAT_0101544c;
  bVar1 = *(byte *)(param_1 + 1);
  bVar5 = 0;
  if (*param_1 == 2) {
    iVar4 = 0;
    do {
      cVar2 = *(char *)(*(int *)(DAT_0101544c + iVar4 * 4) + 0x10);
      if (cVar2 == '\x02' || cVar2 == '\x03') {
        return 3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
  }
  else {
    uVar6 = 0;
    do {
      if ((int)((uint)(bVar1 >> (uVar6 & 0xff)) << 0x1f) < 0) {
        bVar3 = *(byte *)(DAT_01015484 + *param_1 * 4 +
                         (uint)*(byte *)(*(int *)(iVar4 + uVar6 * 4) + 0x10));
        if (bVar3 == 8) {
          *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & ~(byte)(1 << (uVar6 & 0xff));
        }
        else if (bVar5 <= bVar3) {
          bVar5 = bVar3;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 4);
  }
  return bVar5;
}

