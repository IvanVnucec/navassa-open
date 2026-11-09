
/* WARNING: Removing unreachable block (ram,0x01008f64) */

void FUN_01008f08(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  char *pcVar12;
  char acStack_50 [36];
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  undefined4 uStack_28;
  
  pcVar12 = acStack_50;
  iVar11 = *(int *)(DAT_010091f8 + param_1 * 4);
  pcVar5 = (char *)(DAT_0100940c + param_1);
  cVar1 = *pcVar5;
  cVar2 = pcVar5[8];
  cVar3 = pcVar5[0x10];
  cVar10 = pcVar5[0x18];
  if (1 < param_2) {
    return;
  }
  uStack_28 = param_4;
  FUN_0101206c(acStack_50 + 0x14,&DAT_01008ff0,0x14);
  cVar10 = cVar10 + cVar3 * '\x10';
  cStack_2c = cVar1 + '@';
  cStack_2b = cVar2;
  cStack_2a = cVar10;
  FUN_0101206c(acStack_50,&DAT_01009004,0x14);
  pcVar4 = DAT_010096f8;
  acStack_50[0x12] = cVar10;
  uVar6 = DAT_01009514;
  if (param_2 == 1) {
    uVar6 = 0x11d1;
    pcVar12 = acStack_50 + 0x14;
  }
  acStack_50[0x10] = cVar1 + '@';
  acStack_50[0x11] = cVar2;
  *(undefined4 *)(param_1 * 0x60 + DAT_010091f0 + 0x24) = uVar6;
  pcVar12[0xd] = (char)uVar6;
  pcVar12[0xe] = (char)((uint)uVar6 >> 8);
  pcVar12[0xf] = (char)((uint)uVar6 >> 0x10);
  iVar9 = 0;
  do {
    if (param_1 == 0) {
      cVar1 = *pcVar12;
      iVar7 = DAT_010099fc;
    }
    else {
      if (param_1 != 1) goto LAB_01008fc2;
      cVar1 = *pcVar12;
      iVar7 = DAT_01009a00;
    }
    uVar8 = 0x1f;
    while( true ) {
      (*pcVar4)(0,iVar7,cVar1,uVar8);
      iVar9 = iVar9 + 1;
      if (0x12 < iVar9) {
        uVar6 = FUN_010098b0(param_1);
        FUN_01009860(param_1,uVar6,0);
        return;
      }
      if (iVar9 == 0) break;
LAB_01008fc2:
      uVar8 = (&DAT_01009040)[iVar9];
      cVar1 = pcVar12[iVar9];
      iVar7 = iVar11 + (uint)(ushort)(&DAT_01009018)[iVar9];
    }
  } while( true );
}

