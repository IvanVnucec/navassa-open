
uint FUN_01011244(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,undefined4 param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_30 = 0;
  iStack_2c = 0;
  if (((param_5 != 0) && (param_5 + 0x18 < 0x31)) &&
     (uStack_28 = param_4, iVar2 = FUN_0100929c(&local_30), iVar4 = iStack_2c, iVar2 == 0)) {
    uVar6 = local_30;
    uVar3 = FUN_0101175c(param_3,param_4);
    lVar1 = (ulonglong)(uVar3 / 0x30) * (ulonglong)param_5;
    uVar5 = (uint)lVar1;
    iVar2 = FUN_01009ae4(param_3,param_4,param_6,0);
    if (iVar2 == 0) {
      iVar4 = FUN_010096fc(uVar6 + uVar5,
                           (uVar3 / 0x30) * ((int)param_5 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20)
                           + iVar4 + (uint)CARRY4(uVar6,uVar5),param_1,param_3,param_4);
      return -(uint)(iVar4 == 0) >> 0x1f;
    }
  }
  return 0;
}

