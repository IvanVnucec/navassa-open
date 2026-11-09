
undefined4 FUN_0102ea2c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int extraout_r1;
  int iVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  uint in_fpscr;
  float fVar6;
  undefined8 uVar7;
  
  fVar6 = (float)VectorUnsignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  iVar3 = param_3;
  FUN_0102eccc(0x41200000,fVar6 / 20.0);
  puVar4 = (undefined2 *)(iVar3 + extraout_r1 * param_1 + param_2 * 0x16);
  FUN_01011240();
  uVar7 = FUN_0102ec2c();
  uVar7 = FUN_0101f250((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,DAT_0102f22c);
  FUN_0101f250((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0x63000000,DAT_0102f230);
  FUN_0101f3f4();
  FUN_01012c10();
  FUN_0102ec1e();
  uVar1 = FUN_0102ec16();
  uVar7 = FUN_0102ec0e();
  uVar7 = FUN_0101f250((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0102f234,DAT_0102f238);
  FUN_0102035c(0,DAT_0102f23c,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  FUN_0101f3f4();
  FUN_01012c10();
  FUN_0102ec1e();
  uVar2 = FUN_0102ec16();
  if (param_3 == 1) {
    FUN_0102edd0(param_2,param_1,uVar2);
    uVar5 = 0x146;
  }
  else {
    FUN_0102edd0(param_2,param_1,uVar2);
    FUN_0102edb0(param_2,param_1,uVar2);
    FUN_0102ed8c(param_2,param_1,uVar2);
    uVar5 = uVar2;
  }
  *puVar4 = uVar5;
  puVar4[1] = uVar5;
  puVar4[2] = uVar2;
  puVar4[3] = uVar1;
  return param_4;
}

