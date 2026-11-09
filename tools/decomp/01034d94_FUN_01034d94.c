
void FUN_01034d94(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_01035244 + param_1 * 4);
  bVar1 = (*(byte *)(iVar3 + 0x20) & *(byte *)(iVar3 + 0x21)) >> 5;
  bVar2 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    bVar2 = 1;
  }
  *(byte *)(DAT_01035248 + param_1) = bVar2;
  return;
}

