
undefined4 FUN_01007f1e(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = 0;
  if ((int)((0xfU >> (param_1 & 0xff)) << 0x1f) < 0) {
    iVar3 = DAT_01007f74 + param_1;
    if (param_2 != 2) {
      iVar1 = DAT_01007f74 + param_1 * 8;
      uVar4 = *(uint *)(iVar1 + 0x90);
      iVar1 = *(int *)(iVar1 + 0x94);
      if ((iVar1 != 0) || (DAT_01007fdc <= uVar4)) {
        if ((iVar1 == 0) && (uVar4 < DAT_01007f88)) {
          *(undefined1 *)(iVar3 + 0xb8) = 1;
          return 0;
        }
        *(undefined1 *)(iVar3 + 0xb8) = 1;
        return 0;
      }
    }
    *(char *)(iVar3 + 0xb8) = (char)param_2;
  }
  else {
    uVar2 = 0xe702;
  }
  return uVar2;
}

