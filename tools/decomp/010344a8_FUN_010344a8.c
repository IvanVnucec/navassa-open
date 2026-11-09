
undefined4 FUN_010344a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = DAT_0103472c;
  iVar4 = DAT_0103472c + (short)param_1 * 0x1ac;
  iVar6 = iVar4 + 0xbc;
  FUN_0103443c(param_1,iVar6);
  cVar1 = *DAT_01034738;
  iVar3 = iVar3 + (short)param_1 * 0x750;
  bVar7 = cVar1 == '\0';
  if (bVar7) {
    cVar1 = DAT_01034738[2];
  }
  if (bVar7 && cVar1 == '\x01') {
    bVar2 = *(byte *)(iVar4 + (uint)*DAT_01034720);
    FUN_0101204c(iVar3 + (short)(ushort)bVar2 * 0xd0 + 0x418,iVar6,0xd0);
    FUN_01033dac(param_1,bVar2);
  }
  else {
    iVar5 = 0;
    do {
      bVar2 = *(byte *)(iVar4 + iVar5);
      FUN_0101204c(iVar3 + (short)(ushort)bVar2 * 0xd0 + 0x418,iVar6,0xd0);
      FUN_01033dac(param_1,bVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
  }
  *(undefined4 *)(DAT_0103473c + param_1 * 0x18) = 0;
  return param_4;
}

