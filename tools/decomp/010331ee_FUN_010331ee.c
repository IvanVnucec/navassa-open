
void FUN_010331ee(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (short)param_1 * 0xbc + DAT_01033844;
  iVar2 = DAT_01033f38 + param_1 * 0x54;
  uVar1 = (uint)*(byte *)(iVar3 + 0x6f);
  if (uVar1 != 0) {
    uVar1 = *(uint *)(iVar2 + 0x5c);
  }
  *param_2 = uVar1;
  if (*(char *)(iVar3 + 0x6e) == '\0') {
    uVar1 = *(uint *)(iVar2 + 100);
  }
  else {
    uVar1 = 0;
  }
  param_2[1] = uVar1;
  uVar1 = (uint)*(byte *)(iVar3 + 0x6e);
  if (uVar1 != 0) {
    uVar1 = *(uint *)(iVar2 + 0x58);
  }
  param_2[2] = uVar1;
  if (*(char *)(iVar3 + 0x6d) == '\0') {
    uVar1 = *(uint *)(iVar2 + 0x60);
  }
  else {
    uVar1 = 0;
  }
  param_2[3] = uVar1;
  uVar1 = (uint)*(byte *)(iVar3 + 0x6d);
  if (uVar1 != 0) {
    uVar1 = *(uint *)(iVar2 + 0x54);
  }
  param_2[4] = uVar1;
  param_2[5] = *(uint *)(iVar2 + 0x6c);
  param_2[6] = *(uint *)(iVar2 + 0x68);
  return;
}

