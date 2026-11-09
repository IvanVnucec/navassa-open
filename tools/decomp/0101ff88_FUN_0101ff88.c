
int FUN_0101ff88(int param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  
  sVar6 = *(short *)(param_1 + 8);
  sVar1 = *(short *)(param_1 + 0xc);
  if (sVar6 < 0) {
    sVar6 = -sVar6;
  }
  if (sVar1 < 0) {
    sVar1 = -sVar1;
  }
  uVar5 = (int)sVar6;
  if ((uint)(int)sVar6 < (uint)(int)sVar1) {
    uVar5 = (int)sVar1;
  }
  uVar2 = FUN_0101614a(uVar5);
  uVar3 = param_2;
  if (uVar2 < param_2) {
    uVar3 = FUN_0101614a(uVar5);
  }
  iVar4 = FUN_0101614a(*(undefined4 *)(param_1 + 4));
  uVar5 = iVar4 + param_2 + uVar3;
  if (uVar5 < 0x1d) {
    iVar4 = 0;
  }
  else {
    iVar4 = uVar5 - 0x1c;
  }
  return iVar4;
}

