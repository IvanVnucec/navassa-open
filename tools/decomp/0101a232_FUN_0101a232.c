
undefined8 FUN_0101a232(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = DAT_0101a568;
  iVar2 = 0;
  uVar4 = 0;
  do {
    uVar3 = 0;
    do {
      if ((*(char *)(uVar4 * 5 + param_1 + uVar3 + 10) != '\0') && (iVar2 == 0)) {
        iVar5 = iVar1 + 0x28 + uVar4 * 4;
        FUN_0102574c(uVar4 & 0xff,*(undefined4 *)(iVar1 + uVar4 * 4 + uVar3 * 8),
                     *(undefined4 *)(iVar5 + uVar3 * 8));
        iVar2 = FUN_010228a8(uVar4 & 0xff,uVar3,*(undefined4 *)(iVar5 + uVar3 * 8));
        if (iVar2 == 0) {
          FUN_0102586a(uVar4 & 0xff,*(int *)(iVar5 + uVar3 * 8) + 0x38);
          FUN_0102d692(uVar4 & 0xff,uVar3,*(undefined4 *)(iVar5 + uVar3 * 8));
          iVar2 = FUN_0100ab1c(uVar4 & 0xff,uVar3,*(int *)(iVar5 + uVar3 * 8) + 0x38);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    if ((iVar2 == 0) && (((uint)*(byte *)(param_1 + 8) & 1 << (uVar4 & 0xff)) != 0)) {
      FUN_0102d8e4(uVar4 & 0xff);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  if (iVar2 == 0) {
    iVar2 = FUN_010327e8(*(undefined2 *)(param_1 + 0x14));
  }
  iVar1 = DAT_0101a580;
  uVar4 = 0;
  do {
    if ((((((uint)*(byte *)(param_1 + 3) & 1 << (uVar4 & 0xff)) != 0) && (iVar2 == 0)) &&
        (iVar2 = FUN_010329a0(uVar4 & 0xff), iVar2 == 0)) &&
       (iVar2 = FUN_01032a40(uVar4 & 0xff,uVar4 * 0x158 + iVar1 + 0x58), iVar2 == 0)) {
      FUN_0101cf98(uVar4 & 0xff);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  return CONCAT44(param_4,iVar2);
}

