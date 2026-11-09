
undefined8
FUN_01016f7c(int param_1,int param_2,uint param_3,uint param_4,char param_5,char param_6,
            byte param_7,undefined4 param_8,uint param_9,undefined4 param_10,uint param_11,
            int param_12,uint param_13)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  char cVar8;
  byte local_2f;
  undefined1 local_2e;
  undefined1 uStack_2d;
  uint uVar9;
  
  cVar8 = (char)param_2;
  local_2f = (byte)((uint)param_2 >> 8);
  local_2e = (undefined1)((uint)param_2 >> 0x10);
  uStack_2d = (undefined1)((uint)param_2 >> 0x18);
  if (param_1 < 2) {
    if (param_2 == 0) {
      cVar5 = '\x01';
    }
    else {
      cVar5 = '\x02';
    }
    local_2e = (undefined1)param_4;
    local_2f = (char)param_1 * cVar5;
    bVar6 = local_2f;
    param_3 = param_3 + param_12 & 0xff;
    uVar9 = param_4;
    do {
      if (cVar8 == '\0') {
        iVar1 = *(int *)(&DAT_01017524 + param_1 * 4);
      }
      else {
        iVar1 = *(int *)((uint)bVar6 * 4 + 0x101752c);
      }
      iVar1 = iVar1 + param_3;
      uVar2 = param_9;
      uVar3 = param_10;
      if (param_5 == '\x02') {
        iVar7 = iVar1 + 1;
        if (param_6 == '\0') {
          FUN_01016e94(iVar1,param_9,param_8,param_11 & 0xff,cVar8,param_3,uVar9);
          uVar4 = param_11 >> 8;
        }
        else {
          FUN_01016e94(iVar1,param_9,param_10,param_11 >> 8,cVar8,param_3,uVar9);
          uVar4 = param_11 & 0xff;
          uVar3 = param_8;
        }
      }
      else if ((param_13 & 0xff) - 0x24 < 4) {
        FUN_01016e94(iVar1,param_7,param_8,(param_11 << 0x1c) >> 0x1f,cVar8,param_3,uVar9);
        if (cVar8 == '\0') {
          iVar1 = *(int *)(&DAT_01017524 + param_1 * 4);
        }
        else {
          iVar1 = *(int *)((uint)bVar6 * 4 + 0x101752c);
        }
        uVar4 = param_11 & 7;
        iVar7 = iVar1 + (param_4 & 0xff);
      }
      else {
        uVar4 = param_11 & 0xff;
        iVar7 = iVar1;
        uVar2 = (uint)param_7;
        uVar3 = param_8;
      }
      FUN_01016e94(iVar7,uVar2,uVar3,uVar4,cVar8,param_3,uVar9);
      cVar5 = cVar5 + -1;
      bVar6 = bVar6 + 1;
    } while (cVar5 != '\0');
  }
  return CONCAT44(param_3,CONCAT13(uStack_2d,CONCAT12(local_2e,CONCAT11(local_2f,cVar8))));
}

