
void FUN_0101a08c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_34 [2];
  undefined1 local_32;
  byte local_2c;
  byte local_2b;
  ushort local_20;
  
  iVar3 = DAT_0101a554;
  iVar4 = 0;
  pcVar5 = (char *)(DAT_0101a554 + 0x77c);
  if ((param_1 << 0x1f < 0) && (iVar2 = thunk_EXT_FUN_20036204(0xf), iVar2 != 0)) {
    iVar4 = 0xd20f;
  }
  else if ((param_1 << 0x1e < 0) && (iVar2 = thunk_EXT_FUN_20036204(1), iVar2 != 0)) {
    iVar4 = 0xd201;
  }
  else if ((param_1 << 0x1d < 0) && (iVar2 = thunk_EXT_FUN_20036204(0xe), iVar2 != 0)) {
    iVar4 = 0xd20e;
  }
  else if ((param_1 << 0x1c < 0) && (iVar2 = thunk_EXT_FUN_20036204(2), iVar2 != 0)) {
    iVar4 = 0xd202;
  }
  else if ((*pcVar5 == '\x01') && (iVar2 = thunk_EXT_FUN_20036204(0xd), iVar2 != 0)) {
    iVar4 = 0xd20d;
  }
  uVar6 = 0;
  do {
    if ((((iVar4 == 0) && (((uint)*(ushort *)(iVar3 + 0x22) & 1 << (uVar6 & 0xff)) != 0)) &&
        (*(char *)(uVar6 * 0xbc + iVar3 + 0x1c6) == '\x01')) &&
       (iVar2 = thunk_EXT_FUN_20036204(8), iVar2 != 0)) {
      iVar4 = 0xd208;
    }
    iVar2 = DAT_0101a564;
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 2);
  if (iVar4 == 0) {
    if (((*(byte *)(iVar3 + 0x21) & 0xf) != 0) && (iVar4 = thunk_EXT_FUN_20036204(0xc), iVar4 != 0))
    {
      iVar4 = 0xd20c;
      goto LAB_0101a1ec;
    }
    if ((*(char *)(iVar3 + 0x77f) != '\x01') && (iVar3 = thunk_EXT_FUN_20036204(7), iVar3 != 0)) {
      iVar4 = 0xd207;
      goto LAB_0101a1ec;
    }
    iVar4 = FUN_01019c40(param_1,auStack_34);
  }
  pcVar5 = DAT_0101a558;
  if (iVar4 == 0) {
    if (*DAT_0101a558 != '\0') {
LAB_0101a1a8:
      if (((*DAT_0101a558 == '\0') && (iVar4 = FUN_01019fea(auStack_34), iVar4 != 0)) ||
         (iVar4 = FUN_0101a232(auStack_34), iVar4 != 0)) goto LAB_0101a1ec;
      iVar4 = FUN_0101a310(local_32);
      goto LAB_0101a1ca;
    }
    uVar6 = 0;
    do {
      if (((uint)local_2b & 1 << (uVar6 & 0xff)) != 0) {
        cVar1 = *(char *)(*(int *)(iVar2 + (uVar6 + 2 & 0xff) * 4) + 0x10);
        bVar7 = cVar1 == '\0';
        if (bVar7) {
          cVar1 = *(char *)(*(int *)(iVar2 + (uVar6 & 0xff) * 4) + 0x10);
        }
        if (!bVar7 || cVar1 != '\0') {
          iVar4 = 0xe704;
        }
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 2);
    if (iVar4 == 0) goto LAB_0101a1a8;
LAB_0101a1d8:
    if (iVar4 != 0) goto LAB_0101a1ec;
  }
  else {
LAB_0101a1ca:
    if (iVar4 != 0) goto LAB_0101a1ec;
    if (*pcVar5 == '\0') {
      iVar4 = FUN_0101a4ba(auStack_34);
      goto LAB_0101a1d8;
    }
  }
  if (*pcVar5 == '\0') {
    *DAT_0101a57c = *DAT_0101a57c | local_20;
  }
LAB_0101a1ec:
  uVar6 = 0;
  do {
    if ((iVar4 == 0) && (((uint)local_2c & 1 << (uVar6 & 0xff)) != 0)) {
      iVar3 = *(int *)(iVar2 + (uVar6 & 0xff) * 4);
      iVar4 = stream_event_dispatcher(iVar3,*(undefined4 *)(iVar3 + 8),0,0,0,0,0,0,0);
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 2);
  if (iVar4 == 0) {
    FUN_0101993e();
    FUN_010198e0(6);
  }
  return;
}

