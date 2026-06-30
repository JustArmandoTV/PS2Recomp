#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1248
// Address: 0x1c1248 - 0x1c1390
void sub_001C1248_0x1c1248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1248_0x1c1248");
#endif

    switch (ctx->pc) {
        case 0x1c1248u: goto label_1c1248;
        case 0x1c124cu: goto label_1c124c;
        case 0x1c1250u: goto label_1c1250;
        case 0x1c1254u: goto label_1c1254;
        case 0x1c1258u: goto label_1c1258;
        case 0x1c125cu: goto label_1c125c;
        case 0x1c1260u: goto label_1c1260;
        case 0x1c1264u: goto label_1c1264;
        case 0x1c1268u: goto label_1c1268;
        case 0x1c126cu: goto label_1c126c;
        case 0x1c1270u: goto label_1c1270;
        case 0x1c1274u: goto label_1c1274;
        case 0x1c1278u: goto label_1c1278;
        case 0x1c127cu: goto label_1c127c;
        case 0x1c1280u: goto label_1c1280;
        case 0x1c1284u: goto label_1c1284;
        case 0x1c1288u: goto label_1c1288;
        case 0x1c128cu: goto label_1c128c;
        case 0x1c1290u: goto label_1c1290;
        case 0x1c1294u: goto label_1c1294;
        case 0x1c1298u: goto label_1c1298;
        case 0x1c129cu: goto label_1c129c;
        case 0x1c12a0u: goto label_1c12a0;
        case 0x1c12a4u: goto label_1c12a4;
        case 0x1c12a8u: goto label_1c12a8;
        case 0x1c12acu: goto label_1c12ac;
        case 0x1c12b0u: goto label_1c12b0;
        case 0x1c12b4u: goto label_1c12b4;
        case 0x1c12b8u: goto label_1c12b8;
        case 0x1c12bcu: goto label_1c12bc;
        case 0x1c12c0u: goto label_1c12c0;
        case 0x1c12c4u: goto label_1c12c4;
        case 0x1c12c8u: goto label_1c12c8;
        case 0x1c12ccu: goto label_1c12cc;
        case 0x1c12d0u: goto label_1c12d0;
        case 0x1c12d4u: goto label_1c12d4;
        case 0x1c12d8u: goto label_1c12d8;
        case 0x1c12dcu: goto label_1c12dc;
        case 0x1c12e0u: goto label_1c12e0;
        case 0x1c12e4u: goto label_1c12e4;
        case 0x1c12e8u: goto label_1c12e8;
        case 0x1c12ecu: goto label_1c12ec;
        case 0x1c12f0u: goto label_1c12f0;
        case 0x1c12f4u: goto label_1c12f4;
        case 0x1c12f8u: goto label_1c12f8;
        case 0x1c12fcu: goto label_1c12fc;
        case 0x1c1300u: goto label_1c1300;
        case 0x1c1304u: goto label_1c1304;
        case 0x1c1308u: goto label_1c1308;
        case 0x1c130cu: goto label_1c130c;
        case 0x1c1310u: goto label_1c1310;
        case 0x1c1314u: goto label_1c1314;
        case 0x1c1318u: goto label_1c1318;
        case 0x1c131cu: goto label_1c131c;
        case 0x1c1320u: goto label_1c1320;
        case 0x1c1324u: goto label_1c1324;
        case 0x1c1328u: goto label_1c1328;
        case 0x1c132cu: goto label_1c132c;
        case 0x1c1330u: goto label_1c1330;
        case 0x1c1334u: goto label_1c1334;
        case 0x1c1338u: goto label_1c1338;
        case 0x1c133cu: goto label_1c133c;
        case 0x1c1340u: goto label_1c1340;
        case 0x1c1344u: goto label_1c1344;
        case 0x1c1348u: goto label_1c1348;
        case 0x1c134cu: goto label_1c134c;
        case 0x1c1350u: goto label_1c1350;
        case 0x1c1354u: goto label_1c1354;
        case 0x1c1358u: goto label_1c1358;
        case 0x1c135cu: goto label_1c135c;
        case 0x1c1360u: goto label_1c1360;
        case 0x1c1364u: goto label_1c1364;
        case 0x1c1368u: goto label_1c1368;
        case 0x1c136cu: goto label_1c136c;
        case 0x1c1370u: goto label_1c1370;
        case 0x1c1374u: goto label_1c1374;
        case 0x1c1378u: goto label_1c1378;
        case 0x1c137cu: goto label_1c137c;
        case 0x1c1380u: goto label_1c1380;
        case 0x1c1384u: goto label_1c1384;
        case 0x1c1388u: goto label_1c1388;
        case 0x1c138cu: goto label_1c138c;
        default: break;
    }

    ctx->pc = 0x1c1248u;

