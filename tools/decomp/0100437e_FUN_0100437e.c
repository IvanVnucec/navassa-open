
void FUN_0100437e(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [6];
  undefined1 local_72;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_48 [8];
  uint local_40;
  undefined2 local_3c;
  undefined4 local_38;
  undefined4 uStack_28;
  
  iVar2 = DAT_010044ec;
  iVar1 = DAT_010044b4;
  local_68 = 0;
  uStack_64 = 0;
  local_48[0] = 0;
  local_3c = 0;
  local_48[1] = 0;
  uVar3 = 0;
  uStack_28 = in_r3;
LAB_0100439e:
  uVar6 = *(byte *)(iVar1 + 0x22) & 3;
  uVar4 = 0;
LAB_010043cc:
  do {
    bVar5 = 0;
    do {
      if ((int)((uVar6 >> (uint)bVar5) << 0x1f) < 0) {
        FUN_010101bc(auStack_80,auStack_7c,bVar5,uVar4,*(undefined1 *)(iVar2 + (uint)bVar5));
        if (uVar3 == 2) {
          FUN_010102be(bVar5,auStack_78);
          local_48[bVar5] = local_72;
        }
        local_40 = uVar3;
        local_38 = FUN_01006cb8(uVar3,bVar5);
        FUN_010040ce(bVar5,&local_68,auStack_80,auStack_84);
      }
      bVar5 = bVar5 + 1;
    } while (bVar5 < 2);
    do {
      uVar3 = uVar3 + 1;
      if (3 < uVar3) {
        return;
      }
      if (uVar3 == 0) goto LAB_0100439e;
      if (uVar3 == 3) {
        uVar6 = ((uint)*(ushort *)(iVar1 + 0x22) << 0x16) >> 0x1e;
        uVar4 = 3;
        goto LAB_010043cc;
      }
    } while (uVar3 != 1);
    uVar6 = ((uint)*(ushort *)(iVar1 + 0x22) << 0x1a) >> 0x1e;
    uVar4 = 1;
  } while( true );
}

