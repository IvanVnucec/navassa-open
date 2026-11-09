
undefined4 FUN_0101e914(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  cVar1 = *param_1;
  pcVar2 = DAT_0101e990;
  if ((cVar1 != '\0') && (pcVar2 = param_1, cVar1 == '\x01')) {
    pcVar2 = DAT_0101e994;
  }
  uVar4 = *(undefined4 *)(pcVar2 + 0xc4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(pcVar2 + 0xc0);
  *(undefined4 *)(param_1 + 0x8c) = uVar4;
  uVar4 = *(undefined4 *)(pcVar2 + 0xcc);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(pcVar2 + 200);
  *(undefined4 *)(param_1 + 0x94) = uVar4;
  uVar4 = *(undefined4 *)(pcVar2 + 0xd4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(pcVar2 + 0xd0);
  *(undefined4 *)(param_1 + 0x9c) = uVar4;
  uVar4 = *(undefined4 *)(pcVar2 + 0xdc);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(pcVar2 + 0xd8);
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  iVar3 = FUN_01022cfc(cVar1);
  *(int *)(param_1 + 0xa8) = iVar3 + 1;
  return 0;
}

