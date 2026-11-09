
undefined4 FUN_01037310(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  task_enter_critical();
  iVar6 = DAT_01037374 + param_1 * 0xc;
  cVar1 = *(char *)(iVar6 + 1);
  FUN_0102bf96();
  if (((cVar1 == '\0') && (*(int *)(iVar6 + 0x18) != 0)) &&
     (iVar3 = FUN_0101db8c(param_1), iVar3 == 1)) {
    sVar2 = FUN_0101db36(param_1,-(uint)(param_2 == 0) >> 0x1f);
    uVar4 = (uint)(short)((short)*(undefined4 *)(iVar6 + 0x18) + sVar2);
    *(undefined4 *)(iVar6 + 0x18) = 0;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else if (0x347 < (int)uVar4) {
      uVar4 = 0x347;
    }
    uVar5 = FUN_0101dc72(param_1,uVar4 & 0xffff,-(uint)(param_2 == 0) >> 0x1f,param_4);
    return uVar5;
  }
  return param_4;
}

