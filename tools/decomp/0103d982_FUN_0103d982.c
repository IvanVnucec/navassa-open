
longlong FUN_0103d982(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = param_1 == 0;
  if ((bool)cVar3) {
    uVar2 = 3;
  }
  else {
    uVar2 = 0xc;
  }
  FUN_0102e77c();
  FUN_0103dba8(uVar2);
  uVar1 = FUN_0103d9e4();
  if (cVar3 == '\0') {
    uVar1 = FUN_0102e6fe(param_1,1);
  }
  else {
    uVar1 = FUN_0103d938(uVar1,1);
  }
  FUN_0103d930(uVar1,1);
  FUN_0103dd84(uVar2);
  uVar2 = FUN_0103d9f2();
  FUN_0102e6cc(uVar2,1);
  cVar3 = '\x01';
  FUN_0103d928();
  FUN_0103d9e8();
  if (cVar3 == '\0') {
    FUN_0102e71a(param_1,0);
  }
  else {
    FUN_01017246(param_1,0);
  }
  return (ulonglong)param_4 << 0x20;
}

