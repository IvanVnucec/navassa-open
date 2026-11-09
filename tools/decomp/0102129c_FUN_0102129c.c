
undefined8 FUN_0102129c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = FUN_0102126c(param_2);
  uVar1 = *DAT_01021f18;
  uVar3 = uVar2 & 3;
  if (param_1 == 0 || param_1 == 4) {
    uVar4 = uVar3 & uVar1;
  }
  if (param_1 != 0 && param_1 != 4) {
    if (param_1 == 1) {
      uVar4 = uVar3 & uVar1 >> 4;
    }
    else {
      uVar3 = uVar3 | (uVar2 << 0x1c) >> 0x1e;
      if (param_1 == 2) {
        uVar4 = (ushort)(uVar1 >> 2 & uVar1 >> 6) & uVar3;
      }
      else if (param_1 == 3) {
        uVar4 = (ushort)(uVar1 >> 2 & uVar1 >> 8) & uVar3;
        uVar2 = 0;
        do {
          if (*(char *)(uVar2 * 0xbc + DAT_01021504 + 0x48) == '\0') {
            uVar4 = uVar4 & ~(1 << (uVar2 & 0xff));
          }
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < 2);
      }
    }
  }
  return CONCAT44(param_4,uVar4);
}

