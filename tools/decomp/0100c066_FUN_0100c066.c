
void FUN_0100c066(int param_1)

{
  short sVar1;
  int iVar2;
  
  do {
    iVar2 = FUN_0100c080(param_1);
    sVar1 = *(short *)(param_1 + 0x18) + -1;
    *(short *)(param_1 + 0x18) = sVar1;
    if (sVar1 == 0) {
      return;
    }
  } while (iVar2 == 0);
  return;
}

