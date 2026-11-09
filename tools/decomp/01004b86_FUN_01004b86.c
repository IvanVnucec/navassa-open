
undefined4 FUN_01004b86(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r7;
  char cVar5;
  undefined8 uVar6;
  
  iVar4 = DAT_010050d0;
  cVar5 = *(char *)(DAT_010050d0 + 0x77d) == '\x01';
  if ((bool)cVar5) {
    uVar3 = 0x1e;
  }
  else {
    cVar5 = *(char *)(DAT_010050cc + 0x20) == '\x01';
    if ((bool)cVar5) {
      uVar3 = 0x1f;
    }
    else {
      uVar3 = 1;
    }
  }
  FUN_010026f0(*(undefined4 *)(param_3 + 0x10),DAT_010054f0,*DAT_010054f0,DAT_010054f0[1],uVar3);
  FUN_01004c64();
  if (cVar5 == '\0') {
    FUN_01004c98();
  }
  if (*(char *)(iVar4 + 0x77d) == '\x01') {
    uVar6 = FUN_01004c86();
    iVar4 = (int)uVar6 + (int)((ulonglong)uVar6 >> 0x20) * unaff_r7 +
            *(int *)(param_3 + 0x20) * 0x90 + 0x40;
  }
  else {
    uVar6 = FUN_01004c74(*(char *)(iVar4 + 0x77d),param_1);
    iVar4 = FUN_01004c58((int)uVar6,(int)uVar6 + (int)((ulonglong)uVar6 >> 0x20) * unaff_r7);
    iVar4 = iVar4 + 0x200;
  }
  uVar3 = FUN_01010950(param_1);
  FUN_01004c50();
  uVar1 = FUN_01010978(param_1);
  FUN_01004c48();
  FUN_0101092c(param_1,1);
  uVar2 = FUN_01004ca2(param_1,*(undefined4 *)(param_3 + 0x18),iVar4,1,0);
  uVar3 = FUN_01004c52(uVar2,uVar3);
  FUN_01004c4a(uVar3,uVar1);
  return uVar2;
}

