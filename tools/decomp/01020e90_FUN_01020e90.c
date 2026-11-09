
void FUN_01020e90(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_30;
  undefined1 local_2f;
  undefined2 local_2e;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  int local_28;
  int local_24;
  undefined1 local_20;
  undefined4 uStack_1c;
  
  uVar3 = DAT_01020fa0;
  uVar1 = DAT_01020f68;
  if (param_1 != 0) {
    uVar3 = DAT_01020fa4;
    uVar1 = DAT_01020f6c;
  }
  local_30 = 1;
  local_2f = 0;
  local_2e = 0;
  if ((param_2 == 0) || (*(int *)(*(int *)(DAT_01020fa8 + param_1 * 4) + 0x34) << 8 < 0)) {
    local_2c = 0;
    local_2b = 1;
  }
  else {
    local_2c = 1;
    local_2b = 0;
  }
  local_2a = 0;
  local_29 = 1;
  uStack_1c = param_4;
  FUN_0100d75a(param_1,*DAT_01020fac);
  uVar4 = FUN_0102025c();
  uVar4 = FUN_0101f250((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_01020fb0,DAT_01020fb4);
  uVar5 = FUN_0102025c(*(undefined4 *)(DAT_01020f8c + param_1 * 0x54 + 0xe8));
  uVar2 = FUN_0101f250((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar4,
                       (int)((ulonglong)uVar4 >> 0x20));
  uVar4 = FUN_010205a4(uVar2);
  local_28 = FUN_01035c84((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  if (local_28 == 0) {
    local_28 = 0x14;
  }
  local_20 = 0;
  local_24 = local_28;
  FUN_0100f6e6(uVar1,uVar3,&local_30);
  return;
}

