
undefined4 FUN_0101a71c(uint param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((int)((0xcU >> (param_1 & 0xff)) << 0x1f) < 0) {
    uVar3 = (uint)(param_2 == 1);
    uVar1 = FUN_0101a762(param_1,0x10,uVar3 << 4);
    uVar1 = FUN_0101a762(uVar1,0x20,uVar3 << 5);
    uVar1 = FUN_0101a762(uVar1,0x40,uVar3 << 6);
    FUN_0101a762(uVar1,0x80,uVar3 << 7);
  }
  else {
    uVar2 = 0xc801;
  }
  return uVar2;
}

