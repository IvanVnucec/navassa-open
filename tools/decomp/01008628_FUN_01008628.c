
byte FUN_01008628(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 * 0x60 + DAT_010091f0 + 0x10);
  bVar2 = 0;
  switch(param_2) {
  case 0:
  case 4:
    return bVar1 >> (param_3 & 0xff) & 1;
  case 1:
  case 3:
    iVar3 = 0x10;
    break;
  case 2:
    iVar3 = 0x40;
    break;
  case 5:
    iVar3 = 4;
    break;
  default:
    goto switchD_0100863c_default;
  }
  if (((uint)bVar1 & iVar3 << (param_3 & 0xff)) != 0) {
    bVar2 = 1;
  }
switchD_0100863c_default:
  return bVar2;
}

