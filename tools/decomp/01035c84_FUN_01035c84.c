
uint FUN_01035c84(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (!CARRY4(param_2,param_2)) {
    uVar2 = param_2 * 2 >> 0x15;
    iVar3 = uVar2 - 0x3ff;
    uVar1 = param_1 >> 0x15 | param_2 << 0xb | 0x80000000;
    if (iVar3 < 0 == SCARRY4(uVar2 - 0x400,1)) {
      uVar2 = 0x1f - iVar3;
      if ((int)uVar2 < 0) {
        uVar1 = (int)uVar1 >> 0x1f;
      }
      else {
        uVar1 = uVar1 >> (uVar2 & 0xff);
      }
      return uVar1;
    }
  }
  return 0;
}

