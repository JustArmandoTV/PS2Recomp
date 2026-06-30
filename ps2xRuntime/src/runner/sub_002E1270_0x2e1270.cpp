#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E1270
// Address: 0x2e1270 - 0x2e1600
void sub_002E1270_0x2e1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1270_0x2e1270");
#endif

    switch (ctx->pc) {
        case 0x2e12f4u: goto label_2e12f4;
        case 0x2e1304u: goto label_2e1304;
        case 0x2e1318u: goto label_2e1318;
        case 0x2e1330u: goto label_2e1330;
        case 0x2e1340u: goto label_2e1340;
        case 0x2e1374u: goto label_2e1374;
        case 0x2e1380u: goto label_2e1380;
        case 0x2e138cu: goto label_2e138c;
        case 0x2e13a0u: goto label_2e13a0;
        case 0x2e13d4u: goto label_2e13d4;
        case 0x2e13e0u: goto label_2e13e0;
        case 0x2e1408u: goto label_2e1408;
        case 0x2e1414u: goto label_2e1414;
        case 0x2e142cu: goto label_2e142c;
        case 0x2e1460u: goto label_2e1460;
        case 0x2e1480u: goto label_2e1480;
        case 0x2e1490u: goto label_2e1490;
        case 0x2e14acu: goto label_2e14ac;
        case 0x2e14b8u: goto label_2e14b8;
        case 0x2e14c4u: goto label_2e14c4;
        case 0x2e1500u: goto label_2e1500;
        case 0x2e151cu: goto label_2e151c;
        case 0x2e1554u: goto label_2e1554;
        case 0x2e1560u: goto label_2e1560;
        case 0x2e157cu: goto label_2e157c;
        default: break;
    }

    ctx->pc = 0x2e1270u;

    // 0x2e1270: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2e1270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2e1274: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e1274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e1278: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e1278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2e127c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e1280: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e1280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e1284: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e1284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e1288: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e1288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e128c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e128cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e1290: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e1290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e1294: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e1294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1298: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e1298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e129c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e129cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e12a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e12a4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2e12a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12a8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e12a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e12ac: 0xafa600cc  sw          $a2, 0xCC($sp)
    ctx->pc = 0x2e12acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
    // 0x2e12b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e12b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e12b4: 0xafa800c0  sw          $t0, 0xC0($sp)
    ctx->pc = 0x2e12b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 8));
    // 0x2e12b8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2e12b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2e12bc: 0x10a000c0  beqz        $a1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2E12BCu;
    {
        const bool branch_taken_0x2e12bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E12C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E12BCu;
            // 0x2e12c0: 0xa4800056  sh          $zero, 0x56($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e12bc) {
            ctx->pc = 0x2E15C0u;
            goto label_2e15c0;
        }
    }
    ctx->pc = 0x2E12C4u;
    // 0x2e12c4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2e12c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e12c8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e12cc: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x2e12ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x2e12d0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2e12d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e12d4: 0x344323f0  ori         $v1, $v0, 0x23F0
    ctx->pc = 0x2e12d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9200);
    // 0x2e12d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e12dc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e12dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e12e0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2e12e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2e12e4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e12e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e12e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e12e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e12ec: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2E12ECu;
    SET_GPR_U32(ctx, 31, 0x2E12F4u);
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E12F4u; }
        if (ctx->pc != 0x2E12F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E12F4u; }
        if (ctx->pc != 0x2E12F4u) { return; }
    }
    ctx->pc = 0x2E12F4u;
label_2e12f4:
    // 0x2e12f4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e12f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2e12f8: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e12f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e12fc: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x2E12FCu;
    SET_GPR_U32(ctx, 31, 0x2E1304u);
    ctx->pc = 0x2E1300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E12FCu;
            // 0x2e1300: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1304u; }
        if (ctx->pc != 0x2E1304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1304u; }
        if (ctx->pc != 0x2E1304u) { return; }
    }
    ctx->pc = 0x2E1304u;
label_2e1304:
    // 0x2e1304: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2e1304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e1308: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e1308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e130c: 0xe7b4010c  swc1        $f20, 0x10C($sp)
    ctx->pc = 0x2e130cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x2e1310: 0xc0527c0  jal         func_149F00
    ctx->pc = 0x2E1310u;
    SET_GPR_U32(ctx, 31, 0x2E1318u);
    ctx->pc = 0x2E1314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1310u;
            // 0x2e1314: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149F00u;
    if (runtime->hasFunction(0x149F00u)) {
        auto targetFn = runtime->lookupFunction(0x149F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1318u; }
        if (ctx->pc != 0x2E1318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149F00_0x149f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1318u; }
        if (ctx->pc != 0x2E1318u) { return; }
    }
    ctx->pc = 0x2E1318u;
