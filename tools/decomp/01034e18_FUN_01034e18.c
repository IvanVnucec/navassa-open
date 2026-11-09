
void FUN_01034e18(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  int unaff_r4;
  undefined8 uVar2;
  
  uVar1 = FUN_0103513c();
  uVar1 = FUN_01035036(uVar1,0x3f,0x1f);
  uVar2 = FUN_010351a6(uVar1,0x7f,0x40);
  FUN_01034f4e((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x1f);
  FUN_01034f3a();
  FUN_01034f44();
  uVar2 = FUN_01034f56();
  uVar1 = FUN_01034f46((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0);
  uVar1 = FUN_01034f48(uVar1,1,0);
  uVar1 = FUN_01035036(uVar1,0x3f,0x21);
  uVar2 = FUN_010351a6(uVar1,0x7f,0x40);
  FUN_01034f4e((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x21);
  FUN_01034f3a();
  FUN_01034f44();
  uVar2 = FUN_01034f56();
  uVar1 = FUN_01034f46((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0);
  uVar1 = FUN_01034f48(uVar1,1,0);
  uVar1 = FUN_01035036(uVar1,0x3f,0);
  uVar2 = FUN_010351a6(uVar1,0x7f,8);
  uVar2 = FUN_01034f4e((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0);
  FUN_01034f3c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),8);
  FUN_01034f44();
  uVar2 = FUN_01034f56();
  uVar1 = FUN_01034f46((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0);
  uVar1 = FUN_01034f48(uVar1,1,0);
  uVar1 = FUN_01035036(uVar1,0x3f,1);
  uVar2 = FUN_010351a6(uVar1,0x7f,8);
  uVar2 = FUN_01034f4e((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),1);
  FUN_01034f3c((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),8);
  FUN_01034f44();
  uVar2 = FUN_01034f56();
  uVar1 = FUN_01034f46((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0);
  FUN_01034f48(uVar1,1,0);
  uVar1 = FUN_01035032();
  FUN_01035036(uVar1,0x40,0);
  uVar1 = FUN_01035032();
  FUN_01035036(uVar1,0x40,0x40);
  FUN_0103503c();
  FUN_0103503e();
  FUN_0103503e();
  FUN_0103503e();
  pin_update(unaff_r4 + 0x1d,0x80,0x80,in_r3);
  return;
}

