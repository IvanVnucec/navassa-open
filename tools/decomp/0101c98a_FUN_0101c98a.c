
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0101c98a(void)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_r3;
  int unaff_r4;
  byte *pbVar5;
  int unaff_r5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(_DAT_0101d430 + unaff_r5 * 4);
  bVar1 = *(byte *)(unaff_r4 + 8);
  pbVar5 = (byte *)(unaff_r4 + 0x38);
  if (bVar1 == 0) {
    if (*(char *)(unaff_r4 + 9) != '\0') {
      FUN_0101c970();
    }
    FUN_010224a8();
    iVar7 = iVar6 + 4;
    FUN_0102598c(iVar7,0x400,(uint)*(byte *)(unaff_r4 + 0x39) << 10);
    FUN_0102598c(iVar7,4,(uint)*(byte *)(unaff_r4 + 0x3b) << 2);
    uVar3 = FUN_0102598c(iVar7,2,(uint)*(byte *)(unaff_r4 + 0x3a) << 1);
    FUN_0101c984(uVar3,1,*pbVar5);
    if (*pbVar5 != 0) {
      if (*(char *)(unaff_r4 + 0x3c) == '\0') {
        uVar4 = 8;
        uVar3 = 0;
      }
      else if (*(char *)(unaff_r4 + 0x3c) == '\x01') {
        FUN_0101c980();
        uVar4 = 0x10;
        uVar3 = 0;
      }
      else {
        FUN_0101c980();
        uVar4 = 0x10;
        uVar3 = uVar4;
      }
LAB_0101c962:
      uVar3 = FUN_0102598c(iVar6 + 0x54,uVar4,uVar3,in_r3);
      return uVar3;
    }
  }
  else if (bVar1 == 2) {
    FUN_0101c970();
    uVar3 = FUN_010224a8();
    uVar3 = FUN_0101c97a(uVar3,0x4000,(uint)*(byte *)(unaff_r4 + 0x39) << 0xe);
    uVar3 = FUN_0101c97a(uVar3,0x200,(uint)*(byte *)(unaff_r4 + 0x3b) << 9);
    uVar3 = FUN_0101c97a(uVar3,0x100,(uint)*(byte *)(unaff_r4 + 0x3a) << 8);
    FUN_0101c984(uVar3,4,(uint)*pbVar5 << 2);
    if (*pbVar5 != 0) {
      cVar2 = *(char *)(unaff_r4 + 0x3c);
      if (cVar2 == '\0') {
        uVar4 = 0x80;
        uVar3 = 0;
      }
      else if (cVar2 == '\x01') {
        FUN_0101c984(1,0x80,0x80);
        uVar4 = 0x100;
        uVar3 = 0;
      }
      else {
        FUN_0101c984(cVar2,0x80,0x80);
        uVar4 = 0x100;
        uVar3 = uVar4;
      }
      goto LAB_0101c962;
    }
  }
  else if (bVar1 < 2) {
    FUN_01022488();
    uVar3 = FUN_010224a8();
    uVar3 = FUN_0101c97a(uVar3,0x40,(uint)*(byte *)(unaff_r4 + 0x39) << 6);
    uVar3 = FUN_0101c97a(uVar3,2,(uint)*(byte *)(unaff_r4 + 0x3b) << 1);
    uVar3 = FUN_0101c97a(uVar3,1,*(undefined1 *)(unaff_r4 + 0x3a));
    FUN_0101c984(uVar3,2,(uint)*pbVar5 << 1);
    if (*pbVar5 != 0) {
      cVar2 = *(char *)(unaff_r4 + 0x3c);
      if (cVar2 == '\0') {
        uVar4 = 0x20;
        uVar3 = 0;
      }
      else if (cVar2 == '\x01') {
        FUN_0101c984(1,0x20,0x20);
        uVar4 = 0x40;
        uVar3 = 0;
      }
      else {
        FUN_0101c984(cVar2,0x20,0x20);
        uVar4 = 0x40;
        uVar3 = uVar4;
      }
      goto LAB_0101c962;
    }
  }
  return in_r3;
}

