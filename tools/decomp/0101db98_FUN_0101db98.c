
undefined8
FUN_0101db98(float param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  
  iVar5 = 0;
  iVar2 = FUN_0101db8c();
  iVar1 = DAT_0101e15c;
  if (iVar2 == 2) {
    if (param_3 < 0x40) {
      pbVar3 = (byte *)(*(int *)(DAT_0101e15c + param_2 * 4) + 0xe3);
      bVar7 = *pbVar3 & 0x3f;
      iVar2 = (int)(char)((char)param_3 - bVar7);
      if (iVar2 < 0) {
        cVar6 = -2;
        iVar2 = -iVar2;
      }
      else {
        cVar6 = '\x02';
      }
      for (iVar2 = iVar2 / 2; (char)iVar2 != '\0'; iVar2 = iVar2 + -1) {
        bVar7 = cVar6 + bVar7;
        pin_update(pbVar3,0x3f,bVar7);
        FUN_0101db10();
      }
      pin_update(pbVar3,0x3f,param_3 & 0xff);
    }
    else {
      iVar5 = 0xc601;
    }
  }
  else {
    iVar5 = 0xc600;
  }
  if (iVar5 == 0) {
    iVar2 = FUN_0101db8c(param_2);
    if (iVar2 == 2) {
      if (param_1 < DAT_0101df14 == (NAN(param_1) || NAN(DAT_0101df14))) {
        iVar5 = 0xc602;
      }
      else {
        uVar4 = (int)(param_1 / DAT_0101df50) & 0xff;
        if (0x76 < uVar4) {
          uVar4 = 0x76;
        }
        pin_update(*(int *)(iVar1 + param_2 * 4) + 0xe2,0x7f,uVar4);
      }
    }
    else {
      iVar5 = 0xc600;
    }
  }
  return CONCAT44(param_5,iVar5);
}

