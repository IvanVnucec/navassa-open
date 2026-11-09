
ushort FUN_0101f896(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort *unaff_r5;
  
  uVar2 = 0;
  if (param_2 == 0) {
    unaff_r5 = (ushort *)(param_1 * 0xc + DAT_0101ff6c + (uint)*param_3 * 6);
  }
  else {
    iVar3 = DAT_0101ff70;
    if ((param_2 == 4) || (iVar3 = DAT_0101ff74, param_2 == 2)) {
      unaff_r5 = (ushort *)((uint)*param_3 * 6 + param_1 * 0xc + iVar3);
    }
  }
  bVar1 = param_3[1];
  if (bVar1 == 2) {
    uVar2 = *unaff_r5;
  }
  else if (bVar1 == 0) {
    uVar2 = unaff_r5[1];
  }
  else if (bVar1 == 1) {
    uVar2 = unaff_r5[2];
  }
  if (param_3[2] == 0) {
    if (-1 < (int)((uint)uVar2 << 0x10)) {
      return 1;
    }
    uVar2 = uVar2 ^ 0x8000;
  }
  else if ((param_3[2] == 1) && ((int)((uint)uVar2 << 0x10) < 0)) {
    return 1;
  }
  if (uVar2 == 0) {
    return 1;
  }
  return uVar2;
}

