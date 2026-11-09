
void stream_int_handler_B(void)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  
  iVar3 = *(int *)(DAT_010413e4 + 0xc);
  bVar1 = *DAT_010413f8;
  *DAT_010413ec = *DAT_010413ec & 0xf7ff;
  cVar2 = *(char *)(iVar3 + 0x2d);
  bVar5 = cVar2 == '\0';
  if (bVar5) {
    cVar2 = *(char *)(DAT_010413f0 + 0x77c);
  }
  bVar4 = bVar1 >> 1 & 1;
  if ((bVar5 && cVar2 == '\0') && ((bVar1 >> 1 & 1) == 0)) {
    iVar3 = *(int *)(iVar3 + 0x44);
    stream_event_dispatcher
              (iVar3,*(int *)(iVar3 + 8),
               *(undefined4 *)
                (*(int *)(DAT_010413f4 + *(int *)(iVar3 + 8) * 8 + (uint)*(byte *)(iVar3 + 2) * 4) +
                0xc),bVar4,0,0,0,bVar4,0);
  }
  return;
}

