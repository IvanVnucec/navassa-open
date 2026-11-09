
longlong FUN_0102e6bc(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar2 = param_1 * 7;
  pbVar6 = (byte *)(DAT_0102e80c + uVar2);
  iVar7 = *(int *)(DAT_010174e8 + param_1 * 4);
  iVar5 = param_1 * 0xbc + DAT_010174ec;
  if (param_2 == 0) {
    cVar3 = *(char *)(iVar5 + 0x1e5);
  }
  else if (param_2 == 1) {
    cVar3 = *(char *)(iVar5 + 0x35d);
  }
  else if (param_2 == 2) {
    cVar3 = *(char *)(iVar5 + 0x4d5);
  }
  else {
    if (param_2 != 3) goto LAB_0101720c;
    cVar3 = *(char *)(iVar5 + 0x64d);
  }
  if (cVar3 == '\x01') {
    bVar4 = *pbVar6;
    if (pbVar6[2] <= bVar4) {
LAB_0101716a:
      pin_update(iVar7 + 0xe2,0x1f,bVar4);
      pin_update(iVar7 + 0xe3,0x7f,pbVar6[1]);
      pin_update(iVar7 + 0xe4,0x3f,pbVar6[2]);
      pin_update(iVar7 + 0xe5,0x3f,pbVar6[3]);
      pin_update(iVar7 + 0xe6,0x3f,pbVar6[4]);
      pin_update(iVar7 + 0xe3,0x80,((uint)pbVar6[6] << 0x1f) >> 0x18);
      pin_update(iVar7 + 0xfa,1,1);
      pin_update(iVar7 + 0xf7,2,2);
      return (ulonglong)uVar2 << 0x20;
    }
  }
  else if (cVar3 == '\x02') {
    bVar1 = *pbVar6;
    uVar8 = FUN_0102025c(bVar1);
    FUN_0101f250((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0,DAT_010174f0);
    bVar4 = FUN_01020608();
    if (pbVar6[2] <= bVar1) goto LAB_0101716a;
  }
  else if (cVar3 == '\x04') {
    bVar1 = *pbVar6;
    uVar8 = FUN_0102025c(bVar1);
    FUN_0101f250((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),0,DAT_010174f4);
    bVar4 = FUN_01020608();
    if (pbVar6[2] <= bVar1) goto LAB_0101716a;
  }
LAB_0101720c:
  return CONCAT44(uVar2,0xff02);
}

