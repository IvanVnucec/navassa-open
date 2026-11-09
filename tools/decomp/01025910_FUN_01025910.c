
undefined4 FUN_01025910(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = 0;
  iVar3 = param_2 * 0xbc + DAT_0102595c;
  switch(param_1) {
  case 0:
  case 4:
    iVar3 = iVar3 + 0x19c;
    break;
  case 1:
    iVar3 = iVar3 + 0x314;
    break;
  case 2:
    iVar3 = iVar3 + 0x48c;
    break;
  case 3:
    iVar3 = iVar3 + 0x604;
    break;
  default:
    goto switchD_01025922_default;
  }
  pcVar4 = (char *)(iVar3 + 0x42);
  cVar1 = *pcVar4;
  if (cVar1 != '\x01') {
    pcVar4 = (char *)(uint)*(byte *)(iVar3 + 0x44);
  }
  if (cVar1 == '\x01' || pcVar4 == (char *)0x1) {
    uVar2 = 1;
  }
switchD_01025922_default:
  return uVar2;
}

