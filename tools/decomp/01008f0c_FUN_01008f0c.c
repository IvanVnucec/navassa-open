
void FUN_01008f0c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 uVar7;
  int iVar8;
  char cVar9;
  code *pcVar10;
  int iVar11;
  char *pcVar12;
  char acStack_50 [36];
  char local_2c;
  char local_2b;
  char local_2a;
  undefined4 uStack_28;
  
  pcVar12 = acStack_50;
  iVar11 = *(int *)(DAT_010091f8 + param_1 * 4);
  pcVar4 = (char *)(DAT_0100940c + param_1);
  cVar1 = *pcVar4;
  cVar2 = pcVar4[8];
  cVar3 = pcVar4[0x10];
  cVar9 = pcVar4[0x18];
  if (1 < param_2) {
    return;
  }
  uStack_28 = param_4;
  FUN_0101206c(acStack_50 + 0x14,&DAT_01008ff0,0x14);
  cVar9 = cVar9 + cVar3 * '\x10';
  local_2c = cVar1 + '@';
  local_2b = cVar2;
  local_2a = cVar9;
  FUN_0101206c(acStack_50,&DAT_01009004,0x14);
  acStack_50[0x12] = cVar9;
  pcVar10 = DAT_010096f4;
  if (param_3 == 0) {
    pcVar10 = DAT_010096f8;
  }
  uVar5 = DAT_01009514;
  if (param_2 == 1) {
    uVar5 = 0x11d1;
    pcVar12 = acStack_50 + 0x14;
  }
  acStack_50[0x10] = cVar1 + '@';
  acStack_50[0x11] = cVar2;
  *(undefined4 *)(param_1 * 0x60 + DAT_010091f0 + 0x24) = uVar5;
  pcVar12[0xd] = (char)uVar5;
  pcVar12[0xe] = (char)((uint)uVar5 >> 8);
  pcVar12[0xf] = (char)((uint)uVar5 >> 0x10);
  iVar8 = 0;
  do {
    if (param_1 == 0) {
      cVar1 = *pcVar12;
      iVar6 = DAT_010099fc;
    }
    else {
      if (param_1 != 1) goto LAB_01008fc2;
      cVar1 = *pcVar12;
      iVar6 = DAT_01009a00;
    }
    uVar7 = 0x1f;
    while( true ) {
      (*pcVar10)(param_3,iVar6,cVar1,uVar7);
      iVar8 = iVar8 + 1;
      if (0x12 < iVar8) {
        uVar5 = FUN_010098b0(param_1);
        FUN_01009860(param_1,uVar5,param_3);
        return;
      }
      if (iVar8 == 0) break;
LAB_01008fc2:
      uVar7 = (&DAT_01009040)[iVar8];
      cVar1 = pcVar12[iVar8];
      iVar6 = iVar11 + (uint)(ushort)(&DAT_01009018)[iVar8];
    }
  } while( true );
}

