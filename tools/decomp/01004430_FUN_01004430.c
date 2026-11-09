
undefined4 FUN_01004430(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_d8 [2];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  uint local_c0;
  undefined4 local_b8;
  undefined1 auStack_90 [112];
  undefined4 uStack_20;
  
  iVar2 = DAT_010044f0;
  iVar1 = DAT_010044b4;
  uVar3 = 0;
  uVar4 = 0;
  uStack_20 = in_r3;
LAB_01004440:
  iVar7 = iVar2 + 0x4c;
  uVar5 = *(byte *)(iVar1 + 0x22) & 3;
LAB_01004470:
  do {
    uVar6 = 0;
    local_d0 = 0;
    uStack_cc = 0;
    local_c8 = 0;
    local_d8[0] = uVar5;
    local_c0 = uVar4;
    do {
      local_b8 = *(undefined4 *)(iVar7 + uVar6 * 4);
      if ((int)((uVar5 >> (uVar6 & 0xff)) << 0x1f) < 0) {
        uVar3 = FUN_010042a6(auStack_90,local_d8);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 2);
    do {
      uVar4 = uVar4 + 1;
      if (3 < uVar4) {
        return uVar3;
      }
      if (uVar4 == 0) goto LAB_01004440;
      if (uVar4 == 3) {
        uVar5 = ((uint)*(ushort *)(iVar1 + 0x22) << 0x16) >> 0x1e;
        iVar7 = iVar2 + 100;
        goto LAB_01004470;
      }
    } while (uVar4 != 1);
    uVar5 = ((uint)*(ushort *)(iVar1 + 0x22) << 0x1a) >> 0x1e;
    iVar7 = iVar2 + 0x54;
  } while( true );
}