label_2e1318:
    // 0x2e1318: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2E1318u;
    {
        const bool branch_taken_0x2e1318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1318) {
            ctx->pc = 0x2E15C0u;
            goto label_2e15c0;
        }
    }
    ctx->pc = 0x2E1320u;
    // 0x2e1320: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2e1320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e1324: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e1324u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1328: 0x8c5e0008  lw          $fp, 0x8($v0)
    ctx->pc = 0x2e1328u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e132c: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2e132cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2e1330:
    // 0x2e1330: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2e1330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2e1334: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2e1334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e1338: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E1338u;
    SET_GPR_U32(ctx, 31, 0x2E1340u);
    ctx->pc = 0x2E133Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1338u;
            // 0x2e133c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1340u; }
        if (ctx->pc != 0x2E1340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1340u; }
        if (ctx->pc != 0x2E1340u) { return; }
    }
    ctx->pc = 0x2E1340u;
label_2e1340:
    // 0x2e1340: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e1340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1344: 0x12220028  beq         $s1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E1344u;
    {
        const bool branch_taken_0x2e1344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1344) {
            ctx->pc = 0x2E13E8u;
            goto label_2e13e8;
        }
    }
    ctx->pc = 0x2E134Cu;
    // 0x2e134c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e134cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1350: 0x12220025  beq         $s1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2E1350u;
    {
        const bool branch_taken_0x2e1350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1350) {
            ctx->pc = 0x2E13E8u;
            goto label_2e13e8;
        }
    }
    ctx->pc = 0x2E1358u;
    // 0x2e1358: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1358u;
    {
        const bool branch_taken_0x2e1358 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1358) {
            ctx->pc = 0x2E1368u;
            goto label_2e1368;
        }
    }
    ctx->pc = 0x2E1360u;
    // 0x2e1360: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2E1360u;
    {
        const bool branch_taken_0x2e1360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1360) {
            ctx->pc = 0x2E1420u;
            goto label_2e1420;
        }
    }
    ctx->pc = 0x2E1368u;
label_2e1368:
    // 0x2e1368: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e1368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e136c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E136Cu;
    SET_GPR_U32(ctx, 31, 0x2E1374u);
    ctx->pc = 0x2E1370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E136Cu;
            // 0x2e1370: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1374u; }
        if (ctx->pc != 0x2E1374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1374u; }
        if (ctx->pc != 0x2E1374u) { return; }
    }
    ctx->pc = 0x2E1374u;
label_2e1374:
    // 0x2e1374: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2e1374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e1378: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E1378u;
    SET_GPR_U32(ctx, 31, 0x2E1380u);
    ctx->pc = 0x2E137Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1378u;
            // 0x2e137c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1380u; }
        if (ctx->pc != 0x2E1380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1380u; }
        if (ctx->pc != 0x2E1380u) { return; }
    }
    ctx->pc = 0x2E1380u;
label_2e1380:
    // 0x2e1380: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e1380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e1384: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2E1384u;
    SET_GPR_U32(ctx, 31, 0x2E138Cu);
    ctx->pc = 0x2E1388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1384u;
            // 0x2e1388: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E138Cu; }
        if (ctx->pc != 0x2E138Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E138Cu; }
        if (ctx->pc != 0x2E138Cu) { return; }
    }
    ctx->pc = 0x2E138Cu;
label_2e138c:
    // 0x2e138c: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x2e138cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x2e1390: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2e1390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2e1394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e1394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1398: 0xc047714  jal         func_11DC50
    ctx->pc = 0x2E1398u;
    SET_GPR_U32(ctx, 31, 0x2E13A0u);
    ctx->pc = 0x2E139Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1398u;
            // 0x2e139c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E13A0u; }
        if (ctx->pc != 0x2E13A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E13A0u; }
        if (ctx->pc != 0x2E13A0u) { return; }
    }
    ctx->pc = 0x2E13A0u;
