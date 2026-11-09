
void FUN_01011db4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  *(undefined1 *)(param_1 + 0x2f5) = 1;
  FUN_01011c94(param_1);
  *(undefined1 *)(param_1 + 0x2f8) = 0;
  while (bVar1 = *(byte *)(param_1 + 0x2f8), bVar1 < 0xf) {
    if (bVar1 < 8) {
      *(byte *)(param_1 + 0x2f6) = bVar1;
      cVar2 = '\0';
    }
    else {
      *(undefined1 *)(param_1 + 0x2f6) = 0;
      cVar2 = bVar1 - 7;
    }
    *(char *)(param_1 + 0x2f7) = cVar2;
    FUN_01011bec(*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 4),
                 *(undefined1 *)(param_1 + 0x2f6),*(undefined1 *)(param_1 + 0x2f7),param_4);
    FUN_01011e2c(param_1);
    FUN_01011fe4(param_1);
    iVar3 = *(int *)(param_1 + 0x15c);
    bVar4 = iVar3 == 0;
    if (bVar4) {
      iVar3 = *(int *)(param_1 + 0x170);
    }
    if (bVar4 && iVar3 == 0) {
      FUN_01011eac(param_1);
    }
    *(char *)(param_1 + 0x2f8) = *(char *)(param_1 + 0x2f8) + '\x01';
  }
  FUN_01011aac(param_1);
  FUN_01011bec(*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 4),
               *(undefined1 *)(param_1 + 0x2f9),*(undefined1 *)(param_1 + 0x2fa));
  return;
}

