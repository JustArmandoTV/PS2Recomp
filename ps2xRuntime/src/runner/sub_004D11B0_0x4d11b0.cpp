#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D11B0
// Address: 0x4d11b0 - 0x4d1380
void sub_004D11B0_0x4d11b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D11B0_0x4d11b0");
#endif

    switch (ctx->pc) {
        case 0x4d11b0u: goto label_4d11b0;
        case 0x4d11b4u: goto label_4d11b4;
        case 0x4d11b8u: goto label_4d11b8;
        case 0x4d11bcu: goto label_4d11bc;
        case 0x4d11c0u: goto label_4d11c0;
        case 0x4d11c4u: goto label_4d11c4;
        case 0x4d11c8u: goto label_4d11c8;
        case 0x4d11ccu: goto label_4d11cc;
        case 0x4d11d0u: goto label_4d11d0;
        case 0x4d11d4u: goto label_4d11d4;
        case 0x4d11d8u: goto label_4d11d8;
        case 0x4d11dcu: goto label_4d11dc;
        case 0x4d11e0u: goto label_4d11e0;
        case 0x4d11e4u: goto label_4d11e4;
        case 0x4d11e8u: goto label_4d11e8;
        case 0x4d11ecu: goto label_4d11ec;
        case 0x4d11f0u: goto label_4d11f0;
        case 0x4d11f4u: goto label_4d11f4;
        case 0x4d11f8u: goto label_4d11f8;
        case 0x4d11fcu: goto label_4d11fc;
        case 0x4d1200u: goto label_4d1200;
        case 0x4d1204u: goto label_4d1204;
        case 0x4d1208u: goto label_4d1208;
        case 0x4d120cu: goto label_4d120c;
        case 0x4d1210u: goto label_4d1210;
        case 0x4d1214u: goto label_4d1214;
        case 0x4d1218u: goto label_4d1218;
        case 0x4d121cu: goto label_4d121c;
        case 0x4d1220u: goto label_4d1220;
        case 0x4d1224u: goto label_4d1224;
        case 0x4d1228u: goto label_4d1228;
        case 0x4d122cu: goto label_4d122c;
        case 0x4d1230u: goto label_4d1230;
        case 0x4d1234u: goto label_4d1234;
        case 0x4d1238u: goto label_4d1238;
        case 0x4d123cu: goto label_4d123c;
        case 0x4d1240u: goto label_4d1240;
        case 0x4d1244u: goto label_4d1244;
        case 0x4d1248u: goto label_4d1248;
        case 0x4d124cu: goto label_4d124c;
        case 0x4d1250u: goto label_4d1250;
        case 0x4d1254u: goto label_4d1254;
        case 0x4d1258u: goto label_4d1258;
        case 0x4d125cu: goto label_4d125c;
        case 0x4d1260u: goto label_4d1260;
        case 0x4d1264u: goto label_4d1264;
        case 0x4d1268u: goto label_4d1268;
        case 0x4d126cu: goto label_4d126c;
        case 0x4d1270u: goto label_4d1270;
        case 0x4d1274u: goto label_4d1274;
        case 0x4d1278u: goto label_4d1278;
        case 0x4d127cu: goto label_4d127c;
        case 0x4d1280u: goto label_4d1280;
        case 0x4d1284u: goto label_4d1284;
        case 0x4d1288u: goto label_4d1288;
        case 0x4d128cu: goto label_4d128c;
        case 0x4d1290u: goto label_4d1290;
        case 0x4d1294u: goto label_4d1294;
        case 0x4d1298u: goto label_4d1298;
        case 0x4d129cu: goto label_4d129c;
        case 0x4d12a0u: goto label_4d12a0;
        case 0x4d12a4u: goto label_4d12a4;
        case 0x4d12a8u: goto label_4d12a8;
        case 0x4d12acu: goto label_4d12ac;
        case 0x4d12b0u: goto label_4d12b0;
        case 0x4d12b4u: goto label_4d12b4;
        case 0x4d12b8u: goto label_4d12b8;
        case 0x4d12bcu: goto label_4d12bc;
        case 0x4d12c0u: goto label_4d12c0;
        case 0x4d12c4u: goto label_4d12c4;
        case 0x4d12c8u: goto label_4d12c8;
        case 0x4d12ccu: goto label_4d12cc;
        case 0x4d12d0u: goto label_4d12d0;
        case 0x4d12d4u: goto label_4d12d4;
        case 0x4d12d8u: goto label_4d12d8;
        case 0x4d12dcu: goto label_4d12dc;
        case 0x4d12e0u: goto label_4d12e0;
        case 0x4d12e4u: goto label_4d12e4;
        case 0x4d12e8u: goto label_4d12e8;
        case 0x4d12ecu: goto label_4d12ec;
        case 0x4d12f0u: goto label_4d12f0;
        case 0x4d12f4u: goto label_4d12f4;
        case 0x4d12f8u: goto label_4d12f8;
        case 0x4d12fcu: goto label_4d12fc;
        case 0x4d1300u: goto label_4d1300;
        case 0x4d1304u: goto label_4d1304;
        case 0x4d1308u: goto label_4d1308;
        case 0x4d130cu: goto label_4d130c;
        case 0x4d1310u: goto label_4d1310;
        case 0x4d1314u: goto label_4d1314;
        case 0x4d1318u: goto label_4d1318;
        case 0x4d131cu: goto label_4d131c;
        case 0x4d1320u: goto label_4d1320;
        case 0x4d1324u: goto label_4d1324;
        case 0x4d1328u: goto label_4d1328;
        case 0x4d132cu: goto label_4d132c;
        case 0x4d1330u: goto label_4d1330;
        case 0x4d1334u: goto label_4d1334;
        case 0x4d1338u: goto label_4d1338;
        case 0x4d133cu: goto label_4d133c;
        case 0x4d1340u: goto label_4d1340;
        case 0x4d1344u: goto label_4d1344;
        case 0x4d1348u: goto label_4d1348;
        case 0x4d134cu: goto label_4d134c;
        case 0x4d1350u: goto label_4d1350;
        case 0x4d1354u: goto label_4d1354;
        case 0x4d1358u: goto label_4d1358;
        case 0x4d135cu: goto label_4d135c;
        case 0x4d1360u: goto label_4d1360;
        case 0x4d1364u: goto label_4d1364;
        case 0x4d1368u: goto label_4d1368;
        case 0x4d136cu: goto label_4d136c;
        case 0x4d1370u: goto label_4d1370;
        case 0x4d1374u: goto label_4d1374;
        case 0x4d1378u: goto label_4d1378;
        case 0x4d137cu: goto label_4d137c;
        default: break;
    }

    ctx->pc = 0x4d11b0u;

