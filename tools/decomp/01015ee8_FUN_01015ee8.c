
undefined4 FUN_01015ee8(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 unaff_r5;
  
  iVar2 = DAT_01015fc4;
  if (param_1 == 0) {
    uVar3 = *(byte *)(DAT_01015fc4 + 0x21) & 3;
    bVar1 = (byte)(((uint)*(byte *)(DAT_01015fc4 + 0x21) << 0x1b) >> 0x18);
  }
  else {
    if (param_1 != 1) {
      return 0xca03;
    }
    uVar3 = ((uint)*(byte *)(DAT_01015fc4 + 0x21) << 0x1c) >> 0x1e;
    bVar1 = (byte)(((uint)*(byte *)(DAT_01015fc4 + 0x21) << 0x1a) >> 0x18);
  }
  param_1 = param_1 + param_2;
  if (uVar3 == 0) {
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    if (uVar3 == 1) {
      unaff_r5 = 1;
    }
    if (uVar3 == 1) {
      *(undefined1 *)(param_1 + 7) = unaff_r5;
    }
    if (uVar3 == 2) {
      *(undefined1 *)(param_1 + 2) = 1;
      *(undefined1 *)(param_1 + 5) = 1;
    }
    if (uVar3 == 3) {
      *(undefined1 *)(param_1 + 2) = 2;
      *(undefined1 *)(param_1 + 5) = 2;
    }
  }
  *(byte *)(param_1 + 0x20) = bVar1 >> 7;
  *(byte *)(param_2 + 0x29) = *(byte *)(iVar2 + 0x21) >> 6 & 1;
  return 0;
}

