
void FUN_0100ff3c(int param_1,int param_2)

{
  undefined4 *puVar1;
  ushort *puVar2;
  int iVar3;
  ushort uVar4;
  
  puVar1 = DAT_0100ffcc;
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    puVar2 = (ushort *)*DAT_0100ffcc;
    uVar4 = *puVar2;
    iVar3 = 1;
    if (param_2 != 0) {
      uVar4 = *puVar2;
    }
    if (param_2 != 0) {
      uVar4 = uVar4 | (ushort)(param_2 << 1);
    }
    else {
      uVar4 = uVar4 & 0xfffd;
    }
    *puVar2 = uVar4;
  }
  puVar2 = (ushort *)puVar1[param_1 * 5];
  if (param_2 == 0) {
    *puVar2 = *puVar2 & ~(ushort)(1 << iVar3);
    return;
  }
  *puVar2 = (ushort)(param_2 << iVar3) | *puVar2;
  return;
}

