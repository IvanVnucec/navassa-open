
void FUN_0101c55c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  
  uVar4 = *(undefined1 *)(param_1 + 1);
  iVar8 = *(int *)(DAT_0101cf24 + param_2 * 4);
  cVar1 = *(char *)(param_1 + 3);
  cVar2 = *(char *)(param_1 + 4);
  cVar3 = *(char *)(param_1 + 7);
  FUN_0101c27c(7,uVar4,param_2,0,param_4);
  uVar5 = FUN_0101c670();
  if (cVar1 == '\x02') {
    uVar7 = 1;
    uVar6 = 1;
  }
  else {
    if (cVar1 == '\x01') {
      uVar5 = FUN_0101c68e();
      uVar7 = 2;
    }
    else {
      uVar5 = FUN_0101c68e();
      uVar7 = 0;
    }
    uVar6 = 2;
  }
  uVar5 = FUN_0101d452(uVar5,uVar6,uVar7);
  if (cVar2 == '\x01') {
    uVar7 = 4;
    uVar6 = 4;
  }
  else {
    if (cVar2 == '\0') {
      uVar5 = FUN_0101c684();
      uVar7 = 8;
    }
    else {
      uVar5 = FUN_0101c684();
      uVar7 = 0;
    }
    uVar6 = 8;
  }
  uVar9 = FUN_0101d452(uVar5,uVar6,uVar7);
  FUN_0101c7da((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined1 *)(param_1 + 6));
  FUN_0101d452();
  uVar9 = pin_update(iVar8 + 0x1a9,2,((uint)*(byte *)(param_1 + 5) << 0x19) >> 0x18);
  uVar5 = FUN_0101c678((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined1 *)(param_1 + 10));
  if (cVar3 == '\0') {
    uVar7 = 4;
    uVar6 = 4;
  }
  else {
    if (cVar3 == '\x01') {
      uVar5 = FUN_0101d536();
      uVar7 = 2;
    }
    else {
      uVar5 = FUN_0101d536();
      uVar7 = 0;
    }
    uVar6 = 2;
  }
  uVar9 = FUN_0101cb30(uVar5,uVar6,uVar7);
  FUN_0101c7d0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined1 *)(param_1 + 9));
  uVar9 = FUN_0101cb30();
  uVar5 = FUN_0101c678((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),*(undefined1 *)(param_1 + 10));
  FUN_0101cb30(uVar5,1,*(undefined1 *)(param_1 + 8));
  FUN_0101c670();
  FUN_0101c27c(7,uVar4,param_2);
  return;
}

