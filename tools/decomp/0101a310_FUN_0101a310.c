
int FUN_0101a310(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_38 [3];
  byte local_35;
  byte local_30;
  char local_2e [10];
  undefined2 local_24;
  
  if ((*(char *)(DAT_0101a554 + 0x77f) == '\x01') || (iVar2 = thunk_EXT_FUN_20036204(7), iVar2 == 0)
     ) {
    iVar2 = FUN_01019c40(param_1,auStack_38);
  }
  else {
    iVar2 = 0xd207;
  }
  uVar4 = 0;
  do {
    if ((iVar2 == 0) && (((uint)local_35 & 1 << (uVar4 & 0xff)) != 0)) {
      iVar2 = FUN_0101a7fa(uVar4 + 2 & 0xff);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  uVar4 = 0;
  do {
    uVar5 = 0;
    do {
      if ((local_2e[uVar5 + uVar4 * 5] != '\0') && (iVar2 == 0)) {
        FUN_0100a880(uVar4 & 0xff,uVar5);
        iVar2 = FUN_0102f42a(uVar4 & 0xff,uVar5);
        if (iVar2 == 0) {
          FUN_0101cde8(uVar4 & 0xff,uVar5,0,0);
          iVar2 = FUN_010130f6(uVar4 & 0xff,uVar5);
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 4);
    if ((iVar2 == 0) && (((uint)local_30 & 1 << (uVar4 & 0xff)) != 0)) {
      iVar2 = FUN_0100664e(uVar4 & 0xff,1);
    }
    iVar6 = DAT_0101a570;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  uVar4 = 0;
  do {
    if ((((uint)local_35 & 1 << (uVar4 & 0xff)) != 0) &&
       (pin_update(*(int *)(iVar6 + uVar4 * 4) + 0x106,0x40,0x40), iVar2 == 0)) {
      iVar3 = DAT_0101a580 + uVar4 * 0x158;
      FUN_0101e998(iVar3 + 0x40,iVar3,iVar3 + 0x150,uVar4 & 0xff);
      iVar2 = FUN_01032a40(uVar4 & 0xff,iVar3 + 0x58);
      FUN_0101cf28(uVar4 & 0xff);
      FUN_01032ab8(uVar4 & 0xff,iVar3 + 0xc0);
      FUN_0101c9d0(iVar3 + 0xc0,uVar4 & 0xff);
    }
    iVar1 = DAT_0101a584;
    iVar3 = DAT_0101a564;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  FUN_01033032(local_24);
  uVar4 = 0;
  do {
    iVar6 = *(int *)(*(int *)(iVar3 + (uVar4 & 0xff) * 4) + 0xc);
    uVar5 = 1 << (uVar4 & 0xff);
    if ((iVar2 == 0) && ((local_30 & uVar5) != 0)) {
      FUN_0102e6cc(uVar4 & 0xff,*(undefined1 *)(iVar6 + 0x2a),*(undefined4 *)(iVar6 + 0x1c));
      iVar2 = FUN_0102e6bc(uVar4 & 0xff,*(undefined4 *)(*(int *)(iVar3 + (uVar4 & 0xff) * 4) + 8));
      if (((iVar2 == 0) && ((local_30 & uVar5) != 0)) &&
         (((*(char *)(iVar6 + 0x89) != '\x01' && *(char *)(iVar6 + 0x89) != '\x02' ||
           (iVar2 = FUN_010131c6(uVar4 & 0xff,iVar1 + uVar4 * 0xc), iVar2 == 0)) &&
          ((local_30 & uVar5) != 0)))) {
        iVar2 = FUN_01034882(uVar4 & 0xff,1);
      }
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  FUN_01034920();
  return iVar2;
}

