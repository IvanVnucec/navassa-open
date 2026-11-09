
undefined4 FUN_01033f40(int param_1,undefined1 *param_2,undefined1 *param_3,int param_4)

{
  undefined2 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  *param_2 = 1;
  iVar5 = (short)param_1 * 0x1ac + DAT_010343cc;
  uVar1 = *(undefined2 *)(iVar5 + (uint)*DAT_01034720 * 2 + 10);
  param_3[6] = 1;
  switch(uVar1) {
  case 1:
    uVar2 = 4;
    goto LAB_01033fc6;
  case 2:
    uVar2 = 6;
    break;
  case 3:
    uVar2 = 3;
LAB_01033fc6:
    param_2[1] = uVar2;
    goto LAB_01033f80;
  case 4:
    uVar2 = 5;
    break;
  case 5:
    param_2[1] = 2;
    param_3[6] = 0;
    goto LAB_01033f80;
  case 6:
    param_2[1] = 1;
    goto LAB_01033f80;
  case 7:
    uVar2 = 0;
    break;
  default:
    return 0x4403;
  }
  param_2[1] = uVar2;
LAB_01033f80:
  param_2[3] = 0;
  iVar4 = DAT_01034724;
  param_2[2] = 1;
  iVar4 = param_1 * 0xbc + iVar4;
  uVar6 = 0;
  bVar7 = *(char *)(iVar4 + 0x90) == '\x02';
  if (bVar7) {
    uVar6 = *(undefined4 *)(iVar4 + 0xa4);
  }
  *(undefined4 *)(iVar5 + 0x1a8) = uVar6;
  *param_3 = 1;
  param_3[8] = 1;
  param_3[9] = bVar7;
  param_3[0x39] = 0;
  if (!bVar7) {
    uVar6 = 0;
  }
  *(undefined4 *)(param_3 + 0x14) = DAT_01034728;
  param_3[0x1e] = bVar7;
  param_3[0x20] = bVar7;
  param_3[0x1f] = 0;
  *(undefined4 *)(param_3 + 0x10) = uVar6;
  *(undefined4 *)(param_3 + 0x18) = 0x1000;
  *(undefined2 *)(param_3 + 0x1c) = 5;
  cVar3 = param_2[1];
  if (cVar3 == '\x06') {
    cVar3 = '\x03';
  }
  else if (cVar3 == '\x05') {
    cVar3 = '\x02';
  }
  param_3[3] = cVar3;
  param_3[0x40] = 0;
  bVar7 = param_4 != 0;
  if (bVar7) {
    param_2 = (undefined1 *)0x0;
  }
  uVar2 = SUB41(param_2,0);
  if (!bVar7) {
    uVar2 = 1;
  }
  param_3[0x3a] = bVar7;
  param_3[0x38] = bVar7;
  param_3[0x3b] = uVar2;
  param_3[0x3c] = 1;
  return 0;
}

