
undefined8 FUN_010063e8(uint param_1,uint param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;
  uint local_30;
  uint local_2c;
  int local_28;
  
  bVar1 = *(byte *)(DAT_01006678 + param_1);
  local_30 = param_2;
  if ((int)((0xfU >> (param_1 & 0xff)) << 0x1f) < 0) {
    local_2c = CONCAT31((int3)((uint)param_3 >> 8),(char)param_2);
    iVar6 = *(int *)(DAT_0100667c + param_1 * 4);
    local_28 = param_4;
    local_28 = FUN_010063ac(param_2 & 0xff,param_3,&local_30);
    bVar9 = local_28 == 0;
    do {
      if (!bVar9) goto LAB_01006604;
      pcVar7 = DAT_01006684;
      pcVar3 = DAT_01006680;
      if (param_4 != 0) {
        pcVar7 = DAT_0100668c;
        pcVar3 = DAT_01006688;
      }
      bVar9 = (local_2c & 0xff) == 3;
      iVar8 = iVar6 + 0x1e;
      switch(local_2c & 0xff) {
      case 0:
        goto switchD_01006450_caseD_0;
      case 1:
        (*pcVar7)(param_4,iVar6 + 0x55);
        FUN_01006620();
        (*pcVar7)(param_4,iVar6 + 0x56);
        FUN_01006618();
        (*pcVar7)(param_4,iVar6 + 0x57);
        (*pcVar7)(param_4,iVar6 + 0x58,local_30 & 0xff);
        iVar8 = iVar6 + 0x5a;
        FUN_01006608();
        uVar5 = 0x20;
        uVar4 = 0x20;
        goto LAB_010065fe;
      case 2:
        (*pcVar7)(param_4,iVar6 + 0x1f);
        FUN_01006620();
        (*pcVar7)(param_4,iVar6 + 0x20);
        FUN_01006618();
        (*pcVar7)(param_4,iVar6 + 0x21);
        (*pcVar7)(param_4,iVar6 + 0x22,local_30 & 0xff);
        uVar10 = FUN_01006610();
        FUN_01006612((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),1,1);
        (*pcVar7)(param_4,iVar6 + 0x23,*(ushort *)(param_3 + 8) >> 8);
        (*pcVar7)(param_4,iVar6 + 0x24,(char)*(undefined2 *)(param_3 + 8));
        (*pcVar3)(param_4,iVar8,((uint)*(byte *)(param_3 + 10) << 0x1a) >> 0x18,4);
        iVar8 = iVar6 + 0xd8;
        if (*(char *)(DAT_01006690 + 0x780) != '\0') {
          iVar6 = DAT_01006690 + (short)(ushort)bVar1 * 0xbc;
          cVar2 = *(char *)(iVar6 + 0x1ac);
          if (cVar2 != '\0') {
            FUN_0100660a(cVar2,iVar6,0x10,0x10);
            if (*(char *)(DAT_01006694 + (uint)bVar1 * 0x80 + 0x2d7) == '\x02') {
              uVar5 = 0xf;
              uVar4 = 1;
            }
            else {
              iVar6 = DAT_01006698 + (uint)bVar1 * 0x54;
              uVar5 = 0xf;
              uVar4 = (*(uint *)(iVar6 + 0xe8) / *(uint *)(iVar6 + 0xec)) * 2 - 1 & 0xff;
            }
            goto LAB_010065fe;
          }
        }
        uVar5 = 0x10;
        uVar4 = ((uint)*(byte *)(param_3 + 0xb) << 0x1c) >> 0x18;
        goto LAB_010065fe;
      case 3:
        (*pcVar7)(param_4,iVar6 + 0x25,local_30 >> 0x18);
        FUN_01006620();
        (*pcVar7)(param_4,iVar6 + 0x26);
        FUN_01006618();
        (*pcVar7)(param_4,iVar6 + 0x27);
        (*pcVar7)(param_4,iVar6 + 0x28,local_30 & 0xff);
        uVar10 = FUN_01006610();
        FUN_01006612((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),2,2);
        (*pcVar7)(param_4,iVar6 + 0x29,*(ushort *)(param_3 + 8) >> 8);
        (*pcVar7)(param_4,iVar6 + 0x2a,(char)*(undefined2 *)(param_3 + 8));
        uVar5 = 8;
        uVar4 = ((uint)*(byte *)(param_3 + 10) << 0x1b) >> 0x18;
        goto LAB_010065fe;
      }
    } while( true );
  }
  local_28 = 0xc801;
LAB_01006604:
  return CONCAT44(local_30,local_28);
switchD_01006450_caseD_0:
  (*pcVar7)(param_4,iVar6 + 100);
  FUN_01006620();
  (*pcVar7)(param_4,iVar6 + 0x65);
  FUN_01006618();
  (*pcVar7)(param_4,iVar6 + 0x66);
  (*pcVar7)(param_4,iVar6 + 0x67,local_30 & 0xff);
  (*pcVar7)(param_4,iVar6 + 0x68,*(ushort *)(param_3 + 8) >> 8);
  (*pcVar7)(param_4,iVar6 + 0x69,(char)*(undefined2 *)(param_3 + 8));
  iVar8 = iVar6 + 0x6c;
  FUN_01006608();
  uVar5 = 1;
  uVar4 = 1;
LAB_010065fe:
  (*pcVar3)(param_4,iVar8,uVar4,uVar5);
  goto LAB_01006604;
}

