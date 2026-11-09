
void FUN_010018e8(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = DAT_01002464;
  iVar3 = DAT_01002464 + (uint)*(byte *)(DAT_01002460 + param_1) * 4;
  iVar4 = *(int *)(iVar3 + 0xc);
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & ~(1 << (param_1 & 0xff));
  iVar2 = iVar2 + param_1 * 4;
  **(undefined1 **)(iVar2 + 0x14) = 0;
  **(undefined1 **)(iVar2 + 0x24) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x3c) = *(undefined4 *)(DAT_01002518 + 8);
  switch(param_1) {
  case 0:
    uVar1 = 0xd5;
    break;
  case 1:
    uVar1 = 0xd7;
    break;
  case 2:
    uVar1 = 0xd1;
    break;
  case 3:
    uVar1 = 0xd3;
    break;
  default:
    return;
  }
  *(int *)(DAT_010011e8 + (uVar1 >> 5) * 4) = 1 << (uVar1 & 0x1f);
  return;
}

