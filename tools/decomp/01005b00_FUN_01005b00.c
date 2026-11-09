
undefined4 FUN_01005b00(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x15c);
  if (iVar2 << 0x1f < 0) {
    uVar3 = 0x3000;
  }
  else if (iVar2 << 0x1e < 0) {
    uVar3 = 0x3001;
  }
  else if (iVar2 << 0x1d < 0) {
    uVar3 = 0x3002;
  }
  else if (iVar2 << 0x1c < 0) {
    uVar3 = 0x3006;
  }
  else if (*(char *)(param_1 + 0x15a) == '\0') {
    if (*(char *)(param_1 + 0x15b) != '\0') {
      uVar3 = 0x3004;
    }
  }
  else {
    uVar3 = 0x3003;
  }
  *(undefined4 *)(param_2 + (uint)*(byte *)(param_2 + 0x29d) * 4) = uVar3;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x160);
  bVar1 = *(byte *)(param_1 + 0x158);
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(uint *)(param_2 + 0x1c) = (uint)bVar1;
  return uVar3;
}

