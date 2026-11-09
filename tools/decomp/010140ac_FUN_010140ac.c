
undefined8 FUN_010140ac(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  cVar1 = FUN_01014370();
  uVar6 = -(uint)(param_2 == 0) >> 0x1f;
  cVar2 = FUN_0101438c(param_1,param_2);
  uVar4 = uVar6 << 3;
  cVar1 = cVar1 + cVar2 * '\b';
  switch(param_1) {
  case 1:
    uVar5 = 8;
    iVar3 = DAT_010142d4;
    break;
  default:
    uVar7 = 0xce00;
    goto LAB_01014182;
  case 3:
  case 6:
    iVar3 = DAT_01014548;
    if (param_1 != 3) {
      iVar3 = DAT_0101454c;
    }
    FUN_0100b704(param_3,iVar3 + 0x1e8,cVar1,0x1f);
    iVar3 = iVar3 + 0x1e9;
    uVar5 = 3;
    uVar4 = uVar6;
    break;
  case 4:
  case 7:
    iVar3 = DAT_01014550;
    if (param_1 != 4) {
      iVar3 = DAT_01014554;
    }
    FUN_0100b704(param_3,iVar3 + 0x1f1,cVar1,0x1f);
    uVar5 = 3;
    iVar3 = iVar3 + 0x1f2;
    uVar4 = uVar6;
    break;
  case 9:
    uVar5 = 0x20;
    iVar3 = DAT_010143a4;
    uVar4 = uVar6 << 5;
    break;
  case 0xb:
    uVar5 = 0x20;
    iVar3 = DAT_010143ac;
    uVar4 = uVar6 << 5;
    break;
  case 0xc:
    uVar5 = 8;
    iVar3 = DAT_010143b0;
    break;
  case 0xd:
    uVar5 = 3;
    iVar3 = DAT_010143b4;
    uVar4 = uVar6;
    break;
  case 0xe:
    uVar5 = 8;
    iVar3 = DAT_010143b8;
    break;
  case 0xf:
    uVar5 = 3;
    iVar3 = DAT_010143bc;
    uVar4 = uVar6;
    break;
  case 0x10:
    uVar5 = 8;
    iVar3 = DAT_010143c0;
    break;
  case 0x11:
    uVar5 = 1;
    iVar3 = DAT_010143c4;
    uVar4 = uVar6;
  }
  FUN_0100b704(param_3,iVar3,uVar4,uVar5);
LAB_01014182:
  return CONCAT44(param_4,uVar7);
}

