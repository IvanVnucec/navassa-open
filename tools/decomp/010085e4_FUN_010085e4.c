
void FUN_010085e4(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  iVar1 = param_1 * 0x60 + DAT_010091f0;
  bVar3 = *(byte *)(iVar1 + 0x10);
  switch(param_2) {
  case 0:
  case 4:
    iVar4 = 1;
    break;
  case 1:
  case 3:
    iVar4 = 0x10;
    break;
  case 2:
    iVar4 = 0x40;
    goto LAB_01008612;
  case 5:
    iVar4 = 4;
LAB_01008612:
    bVar2 = (byte)(iVar4 << (param_3 & 0xff));
    goto LAB_01008616;
  default:
    goto switchD_010085f6_default;
  }
  bVar2 = (byte)(iVar4 << (param_3 & 0xff));
LAB_01008616:
  if (param_4 == 0) {
    bVar3 = bVar3 & ~bVar2;
  }
  else {
    bVar3 = bVar2 | bVar3;
  }
switchD_010085f6_default:
  *(byte *)(iVar1 + 0x10) = bVar3;
  return;
}

