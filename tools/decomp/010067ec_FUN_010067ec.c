
void FUN_010067ec(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  byte bVar9;
  
  uVar3 = DAT_01007240;
  uVar5 = DAT_0100723c;
  uVar2 = DAT_01007238;
  uVar1 = DAT_01007230;
  uVar6 = DAT_01007228;
  if (param_1 == 0) {
    param_3 = param_3 | param_3 << 2;
    bVar9 = (byte)param_3 | 2;
    switch(param_2) {
    case 0:
      iVar4 = FUN_010068de(0,DAT_0100723c,param_3 & 0xff | 2,7);
      if (iVar4 != 0) {
        return;
      }
      uVar8 = 1;
      uVar7 = 0;
      uVar5 = uVar2;
      goto LAB_010068cc;
    case 1:
      uVar6 = 0;
      break;
    case 2:
      iVar4 = FUN_010068de(0,DAT_0100722c,0,1);
joined_r0x0100688a:
      if (iVar4 != 0) {
        return;
      }
      uVar8 = 7;
      uVar7 = (uint)bVar9;
      uVar5 = uVar6;
      goto LAB_010068cc;
    case 3:
      iVar4 = FUN_010068dc(0,DAT_0100722c,0,1,param_4);
joined_r0x0100689c:
      if (iVar4 != 0) {
        return;
      }
      uVar8 = 7;
      uVar7 = (uint)bVar9;
      uVar5 = uVar1;
      goto LAB_010068cc;
    default:
      goto switchD_0100682a_default;
    }
LAB_010068be:
    iVar4 = FUN_010068de(0,DAT_01007350,uVar6,1);
    if (iVar4 == 0) {
      uVar8 = 7;
      uVar7 = (uint)bVar9;
      uVar5 = uVar3;
LAB_010068cc:
      FUN_0100b704(param_4,uVar5,uVar7,uVar8);
      return;
    }
  }
  else {
    if (param_1 != 1) {
      return;
    }
    uVar7 = param_3 << 2 | param_3 << 1;
    bVar9 = (byte)uVar7 | 1;
    switch(param_2) {
    case 0:
      iVar4 = FUN_010068de(0,DAT_01007238,1,1);
      if (iVar4 == 0) {
        uVar8 = 7;
        uVar7 = uVar7 & 0xff | 1;
        goto LAB_010068cc;
      }
      break;
    case 1:
      uVar6 = 1;
      goto LAB_010068be;
    case 2:
      iVar4 = FUN_010068de(0,DAT_0100722c,1,1);
      goto joined_r0x0100688a;
    case 3:
      iVar4 = FUN_010068dc(0,DAT_0100722c,1,1,param_4);
      goto joined_r0x0100689c;
    }
  }
switchD_0100682a_default:
  return;
}

