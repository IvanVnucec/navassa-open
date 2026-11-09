
undefined4 FUN_01004a9a(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_r7;
  char cVar6;
  undefined8 uVar7;
  uint local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar5 = DAT_010050cc;
  cVar6 = *(char *)(DAT_010050d0 + 0x77d) == '\x01';
  if ((bool)cVar6) {
    uVar4 = 0x1e;
  }
  else {
    cVar6 = *(char *)(DAT_010050cc + 0x20) == '\x01';
    if ((bool)cVar6) {
      uVar4 = 0x1f;
    }
    else {
      uVar4 = 1;
    }
  }
  local_2c = param_2;
  uStack_28 = param_3;
  uStack_24 = param_4;
  FUN_01004b64(param_1,param_2,uVar4,param_4,param_1);
  FUN_01004c64();
  if (cVar6 == '\0') {
    FUN_01004c98();
  }
  cVar6 = '\0';
  FUN_0101026a(param_1,2,&local_2c);
  uVar4 = FUN_01010950(param_1);
  uVar1 = FUN_01010978(param_1);
  uVar2 = FUN_01004b7e();
  if (cVar6 == '\0') {
    uVar2 = (uint)*(byte *)(iVar5 + 0x20);
    cVar6 = uVar2 == 1;
  }
  if (cVar6 == '\0') {
    uVar7 = FUN_01004c74(uVar2,param_1);
    iVar5 = FUN_01004c58((int)uVar7,unaff_r7 * (int)((ulonglong)uVar7 >> 0x20) + (int)uVar7);
    iVar5 = iVar5 + 0x238;
  }
  else {
    uVar7 = FUN_01004c86();
    iVar5 = unaff_r7 * (int)((ulonglong)uVar7 >> 0x20) + (int)uVar7 +
            *(int *)(param_2 + 0x20) * 0x90 + 0x78;
  }
  FUN_01004c50();
  FUN_01004c48();
  FUN_0101092c(param_1,1);
  uVar3 = FUN_01004ca2(param_1,2,iVar5,1,0);
  FUN_01004c52(uVar3,uVar4);
  uVar4 = FUN_010104ae(param_1,2,local_2c & 0xff);
  FUN_01004c4a(uVar4,uVar1);
  return uVar3;
}

