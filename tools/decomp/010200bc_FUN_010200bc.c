
undefined8 FUN_010200bc(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (int)param_1 >> 0x1f;
  if (param_1 != 0) {
    iVar1 = (param_1 ^ uVar2) - uVar2;
    iVar3 = LZCOUNT(iVar1);
    param_1 = iVar1 << iVar3;
    uVar2 = (uVar2 << 0x1f | (0x420 - (iVar3 + 3)) * 0x100000) + (param_1 >> 0xb);
    param_1 = param_1 << 0x15;
  }
  return CONCAT44(uVar2,param_1);
}

