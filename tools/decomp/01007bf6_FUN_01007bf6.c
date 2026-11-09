
void FUN_01007bf6(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  bVar1 = *param_1;
  if (bVar1 == 0) {
    iVar3 = *(int *)(DAT_01007f6c + param_2 * 4) + 10;
    uVar2 = ((uint)param_1[1] << 0x1a) >> 0x18;
  }
  else {
    if (bVar1 != 2) {
      if (1 < bVar1) {
        return;
      }
      iVar3 = *(int *)(DAT_01007f70 + param_2 * 4) + 4;
      FUN_01007b4e(bVar1,param_2,param_1[1]);
      FUN_01007b60();
      FUN_01007bd4();
      FUN_01007b60();
      FUN_01007bde();
      FUN_01007b60();
      bVar1 = param_1[4];
      goto LAB_010070b2;
    }
    iVar3 = DAT_01007fb8;
    if (param_2 != 0) {
      iVar3 = DAT_01007fbc;
    }
    uVar2 = (param_1[1] & 0x3f) << 2;
  }
  FUN_01007bf0(bVar1,4,uVar2);
  FUN_01007bd4();
  FUN_01007bf0();
  FUN_01007bde();
  FUN_01007bf0();
  bVar1 = param_1[4];
LAB_010070b2:
  pin_update(iVar3,3,bVar1);
  return;
}

