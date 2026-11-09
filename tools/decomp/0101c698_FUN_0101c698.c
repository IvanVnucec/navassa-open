
void FUN_0101c698(char *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  
  cVar5 = param_1[7];
  iVar7 = *(int *)(DAT_0101cf24 + param_2 * 4);
  uVar11 = FUN_0101c27c(9,0,param_2,0,param_4);
  uVar1 = FUN_0101ccb0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),param_1[1]);
  uVar1 = FUN_0101ccb2(uVar1,2,((uint)(byte)param_1[2] << 0x19) >> 0x18);
  uVar11 = FUN_0101ccb2(uVar1,4,((uint)(byte)param_1[3] << 0x1a) >> 0x18);
  FUN_0101c7d0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),param_1[4]);
  uVar11 = FUN_0101ccb2();
  FUN_0101c7da((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),param_1[5]);
  uVar1 = FUN_0101ccb2();
  uVar11 = FUN_0101ccb2(uVar1,0x20,((uint)(byte)param_1[6] << 0x1d) >> 0x18);
  FUN_0101c7d0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),param_1[0x18]);
  uVar1 = pin_update(iVar7 + 0x1d4);
  if (cVar5 == '\x01') {
    uVar4 = 0x80;
    uVar3 = 0x80;
  }
  else {
    if (cVar5 == '\x02') {
      uVar1 = FUN_0101c7e2();
      uVar4 = 0x40;
    }
    else {
      uVar1 = FUN_0101c7e2();
      uVar4 = 0;
    }
    uVar3 = 0x40;
  }
  FUN_0101ccb2(uVar1,uVar3,uVar4);
  uVar2 = DAT_0101d42c + param_2 * 0x158;
  if (param_1[8] == '\x01') {
    *(undefined1 *)(uVar2 + 0x155) = 1;
  }
  else {
    *(undefined1 *)(uVar2 + 0x155) = 0;
  }
  uVar6 = 0;
  uVar8 = 0;
  bVar9 = param_1[7] != '\x01';
  if (bVar9) {
    uVar2 = (uint)(byte)param_1[3];
  }
  bVar10 = uVar2 != 1;
  if (bVar9 && bVar10) {
    uVar2 = (uint)(byte)param_1[4];
  }
  if ((bVar9 && bVar10) && uVar2 != 1) {
    uVar8 = 8;
  }
  else {
    uVar6 = 8;
  }
  cVar5 = param_1[4];
  if (param_1[6] == '\x01') {
    uVar6 = uVar6 | 0x80;
  }
  else {
    uVar8 = uVar8 | 0x80;
  }
  bVar9 = cVar5 == '\0';
  if (!bVar9) {
    cVar5 = param_1[2];
  }
  if ((bVar9 || cVar5 == '\x01') || (param_1[7] == '\0')) {
    uVar6 = uVar6 | 0x20;
  }
  else {
    uVar8 = uVar8 | 0x20;
  }
  if (param_1[1] == '\0') {
    uVar6 = uVar6 | 4;
  }
  else {
    uVar8 = uVar8 | 4;
  }
  if (param_1[0x18] == '\x01') {
    uVar6 = uVar6 | 0x10;
  }
  else {
    uVar8 = uVar8 | 0x10;
  }
  FUN_0101c238(9,uVar6,param_2,1);
  FUN_0101c238(9,uVar8,param_2,0);
  cVar5 = *param_1;
  if (cVar5 != '\0') {
    cVar5 = '\x01';
  }
  FUN_0101c27c(9,0,param_2,cVar5);
  return;
}

