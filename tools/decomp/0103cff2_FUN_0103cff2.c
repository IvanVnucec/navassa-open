
void FUN_0103cff2(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_0103d5f4;
  *DAT_0103d5f0 = 0;
  puVar3 = DAT_0103d5fc;
  iVar2 = DAT_0103d5f8;
  *puVar1 = 0xffff;
  if (*(short *)(iVar2 + 0x10) == 1) {
    uVar4 = 4;
  }
  else {
    uVar4 = 3;
  }
  FUN_01023ebe(*puVar3,uVar4);
  return;
}

