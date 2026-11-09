
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0101c98c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int unaff_r4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(_DAT_0101d430 + param_2 * 4);
  bVar1 = *(byte *)(unaff_r4 + 8);
  pbVar5 = (byte *)(unaff_r4 + 0x38);
  if (bVar1 == 0) {
    if (*(char *)(unaff_r4 + 9) == '\0') {
      cVar4 = '\0';
    }
    else {
      FUN_0101c970();
      cVar4 = *(char *)(unaff_r4 + 9);
      if (cVar4 != '\0') {
        cVar4 = '\x01';
      }
    }
    FUN_010224a8(param_2,0,cVar4);
    iVar7 = iVar6 + 4;
    FUN_0102598c(iVar7,0x400,(uint)*(byte *)(unaff_r4 + 0x39) << 10);
    FUN_0102598c(iVar7,4,(uint)*(byte *)(unaff_r4 + 0x3b) << 2);
    uVar2 = FUN_0102598c(iVar7,2,(uint)*(byte *)(unaff_r4 + 0x3a) << 1);
    FUN_0101c984(uVar2,1,*pbVar5);
    if (*pbVar5 != 0) {
      if (*(char *)(unaff_r4 + 0x3c) == '\0') {
        uVar3 = 8;
        uVar2 = 0;
      }
      else if (*(char *)(unaff_r4 + 0x3c) == '\x01') {
        FUN_0101c980();
        uVar3 = 0x10;
        uVar2 = 0;
      }
      else {
        FUN_0101c980();
        uVar3 = 0x10;
        uVar2 = uVar3;
      }
LAB_0101c962:
      uVar2 = FUN_0102598c(iVar6 + 0x54,uVar3,uVar2,param_4);
      return uVar2;
    }
  }
  else if (bVar1 == 2) {
    FUN_0101c970();
    cVar4 = *(char *)(unaff_r4 + 9);
    if (cVar4 != '\0') {
      cVar4 = '\x01';
    }
    uVar2 = FUN_010224a8(param_2,2,cVar4);
    uVar2 = FUN_0101c97a(uVar2,0x4000,(uint)*(byte *)(unaff_r4 + 0x39) << 0xe);
    uVar2 = FUN_0101c97a(uVar2,0x200,(uint)*(byte *)(unaff_r4 + 0x3b) << 9);
    uVar2 = FUN_0101c97a(uVar2,0x100,(uint)*(byte *)(unaff_r4 + 0x3a) << 8);
    FUN_0101c984(uVar2,4,(uint)*pbVar5 << 2);
    if (*pbVar5 != 0) {
      cVar4 = *(char *)(unaff_r4 + 0x3c);
      if (cVar4 == '\0') {
        uVar3 = 0x80;
        uVar2 = 0;
      }
      else if (cVar4 == '\x01') {
        FUN_0101c984(1,0x80,0x80);
        uVar3 = 0x100;
        uVar2 = 0;
      }
      else {
        FUN_0101c984(cVar4,0x80,0x80);
        uVar3 = 0x100;
        uVar2 = uVar3;
      }
      goto LAB_0101c962;
    }
  }
  else if (bVar1 < 2) {
    FUN_01022488(param_2,1,unaff_r4 + 0x10);
    cVar4 = *(char *)(unaff_r4 + 9);
    if (cVar4 != '\0') {
      cVar4 = '\x01';
    }
    uVar2 = FUN_010224a8(param_2,1,cVar4);
    uVar2 = FUN_0101c97a(uVar2,0x40,(uint)*(byte *)(unaff_r4 + 0x39) << 6);
    uVar2 = FUN_0101c97a(uVar2,2,(uint)*(byte *)(unaff_r4 + 0x3b) << 1);
    uVar2 = FUN_0101c97a(uVar2,1,*(undefined1 *)(unaff_r4 + 0x3a));
    FUN_0101c984(uVar2,2,(uint)*pbVar5 << 1);
    if (*pbVar5 != 0) {
      cVar4 = *(char *)(unaff_r4 + 0x3c);
      if (cVar4 == '\0') {
        uVar3 = 0x20;
        uVar2 = 0;
      }
      else if (cVar4 == '\x01') {
        FUN_0101c984(1,0x20,0x20);
        uVar3 = 0x40;
        uVar2 = 0;
      }
      else {
        FUN_0101c984(cVar4,0x20,0x20);
        uVar3 = 0x40;
        uVar2 = uVar3;
      }
      goto LAB_0101c962;
    }
  }
  return param_4;
}

