
uint FUN_01020608(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)(param_2 << 1) >> 0x15;
  iVar2 = uVar1 - 0x3fe;
  if (iVar2 == 0 || uVar1 < 0x3fe) {
    return 0;
  }
  uVar3 = -iVar2 + 0x20;
  uVar1 = param_2 >> 0x1f;
  if (uVar3 != 0 && iVar2 < 0x21) {
    return ((param_2 << 0xb | param_1 >> 0x15 | 0x80000000) >> (uVar3 & 0xff)) + uVar1 ^ uVar1;
  }
  uVar3 = -iVar2 + 0x401;
  if (uVar3 != 0) {
    uVar3 = ~uVar1 ^ 0x80000000;
  }
  return uVar3;
}

