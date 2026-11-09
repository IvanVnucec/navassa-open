
undefined8 FUN_01041a96(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_r1;
  undefined2 uVar4;
  undefined4 extraout_r1_00;
  int iVar5;
  bool bVar6;
  float fVar7;
  int *local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  *(undefined1 *)(param_2 + 0x22) = 0;
  *(undefined2 *)(param_2 + 2) = 0;
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_01041d24(param_1,2,0);
  iVar2 = FUN_010416b6(param_1,param_2,0);
  bVar6 = iVar2 == 0;
  local_20 = param_2;
  if (bVar6) {
    *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)((int)param_2 + 0x12);
    FUN_01041d24(param_1,3);
    *(undefined1 *)((int)param_2 + 0x91) = 0;
    *(undefined1 *)((int)param_2 + 0x92) = 2;
    *(undefined1 *)((int)param_2 + 0x93) = 1;
    *(undefined2 *)(param_2 + 0x23) = 0x1e;
    *(undefined2 *)((int)param_2 + 0x8a) = 0xff2e;
    *(undefined2 *)((int)param_2 + 0x8e) = 0xf;
    *(undefined1 *)(param_2 + 0x24) = 1;
    iVar2 = FUN_0104193c(param_1,param_2,&local_1c,(int)&local_1c + 2);
    if (iVar2 == 0) {
      local_20 = (int *)*param_2;
      FUN_01041760((int)param_2 + 0x8a,(int)(short)local_1c,param_2 + 4,param_2 + 5);
    }
    bVar6 = iVar2 == 0;
    if (bVar6) {
      sVar1 = (short)param_2[4];
      iVar2 = (int)sVar1;
      if (iVar2 < 0x2e) {
        if (iVar2 + 0x2d < 0 != SCARRY4(iVar2,0x2d)) {
          sVar1 = -0x2d;
        }
      }
      else {
        sVar1 = 0x2d;
      }
      *(short *)(param_2 + 4) = sVar1;
      iVar2 = FUN_01041834(param_1,param_2);
      bVar6 = iVar2 == 0;
    }
  }
  if (bVar6) {
    *(int *)(*param_2 + 0x14) = param_2[2];
    if (*(char *)(DAT_01041cec + param_1 * 0x10) == '\0') {
      *(undefined1 *)(*param_2 + 0x3c) = 0;
      *(undefined2 *)(param_2 + 0x1d) = 1;
      goto LAB_01041c26;
    }
    FUN_01041c4c(1);
    FUN_01041c54();
    iVar2 = FUN_01041834(param_1,param_2);
    if (iVar2 == 0) {
      *(int *)(*param_2 + 0x18) = param_2[2];
      FUN_010419dc(param_1,param_2,*param_2 + 0x18);
      *(int *)(*param_2 + 0x30) = param_2[3];
      FUN_01041c62();
      iVar3 = *param_2;
      fVar7 = (float)param_2[3];
      *(float *)(iVar3 + 0x2c) = fVar7;
      iVar2 = (uint)(fVar7 < *(float *)(iVar3 + 0x30)) << 0x1f;
      uVar4 = extraout_r1;
      if (iVar2 < 0) {
        uVar4 = *(undefined2 *)(iVar3 + 0x14);
      }
      if (-1 < iVar2) {
        uVar4 = *(undefined2 *)(iVar3 + 0x18);
      }
      *(undefined2 *)(iVar3 + 0x1c) = uVar4;
      iVar2 = ((int)*(short *)(iVar3 + 0x1a) + (int)*(short *)(iVar3 + 0x16)) / 2;
      *(short *)(iVar3 + 0x1e) = (short)iVar2;
      FUN_01041c66(iVar3,iVar2,iVar3 + 0x1c);
      *(int *)(*param_2 + 0x34) = param_2[3];
      iVar2 = FUN_01041c4c(0);
      FUN_01041c54();
      if (iVar2 == 0) {
        FUN_01041c66(*param_2,extraout_r1_00,*param_2 + 0x18);
        *(int *)(*param_2 + 0x24) = param_2[3];
        FUN_01041c62();
        iVar3 = *param_2;
        iVar5 = param_2[3];
        *(int *)(iVar3 + 0x20) = iVar5;
        FUN_01041c66(iVar3,iVar5,iVar3 + 0x1c);
        *(int *)(*param_2 + 0x28) = param_2[3];
        FUN_01041a06(param_1,param_2);
        *(undefined2 *)(param_2 + 0x1d) = 1;
        goto LAB_01041c26;
      }
    }
  }
  if (iVar2 != 0) {
    *(undefined2 *)(param_2 + 2) = 0;
    *(undefined2 *)((int)param_2 + 10) = 0;
  }
LAB_01041c26:
  FUN_01041d04(param_1,param_2 + 2);
  *(int *)(*param_2 + 0x38) = param_2[2];
  *(int *)(param_2[1] + 0x244) = param_2[2];
  return CONCAT44(local_20,iVar2);
}

