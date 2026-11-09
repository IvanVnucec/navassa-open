
undefined4 FUN_01007b66(byte *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    bVar2 = param_1[1];
    iVar5 = DAT_01007fb0;
  }
  else {
    if (bVar1 == 2) {
      iVar5 = *(int *)(DAT_01007f6c + param_2 * 4) + 0x88;
      FUN_01007be0(DAT_01007f6c,2,param_1[1]);
      uVar6 = FUN_01007bf0();
      FUN_01007bea((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),param_1[2]);
      uVar4 = (uint)param_1[3] << 0x1a;
      uVar3 = 0xc;
      goto LAB_01007bc0;
    }
    if (1 < bVar1) {
      return param_4;
    }
    bVar2 = param_1[1];
    iVar5 = DAT_01007fb4;
  }
  FUN_01007bd6(DAT_01007f6c,bVar1,bVar2);
  uVar3 = FUN_01007bf0();
  FUN_01007bf0(uVar3,1,param_1[2]);
  uVar4 = (uint)param_1[3] << 0x19;
  uVar3 = 6;
LAB_01007bc0:
  uVar3 = pin_update(iVar5,uVar3,uVar4 >> 0x18,param_4);
  return uVar3;
}

