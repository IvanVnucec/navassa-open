
void FUN_0101c40c(byte *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  
  bVar3 = param_1[0x1e];
  uVar1 = *(undefined1 *)(DAT_0101cf94 + param_2);
  uVar4 = FUN_0101c27c(4,0,uVar1,param_3);
  FUN_0101d266((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),((uint)*param_1 << 0x1d) >> 0x18);
  uVar2 = (uint)*param_1;
  if (uVar2 == 1) {
    uVar2 = FUN_0101c54c(1,0x40,((uint)param_1[1] << 0x1e) >> 0x18);
  }
  if (bVar3 == 0 || bVar3 == 2) {
    FUN_0101ccc0(uVar2,3,param_1[0x10]);
    FUN_0101ccb8();
    FUN_0101c7d8();
    FUN_0101ccc0();
    FUN_0101c4ac();
    bVar3 = param_1[0x1f];
  }
  else {
    if (bVar3 != 1) {
      return;
    }
    FUN_0101ccc0(uVar2,3,param_1[0x10]);
    FUN_0101ccb8();
    FUN_0101c7d8();
    FUN_0101ccc0();
    FUN_0101c4ac();
    bVar3 = 3;
  }
  FUN_0101c27c(4,bVar3,uVar1,param_3);
  return;
}

