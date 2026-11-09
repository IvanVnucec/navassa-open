
void FUN_0101e17c(int param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar2 + 0xc) == '\0') {
    FUN_0101e80c(param_1);
  }
  uVar4 = FUN_0101e1ac(param_1);
  uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
  bVar3 = (int)uVar4 == 0;
  if (bVar3) {
    uVar1 = (uint)*(ushort *)(iVar2 + 0xa0);
  }
  if (bVar3 && uVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    *(short *)(iVar2 + 0x3e) = *(short *)(iVar2 + 0x3e) + 1;
    *(undefined4 *)(iVar2 + 4) = 99;
  }
  return;
}

