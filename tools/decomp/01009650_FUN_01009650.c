
int FUN_01009650(uint param_1,int param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  cVar1 = *(char *)(DAT_0100a02c + param_3);
  if ((param_4 != 1) || (iVar2 = FUN_010079a4(param_1,param_2,cVar1), iVar2 == 0)) {
    FUN_010085e4(param_1,param_2,cVar1,0);
    iVar3 = DAT_0100a19c + param_1 * 0x60;
    if (*(char *)(iVar3 + 0x10) == '\0') {
      *(undefined1 *)(iVar3 + 0x11) = 0;
      FUN_010071b4(param_1,1);
      FUN_01007728(param_1,cVar1,1);
    }
    if (param_1 < 2) {
      if (param_2 == 2) {
        param_3 = (uint)(byte)(cVar1 + 2);
      }
      FUN_010078f8(param_1,param_3,1);
    }
    if (param_4 == 0) {
      FUN_010074ac(param_1,param_2,cVar1,1);
      *(undefined1 *)(iVar3 + 0x35) = 0xff;
    }
    else {
      FUN_01007518(param_1,param_2,cVar1,1);
    }
  }
  return iVar2;
}

