
longlong FUN_01017f68(uint param_1,int param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  bVar1 = *(byte *)(DAT_010181cc + param_1);
  iVar8 = DAT_010181d0 + (short)(ushort)bVar1 * 0xbc;
  uVar5 = 1;
  uVar6 = 1;
  uVar7 = 1;
  if (*(char *)(iVar8 + 0xb0) != '\x02') goto LAB_01018056;
  cVar2 = **(char **)(DAT_010181c8 + param_1 * 4);
  iVar3 = (0xcU >> (param_1 & 0xff)) << 0x1f;
  if (iVar3 < 0) {
    uVar6 = uVar7;
    if (param_2 == 1) {
      if ((cVar2 == '\x01' || cVar2 == '\x03') && (cVar2 == '\x03')) {
        uVar6 = 0;
      }
    }
    else {
      iVar3 = pin_update(*(int *)(DAT_01018188 + param_1 * 4) + 0x1d,8,8);
    }
    sVar4 = (ushort)bVar1 * 0x13;
    uVar5 = FUN_0101806a(iVar3,sVar4 + 0x91);
    uVar5 = FUN_0101806a(uVar5,sVar4 + 0x95);
    FUN_0101806a(uVar5,sVar4 + 0x99);
    if (*(char *)(iVar8 + 0xb2) != '\0') {
      FUN_01018068(*(char *)(iVar8 + 0xb2),sVar4 + 0x9d);
    }
    if (*(char *)(iVar8 + 0xb6) != '\x01') goto LAB_01018056;
    sVar4 = sVar4 + 0xa0;
    cVar2 = '\x01';
  }
  else {
    if (param_2 == 1) {
      if (cVar2 != '\x01') {
        if (cVar2 != '\x03') goto LAB_01018026;
        uVar5 = 0;
      }
      uVar6 = 0;
    }
LAB_01018026:
    sVar4 = (ushort)bVar1 * 0xc;
    uVar5 = FUN_0101806a(iVar3,sVar4 + 0x78,cVar2,uVar5);
    uVar5 = FUN_0101806a(uVar5,sVar4 + 0x7b);
    FUN_0101806a(uVar5,sVar4 + 0x7e);
    cVar2 = *(char *)(iVar8 + 0x22a);
    if (cVar2 == '\0') goto LAB_01018056;
    sVar4 = sVar4 + 0x81;
  }
  FUN_01017e00(cVar2,sVar4,1,uVar6);
LAB_01018056:
  return (ulonglong)param_4 << 0x20;
}

