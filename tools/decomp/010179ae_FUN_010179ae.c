
int FUN_010179ae(uint param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  cVar4 = *param_2;
  if (cVar4 == '\0') {
    iVar2 = FUN_01017c44(param_1,0,param_4);
    return iVar2;
  }
  if (-1 < (int)((0xfU >> (param_1 & 0xff)) << 0x1f)) {
    return 0xc301;
  }
  iVar2 = 0;
  uVar6 = 0xcU >> (param_1 & 0xff) & 1;
  if (cVar4 == '\x01') {
    if (param_2[1] != '\x03') {
      if (param_2[2] == '\x01') goto LAB_01017a04;
      goto LAB_01017a06;
    }
    iVar2 = 0xc301;
LAB_01017a10:
    if (param_2[2] != '\x02') goto LAB_01017a6c;
    iVar2 = 0xc301;
LAB_01017a18:
    if ((uVar6 != 0) && (4 < (byte)param_2[1])) {
LAB_01017a20:
      iVar2 = 0xc301;
    }
  }
  else {
    if ((cVar4 == '\x02') && (((byte)param_2[1] < 3 || (param_2[2] == '\x02')))) {
LAB_01017a04:
      iVar2 = 0xc301;
    }
LAB_01017a06:
    if (param_2[1] != '\x04' && param_2[1] != '\x05') goto LAB_01017a10;
LAB_01017a6c:
    if (2 < (byte)param_2[1]) goto LAB_01017a18;
    if (param_2[2] == '\x01') goto LAB_01017a20;
  }
  if ((int)((3U >> (param_1 & 0xff)) << 0x1f) < 0) {
    if ((byte)param_2[1] < 5) {
      if ((param_2[1] == 6 && cVar4 == '\x01') && (param_2[2] != '\0')) {
        return 0xc301;
      }
    }
    else if ((cVar4 == '\x02') && (param_2[2] != '\x01')) {
      return 0xc301;
    }
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  pin_update(DAT_0101818c,3,0);
  iVar2 = *(int *)(DAT_01018060 + param_1 * 4);
  if (*param_2 == '\x01') {
    if (uVar6 == 0) {
      iVar3 = iVar2 + 1;
    }
    else {
      iVar3 = iVar2 + 0x13;
    }
LAB_01017aa4:
    pin_update(iVar3,1,0);
  }
  else if (*param_2 == '\x02') {
    if (uVar6 == 0) {
      iVar3 = iVar2 + 0x10;
    }
    else {
      iVar3 = iVar2 + 0x1d;
    }
    goto LAB_01017aa4;
  }
  FUN_01017556(param_1,*param_2,param_2[2],param_2[6]);
  FUN_010176c8(param_1,*param_2,param_2[1]);
  cVar4 = *param_2;
  iVar3 = iVar2 + 0xe;
  iVar7 = iVar2 + 0x1c;
  if (cVar4 == '\x01') {
    if (param_2[2] != '\x02') {
      cVar4 = '\0';
    }
    if (uVar6 != 0) {
      iVar2 = iVar2 + 0x12;
    }
    uVar8 = 1;
LAB_01017af6:
    pin_update(iVar2,uVar8,cVar4);
  }
  else if (cVar4 == '\x02') {
    if (param_2[2] != '\0') {
      cVar4 = '\0';
    }
    if (uVar6 == 0) {
      uVar8 = 2;
      iVar2 = iVar3;
    }
    else {
      uVar8 = 2;
      iVar2 = iVar7;
    }
    goto LAB_01017af6;
  }
  uVar9 = FUN_01017c38();
  FUN_01017c40((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),0);
  uVar9 = FUN_01017c38();
  FUN_01017c40((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),1);
  uVar9 = FUN_01017c38();
  FUN_01017c40((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),2);
  FUN_010178ca(param_1,*param_2);
  if (*param_2 == '\x02') {
    uVar8 = 0x80;
  }
  else {
    uVar8 = 0;
  }
  if (param_1 == 2) {
    pin_update(DAT_01018190,0x80,uVar8);
    pin_update(DAT_01018194,0x80,uVar8);
    pin_update(DAT_01018198,0x80,uVar8);
    uVar5 = DAT_0101819c;
  }
  else {
    if (param_1 != 3) goto LAB_01017b9a;
    pin_update(DAT_010181a0,0x80,uVar8);
    pin_update(DAT_010181a4,0x80,uVar8);
    pin_update(DAT_010181a8,0x80,uVar8);
    uVar5 = DAT_010181ac;
  }
  pin_update(uVar5,0x80,uVar8);
LAB_01017b9a:
  uVar9 = FUN_01017c38();
  FUN_01017c40((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),8);
  if (*param_2 == '\x02') {
    bVar1 = param_2[7];
    iVar2 = (bVar1 >> 1 & 1) << 6;
    if (uVar6 == 0) {
      pin_update(iVar3,0x20,(bVar1 & 1) << 5);
      pin_update(iVar3,0x40,iVar2);
    }
    else {
      uVar8 = FUN_01017d78();
      FUN_01017d7a(uVar8,0x40,iVar2);
      iVar3 = iVar7;
    }
    pin_update(iVar3,0x80,(bVar1 >> 2 & 1) << 7);
    uVar9 = FUN_01017c38();
    uVar8 = FUN_01017c40((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),3);
    bVar1 = param_2[10];
    uVar5 = 4;
  }
  else {
    if (*param_2 != '\x01') {
      return 0;
    }
    FUN_01017c40(1,1,5,1);
    uVar9 = FUN_01017c38();
    uVar8 = FUN_01017c40((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),6);
    bVar1 = param_2[0xd];
    uVar5 = 7;
  }
  FUN_01017c40(uVar8,*param_2,uVar5,bVar1 & 1);
  return 0;
}

