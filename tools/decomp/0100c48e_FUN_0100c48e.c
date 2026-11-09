
void FUN_0100c48e(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_r4;
  int unaff_r5;
  undefined8 uVar4;
  
  uVar4 = FUN_0100c4d2();
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  iVar3 = *(int *)(unaff_r4 + 0x14);
  if (unaff_r5 == 0) {
    uVar1 = *(uint *)(iVar3 + 0x18) & ~(uint)uVar4;
    uVar2 = *(uint *)(iVar3 + 0x1c) & ~uVar2;
  }
  else {
    uVar1 = (uint)uVar4 | *(uint *)(iVar3 + 0x18);
    uVar2 = uVar2 | *(uint *)(iVar3 + 0x1c);
  }
  *(uint *)(iVar3 + 0x18) = uVar1;
  *(uint *)(iVar3 + 0x1c) = uVar2;
  return;
}

