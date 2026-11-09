
void FUN_010108ae(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar2 = DAT_01010e3c;
  cVar1 = *(char *)(DAT_01010e48 + 0x77d);
  bVar5 = cVar1 != '\x01';
  if (bVar5) {
    cVar1 = *(char *)(DAT_01010e4c + 0x20);
  }
  if (bVar5 && cVar1 != '\x01') {
    uVar3 = 7;
    iVar4 = *(int *)(DAT_01010e3c + param_1 * 4) + 0x1a5;
  }
  else {
    iVar4 = *(int *)(DAT_01010e3c + param_1 * 4);
    pin_update(iVar4 + 0x1a5,7,4);
    uVar3 = 1;
    iVar4 = iVar4 + 0xeb;
  }
  pin_update(iVar4,uVar3,1);
  iVar2 = *(int *)(iVar2 + param_1 * 4);
  *(undefined1 *)(iVar2 + 0xe2) = 1;
  *(undefined1 *)(iVar2 + 0xe4) = 0x40;
  pin_update(iVar2 + 0xe5,0xf,0);
  return;
}

