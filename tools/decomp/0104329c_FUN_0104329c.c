
undefined8 FUN_0104329c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  
  pbVar2 = DAT_010433a0;
  uVar3 = FUN_0100a822(DAT_010433a0,0x2c,0,param_3);
  uVar3 = FUN_0104331a(uVar3,0x7e,((uint)*pbVar2 << 0x19) >> 0x18);
  FUN_0104331a(uVar3,1,1);
  iVar4 = FUN_01043094(pbVar2);
  if (iVar4 == 0) {
    bVar1 = pbVar2[2];
    uVar3 = pin_update(DAT_010433a8,0x20,((uint)pbVar2[1] << 0x1d) >> 0x18);
    FUN_01043320(uVar3,0x10,((uint)bVar1 << 0x1c) >> 0x18);
    FUN_01043250(pbVar2);
    uVar3 = DAT_010433b0;
    if (pbVar2[4] != 0) {
      pin_update(DAT_010433b0,4,4);
      pin_update(uVar3,1,1);
    }
    if (pbVar2[1] == 0) {
      FUN_01043320(0,1,pbVar2[10]);
    }
  }
  return CONCAT44(param_4,iVar4);
}

