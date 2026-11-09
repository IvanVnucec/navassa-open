
undefined4 FUN_01031382(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r4;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x18) == '\x7f' || *(char *)(param_1 + 0x18) == -0x80) {
    uVar1 = 0x2402;
  }
  uVar2 = (uint)*(ushort *)(param_1 + 0x14);
  if (uVar2 != 0) {
    unaff_r4 = 0x3ff;
  }
  if (uVar2 == 0 || uVar2 == unaff_r4) {
    uVar1 = 0x2402;
  }
  iVar3 = (int)*(short *)(param_1 + 0x16);
  if (iVar3 != -0x200) {
    param_1 = 0x1ff;
  }
  if (iVar3 == -0x200 || iVar3 == param_1) {
    uVar1 = 0x2402;
  }
  return uVar1;
}