label_4d11b0:
    // 0x4d11b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d11b4:
    // 0x4d11b4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4d11b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4d11b8:
    // 0x4d11b8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4d11b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d11bc:
    // 0x4d11bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d11bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d11c0:
    // 0x4d11c0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4d11c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4d11c4:
    // 0x4d11c4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4d11c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4d11c8:
    // 0x4d11c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d11c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d11cc:
    // 0x4d11cc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4d11ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4d11d0:
    // 0x4d11d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d11d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d11d4:
    // 0x4d11d4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4d11d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4d11d8:
    // 0x4d11d8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4d11d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4d11dc:
    // 0x4d11dc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4d11dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4d11e0:
    // 0x4d11e0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4d11e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4d11e4:
    // 0x4d11e4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4d11e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4d11e8:
    // 0x4d11e8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4d11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4d11ec:
    // 0x4d11ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d11ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d11f0:
    // 0x4d11f0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4d11f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4d11f4:
    // 0x4d11f4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4d11f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4d11f8:
    // 0x4d11f8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4d11f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4d11fc:
    // 0x4d11fc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4d11fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4d1200:
    // 0x4d1200: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4d1200u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4d1204:
    // 0x4d1204: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4d1204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4d1208:
    // 0x4d1208: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4d1208u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4d120c:
    // 0x4d120c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4d120cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4d1210:
    // 0x4d1210: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4d1210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4d1214:
    // 0x4d1214: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4d1214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4d1218:
    // 0x4d1218: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d1218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d121c:
    // 0x4d121c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4d121cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4d1220:
    // 0x4d1220: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4d1220u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4d1224:
    // 0x4d1224: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4d1224u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d1228:
    // 0x4d1228: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4d1228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4d122c:
    // 0x4d122c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4d122cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4d1230:
    // 0x4d1230: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4d1230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4d1234:
    // 0x4d1234: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4d1234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4d1238:
    // 0x4d1238: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4d1238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4d123c:
    // 0x4d123c: 0x3e00008  jr          $ra
label_4d1240:
    if (ctx->pc == 0x4D1240u) {
        ctx->pc = 0x4D1240u;
            // 0x4d1240: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4D1244u;
        goto label_4d1244;
    }
    ctx->pc = 0x4D123Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D123Cu;
            // 0x4d1240: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D1244u;
label_4d1244:
    // 0x4d1244: 0x0  nop
    ctx->pc = 0x4d1244u;
    // NOP
label_4d1248:
    // 0x4d1248: 0x0  nop
    ctx->pc = 0x4d1248u;
    // NOP
label_4d124c:
    // 0x4d124c: 0x0  nop
    ctx->pc = 0x4d124cu;
    // NOP
