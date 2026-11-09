
uint FUN_0101ed76(int param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = DAT_0101eda8 + param_1 * 0x14 + param_2 * 10;
  uVar3 = 0;
  puVar1 = (ushort *)(uVar2 + 2);
  do {
    if ((int)((uint)(*puVar1 >> (uVar3 & 0xff)) << 0x1f) < 0) {
      uVar2 = uVar3;
    }
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 0xff) < 8);
  return uVar2 & 0xff;
}

