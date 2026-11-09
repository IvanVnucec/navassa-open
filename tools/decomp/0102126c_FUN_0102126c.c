
uint FUN_0102126c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  do {
    uVar4 = *(uint *)(param_1 + uVar3 * 4 + 4);
    uVar5 = 1 << (uVar3 & 0xff);
    if ((uVar4 & 0x1ff) != 0) {
      uVar2 = uVar2 | uVar5;
    }
    if ((uVar4 & DAT_01021f50) != 0) {
      uVar1 = uVar1 | uVar5;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 2);
  return uVar1 | uVar2 << 2;
}

