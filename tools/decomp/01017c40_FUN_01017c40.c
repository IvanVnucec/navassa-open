
void FUN_01017c40(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_r6;
  uint uVar9;
  
  uVar7 = *(uint *)(DAT_01018060 + unaff_r6 * 4);
  uVar5 = param_4 << 5;
  uVar1 = param_4 << 3;
  uVar2 = param_4 << 2;
  uVar4 = param_4 << 4;
  uVar6 = 0xc >> (unaff_r6 & 0xff);
  if (param_2 != 1) {
    if (param_2 != 2) {
      return;
    }
    uVar8 = uVar4 ^ 0x10;
    if ((int)(uVar6 << 0x1f) < 0) {
      uVar9 = uVar7 + 0x1c;
      if (param_3 == 0) {
        param_4 = uVar4 & 0xff;
        uVar3 = 0x10;
      }
      else if (param_3 == 1) {
        param_4 = uVar2 & 0xff;
        uVar3 = 4;
      }
      else if (param_3 == 2) {
        param_4 = uVar1 & 0xff;
        uVar3 = 8;
      }
      else {
        if (param_3 != 8) {
          return;
        }
        param_4 = uVar8 & 0xff;
        uVar3 = 0x10;
        uVar9 = uVar7 + 0x28;
      }
      goto LAB_010178be;
    }
    uVar9 = uVar7 + 0xe;
    switch(param_3) {
    case 0:
      param_4 = uVar4 & 0xff;
      uVar3 = 0x10;
      break;
    case 1:
      param_4 = uVar2 & 0xff;
      uVar3 = 4;
      break;
    case 2:
      goto switchD_010177ba_caseD_1;
    case 3:
      uVar3 = 1;
      uVar9 = uVar7 + 0xf;
      break;
    case 4:
      param_4 = uVar5 & 0xff;
      uVar3 = 0x20;
      uVar9 = uVar7 + 0x13;
      break;
    default:
      goto switchD_010177ba_caseD_3;
    case 8:
      goto LAB_010178ba;
    }
    goto LAB_010178be;
  }
  if ((int)(uVar6 << 0x1f) < 0) {
    uVar9 = uVar7 + 0x12;
    uVar8 = uVar7 + 0x1b;
    switch(param_3) {
    case 0:
      param_4 = uVar5 & 0xff;
      uVar3 = 0x20;
      break;
    case 1:
switchD_010177ba_caseD_1:
      param_4 = uVar1 & 0xff;
      uVar3 = 8;
      break;
    case 2:
      param_4 = uVar4 & 0xff;
      uVar3 = 0x10;
      break;
    case 3:
    case 4:
      goto switchD_010177ba_caseD_3;
    case 5:
      param_4 = uVar1 & 0xff;
      uVar3 = 8;
      uVar9 = uVar8;
      break;
    case 6:
      param_4 = uVar2 & 0xff;
      uVar3 = 4;
      uVar9 = uVar8;
      break;
    case 7:
      uVar8 = uVar4;
LAB_010178ba:
      param_4 = uVar8 & 0xff;
      uVar3 = 0x10;
      uVar9 = uVar7 + 0x18;
      break;
    case 8:
      uVar3 = 1;
      uVar9 = uVar8;
      break;
    default:
      goto switchD_010177ba_default;
    }
  }
  else {
    uVar6 = uVar7 + 0xd;
    uVar8 = uVar7;
switchD_010177ba_default:
    uVar9 = uVar8;
    switch(param_3) {
    case 0:
      param_4 = uVar5 & 0xff;
      uVar3 = 0x20;
      break;
    case 1:
      param_4 = uVar1 & 0xff;
      uVar3 = 8;
      break;
    case 2:
      param_4 = uVar4 & 0xff;
      uVar3 = 0x10;
      break;
    default:
switchD_010177ba_caseD_3:
      return;
    case 6:
      param_4 = uVar2 & 0xff;
      uVar3 = 4;
      uVar9 = uVar6;
      break;
    case 7:
      param_4 = uVar4 & 0xff;
      uVar3 = 0x10;
      uVar9 = uVar9 + 4;
      break;
    case 8:
      uVar3 = 1;
      uVar9 = uVar6;
    }
  }
LAB_010178be:
  pin_update(uVar9,uVar3,param_4);
  return;
}

