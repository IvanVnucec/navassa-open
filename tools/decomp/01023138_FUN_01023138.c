
undefined4 FUN_01023138(uint param_1,char *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)(DAT_0102317c + 0x22);
  uVar2 = 0;
  uVar3 = 0;
  do {
    uVar5 = ((param_1 & uVar1) >> 2 & 3) >> (uVar3 & 0xff) & 1;
    cVar4 = (char)uVar5;
    if (uVar5 != 0) {
      cVar4 = '\x01';
    }
    param_2[uVar3] = cVar4;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 2);
  cVar4 = *param_2;
  if (cVar4 == '\0') {
    param_2 = (char *)(uint)(byte)param_2[1];
  }
  if (cVar4 == '\0' && param_2 == (char *)0x0) {
    uVar2 = 0xe105;
  }
  return uVar2;
}