label_4d1250:
    // 0x4d1250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d1250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d1254:
    // 0x4d1254: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d1254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d1258:
    // 0x4d1258: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d1258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d125c:
    // 0x4d125c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d1260:
    // 0x4d1260: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d1260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d1264:
    // 0x4d1264: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d1264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d1268:
    // 0x4d1268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d1268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d126c:
    // 0x4d126c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4d126cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4d1270:
    // 0x4d1270: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4d1274:
    if (ctx->pc == 0x4D1274u) {
        ctx->pc = 0x4D1274u;
            // 0x4d1274: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1278u;
        goto label_4d1278;
    }
    ctx->pc = 0x4D1270u;
    {
        const bool branch_taken_0x4d1270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4D1274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1270u;
            // 0x4d1274: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1270) {
            ctx->pc = 0x4D12A4u;
            goto label_4d12a4;
        }
    }
    ctx->pc = 0x4D1278u;
label_4d1278:
    // 0x4d1278: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4d1278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4d127c:
    // 0x4d127c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4d1280:
    if (ctx->pc == 0x4D1280u) {
        ctx->pc = 0x4D1280u;
            // 0x4d1280: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D1284u;
        goto label_4d1284;
    }
    ctx->pc = 0x4D127Cu;
    {
        const bool branch_taken_0x4d127c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d127c) {
            ctx->pc = 0x4D1280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D127Cu;
            // 0x4d1280: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1298u;
            goto label_4d1298;
        }
    }
    ctx->pc = 0x4D1284u;
label_4d1284:
    // 0x4d1284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4d1284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d1288:
    // 0x4d1288: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4d128c:
    if (ctx->pc == 0x4D128Cu) {
        ctx->pc = 0x4D1290u;
        goto label_4d1290;
    }
    ctx->pc = 0x4D1288u;
    {
        const bool branch_taken_0x4d1288 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4d1288) {
            ctx->pc = 0x4D12D8u;
            goto label_4d12d8;
        }
    }
    ctx->pc = 0x4D1290u;
label_4d1290:
    // 0x4d1290: 0x10000011  b           . + 4 + (0x11 << 2)
label_4d1294:
    if (ctx->pc == 0x4D1294u) {
        ctx->pc = 0x4D1298u;
        goto label_4d1298;
    }
    ctx->pc = 0x4D1290u;
    {
        const bool branch_taken_0x4d1290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d1290) {
            ctx->pc = 0x4D12D8u;
            goto label_4d12d8;
        }
    }
    ctx->pc = 0x4D1298u;
label_4d1298:
    // 0x4d1298: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4d1298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4d129c:
    // 0x4d129c: 0x320f809  jalr        $t9
label_4d12a0:
    if (ctx->pc == 0x4D12A0u) {
        ctx->pc = 0x4D12A4u;
        goto label_4d12a4;
    }
    ctx->pc = 0x4D129Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D12A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D12A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D12A4u; }
            if (ctx->pc != 0x4D12A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4D12A4u;
label_4d12a4:
    // 0x4d12a4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4d12a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4d12a8:
    // 0x4d12a8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_4d12ac:
    if (ctx->pc == 0x4D12ACu) {
        ctx->pc = 0x4D12B0u;
        goto label_4d12b0;
    }
    ctx->pc = 0x4D12A8u;
    {
        const bool branch_taken_0x4d12a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d12a8) {
            ctx->pc = 0x4D12D8u;
            goto label_4d12d8;
        }
    }
    ctx->pc = 0x4D12B0u;
label_4d12b0:
    // 0x4d12b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d12b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d12b4:
    // 0x4d12b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d12b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d12b8:
    // 0x4d12b8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4d12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4d12bc:
    // 0x4d12bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4d12c0:
    // 0x4d12c0: 0xc134860  jal         func_4D2180
label_4d12c4:
    if (ctx->pc == 0x4D12C4u) {
        ctx->pc = 0x4D12C4u;
            // 0x4d12c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4D12C8u;
        goto label_4d12c8;
    }
    ctx->pc = 0x4D12C0u;
    SET_GPR_U32(ctx, 31, 0x4D12C8u);
    ctx->pc = 0x4D12C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D12C0u;
            // 0x4d12c4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D2180u;
    if (runtime->hasFunction(0x4D2180u)) {
        auto targetFn = runtime->lookupFunction(0x4D2180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D12C8u; }
        if (ctx->pc != 0x4D12C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D2180_0x4d2180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D12C8u; }
        if (ctx->pc != 0x4D12C8u) { return; }
    }
    ctx->pc = 0x4D12C8u;
