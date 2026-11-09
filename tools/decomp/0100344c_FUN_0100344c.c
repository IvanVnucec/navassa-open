
bool FUN_0100344c(int param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  bVar3 = false;
  cVar1 = *(char *)(param_1 + 4);
  if (cVar1 == '\x03') {
    *param_2 = 0;
    return true;
  }
  if (cVar1 != '\x04') {
    if (cVar1 == '\0') {
      iVar2 = *(int *)(param_1 + 0x14);
      bVar3 = iVar2 << 0x1d < 0;
      if (bVar3) {
        *param_2 = 0;
      }
      bVar4 = iVar2 << 0x1c < 0;
      bVar3 = bVar4 || bVar3;
      if (bVar4) {
        param_2[1] = bVar3;
      }
    }
    return bVar3;
  }
  *param_2 = 1;
  return true;
}

