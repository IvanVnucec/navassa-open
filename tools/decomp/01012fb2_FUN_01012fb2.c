
undefined4 FUN_01012fb2(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((int)((0xcU >> (param_1 & 0xff)) << 0x1f) < 0) {
    iVar2 = *(int *)(DAT_01013084 + param_1 * 4);
    FUN_0100285a(iVar2 + 0x38,*param_2);
    pin_update(iVar2 + 0x3b,7,*(undefined1 *)(param_2 + 3));
    FUN_01002866(iVar2 + 0x3c,param_2[2]);
    FUN_0100285a(iVar2 + 0x40,param_2[1]);
    *(byte *)(iVar2 + 0x2e) = *(byte *)((int)param_2 + 0xe) | *(char *)((int)param_2 + 0xd) << 1;
  }
  else {
    uVar1 = 0xc801;
  }
  return uVar1;
}

