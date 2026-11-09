
void FUN_0102eb0a(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 uVar1;
  int extraout_r1;
  int iVar2;
  undefined2 uVar3;
  uint in_fpscr;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = FUN_0102eccc(param_3);
  iVar2 = param_3 + extraout_r1 * param_1 + param_2 * 0x16;
  VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  if (param_4 == 1) {
    FUN_0102ec0e();
    uVar4 = FUN_0102ec02();
    uVar5 = FUN_0102ec26(*(undefined2 *)(iVar2 + 6));
    uVar5 = FUN_0101f250((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar4);
    FUN_0102035c(0,DAT_0102f240,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
    FUN_0101f3f4();
    FUN_01012c10();
    FUN_0102ebf6();
    FUN_0102ec1e();
    uVar1 = FUN_0102ec16();
    FUN_0102ee4a(param_2,param_1,uVar1);
    uVar3 = 0x3ff;
  }
  else {
    FUN_01036d04(0x40000000);
    uVar5 = FUN_0102ec2c();
    FUN_0102ec0e();
    uVar4 = FUN_0102ec02();
    uVar6 = FUN_0102ec26(*(undefined2 *)(iVar2 + 6));
    uVar6 = FUN_0101f250((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),uVar4);
    FUN_0102035c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),(int)uVar6,
                 (int)((ulonglong)uVar6 >> 0x20));
    FUN_0101f3f4();
    FUN_01012c10();
    FUN_0102ebf6();
    FUN_0102ec1e();
    uVar1 = FUN_0102ec16();
    FUN_0102ee4a(param_2,param_1,uVar1);
    FUN_0102ee6c(param_2,param_1,uVar1);
    uVar3 = uVar1;
  }
  *(undefined2 *)(iVar2 + 8) = uVar1;
  *(undefined2 *)(iVar2 + 10) = uVar3;
  return;
}

