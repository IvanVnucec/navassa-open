
uint FUN_0101bb08(uint param_1,uint param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_3;
  if (uVar2 < 0x20) {
    uVar1 = param_2 >> (uVar2 & 0x1f) | param_2 << 0x20 - (uVar2 & 0x1f);
    return param_1 >> uVar2 ^ uVar1 ^ (uVar1 << uVar2) >> uVar2;
  }
  return param_2 >> (uVar2 - 0x20 & 0xff);
}

