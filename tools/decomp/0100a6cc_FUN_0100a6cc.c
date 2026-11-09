
void FUN_0100a6cc(int param_1,char param_2,byte param_3,int param_4,short param_5)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_28;
  
  iVar4 = DAT_0100a794;
  puVar3 = DAT_0100a78c;
  uVar5 = FUN_0100a4f4();
  *puVar3 = uVar5;
  FUN_0100a506(param_1,0);
  local_28._2_2_ = (undefined2)((uint)param_4 >> 0x10);
  local_28 = CONCAT31(CONCAT21(local_28._2_2_,param_2),param_3);
  for (iVar6 = 0; iVar6 < param_5; iVar6 = iVar6 + 1) {
    uVar1 = *(undefined2 *)(param_4 + iVar6 * 4 + 2);
    uVar2 = *(undefined2 *)(param_4 + iVar6 * 4);
    iVar7 = *(int *)(iVar4 + param_1 * 4) + (iVar6 + (uint)param_3 & 0xff) * 2;
    if (param_2 == '\0') {
      FUN_0101af6c(iVar7 + 0x1580,0x3ff,uVar2);
      iVar7 = iVar7 + 0x1600;
    }
    else {
      FUN_0101af6c(iVar7 + 0x1180,0x3ff,uVar2);
      iVar7 = iVar7 + 0x1200;
    }
    FUN_0101af6c(iVar7,0x3ff,uVar1);
  }
  FUN_0100a506(param_1,*puVar3,local_28);
  return;
}

