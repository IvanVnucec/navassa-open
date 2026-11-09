
short FUN_0103d4cc(uint param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = param_1;
  do {
    uVar3 = uVar3 >> 1;
    if (uVar3 == 0) break;
    uVar2 = uVar2 + 1;
  } while ((uVar2 & 0xffff) < 0x20);
  sVar1 = (short)uVar2;
  if (param_1 == 1 << (uVar2 & 0xff)) {
    sVar1 = sVar1 + -1;
  }
  return sVar1;
}

