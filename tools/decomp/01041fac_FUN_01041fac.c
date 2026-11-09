
int FUN_01041fac(int *param_1)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  ushort local_44 [4];
  undefined1 auStack_3c [6];
  ushort local_36;
  undefined1 auStack_34 [20];
  
  uVar9 = (uint)*(byte *)(param_1 + 1);
  iVar6 = 0;
  if (*(char *)(DAT_010423e8 + uVar9 * 0xbc + 0x3c) != '\x02') {
    pcVar5 = (char *)*param_1;
    if (*pcVar5 == '\x01') {
      cVar1 = pcVar5[1];
      cVar2 = pcVar5[2];
      *(char *)((int)param_1 + 6) = cVar2 + cVar1;
      *(char *)((int)param_1 + 5) = pcVar5[1];
      FUN_010424b4(uVar9,cVar2 + cVar1);
    }
    else {
      iVar4 = FUN_0101db8c(uVar9);
      if (iVar4 == 1 || iVar4 == 2) {
        iVar6 = FUN_0101ddf6(uVar9,param_1 + 2);
      }
      FUN_0101026a(uVar9,2,local_58);
      if (iVar6 == 0) {
        FUN_01020fb8(uVar9);
        FUN_01042510(uVar9,(int)&local_60 + 2,(int)&local_60 + 1,&local_60);
        FUN_0102077c(uVar9,auStack_34);
        FUN_010424ce(uVar9,1,1,3);
        local_4e = 1;
        local_4f = 1;
        local_50 = 0;
        local_54 = 10;
        local_4d = 0;
        local_48 = 0;
        local_4c = 0x3f800000;
        FUN_01020862(uVar9,&local_54);
        FUN_0101deb2(uVar9,2,0);
        FUN_0101db98(DAT_01042354,uVar9,0);
        FUN_010104ae(uVar9,2,0,*(undefined4 *)(param_1[6] + 0x10));
        FUN_010424b4(uVar9,0,0);
        FUN_01042544(uVar9,2);
        spi_notify_thunk(local_44,0x10);
        FUN_010421ae(uVar9);
        iVar6 = FUN_0104227e(5);
        if (iVar6 == 0) {
          uVar8 = 0;
          do {
            uVar7 = 0;
            do {
              iVar6 = FUN_0104227e(2);
              if (iVar6 == 0) {
                iVar6 = FUN_01042298(uVar9,uVar7 & 0xff,uVar7 * 5 + *param_1 + 3);
                if (iVar6 != 0) break;
                uVar3 = FUN_0104249a(uVar9);
                local_44[uVar8 + uVar7 * 4] = uVar3;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < 2);
            uVar8 = uVar8 + 1;
          } while ((uVar8 < 3) && (iVar6 == 0));
        }
        if ((iVar6 == 0) &&
           ((iVar6 = FUN_01042358(local_44), iVar6 == 0 &&
            (iVar6 = FUN_01042358(auStack_3c), iVar6 == 0)))) {
          if (local_36 < local_44[3]) {
            cVar2 = (char)local_44[3] - (char)local_36;
            cVar1 = *(char *)(*param_1 + 2);
            *(char *)((int)param_1 + 5) = cVar2;
            cVar1 = cVar1 + cVar2;
            *(char *)((int)param_1 + 6) = cVar1;
            FUN_010424b4(uVar9,cVar1,*(undefined1 *)((int)param_1 + 5));
          }
          else {
            iVar6 = 0x2605;
          }
        }
        FUN_010425aa(uVar9);
        FUN_010424ce(uVar9,local_60._2_1_,local_60._1_1_,local_60 & 0xff);
        FUN_010207e8(uVar9,auStack_34);
      }
      FUN_0101deb2(uVar9,iVar4,0);
      if (iVar4 == 1 || iVar4 == 2) {
        FUN_0101de6a(uVar9,param_1 + 2);
      }
      FUN_010104ae(uVar9,2,local_58[0],*(undefined4 *)(param_1[6] + 0x10));
      local_5c = 0;
      local_60 = 0;
      FUN_0102298e(uVar9,0xc,0,0);
      FUN_0104223c(uVar9);
    }
  }
  return iVar6;
}