label_2e13a0:
    // 0x2e13a0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e13a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e13a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E13A4u;
    {
        const bool branch_taken_0x2e13a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E13A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13A4u;
            // 0x2e13a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13a4) {
            ctx->pc = 0x2E13B0u;
            goto label_2e13b0;
        }
    }
    ctx->pc = 0x2E13ACu;
    // 0x2e13ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e13acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e13b0:
    // 0x2e13b0: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2e13b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e13b4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e13b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e13b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e13bc: 0x541823  subu        $v1, $v0, $s4
    ctx->pc = 0x2e13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e13c0: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2e13c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2e13c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e13c8: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e13c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e13cc: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E13CCu;
    SET_GPR_U32(ctx, 31, 0x2E13D4u);
    ctx->pc = 0x2E13D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13CCu;
            // 0x2e13d0: 0x2032821  addu        $a1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E13D4u; }
        if (ctx->pc != 0x2E13D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E13D4u; }
        if (ctx->pc != 0x2E13D4u) { return; }
    }
    ctx->pc = 0x2E13D4u;
label_2e13d4:
    // 0x2e13d4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e13d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e13d8: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E13D8u;
    SET_GPR_U32(ctx, 31, 0x2E13E0u);
    ctx->pc = 0x2E13DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13D8u;
            // 0x2e13dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E13E0u; }
        if (ctx->pc != 0x2E13E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E13E0u; }
        if (ctx->pc != 0x2E13E0u) { return; }
    }
    ctx->pc = 0x2E13E0u;
label_2e13e0:
    // 0x2e13e0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E13E0u;
    {
        const bool branch_taken_0x2e13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E13E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E13E0u;
            // 0x2e13e4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e13e0) {
            ctx->pc = 0x2E1430u;
            goto label_2e1430;
        }
    }
    ctx->pc = 0x2E13E8u;
label_2e13e8:
    // 0x2e13e8: 0x2634ffff  addiu       $s4, $s1, -0x1
    ctx->pc = 0x2e13e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e13ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e13f0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e13f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e13f4: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2e13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e13f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e13f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e13fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e13fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1400: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E1400u;
    SET_GPR_U32(ctx, 31, 0x2E1408u);
    ctx->pc = 0x2E1404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1400u;
            // 0x2e1404: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1408u; }
        if (ctx->pc != 0x2E1408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1408u; }
        if (ctx->pc != 0x2E1408u) { return; }
    }
    ctx->pc = 0x2E1408u;
label_2e1408:
    // 0x2e1408: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e1408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e140c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E140Cu;
    SET_GPR_U32(ctx, 31, 0x2E1414u);
    ctx->pc = 0x2E1410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E140Cu;
            // 0x2e1410: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1414u; }
        if (ctx->pc != 0x2E1414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1414u; }
        if (ctx->pc != 0x2E1414u) { return; }
    }
    ctx->pc = 0x2E1414u;
label_2e1414:
    // 0x2e1414: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1414u;
    {
        const bool branch_taken_0x2e1414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1414u;
            // 0x2e1418: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1414) {
            ctx->pc = 0x2E1430u;
            goto label_2e1430;
        }
    }
    ctx->pc = 0x2E141Cu;
    // 0x2e141c: 0x0  nop
    ctx->pc = 0x2e141cu;
    // NOP
label_2e1420:
    // 0x2e1420: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e1420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e1424: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E1424u;
    SET_GPR_U32(ctx, 31, 0x2E142Cu);
    ctx->pc = 0x2E1428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1424u;
            // 0x2e1428: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E142Cu; }
        if (ctx->pc != 0x2E142Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E142Cu; }
        if (ctx->pc != 0x2E142Cu) { return; }
    }
    ctx->pc = 0x2E142Cu;
label_2e142c:
    // 0x2e142c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2e142cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1430:
    // 0x2e1430: 0x3a820002  xori        $v0, $s4, 0x2
    ctx->pc = 0x2e1430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)2);
    // 0x2e1434: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2e1434u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1438: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e1438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e143c: 0x3a820001  xori        $v0, $s4, 0x1
    ctx->pc = 0x2e143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
    // 0x2e1440: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e1440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e1444: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e1444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1448: 0x203a821  addu        $s5, $s0, $v1
    ctx->pc = 0x2e1448u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e144c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e144cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1450: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e1450u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1454: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x2e1454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e1458: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2E1458u;
    SET_GPR_U32(ctx, 31, 0x2E1460u);
    ctx->pc = 0x2E145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1458u;
            // 0x2e145c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1460u; }
        if (ctx->pc != 0x2E1460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1460u; }
        if (ctx->pc != 0x2E1460u) { return; }
    }
    ctx->pc = 0x2E1460u;
