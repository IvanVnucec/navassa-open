
undefined8 FUN_010416b6(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined2 uVar5;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  *(undefined1 *)((int)param_2 + 0x92) = 3;
  *(undefined1 *)((int)param_2 + 0x91) = 1;
  *(undefined1 *)((int)param_2 + 0x93) = 1;
  uVar1 = (undefined2)DAT_01041ce4;
  if (param_3 == 0) {
    *(undefined2 *)(param_2 + 0x23) = 0x32;
    *(undefined2 *)((int)param_2 + 0x8a) = uVar1;
    *(undefined2 *)((int)param_2 + 0x8e) = 0x15;
  }
  else {
    *(undefined2 *)(param_2 + 0x23) = 0x1e;
    if (*(char *)(param_2 + 0x22) == '\0') {
      uVar5 = 0xff88;
    }
    else {
      uVar5 = 0xffa6;
    }
    *(undefined2 *)((int)param_2 + 0x8a) = uVar5;
    sVar3 = (short)((*(short *)((int)param_2 + 0x8a) * -2) / 0x1e);
    *(short *)((int)param_2 + 0x8e) = sVar3 + 1;
    sVar2 = *(short *)((int)param_2 + 10) + *(short *)((int)param_2 + 0x8a);
    *(short *)((int)param_2 + 0x8a) = sVar2;
    if (sVar2 + 500 < 0 == SCARRY4((int)sVar2,500)) {
      if (500 < (short)(sVar3 * 0x1e + sVar2)) {
        *(short *)((int)param_2 + 0x8a) = sVar3 * -0x1e + 500;
      }
    }
    else {
      *(undefined2 *)((int)param_2 + 0x8a) = uVar1;
    }
  }
  *(undefined1 *)(param_2 + 0x24) = 1;
  local_1c = param_3;
  uStack_18 = param_4;
  iVar4 = FUN_0104193c(param_1,param_2,&local_1c,(int)&local_1c + 2);
  local_20 = param_2;
  if (iVar4 == 0) {
    local_20 = (undefined4 *)*param_2;
    FUN_01041760((int)param_2 + 0x8a,(int)(short)local_1c,(int)param_2 + 0x12,param_2 + 6);
  }
  return CONCAT44(local_20,iVar4);
}

