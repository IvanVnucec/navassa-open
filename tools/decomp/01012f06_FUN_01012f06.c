
undefined4 FUN_01012f06(uint param_1,byte *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = DAT_01013084;
  if (-1 < (int)((0xcU >> (param_1 & 0xff)) << 0x1f)) {
    return 0xc801;
  }
  bVar1 = *param_2;
  if (bVar1 == 0) {
    uVar3 = 0;
    puVar2 = (undefined1 *)(*(int *)(DAT_01013084 + param_1 * 4) + 0x6c);
  }
  else {
    if (bVar1 == 2) {
      *(undefined1 *)(*(int *)(DAT_01013084 + param_1 * 4) + 0x6c) = 4;
      FUN_010063e8(param_1,0,param_2 + 0x14,0);
      return 0;
    }
    if (1 < bVar1) {
      return 0xc800;
    }
    FUN_01012eea(param_1,param_2);
    iVar4 = *(int *)(iVar4 + param_1 * 4);
    puVar2 = DAT_01013088;
    if (param_1 != 2) {
      puVar2 = DAT_0101308c;
    }
    FUN_010027d8(iVar4 + 0x6c,2);
    FUN_0100285a(iVar4 + 0x5d,*(undefined4 *)(param_2 + 4));
    FUN_01002866(iVar4 + 0x60,*(undefined4 *)(param_2 + 8));
    FUN_01002852(iVar4 + 0x6a,*(uint *)(param_2 + 0xc) & 0xffff);
    FUN_01002836(iVar4 + 0x83,*(undefined4 *)(param_2 + 0x10));
    uVar3 = 3;
  }
  *puVar2 = uVar3;
  return 0;
}