label_1c1248:
    // 0x1c1248: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c124c:
    // 0x1c124c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1250:
    // 0x1c1250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1254:
    // 0x1c1254: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c1254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1258:
    // 0x1c1258: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_1c125c:
    if (ctx->pc == 0x1C125Cu) {
        ctx->pc = 0x1C125Cu;
            // 0x1c125c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1C1260u;
        goto label_1c1260;
    }
    ctx->pc = 0x1C1258u;
    {
        const bool branch_taken_0x1c1258 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1258u;
            // 0x1c125c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1258) {
            ctx->pc = 0x1C1290u;
            goto label_1c1290;
        }
    }
    ctx->pc = 0x1C1260u;
label_1c1260:
    // 0x1c1260: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1264:
    // 0x1c1264: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c1268:
    // 0x1c1268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c126c:
    // 0x1c126c: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c126cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
label_1c1270:
    // 0x1c1270: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1274:
    // 0x1c1274: 0x24c6b938  addiu       $a2, $a2, -0x46C8
    ctx->pc = 0x1c1274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949176));
label_1c1278:
    // 0x1c1278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c127c:
    // 0x1c127c: 0x24050208  addiu       $a1, $zero, 0x208
    ctx->pc = 0x1c127cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_1c1280:
    // 0x1c1280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c1280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1284:
    // 0x1c1284: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c1284u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
label_1c1288:
    // 0x1c1288: 0x80711fe  j           func_1C47F8
label_1c128c:
    if (ctx->pc == 0x1C128Cu) {
        ctx->pc = 0x1C128Cu;
            // 0x1c128c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1290u;
        goto label_1c1290;
    }
    ctx->pc = 0x1C1288u;
    ctx->pc = 0x1C128Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1288u;
            // 0x1c128c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1290u;
label_1c1290:
    // 0x1c1290: 0x86020034  lh          $v0, 0x34($s0)
    ctx->pc = 0x1c1290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
label_1c1294:
    // 0x1c1294: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1c1298:
    if (ctx->pc == 0x1C1298u) {
        ctx->pc = 0x1C1298u;
            // 0x1c1298: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x1C129Cu;
        goto label_1c129c;
    }
    ctx->pc = 0x1C1294u;
    {
        const bool branch_taken_0x1c1294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1294) {
            ctx->pc = 0x1C1298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1294u;
            // 0x1c1298: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C12D0u;
            goto label_1c12d0;
        }
    }
    ctx->pc = 0x1C129Cu;
label_1c129c:
    // 0x1c129c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c129cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c12a0:
    // 0x1c12a0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c12a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c12a4:
    // 0x1c12a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c12a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c12a8:
    // 0x1c12a8: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c12a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
label_1c12ac:
    // 0x1c12ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c12acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c12b0:
    // 0x1c12b0: 0x24c6b938  addiu       $a2, $a2, -0x46C8
    ctx->pc = 0x1c12b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949176));
label_1c12b4:
    // 0x1c12b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c12b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c12b8:
    // 0x1c12b8: 0x2405020c  addiu       $a1, $zero, 0x20C
    ctx->pc = 0x1c12b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
label_1c12bc:
    // 0x1c12bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c12bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c12c0:
    // 0x1c12c0: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c12c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
label_1c12c4:
    // 0x1c12c4: 0x80711fe  j           func_1C47F8
