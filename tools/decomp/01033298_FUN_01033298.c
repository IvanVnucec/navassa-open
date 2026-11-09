
void FUN_01033298(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = DAT_01025350;
  iVar1 = DAT_010252a4;
  iVar4 = (short)param_1 * 0x54 + DAT_01033f38;
  switch(*(undefined2 *)(DAT_010335bc + param_1 * 0x1ac + (uint)*DAT_01033da8 * 2 + 10)) {
  case 1:
    uVar3 = *(uint *)(iVar4 + 0x5c);
    break;
  case 2:
    uVar3 = *(uint *)(iVar4 + 100);
    break;
  case 3:
    uVar3 = *(uint *)(iVar4 + 0x58);
    break;
  case 4:
    uVar3 = *(uint *)(iVar4 + 0x60);
    break;
  case 5:
    uVar3 = *(uint *)(iVar4 + 0x54);
    break;
  case 6:
    uVar3 = *(uint *)(iVar4 + 0x6c);
    break;
  case 7:
    uVar3 = *(uint *)(iVar4 + 0x68);
    break;
  default:
    uVar3 = 0;
  }
  *(uint *)(DAT_010252a4 + param_1 * 0xc) = uVar3;
  *(uint *)(param_1 * 0xc + iVar1 + 4) = *(uint *)(iVar2 + 0x14) / uVar3;
  return;
}

