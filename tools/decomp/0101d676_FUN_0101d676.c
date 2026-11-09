
uint FUN_0101d676(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = *(int *)(DAT_0101d868 + param_1 * 4);
  iVar1 = iVar4 + 0x54;
  if (param_2 == 0) {
    FUN_0102598c(iVar1,1,0);
    uVar5 = FUN_0102598c(iVar4 + 4,0x8f0,(param_3 & 1) << 0xb | (param_4 & 0xf) << 4);
    FUN_0101d732((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x1000);
    uVar3 = 0x2000;
  }
  else if (param_2 == 1) {
    uVar3 = FUN_0102598c(iVar1,2,0);
    uVar5 = FUN_0101d73a(uVar3,0xbc,(param_3 & 1) << 7 | (param_4 & 0xf) << 2);
    FUN_0101d732((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x4000);
    uVar3 = 0x8000;
  }
  else {
    if (param_2 != 2) {
      return param_4;
    }
    uVar3 = FUN_0102598c(iVar1,4,0);
    uVar5 = FUN_0101d73a(uVar3,0xbc00,(param_3 & 1) << 0xf | (param_4 & 0xf) << 10);
    FUN_0101d732((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x10000);
    uVar3 = 0x20000;
  }
  uVar2 = FUN_0102598c(iVar4 + 0x50,uVar3,0,param_4);
  return uVar2;
}

