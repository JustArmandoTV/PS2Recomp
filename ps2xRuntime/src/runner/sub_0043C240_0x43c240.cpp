#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043C240
// Address: 0x43c240 - 0x43c440
void sub_0043C240_0x43c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043C240_0x43c240");
#endif

    switch (ctx->pc) {
        case 0x43c270u: goto label_43c270;
        case 0x43c2c4u: goto label_43c2c4;
        case 0x43c340u: goto label_43c340;
        case 0x43c360u: goto label_43c360;
        case 0x43c374u: goto label_43c374;
        case 0x43c380u: goto label_43c380;
        case 0x43c384u: goto label_43c384;
        case 0x43c3a8u: goto label_43c3a8;
        case 0x43c418u: goto label_43c418;
        case 0x43c428u: goto label_43c428;
        default: break;
    }

    ctx->pc = 0x43c240u;

    // 0x43c240: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x43c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x43c244: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x43c244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x43c248: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x43c248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x43c24c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43c24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x43c250: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43c250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x43c254: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x43c254u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43c258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43c25c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43c25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43c260: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x43c260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c264: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x43c264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c268: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x43C268u;
    SET_GPR_U32(ctx, 31, 0x43C270u);
    ctx->pc = 0x43C26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C268u;
            // 0x43c26c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C270u; }
        if (ctx->pc != 0x43C270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C270u; }
        if (ctx->pc != 0x43C270u) { return; }
    }
    ctx->pc = 0x43C270u;
label_43c270:
    // 0x43c270: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x43c270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x43c274: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43c274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x43c278: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x43c278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x43c27c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x43c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x43c280: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x43c280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x43c284: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x43c284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x43c288: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x43c288u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x43c28c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43c290: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x43c290u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x43c294: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43c294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x43c298: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x43c298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x43c29c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x43c29cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x43c2a0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x43c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x43c2a4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x43c2a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x43c2a8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x43c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x43c2ac: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x43c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x43c2b0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x43c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x43c2b4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x43c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x43c2b8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x43c2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x43c2bc: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x43C2BCu;
    SET_GPR_U32(ctx, 31, 0x43C2C4u);
    ctx->pc = 0x43C2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C2BCu;
            // 0x43c2c0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C2C4u; }
        if (ctx->pc != 0x43C2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C2C4u; }
        if (ctx->pc != 0x43C2C4u) { return; }
    }
    ctx->pc = 0x43C2C4u;
label_43c2c4:
    // 0x43c2c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43c2c8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x43c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x43c2cc: 0x2463cff8  addiu       $v1, $v1, -0x3008
    ctx->pc = 0x43c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955000));
    // 0x43c2d0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x43c2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x43c2d4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x43c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x43c2d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x43c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x43c2dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x43c2e0: 0xac440d08  sw          $a0, 0xD08($v0)
    ctx->pc = 0x43c2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3336), GPR_U32(ctx, 4));
    // 0x43c2e4: 0x2463d010  addiu       $v1, $v1, -0x2FF0
    ctx->pc = 0x43c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955024));
    // 0x43c2e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x43c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x43c2ec: 0x2442d048  addiu       $v0, $v0, -0x2FB8
    ctx->pc = 0x43c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955080));
    // 0x43c2f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x43c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x43c2f4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x43c2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x43c2f8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x43c2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x43c2fc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x43c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x43c300: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x43c300u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x43c304: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x43c304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x43c308: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x43c308u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x43c30c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x43c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x43c310: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x43c310u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x43c314: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x43c314u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x43c318: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x43c318u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x43c31c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x43c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x43c320: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x43c320u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x43c324: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x43C324u;
    {
        const bool branch_taken_0x43c324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x43c324) {
            ctx->pc = 0x43C3B8u;
            goto label_43c3b8;
        }
    }
    ctx->pc = 0x43C32Cu;
    // 0x43c32c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x43c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x43c330: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x43c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x43c334: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x43c334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x43c338: 0xc040138  jal         func_1004E0
    ctx->pc = 0x43C338u;
    SET_GPR_U32(ctx, 31, 0x43C340u);
    ctx->pc = 0x43C33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C338u;
            // 0x43c33c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C340u; }
        if (ctx->pc != 0x43C340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C340u; }
        if (ctx->pc != 0x43C340u) { return; }
    }
    ctx->pc = 0x43C340u;