label_1c12c8:
    if (ctx->pc == 0x1C12C8u) {
        ctx->pc = 0x1C12C8u;
            // 0x1c12c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C12CCu;
        goto label_1c12cc;
    }
    ctx->pc = 0x1C12C4u;
    ctx->pc = 0x1C12C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12C4u;
            // 0x1c12c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C12CCu;
label_1c12cc:
    // 0x1c12cc: 0x0  nop
    ctx->pc = 0x1c12ccu;
    // NOP
label_1c12d0:
    // 0x1c12d0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1c12d4:
    if (ctx->pc == 0x1C12D4u) {
        ctx->pc = 0x1C12D4u;
            // 0x1c12d4: 0x86110038  lh          $s1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x1C12D8u;
        goto label_1c12d8;
    }
    ctx->pc = 0x1C12D0u;
    {
        const bool branch_taken_0x1c12d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c12d0) {
            ctx->pc = 0x1C12D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C12D0u;
            // 0x1c12d4: 0x86110038  lh          $s1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1308u;
            goto label_1c1308;
        }
    }
    ctx->pc = 0x1C12D8u;
label_1c12d8:
    // 0x1c12d8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c12d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c12dc:
    // 0x1c12dc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c12dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c12e0:
    // 0x1c12e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c12e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c12e4:
    // 0x1c12e4: 0x2484b8c8  addiu       $a0, $a0, -0x4738
    ctx->pc = 0x1c12e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949064));
label_1c12e8:
    // 0x1c12e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c12e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c12ec:
    // 0x1c12ec: 0x24c6b938  addiu       $a2, $a2, -0x46C8
    ctx->pc = 0x1c12ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949176));
label_1c12f0:
    // 0x1c12f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c12f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c12f4:
    // 0x1c12f4: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x1c12f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1c12f8:
    // 0x1c12f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c12f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c12fc:
    // 0x1c12fc: 0x2408ff9b  addiu       $t0, $zero, -0x65
    ctx->pc = 0x1c12fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967195));
label_1c1300:
    // 0x1c1300: 0x80711fe  j           func_1C47F8
label_1c1304:
    if (ctx->pc == 0x1C1304u) {
        ctx->pc = 0x1C1304u;
            // 0x1c1304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1308u;
        goto label_1c1308;
    }
    ctx->pc = 0x1C1300u;
    ctx->pc = 0x1C1304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1300u;
            // 0x1c1304: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1308u;
label_1c1308:
    // 0x1c1308: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c1308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c130c:
    // 0x1c130c: 0x52220004  beql        $s1, $v0, . + 4 + (0x4 << 2)
label_1c1310:
    if (ctx->pc == 0x1C1310u) {
        ctx->pc = 0x1C1310u;
            // 0x1c1310: 0x86030036  lh          $v1, 0x36($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
        ctx->pc = 0x1C1314u;
        goto label_1c1314;
    }
    ctx->pc = 0x1C130Cu;
    {
        const bool branch_taken_0x1c130c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c130c) {
            ctx->pc = 0x1C1310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C130Cu;
            // 0x1c1310: 0x86030036  lh          $v1, 0x36($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 54)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1320u;
            goto label_1c1320;
        }
    }
    ctx->pc = 0x1C1314u;
label_1c1314:
    // 0x1c1314: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c1318:
    if (ctx->pc == 0x1C1318u) {
        ctx->pc = 0x1C1318u;
            // 0x1c1318: 0xa6000038  sh          $zero, 0x38($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1C131Cu;
        goto label_1c131c;
    }
    ctx->pc = 0x1C1314u;
    {
        const bool branch_taken_0x1c1314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1314u;
            // 0x1c1318: 0xa6000038  sh          $zero, 0x38($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1314) {
            ctx->pc = 0x1C1378u;
            goto label_1c1378;
        }
    }
    ctx->pc = 0x1C131Cu;
label_1c131c:
    // 0x1c131c: 0x0  nop
    ctx->pc = 0x1c131cu;
    // NOP
label_1c1320:
    // 0x1c1320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c1320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1324:
    // 0x1c1324: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1c1328:
    if (ctx->pc == 0x1C1328u) {
        ctx->pc = 0x1C132Cu;
        goto label_1c132c;
    }
    ctx->pc = 0x1C1324u;
    {
        const bool branch_taken_0x1c1324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c1324) {
            ctx->pc = 0x1C1338u;
            goto label_1c1338;
        }
    }
    ctx->pc = 0x1C132Cu;
