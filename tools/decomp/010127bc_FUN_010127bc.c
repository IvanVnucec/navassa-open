
uint FUN_010127bc(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x2b);
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  if (*(int *)(param_1 + 0x4e8) != 0) {
    bVar3 = *(char *)(param_1 + 0x4ec) == '\0';
    uVar2 = param_4;
    if (bVar3) {
      uVar2 = (uint)*(byte *)(param_1 + 0x4ed);
    }
    if (bVar3 && uVar2 == uVar1) goto LAB_010127ec;
  }
  FUN_010119b8(param_1 + 0x1c0,0);
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
LAB_010127ec:
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5fc) = 0;
  return param_4;
}