label_43c340:
    // 0x43c340: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x43c340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x43c344: 0x3c060044  lui         $a2, 0x44
    ctx->pc = 0x43c344u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)68 << 16));
    // 0x43c348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43c348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c34c: 0x24a5d7d0  addiu       $a1, $a1, -0x2830
    ctx->pc = 0x43c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957008));
    // 0x43c350: 0x24c6bac0  addiu       $a2, $a2, -0x4540
    ctx->pc = 0x43c350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949568));
    // 0x43c354: 0x24070140  addiu       $a3, $zero, 0x140
    ctx->pc = 0x43c354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x43c358: 0xc040840  jal         func_102100
    ctx->pc = 0x43C358u;
    SET_GPR_U32(ctx, 31, 0x43C360u);
    ctx->pc = 0x43C35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C358u;
            // 0x43c35c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C360u; }
        if (ctx->pc != 0x43C360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C360u; }
        if (ctx->pc != 0x43C360u) { return; }
    }
    ctx->pc = 0x43C360u;
label_43c360:
    // 0x43c360: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x43c360u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x43c364: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43c364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c368: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x43c368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x43c36c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x43C36Cu;
    SET_GPR_U32(ctx, 31, 0x43C374u);
    ctx->pc = 0x43C370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C36Cu;
            // 0x43c370: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C374u; }
        if (ctx->pc != 0x43C374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C374u; }
        if (ctx->pc != 0x43C374u) { return; }
    }
    ctx->pc = 0x43C374u;
label_43c374:
    // 0x43c374: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x43c374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x43c378: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x43C378u;
    SET_GPR_U32(ctx, 31, 0x43C380u);
    ctx->pc = 0x43C37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C378u;
            // 0x43c37c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C380u; }
        if (ctx->pc != 0x43C380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C380u; }
        if (ctx->pc != 0x43C380u) { return; }
    }
    ctx->pc = 0x43C380u;
label_43c380:
    // 0x43c380: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x43c380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43c384:
    // 0x43c384: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x43c384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x43c388: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x43c388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x43c38c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x43c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x43c390: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43c390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x43c394: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x43c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x43c398: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x43c398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x43c39c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x43c39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x43c3a0: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x43C3A0u;
    SET_GPR_U32(ctx, 31, 0x43C3A8u);
    ctx->pc = 0x43C3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C3A0u;
            // 0x43c3a4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C3A8u; }
        if (ctx->pc != 0x43C3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C3A8u; }
        if (ctx->pc != 0x43C3A8u) { return; }
    }
    ctx->pc = 0x43C3A8u;
label_43c3a8:
    // 0x43c3a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x43c3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x43c3ac: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x43c3acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x43c3b0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x43C3B0u;
    {
        const bool branch_taken_0x43c3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43C3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C3B0u;
            // 0x43c3b4: 0x26520140  addiu       $s2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43c3b0) {
            ctx->pc = 0x43C384u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43c384;
        }
    }
    ctx->pc = 0x43C3B8u;
label_43c3b8:
    // 0x43c3b8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x43c3b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c3bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x43c3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43c3c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x43c3c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43c3c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43c3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43c3c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43c3c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43c3cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43c3ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43c3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x43C3D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C3D0u;
            // 0x43c3d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43C3D8u;
    // 0x43c3d8: 0x0  nop
    ctx->pc = 0x43c3d8u;
    // NOP
    // 0x43c3dc: 0x0  nop
    ctx->pc = 0x43c3dcu;
    // NOP
    // 0x43c3e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43c3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x43c3e4: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x43c3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x43c3e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43c3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43c3ec: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x43c3ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x43c3f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43c3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43c3f4: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x43c3f4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x43c3f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43c3f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43c3fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x43c3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x43c400: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x43c400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x43c404: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x43c404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x43c408: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x43c408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x43c40c: 0xc60e0018  lwc1        $f14, 0x18($s0)
    ctx->pc = 0x43c40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x43c410: 0xc0bafb8  jal         func_2EBEE0
    ctx->pc = 0x43C410u;
    SET_GPR_U32(ctx, 31, 0x43C418u);
    ctx->pc = 0x43C414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C410u;
            // 0x43c414: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C418u; }
        if (ctx->pc != 0x43C418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C418u; }
        if (ctx->pc != 0x43C418u) { return; }
    }
    ctx->pc = 0x43C418u;
label_43c418:
    // 0x43c418: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x43c418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x43c41c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x43c41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x43c420: 0xc122d2c  jal         func_48B4B0
    ctx->pc = 0x43C420u;
    SET_GPR_U32(ctx, 31, 0x43C428u);
    ctx->pc = 0x43C424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43C420u;
            // 0x43c424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C428u; }
        if (ctx->pc != 0x43C428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43C428u; }
        if (ctx->pc != 0x43C428u) { return; }
    }
    ctx->pc = 0x43C428u;
label_43c428:
    // 0x43c428: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43c428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43c42c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43c42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43c430: 0x3e00008  jr          $ra
    ctx->pc = 0x43C430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43C434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43C430u;
            // 0x43c434: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43C438u;
    // 0x43c438: 0x0  nop
    ctx->pc = 0x43c438u;
    // NOP
    // 0x43c43c: 0x0  nop
    ctx->pc = 0x43c43cu;
    // NOP
}
