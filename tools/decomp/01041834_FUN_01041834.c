
undefined8
FUN_01041834(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 local_20;
  
  if (*(char *)(param_2 + 0x22) == '\0') {
    puVar2 = (undefined4 *)0xffffffc4;
  }
  else {
    puVar2 = (undefined4 *)0xffffffdc;
  }
  iVar3 = (int)puVar2 << 1;
  sVar1 = (short)(iVar3 / -0xc) + 1;
  iVar4 = (int)puVar2 + (int)*(short *)(param_2 + 4);
  for (iVar5 = 0; iVar5 < sVar1; iVar5 = iVar5 + 1) {
    FUN_01041932(puVar2,iVar3,(int)(short)iVar4);
    iVar3 = FUN_010416b6(param_1,param_2,1);
    local_20 = param_4;
    if (iVar3 != 0) goto LAB_01041928;
    puVar2 = param_2 + iVar5 * 2;
    *(short *)(puVar2 + 7) = (short)iVar4;
    iVar4 = iVar4 + 0xc;
    *(undefined2 *)((int)puVar2 + 0x1e) = *(undefined2 *)((int)param_2 + 0x12);
    iVar3 = param_2[6];
    puVar2[8] = iVar3;
  }
  *(undefined1 *)((int)param_2 + 0x92) = 3;
  *(undefined1 *)((int)param_2 + 0x91) = 1;
  *(undefined1 *)((int)param_2 + 0x93) = 1;
  *(undefined1 *)(param_2 + 0x24) = 2;
  fVar6 = DAT_010419d8;
  iVar4 = 0;
  *(short *)((int)param_2 + 0x8e) = sVar1;
  iVar3 = DAT_01041ce8;
  for (iVar5 = 0; iVar5 < sVar1; iVar5 = iVar5 + 1) {
    *(undefined2 *)(iVar3 + iVar5 * 2) = *(undefined2 *)(param_2 + iVar5 * 2 + 7);
    fVar7 = (float)param_2[iVar5 * 2 + 8];
    *(float *)(iVar3 + 0x2c + iVar5 * 4) = fVar7;
    if ((int)((uint)(fVar7 < fVar6) << 0x1f) < 0) {
      iVar4 = iVar5;
      fVar6 = fVar7;
    }
  }
  local_20 = *param_2;
  FUN_01041760((int)param_2 + 0x8a,(int)(short)iVar4,param_2 + 4,param_2 + 5);
  *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_2 + 4);
  FUN_01041932();
  iVar3 = FUN_010416b6(param_1,param_2,1);
  if (iVar3 == 0) {
    *(undefined2 *)((int)param_2 + 10) = *(undefined2 *)((int)param_2 + 0x12);
    FUN_01041934(0,3);
  }
LAB_01041928:
  return CONCAT44(local_20,iVar3);
}

