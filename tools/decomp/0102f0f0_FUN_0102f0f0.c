
int FUN_0102f0f0(uint param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
                int param_6,undefined4 param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  byte local_74 [4];
  byte abStack_70 [72];
  uint local_28;
  
  local_28 = param_1;
  FUN_0101206c(abStack_70,&DAT_0102f29c,0x48);
  uVar6 = FUN_0102f276();
  FUN_0102f27a((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x10,0);
  FUN_0102f26c();
  uVar2 = FUN_0102f26c();
  uVar2 = FUN_0102f270(uVar2,0xed,8,0);
  uVar2 = FUN_0102f270(uVar2,0xed,0x10,0x10);
  FUN_0102f270(uVar2,0xed,7,0);
  if ((param_4 == 0) && (param_3 < DAT_0102f268)) {
    iVar5 = 1;
    if (param_6 == 0) {
      uVar4 = 0;
    }
    else {
      if (param_6 != 1) goto LAB_0102f168;
      param_3 = param_3 >> 4;
      uVar4 = 0;
    }
LAB_0102f17a:
    iVar3 = FUN_0102f04c(param_3,uVar4,local_74,abStack_70);
    if (iVar3 == 0) {
      lVar1 = (ulonglong)(uint)abStack_70[(uint)local_74[0] * 8] * (ulonglong)param_3;
      iVar3 = FUN_010096fc((int)lVar1,
                           abStack_70[(uint)local_74[0] * 8] * uVar4 +
                           (int)((ulonglong)lVar1 >> 0x20),param_7,param_8,local_28 & 0xff);
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = 0;
    if (1 < abStack_70[(uint)local_74[0] * 8]) {
      iVar3 = FUN_0102f0a6(local_28 & 0xff,(uint)local_74[0],abStack_70);
      uVar6 = FUN_0102f276();
      iVar5 = iVar5 << 4;
      goto LAB_0102f20c;
    }
  }
  else {
    iVar5 = 0;
    if (param_6 == 2) {
LAB_0102f168:
      uVar4 = param_4 * 3 + (int)((ulonglong)param_3 * 3 >> 0x20);
      param_3 = (uint)((ulonglong)param_3 * 3) >> 2 | uVar4 * 0x40000000;
      uVar4 = uVar4 >> 2;
      goto LAB_0102f17a;
    }
    iVar3 = FUN_010096fc(param_3,param_4,param_7,param_8,local_28 & 0xff);
  }
  uVar6 = FUN_0102f278();
  iVar5 = 0;
LAB_0102f20c:
  FUN_0102f27a((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x10,iVar5);
  return iVar3;
}

