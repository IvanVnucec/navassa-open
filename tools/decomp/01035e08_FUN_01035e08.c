
uint FUN_01035e08(void)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint in_r3;
  uint uVar6;
  byte bVar7;
  uint local_20;
  
  puVar3 = DAT_01035ea4;
  iVar2 = DAT_01035ea0;
  puVar1 = DAT_01035e9c;
  uVar6 = (*DAT_01035e9c | DAT_01035e9c[1]) & 0x60;
  *DAT_01035e9c = uVar6;
  bVar7 = 0;
  local_20 = in_r3;
  do {
    if ((int)(((uVar6 >> 5) >> (uint)bVar7) << 0x1f) < 0) {
      iVar4 = FUN_0101dd1e(bVar7,&local_20);
      if (iVar4 != 0) break;
      uVar5 = FUN_0101db22(bVar7,*puVar3);
      if (local_20 == uVar5) {
        uVar5 = local_20 & 0x3f;
        if (*(char *)(iVar2 + (uint)bVar7) != '\0') {
          FUN_0100cad2(bVar7,uVar5,(local_20 << 0xc) >> 0x14,local_20 >> 0x14);
        }
        FUN_0100f04a(bVar7,uVar5);
      }
    }
    bVar7 = bVar7 + 1;
  } while (bVar7 < 2);
  if ((puVar1[1] & 0x60) != 0) {
    FUN_010028ca(0x1f);
  }
  return local_20;
}