label_2e1460:
    // 0x2e1460: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e1460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1464: 0x0  nop
    ctx->pc = 0x2e1464u;
    // NOP
    // 0x2e1468: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2e1468u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e146c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2E146Cu;
    {
        const bool branch_taken_0x2e146c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e146c) {
            ctx->pc = 0x2E1470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E146Cu;
            // 0x2e1470: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1488u;
            goto label_2e1488;
        }
    }
    ctx->pc = 0x2E1474u;
    // 0x2e1474: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e1474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e1478: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2E1478u;
    SET_GPR_U32(ctx, 31, 0x2E1480u);
    ctx->pc = 0x2E147Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1478u;
            // 0x2e147c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1480u; }
        if (ctx->pc != 0x2E1480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1480u; }
        if (ctx->pc != 0x2E1480u) { return; }
    }
    ctx->pc = 0x2E1480u;
label_2e1480:
    // 0x2e1480: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1480u;
    {
        const bool branch_taken_0x2e1480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1480) {
            ctx->pc = 0x2E1490u;
            goto label_2e1490;
        }
    }
    ctx->pc = 0x2E1488u;
label_2e1488:
    // 0x2e1488: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2E1488u;
    SET_GPR_U32(ctx, 31, 0x2E1490u);
    ctx->pc = 0x2E148Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1488u;
            // 0x2e148c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1490u; }
        if (ctx->pc != 0x2E1490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1490u; }
        if (ctx->pc != 0x2E1490u) { return; }
    }
    ctx->pc = 0x2E1490u;
label_2e1490:
    // 0x2e1490: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2e1490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1494: 0x45010042  bc1t        . + 4 + (0x42 << 2)
    ctx->pc = 0x2E1494u;
    {
        const bool branch_taken_0x2e1494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1494) {
            ctx->pc = 0x2E15A0u;
            goto label_2e15a0;
        }
    }
    ctx->pc = 0x2E149Cu;
    // 0x2e149c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e149cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2e14a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e14a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e14a4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E14A4u;
    SET_GPR_U32(ctx, 31, 0x2E14ACu);
    ctx->pc = 0x2E14A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14A4u;
            // 0x2e14a8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14ACu; }
        if (ctx->pc != 0x2E14ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14ACu; }
        if (ctx->pc != 0x2E14ACu) { return; }
    }
    ctx->pc = 0x2E14ACu;
label_2e14ac:
    // 0x2e14ac: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2e14acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2e14b0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E14B0u;
    SET_GPR_U32(ctx, 31, 0x2E14B8u);
    ctx->pc = 0x2E14B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14B0u;
            // 0x2e14b4: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14B8u; }
        if (ctx->pc != 0x2E14B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14B8u; }
        if (ctx->pc != 0x2E14B8u) { return; }
    }
    ctx->pc = 0x2E14B8u;
label_2e14b8:
    // 0x2e14b8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e14b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e14bc: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E14BCu;
    SET_GPR_U32(ctx, 31, 0x2E14C4u);
    ctx->pc = 0x2E14C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E14BCu;
            // 0x2e14c0: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14C4u; }
        if (ctx->pc != 0x2E14C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E14C4u; }
        if (ctx->pc != 0x2E14C4u) { return; }
    }
    ctx->pc = 0x2E14C4u;
label_2e14c4:
    // 0x2e14c4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2e14c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e14c8: 0xae620040  sw          $v0, 0x40($s3)
    ctx->pc = 0x2e14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 2));
    // 0x2e14cc: 0x3a820002  xori        $v0, $s4, 0x2
    ctx->pc = 0x2e14ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)2);
    // 0x2e14d0: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x2e14d0u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e14d4: 0x2d71021  addu        $v0, $s6, $s7
    ctx->pc = 0x2e14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x2e14d8: 0xa6620052  sh          $v0, 0x52($s3)
    ctx->pc = 0x2e14d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e14dc: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2e14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e14e0: 0xa6620054  sh          $v0, 0x54($s3)
    ctx->pc = 0x2e14e0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e14e4: 0xa6740056  sh          $s4, 0x56($s3)
    ctx->pc = 0x2e14e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 20));
    // 0x2e14e8: 0xa6740050  sh          $s4, 0x50($s3)
    ctx->pc = 0x2e14e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 20));
    // 0x2e14ec: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2e14ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e14f0: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x2e14f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e14f4: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x2e14f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e14f8: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x2e14f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
    // 0x2e14fc: 0x15a100  sll         $s4, $s5, 4
    ctx->pc = 0x2e14fcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_2e1500:
    // 0x2e1500: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2e1500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1504: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x2e1504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e1508: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e150c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e150cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e1510: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e1510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e1514: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E1514u;
    SET_GPR_U32(ctx, 31, 0x2E151Cu);
    ctx->pc = 0x2E1518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1514u;
            // 0x2e1518: 0x742021  addu        $a0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E151Cu; }
        if (ctx->pc != 0x2E151Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E151Cu; }
        if (ctx->pc != 0x2E151Cu) { return; }
    }
    ctx->pc = 0x2E151Cu;
