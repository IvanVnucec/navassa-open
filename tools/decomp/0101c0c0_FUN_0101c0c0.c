
undefined4 FUN_0101c0c0(char *param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  uVar3 = 0;
  if ((byte)param_1[4] < 2) {
    pcVar4 = DAT_0101cb1c;
    if (param_4 == 0) {
      pcVar4 = DAT_0101cb20;
    }
    if (*param_1 == '\0') {
      cVar1 = '\x02';
    }
    else {
      cVar1 = '\0';
    }
    uVar5 = (*pcVar4)(param_4,*(int *)(DAT_0101cb14 + param_2 * 4) + 0xf8,
                      cVar1 + param_1[1] * '\x04' + param_1[2] * '\b',0xe);
    if (param_4 == 0) {
      switch(param_3) {
      case 0:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      default:
        goto switchD_0101c116_default;
      }
      FUN_0101c7da((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_1[4]);
      uVar2 = FUN_0101cb30();
      FUN_0101cb30(uVar2,0x20,((uint)(byte)param_1[3] << 0x1d) >> 0x18);
    }
  }
  else {
    uVar3 = 0xff00;
  }
switchD_0101c116_default:
  return uVar3;
}

