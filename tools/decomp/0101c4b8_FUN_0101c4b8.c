
void FUN_0101c4b8(byte *param_1,byte *param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar5 = (uint)*param_1;
  bVar1 = param_1[2];
  if (uVar5 == 7) {
    uVar5 = (uint)*param_2;
  }
  FUN_0101c27c(6,uVar5,param_3,0);
  uVar2 = FUN_0101ccb2(&DAT_0101c544,7,(&DAT_0101c544)[uVar5]);
  if (bVar1 == 0) {
    uVar4 = 0x20;
    uVar3 = 0x20;
  }
  else {
    if (bVar1 == 1) {
      uVar2 = FUN_0101c552();
      uVar4 = 0x40;
    }
    else {
      uVar2 = FUN_0101c552();
      uVar4 = 0;
    }
    uVar3 = 0x40;
  }
  uVar6 = FUN_0101c54c(uVar2,uVar3,uVar4);
  FUN_0101c7da((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),param_1[3]);
  uVar2 = FUN_0101ccb2();
  FUN_0101d448(uVar2,1,param_1[4]);
  FUN_0101c27c(6,uVar5,param_3);
  return;
}

