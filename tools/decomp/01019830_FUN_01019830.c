
undefined4 FUN_01019830(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  uint local_34;
  undefined4 local_30;
  uint uStack_2c;
  int local_28;
  
  uVar2 = DAT_01019bac;
  if (param_3 == 0) {
    uStack_2c = 1;
  }
  else {
    uStack_2c = (uint)(param_3 == 2);
    if (param_3 == 2 || param_3 == 1) {
      iVar6 = 1;
      goto LAB_01019838;
    }
  }
  iVar6 = 0;
LAB_01019838:
  if (param_2 == 4) {
    param_2 = 0;
  }
  if (1 < param_1) {
    uVar3 = 0;
    if (param_1 == 2) {
      uVar5 = 0x41;
    }
    else {
      uVar5 = 0x46;
    }
    if (uStack_2c != 0) {
      FUN_0101981e(0,uStack_2c,DAT_01019ba8,0);
      uVar11 = FUN_01019816();
      FUN_01019808((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),4,4);
      FUN_0101980e();
      FUN_0101981e();
      FUN_0101980e();
      FUN_01019816();
      uVar3 = FUN_01022164(uVar2,uVar5,1,1);
    }
    if (iVar6 != 0) {
      uVar11 = FUN_01019806();
      uVar11 = FUN_01019808((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x20,0);
      FUN_01019808((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x40,0x40);
      FUN_01019826();
      FUN_01019806();
      uVar11 = FUN_01019826();
      FUN_01019808((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x20,0x20);
      uVar3 = FUN_01022164(uVar2,uVar5,0x10,0x10);
    }
    return uVar3;
  }
  local_28 = iVar6;
  uVar3 = 0;
  local_34 = (uint)*(byte *)(DAT_01019ba4 + param_1);
  uVar5 = *(undefined4 *)(DAT_01019ba8 + param_1 * 4);
  if (param_2 == 0) {
    uVar7 = 4;
    uVar10 = 8;
  }
  else {
    uVar7 = 2;
    uVar10 = 4;
  }
  uVar12 = *(undefined2 *)(DAT_01019bb0 + param_2 * 2 + 0x10);
  if (*(byte *)(DAT_01019ba4 + param_1) == 0) {
    uVar8 = 0x4b;
    uVar9 = 0x4c;
  }
  else {
    uVar8 = 0x51;
    uVar9 = 0x52;
  }
  if (uStack_2c != 0) {
    local_30 = DAT_01019c20;
    uVar4 = (uint)*(byte *)((int)&local_30 + param_2);
    uVar11 = FUN_01019752();
    uVar11 = FUN_01019754((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),2,0,uVar4,uVar12,uVar5);
    FUN_01019754((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),4,4);
    uVar11 = FUN_0101974a();
    FUN_010195dc((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar7,uVar7);
    FUN_01019752();
    uVar11 = FUN_0101974a();
    uVar11 = FUN_010195dc((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar7,0);
    FUN_01019754((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),2,2);
    uVar4 = 1 << (uVar4 & 0xff);
    uVar3 = FUN_01022164(uVar2,uVar8,uVar4 & 0xff,uVar4 & 0xff,1000);
  }
  if ((char)local_28 != '\0') {
    cVar1 = *(char *)(*(int *)(DAT_01019bb4 + param_2 * 8 + local_34 * 4) + 0x46);
    local_34 = DAT_01019c24;
    if (cVar1 == '\x02') {
      uVar3 = 0x80;
    }
    else {
      uVar3 = 0x40;
    }
    uVar4 = (uint)*(byte *)((int)&local_34 + param_2);
    if (cVar1 == '\x02') {
      uVar4 = uVar4 << 4;
    }
    uVar11 = FUN_01019754(cVar1,&local_34,0x10,0);
    uVar11 = FUN_01019754((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x20,0);
    FUN_01019754((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar3,uVar3);
    uVar11 = FUN_0101974a();
    uVar11 = FUN_010195dc((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar10,uVar10);
    FUN_01019754((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x10,0x10);
    uVar11 = FUN_0101974a();
    uVar11 = FUN_010195dc((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),uVar10,0);
    FUN_01019754((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),0x20,0x20);
    uVar3 = FUN_01022164(uVar2,uVar9,1 << (uVar4 & 0xff) & 0xff,1 << (uVar4 & 0xff) & 0xff,1000);
  }
  return uVar3;
}

