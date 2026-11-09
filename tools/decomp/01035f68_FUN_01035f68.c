
undefined8 FUN_01035f68(uint param_1,uint param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_3;
  if (uVar3 < 0x20) {
    uVar1 = param_2 >> (uVar3 & 0x1f) | param_2 << 0x20 - (uVar3 & 0x1f);
    uVar2 = (uVar1 << uVar3) >> uVar3;
    return CONCAT44((int)(uVar2 << uVar3) >> uVar3,param_1 >> uVar3 ^ uVar1 ^ uVar2);
  }
  return CONCAT44((int)param_2 >> 0x1f,(int)param_2 >> (uVar3 - 0x20 & 0xff));
}

