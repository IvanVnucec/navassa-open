
undefined4 FUN_0101175c(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = DAT_01011a48 + (short)param_2 * 0x54;
  iVar3 = DAT_01011a4c + param_2 * 0x80;
  switch(param_1) {
  case 0:
  case 4:
    uVar1 = *(undefined1 *)(iVar3 + 0x2d8);
    uVar6 = *(uint *)(iVar5 + 0xe8);
    break;
  case 1:
    uVar1 = *(undefined1 *)(iVar3 + 0x3d8);
    uVar6 = *(uint *)(iVar5 + 400);
    break;
  case 2:
    uVar1 = *(undefined1 *)(iVar3 + 0x4d8);
    uVar6 = *(uint *)(iVar5 + 0x238);
    break;
  case 3:
    uVar1 = *(undefined1 *)(iVar3 + 0x5d8);
    uVar6 = *(uint *)(iVar5 + 0x2e0);
    break;
  default:
    return 0;
  }
  uVar4 = 0;
  switch(uVar1) {
  case 0:
    uVar4 = DAT_01011a50;
    break;
  case 1:
    uVar4 = DAT_01011a54;
    break;
  case 2:
    uVar4 = DAT_01011a58;
    break;
  case 3:
    uVar4 = DAT_01011a5c;
  }
  uVar2 = FUN_0101369c((int)((ulonglong)uVar4 * (ulonglong)uVar6),
                       (int)((ulonglong)uVar4 * (ulonglong)uVar6 >> 0x20),DAT_01011a50,0);
  return uVar2;
}