label_2e151c:
    // 0x2e151c: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x2e151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1520: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2e1520u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e1524: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x2e1524u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x2e1528: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e1528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e152c: 0x16a0fff4  bnez        $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E152Cu;
    {
        const bool branch_taken_0x2e152c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E152Cu;
            // 0x2e1530: 0xe6600048  swc1        $f0, 0x48($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e152c) {
            ctx->pc = 0x2E1500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1500;
        }
    }
    ctx->pc = 0x2E1534u;
    // 0x2e1534: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2e1534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1538: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2e1538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e153c: 0x96630052  lhu         $v1, 0x52($s3)
    ctx->pc = 0x2e153cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
    // 0x2e1540: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e1540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e1544: 0x77a023  subu        $s4, $v1, $s7
    ctx->pc = 0x2e1544u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2e1548: 0x14a900  sll         $s5, $s4, 4
    ctx->pc = 0x2e1548u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2e154c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E154Cu;
    SET_GPR_U32(ctx, 31, 0x2E1554u);
    ctx->pc = 0x2E1550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E154Cu;
            // 0x2e1550: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1554u; }
        if (ctx->pc != 0x2E1554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1554u; }
        if (ctx->pc != 0x2E1554u) { return; }
    }
    ctx->pc = 0x2E1554u;
label_2e1554:
    // 0x2e1554: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2E1554u;
    {
        const bool branch_taken_0x2e1554 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1554u;
            // 0x2e1558: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1554) {
            ctx->pc = 0x2E1590u;
            goto label_2e1590;
        }
    }
    ctx->pc = 0x2E155Cu;
    // 0x2e155c: 0x0  nop
    ctx->pc = 0x2e155cu;
    // NOP
label_2e1560:
    // 0x2e1560: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2e1560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1564: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x2e1564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e1568: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e156c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e156cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e1570: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e1570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e1574: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E1574u;
    SET_GPR_U32(ctx, 31, 0x2E157Cu);
    ctx->pc = 0x2E1578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1574u;
            // 0x2e1578: 0x752021  addu        $a0, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E157Cu; }
        if (ctx->pc != 0x2E157Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E157Cu; }
        if (ctx->pc != 0x2E157Cu) { return; }
    }
    ctx->pc = 0x2E157Cu;
label_2e157c:
    // 0x2e157c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2e157cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2e1580: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e1580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e1584: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E1584u;
    {
        const bool branch_taken_0x2e1584 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1584u;
            // 0x2e1588: 0x26b5fff0  addiu       $s5, $s5, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1584) {
            ctx->pc = 0x2E1560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1560;
        }
    }
    ctx->pc = 0x2E158Cu;
    // 0x2e158c: 0x0  nop
    ctx->pc = 0x2e158cu;
    // NOP
label_2e1590:
    // 0x2e1590: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x2e1590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1594: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x2e1594u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
    // 0x2e1598: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x2e1598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x2e159c: 0x0  nop
    ctx->pc = 0x2e159cu;
    // NOP
label_2e15a0:
    // 0x2e15a0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2e15a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e15a4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2e15a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2e15a8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e15a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e15ac: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x2e15acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2e15b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e15b4: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x2e15b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e15b8: 0x1460ff5d  bnez        $v1, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x2E15B8u;
    {
        const bool branch_taken_0x2e15b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E15BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E15B8u;
            // 0x2e15bc: 0x27de0010  addiu       $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e15b8) {
            ctx->pc = 0x2E1330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1330;
        }
    }
    ctx->pc = 0x2E15C0u;
label_2e15c0:
    // 0x2e15c0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e15c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e15c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e15c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e15c8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e15c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e15cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e15ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e15d0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e15d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e15d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e15d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e15d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e15d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e15dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e15dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e15e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e15e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e15e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e15e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e15e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e15e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e15ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e15ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e15f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E15F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E15F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E15F0u;
            // 0x2e15f4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E15F8u;
    // 0x2e15f8: 0x0  nop
    ctx->pc = 0x2e15f8u;
    // NOP
    // 0x2e15fc: 0x0  nop
    ctx->pc = 0x2e15fcu;
    // NOP
}