label_1c132c:
    // 0x1c132c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1c1330:
    if (ctx->pc == 0x1C1330u) {
        ctx->pc = 0x1C1330u;
            // 0x1c1330: 0xa6110036  sh          $s1, 0x36($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 17));
        ctx->pc = 0x1C1334u;
        goto label_1c1334;
    }
    ctx->pc = 0x1C132Cu;
    {
        const bool branch_taken_0x1c132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C132Cu;
            // 0x1c1330: 0xa6110036  sh          $s1, 0x36($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c132c) {
            ctx->pc = 0x1C1378u;
            goto label_1c1378;
        }
    }
    ctx->pc = 0x1C1334u;
label_1c1334:
    // 0x1c1334: 0x0  nop
    ctx->pc = 0x1c1334u;
    // NOP
label_1c1338:
    // 0x1c1338: 0xc0711f2  jal         func_1C47C8
label_1c133c:
    if (ctx->pc == 0x1C133Cu) {
        ctx->pc = 0x1C1340u;
        goto label_1c1340;
    }
    ctx->pc = 0x1C1338u;
    SET_GPR_U32(ctx, 31, 0x1C1340u);
    ctx->pc = 0x1C47C8u;
    if (runtime->hasFunction(0x1C47C8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1340u; }
        if (ctx->pc != 0x1C1340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47C8_0x1c47c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1340u; }
        if (ctx->pc != 0x1C1340u) { return; }
    }
    ctx->pc = 0x1C1340u;
label_1c1340:
    // 0x1c1340: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1c1340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1c1344:
    // 0x1c1344: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1c1344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1c1348:
    // 0x1c1348: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x1c1348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1c134c:
    // 0x1c134c: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1c134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1c1350:
    // 0x1c1350: 0x40f809  jalr        $v0
label_1c1354:
    if (ctx->pc == 0x1C1354u) {
        ctx->pc = 0x1C1354u;
            // 0x1c1354: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x1C1358u;
        goto label_1c1358;
    }
    ctx->pc = 0x1C1350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1358u);
        ctx->pc = 0x1C1354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1350u;
            // 0x1c1354: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1358u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1358u; }
            if (ctx->pc != 0x1C1358u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1358u;
label_1c1358:
    // 0x1c1358: 0xa6110036  sh          $s1, 0x36($s0)
    ctx->pc = 0x1c1358u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 17));
label_1c135c:
    // 0x1c135c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1360:
    // 0x1c1360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1364:
    // 0x1c1364: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c1364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1368:
    // 0x1c1368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c136c:
    // 0x1c136c: 0x80711f8  j           func_1C47E0
label_1c1370:
    if (ctx->pc == 0x1C1370u) {
        ctx->pc = 0x1C1370u;
            // 0x1c1370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1374u;
        goto label_1c1374;
    }
    ctx->pc = 0x1C136Cu;
    ctx->pc = 0x1C1370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C136Cu;
            // 0x1c1370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47E0u;
    if (runtime->hasFunction(0x1C47E0u)) {
        auto targetFn = runtime->lookupFunction(0x1C47E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47E0_0x1c47e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C1374u;
label_1c1374:
    // 0x1c1374: 0x0  nop
    ctx->pc = 0x1c1374u;
    // NOP
label_1c1378:
    // 0x1c1378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c137c:
    // 0x1c137c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c137cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1380:
    // 0x1c1380: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c1380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1384:
    // 0x1c1384: 0x3e00008  jr          $ra
label_1c1388:
    if (ctx->pc == 0x1C1388u) {
        ctx->pc = 0x1C1388u;
            // 0x1c1388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C138Cu;
        goto label_1c138c;
    }
    ctx->pc = 0x1C1384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1384u;
            // 0x1c1388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C138Cu;
label_1c138c:
    // 0x1c138c: 0x0  nop
    ctx->pc = 0x1c138cu;
    // NOP
}
