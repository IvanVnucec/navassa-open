
undefined4 FUN_0102f8c2(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined1 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  ushort local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_28 [8];
  undefined4 uStack_20;
  
  iVar7 = *(int *)(DAT_0102fbbc + 4);
  uStack_20 = param_4;
  FUN_0101204c(&local_58,param_3,0x36);
  uVar5 = (uint)*(ushort *)(iVar7 + 0x14) * (uint)local_48;
  if (uVar5 == 0) {
    uVar6 = 0x2907;
  }
  else {
    uVar9 = ((uVar5 >> 0xc) << 0x16) / uVar5;
    uVar3 = (ushort)(uVar5 >> 0xc);
    sVar2 = (uVar3 >> 1) * 0xf + uVar3 + 0x300;
    uVar1 = (&DAT_0102fbdc)[param_2];
    local_48 = sVar2;
    FUN_0102fa74(&DAT_0102fbdc,0,local_58,uVar9 & 0xffff,uVar1,0);
    uVar11 = FUN_0102fa6c(1);
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_56);
    uVar11 = FUN_0102fa6c(2);
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_54);
    uVar11 = FUN_0102fa6c(3);
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_52);
    uVar11 = FUN_0102fa6c(4);
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_50);
    uVar11 = FUN_0102fa6c(5);
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_4e);
    uVar11 = FUN_0102fa6c(6);
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_4c);
    uVar11 = FUN_0102fa6c(7);
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_4a);
    uVar11 = FUN_0102fa6c(8);
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_49);
    uVar11 = FUN_0102fa6c(9);
    uVar6 = FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),sVar2);
    FUN_0102fa74(uVar6,10,local_46,uVar9 & 0xffff,uVar1,10);
    uVar11 = FUN_0102fa6c(0xb);
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_45);
    uVar11 = FUN_0102fa6c(0xc);
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_44);
    bVar10 = 0;
    cVar4 = '\r';
    do {
      cVar8 = cVar4;
      uVar11 = FUN_0102fa5a();
      FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),*(undefined1 *)((int)uVar11 + 0x15))
      ;
      bVar10 = bVar10 + 1;
      cVar4 = cVar8 + '\x01';
    } while (bVar10 < 5);
    uVar11 = FUN_0102fa6a();
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_3e);
    uVar11 = FUN_0102fa6a();
    FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),local_3d);
    cVar8 = cVar8 + '\x03';
    bVar10 = 0;
    do {
      uVar11 = FUN_0102fa5a();
      FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),*(undefined1 *)((int)uVar11 + 0x1c))
      ;
      bVar10 = bVar10 + 1;
      cVar8 = cVar8 + '\x01';
    } while (bVar10 < 0x10);
    bVar10 = 0;
    do {
      uVar11 = FUN_0102fa5a();
      FUN_0102fa74((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),*(undefined1 *)((int)uVar11 + 0x2c))
      ;
      bVar10 = bVar10 + 1;
      cVar8 = cVar8 + '\x01';
    } while (bVar10 < 4);
    bVar10 = 0;
    do {
      FUN_0102fa74(0,(int)&local_58 + (uint)bVar10,local_28[bVar10],uVar9 & 0xffff,0,cVar8);
      bVar10 = bVar10 + 1;
      cVar8 = cVar8 + '\x01';
    } while (bVar10 < 3);
    uVar6 = 0;
  }
  return uVar6;
}

