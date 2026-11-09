
int FUN_0101bf9c(char *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  iVar2 = *(int *)(DAT_0101cb14 + param_2 * 4);
  iVar4 = *(int *)(DAT_0101cb18 + param_2 * 4);
  pcVar3 = DAT_0101cb1c;
  if (param_4 == 0) {
    pcVar3 = DAT_0101cb20;
  }
  if (*param_1 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = -(uint)(param_1[1] == '\0') >> 0x1f;
  }
  (*pcVar3)(param_4,iVar2 + 0x68,uVar1,1);
  (*pcVar3)(param_4,iVar2 + 0x1d,((uint)(byte)param_1[4] << 0x1e) >> 0x18,0x40);
  (*pcVar3)(param_4,iVar4 + 0x1a8,param_1[2] + param_1[3] * '\x02',3);
  (*pcVar3)(param_4,iVar4 + 0x185,((uint)(byte)param_1[5] << 0x1d) >> 0x18,0x20);
  if (param_4 != 0) {
switchD_0101c01a_default:
    return param_4;
  }
  switch(param_3) {
  case 0:
    FUN_0101cd60(param_1[1],2);
    FUN_0101cd58();
    FUN_0101c0b6();
    iVar2 = iVar2 + 0xf9;
    break;
  case 1:
    FUN_0101cd60(param_1[1],2);
    FUN_0101cd58();
    FUN_0101c0b6();
    iVar2 = iVar2 + 0x18d;
    break;
  case 2:
    FUN_0101cd60(param_1[1],2);
    FUN_0101cd58();
    FUN_0101c0b6();
    iVar2 = iVar2 + 0x1a7;
    break;
  case 3:
    FUN_0101cd60(param_1[1],2);
    FUN_0101cd58();
    FUN_0101c0b6();
    iVar2 = iVar2 + 0x1c1;
    break;
  default:
    goto switchD_0101c01a_default;
  }
  iVar2 = pin_update(iVar2);
  return iVar2;
}

