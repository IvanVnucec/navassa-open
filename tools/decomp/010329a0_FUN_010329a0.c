
undefined4 FUN_010329a0(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = DAT_01032a34;
  if (param_1 != 0) {
    iVar2 = DAT_01032a38;
  }
  pcVar3 = (char *)(DAT_01032a3c + param_1 * 5);
  iVar4 = iVar2 + 0x87;
  if (*pcVar3 == '\0') {
    cVar1 = '\0';
  }
  else {
    if (3 < (byte)pcVar3[1]) {
      return 0x9004;
    }
    pin_update(iVar4,0xc0,((uint)(byte)pcVar3[1] << 0x1e) >> 0x18);
    if (0xf < (byte)pcVar3[2]) {
      return 0x9005;
    }
    pin_update(iVar4,0x1e,((uint)(byte)pcVar3[2] << 0x19) >> 0x18);
    pin_update(iVar4,1,*pcVar3);
    if (3 < (byte)pcVar3[4]) {
      return 0x9006;
    }
    iVar4 = iVar2 + 0x88;
    pin_update(iVar4,6,((uint)(byte)pcVar3[4] << 0x19) >> 0x18);
    cVar1 = pcVar3[3];
  }
  pin_update(iVar4,1,cVar1);
  return 0;
}

