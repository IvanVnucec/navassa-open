
int FUN_0103bd1c(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_40 [2];
  
  if ((int)(param_2 << 1) >> 0x15 == -1) {
    if ((((int)(param_2 << 1) >> 0x15 != -1) || ((param_2 & 0xfffff) == 0)) && ((int)param_2 < 0)) {
      return -1;
    }
  }
  else {
    uVar3 = param_2 & 0x7fffffff;
    if (uVar3 < 0x100000) {
      local_40[0] = 0;
      if (uVar3 != 0 || param_1 != 0) {
        uVar9 = FUN_0103df1c(param_1,param_2,local_40);
        param_2 = (uint)((ulonglong)uVar9 >> 0x20);
        param_1 = (int)uVar9;
      }
    }
    else {
      local_40[0] = DAT_0103bfb4 + (uVar3 >> 0x14);
      param_2 = DAT_0103bfb8 | param_2 & DAT_0103bfbc;
    }
    uVar9 = CONCAT44(param_2,param_1);
    if ((param_2 & 0x7fffffff) == 0 && param_1 == 0) {
      return 0;
    }
    cVar7 = (param_2 >> 0x1e & 1) != 0;
    if ((int)param_2 < 0) {
      return -1;
    }
    FUN_01012c88(param_1,param_2,DAT_0103bfc4,DAT_0103bfc8);
    if (cVar7 == '\0') {
      uVar9 = FUN_0101f250(0,0x40000000,param_1,param_2);
      local_40[0] = local_40[0] + -1;
    }
    uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar10 = FUN_010200e0(0,DAT_0103bfcc,(int)uVar9,uVar8);
    uVar4 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar1 = (undefined4)uVar10;
    uVar9 = FUN_010200e0(0,DAT_0103bfd0,(int)uVar9,uVar8);
    uVar9 = FUN_0102035c(uVar1,uVar4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar8 = (undefined4)uVar9;
    uVar9 = FUN_0101f250(uVar8,uVar5,uVar8,uVar5);
    uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar2 = (undefined4)uVar9;
    uVar9 = FUN_0101f250(DAT_0103bfd4,DAT_0103bfd8,uVar2,uVar6);
    uVar9 = FUN_010200e0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0103bfdc,DAT_0103bfe0);
    uVar9 = FUN_0101f250((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar6);
    uVar9 = FUN_010200e0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0103bfe4,DAT_0103bfe8);
    uVar9 = FUN_0101f250((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar6);
    uVar9 = FUN_010200e0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0103bfec,DAT_0103bff0);
    uVar9 = FUN_0101f250((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar6);
    uVar9 = FUN_010200e0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0103bff4,DAT_0103bff8);
    uVar9 = FUN_0101f250((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar6);
    uVar9 = FUN_010200e0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0103bffc,DAT_0103c000);
    uVar9 = FUN_0101f250((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar6);
    uVar9 = FUN_010200e0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0103c004,DAT_0103c008);
    uVar9 = FUN_0101f250((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar2,uVar6);
    uVar9 = FUN_01020278(uVar1,uVar4,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    uVar9 = FUN_0101f250((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar8,uVar5);
    uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar8 = (undefined4)uVar9;
    uVar9 = FUN_010200bc(local_40[0]);
    uVar6 = (undefined4)((ulonglong)uVar9 >> 0x20);
    uVar2 = (undefined4)uVar9;
    if (param_3 == 0) {
      uVar9 = FUN_0101f250(DAT_0103c00c,DAT_0103c010,uVar2,uVar6);
      uVar9 = FUN_01020278((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar8,uVar5);
      uVar9 = FUN_010200e0((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar1,uVar4);
      uVar10 = FUN_0101f250(0xc0000000,DAT_0103c014,uVar2,uVar6);
    }
    else if (param_3 < 1) {
      uVar10 = FUN_0101f250(0x60000000,DAT_0103c034,uVar1,uVar4);
      uVar11 = FUN_0101f250(DAT_0103c038,DAT_0103c03c,uVar1,uVar4);
      uVar12 = FUN_0101f250(DAT_0103c040,DAT_0103c034,uVar8,uVar5);
      uVar11 = FUN_01020278((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                            (int)((ulonglong)uVar12 >> 0x20));
      uVar10 = FUN_010200e0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                            (int)((ulonglong)uVar10 >> 0x20));
    }
    else {
      uVar9 = FUN_0101f250(0,DAT_0103c018,uVar1,uVar4);
      uVar10 = FUN_0101f250(DAT_0103c01c,DAT_0103c020,uVar1,uVar4);
      uVar11 = FUN_0101f250(DAT_0103c024,DAT_0103c028,uVar2,uVar6);
      uVar12 = FUN_0101f250(DAT_0103c02c,DAT_0103c018,uVar8,uVar5);
      uVar11 = FUN_01020278((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                            (int)((ulonglong)uVar12 >> 0x20));
      uVar10 = FUN_010200e0((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar10,
                            (int)((ulonglong)uVar10 >> 0x20));
      uVar9 = FUN_010200e0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
      uVar10 = FUN_0101f250(0,DAT_0103c030,uVar2,uVar6);
    }
    param_1 = FUN_010200e0((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar9,
                           (int)((ulonglong)uVar9 >> 0x20));
  }
  return param_1;
}