label_4d12c8:
    // 0x4d12c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4d12c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4d12cc:
    // 0x4d12cc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4d12ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4d12d0:
    // 0x4d12d0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4d12d4:
    if (ctx->pc == 0x4D12D4u) {
        ctx->pc = 0x4D12D4u;
            // 0x4d12d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4D12D8u;
        goto label_4d12d8;
    }
    ctx->pc = 0x4D12D0u;
    {
        const bool branch_taken_0x4d12d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D12D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D12D0u;
            // 0x4d12d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d12d0) {
            ctx->pc = 0x4D12B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d12b8;
        }
    }
    ctx->pc = 0x4D12D8u;
label_4d12d8:
    // 0x4d12d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d12d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d12dc:
    // 0x4d12dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d12dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d12e0:
    // 0x4d12e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d12e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d12e4:
    // 0x4d12e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d12e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d12e8:
    // 0x4d12e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d12e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d12ec:
    // 0x4d12ec: 0x3e00008  jr          $ra
label_4d12f0:
    if (ctx->pc == 0x4D12F0u) {
        ctx->pc = 0x4D12F0u;
            // 0x4d12f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D12F4u;
        goto label_4d12f4;
    }
    ctx->pc = 0x4D12ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D12F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D12ECu;
            // 0x4d12f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D12F4u;
label_4d12f4:
    // 0x4d12f4: 0x0  nop
    ctx->pc = 0x4d12f4u;
    // NOP
label_4d12f8:
    // 0x4d12f8: 0x0  nop
    ctx->pc = 0x4d12f8u;
    // NOP
label_4d12fc:
    // 0x4d12fc: 0x0  nop
    ctx->pc = 0x4d12fcu;
    // NOP
label_4d1300:
    // 0x4d1300: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d1300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d1304:
    // 0x4d1304: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4d1304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4d1308:
    // 0x4d1308: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d1308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d130c:
    // 0x4d130c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d130cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d1310:
    // 0x4d1310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d1310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d1314:
    // 0x4d1314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d1314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d1318:
    // 0x4d1318: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4d1318u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d131c:
    // 0x4d131c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4d1320:
    if (ctx->pc == 0x4D1320u) {
        ctx->pc = 0x4D1320u;
            // 0x4d1320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1324u;
        goto label_4d1324;
    }
    ctx->pc = 0x4D131Cu;
    {
        const bool branch_taken_0x4d131c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D131Cu;
            // 0x4d1320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d131c) {
            ctx->pc = 0x4D1358u;
            goto label_4d1358;
        }
    }
    ctx->pc = 0x4D1324u;
label_4d1324:
    // 0x4d1324: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d1324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1328:
    // 0x4d1328: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d1328u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d132c:
    // 0x4d132c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4d132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4d1330:
    // 0x4d1330: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4d1330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4d1334:
    // 0x4d1334: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d1334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d1338:
    // 0x4d1338: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d1338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d133c:
    // 0x4d133c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4d133cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4d1340:
    // 0x4d1340: 0x320f809  jalr        $t9
label_4d1344:
    if (ctx->pc == 0x4D1344u) {
        ctx->pc = 0x4D1348u;
        goto label_4d1348;
    }
    ctx->pc = 0x4D1340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D1348u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D1348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D1348u; }
            if (ctx->pc != 0x4D1348u) { return; }
        }
        }
    }
    ctx->pc = 0x4D1348u;
label_4d1348:
    // 0x4d1348: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4d1348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4d134c:
    // 0x4d134c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4d134cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4d1350:
    // 0x4d1350: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4d1354:
    if (ctx->pc == 0x4D1354u) {
        ctx->pc = 0x4D1354u;
            // 0x4d1354: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4D1358u;
        goto label_4d1358;
    }
    ctx->pc = 0x4D1350u;
    {
        const bool branch_taken_0x4d1350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1350u;
            // 0x4d1354: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1350) {
            ctx->pc = 0x4D132Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d132c;
        }
    }
    ctx->pc = 0x4D1358u;
label_4d1358:
    // 0x4d1358: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4d1358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d135c:
    // 0x4d135c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d135cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d1360:
    // 0x4d1360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d1360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d1364:
    // 0x4d1364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d1364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d1368:
    // 0x4d1368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d1368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d136c:
    // 0x4d136c: 0x3e00008  jr          $ra
label_4d1370:
    if (ctx->pc == 0x4D1370u) {
        ctx->pc = 0x4D1370u;
            // 0x4d1370: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D1374u;
        goto label_4d1374;
    }
    ctx->pc = 0x4D136Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D136Cu;
            // 0x4d1370: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D1374u;
label_4d1374:
    // 0x4d1374: 0x0  nop
    ctx->pc = 0x4d1374u;
    // NOP
label_4d1378:
    // 0x4d1378: 0x0  nop
    ctx->pc = 0x4d1378u;
    // NOP
label_4d137c:
    // 0x4d137c: 0x0  nop
    ctx->pc = 0x4d137cu;
    // NOP
}
