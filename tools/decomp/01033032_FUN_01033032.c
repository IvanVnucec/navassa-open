
undefined8 FUN_01033032(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_20;
  
  pbVar2 = DAT_01033da8;
  iVar1 = DAT_010335bc;
  iVar5 = 0;
  uVar6 = 0;
  local_20 = param_4;
  do {
    if (((int)((param_1 >> (uVar6 + 2 & 0xff)) << 0x1f) < 0) &&
       ((*(char *)(iVar1 + uVar6 * 0x5c + 0x358) != '\0' ||
        (iVar4 = FUN_010371a0(uVar6 & 0xff), iVar4 != 0)))) {
      iVar5 = FUN_01033248(uVar6 & 0xff,&local_20);
      if (iVar5 != 0) break;
      iVar5 = iVar1 + uVar6 * 0x1ac;
      *(undefined2 *)(iVar5 + (uint)*pbVar2 * 2 + 10) = (undefined2)local_20;
      FUN_01033298(uVar6 & 0xff);
      bVar3 = 0;
      do {
        *(byte *)(iVar5 + (uint)bVar3) = bVar3;
        bVar3 = bVar3 + 1;
      } while (bVar3 < 9);
      FUN_01024cc6(uVar6 & 0xff);
      FUN_01024d04(uVar6 & 0xff,*(undefined1 *)(iVar1 + uVar6 * 0x1ac),0);
      iVar5 = FUN_01033154(uVar6 & 0xff);
      if (iVar5 != 0) break;
      FUN_010340a8(uVar6 & 0xff,0);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 2);
  return CONCAT44(local_20,iVar5);
}

