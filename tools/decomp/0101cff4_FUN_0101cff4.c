
void FUN_0101cff4(int param_1,uint param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  char local_38;
  
  puVar1 = DAT_0101d5c4;
  iVar6 = *(int *)(DAT_0101d59c + param_1 * 4);
  if (*(char *)(DAT_0101d5b8 + 0x20) == '\0') {
    local_38 = '\0';
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(DAT_0101d5bc + param_1 * 4);
    local_38 = *(char *)(iVar3 + 0x2e);
  }
  iVar5 = DAT_0101d5ac + param_1 * 0xbc;
  switch(param_2) {
  case 0:
  case 4:
    uVar7 = FUN_0101ccc0(iVar3,3,0);
    uVar4 = FUN_0101ccbe((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0);
    uVar4 = FUN_0101ccc0(uVar4,0x30,0);
    FUN_0101ccc0(uVar4,0xc0,0);
    FUN_0101ccae();
    local_38 = local_38 * '\x02';
    if (param_2 != 4) {
      param_2 = (uint)*(byte *)(iVar5 + 0x1c6);
      if (param_2 == 1) {
        param_2 = FUN_01016ecc(param_1,0);
      }
      local_38 = local_38 + '\x01';
    }
    FUN_0101d448(param_2,7,local_38);
    FUN_0101d284();
    FUN_0101d262();
    if (param_1 == 0) {
      uVar4 = 0x163;
    }
    else {
      uVar4 = 0x164;
    }
    FUN_0101bf18(0x46000000,uVar4);
    pin_update(iVar6 + 0x131,2,2);
    return;
  case 1:
    uVar7 = FUN_0101ccc0(iVar3,3,1);
    uVar4 = FUN_0101ccbe((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),4);
    uVar4 = FUN_0101ccc0(uVar4,0x30,0x10);
    FUN_0101ccc0(uVar4,0xc0,0x40);
    uVar4 = FUN_0101ccae();
    FUN_0101d448(uVar4,7,2);
    FUN_0101d284();
    FUN_0101d262();
    if (param_1 == 0) {
      FUN_0101d256();
      uVar2 = *puVar1 | 8;
    }
    else {
      FUN_0101d248();
      uVar2 = *puVar1 | 0x800;
    }
    FUN_0101d278(uVar2);
    FUN_0101024a(param_1);
    FUN_0101d26e();
    if (*(char *)(iVar5 + 0x33e) == '\x01') {
      uVar4 = 1;
LAB_0101d236:
      FUN_01016ecc(param_1,uVar4);
      return;
    }
    break;
  case 2:
    uVar7 = FUN_0101ccc0(iVar3,3,2);
    uVar4 = FUN_0101ccbe((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),8);
    uVar4 = FUN_0101ccc0(uVar4,0x30,0x20);
    FUN_0101ccc0(uVar4,0xc0,0x80);
    uVar4 = FUN_0101ccae();
    FUN_0101d448(uVar4,7,4);
    FUN_0101d284();
    FUN_0101d262();
    if (param_1 == 0) {
      FUN_0101d256();
      uVar2 = *puVar1 | 8;
    }
    else {
      FUN_0101d248();
      uVar2 = *puVar1 | 0x800;
    }
    FUN_0101d278(uVar2);
    FUN_0101024a(param_1);
    FUN_0101d26e();
    if (*(char *)(iVar5 + 0x4b6) == '\x01') {
      uVar4 = 2;
      goto LAB_0101d236;
    }
    break;
  case 3:
    uVar7 = FUN_0101ccc0(iVar3,3,3);
    uVar4 = FUN_0101ccbe((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0xc);
    uVar4 = FUN_0101ccc0(uVar4,0x30,0x30);
    FUN_0101ccc0(uVar4,0xc0,0xc0);
    uVar4 = FUN_0101ccae();
    FUN_0101d448(uVar4,7,3);
    FUN_0101d284();
    FUN_0101d262();
    if (param_1 == 0) {
      FUN_0101d256();
      uVar2 = *puVar1 | 8;
    }
    else {
      FUN_0101d248();
      uVar2 = *puVar1 | 0x800;
    }
    FUN_0101d278(uVar2);
    FUN_0101024a(param_1);
    FUN_0101d26e();
    if (*(char *)(iVar5 + 0x62e) == '\x01') {
      uVar4 = 3;
      goto LAB_0101d236;
    }
  }
  return;
}

