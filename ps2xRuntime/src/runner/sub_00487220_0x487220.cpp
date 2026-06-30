#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00487220
// Address: 0x487220 - 0x487550
void sub_00487220_0x487220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487220_0x487220");
#endif

    switch (ctx->pc) {
        case 0x487250u: goto label_487250;
        case 0x4872a4u: goto label_4872a4;
        case 0x487320u: goto label_487320;
        case 0x487340u: goto label_487340;
        case 0x487354u: goto label_487354;
        case 0x487360u: goto label_487360;
        case 0x487364u: goto label_487364;
        case 0x487388u: goto label_487388;
        case 0x487410u: goto label_487410;
        case 0x487418u: goto label_487418;
        case 0x4874dcu: goto label_4874dc;
        case 0x4874f8u: goto label_4874f8;
        case 0x487534u: goto label_487534;
        default: break;
    }

    ctx->pc = 0x487220u;

    // 0x487220: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x487220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x487224: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x487224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x487228: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x487228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x48722c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x487230: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x487230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x487234: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x487234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x487238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48723c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48723cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x487240: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x487240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487244: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x487244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487248: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x487248u;
    SET_GPR_U32(ctx, 31, 0x487250u);
    ctx->pc = 0x48724Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487248u;
            // 0x48724c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487250u; }
        if (ctx->pc != 0x487250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487250u; }
        if (ctx->pc != 0x487250u) { return; }
    }
    ctx->pc = 0x487250u;
label_487250:
    // 0x487250: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x487250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x487254: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x487254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x487258: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x487258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x48725c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x48725cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x487260: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x487260u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x487264: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x487264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x487268: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x487268u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x48726c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48726cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x487270: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x487270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x487274: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x487274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x487278: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x487278u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x48727c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x48727cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x487280: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x487280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x487284: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x487284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x487288: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x487288u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x48728c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x48728cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x487290: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x487290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x487294: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x487294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x487298: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x487298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x48729c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x48729Cu;
    SET_GPR_U32(ctx, 31, 0x4872A4u);
    ctx->pc = 0x4872A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48729Cu;
            // 0x4872a0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4872A4u; }
        if (ctx->pc != 0x4872A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4872A4u; }
        if (ctx->pc != 0x4872A4u) { return; }
    }
    ctx->pc = 0x4872A4u;
label_4872a4:
    // 0x4872a4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4872a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4872a8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4872a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x4872ac: 0x2463f620  addiu       $v1, $v1, -0x9E0
    ctx->pc = 0x4872acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964768));
    // 0x4872b0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4872b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x4872b4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4872b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x4872b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4872b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4872bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4872bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4872c0: 0xac447ba8  sw          $a0, 0x7BA8($v0)
    ctx->pc = 0x4872c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31656), GPR_U32(ctx, 4));
    // 0x4872c4: 0x2463f630  addiu       $v1, $v1, -0x9D0
    ctx->pc = 0x4872c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964784));
    // 0x4872c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4872c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4872cc: 0x2442f668  addiu       $v0, $v0, -0x998
    ctx->pc = 0x4872ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964840));
    // 0x4872d0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4872d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x4872d4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4872d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x4872d8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4872d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x4872dc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4872dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x4872e0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4872e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x4872e4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4872e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x4872e8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4872e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x4872ec: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4872ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x4872f0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4872f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x4872f4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4872f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x4872f8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4872f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x4872fc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4872fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x487300: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x487300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x487304: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x487304u;
    {
        const bool branch_taken_0x487304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x487304) {
            ctx->pc = 0x487398u;
            goto label_487398;
        }
    }
    ctx->pc = 0x48730Cu;
    // 0x48730c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x48730cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x487310: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x487310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x487314: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x487314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x487318: 0xc040138  jal         func_1004E0
    ctx->pc = 0x487318u;
    SET_GPR_U32(ctx, 31, 0x487320u);
    ctx->pc = 0x48731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487318u;
            // 0x48731c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487320u; }
        if (ctx->pc != 0x487320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487320u; }
        if (ctx->pc != 0x487320u) { return; }
    }
    ctx->pc = 0x487320u;
label_487320:
    // 0x487320: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x487320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x487324: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x487324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x487328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x487328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48732c: 0x24a573c0  addiu       $a1, $a1, 0x73C0
    ctx->pc = 0x48732cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29632));
    // 0x487330: 0x24c66b90  addiu       $a2, $a2, 0x6B90
    ctx->pc = 0x487330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27536));
    // 0x487334: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x487334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x487338: 0xc040840  jal         func_102100
    ctx->pc = 0x487338u;
    SET_GPR_U32(ctx, 31, 0x487340u);
    ctx->pc = 0x48733Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487338u;
            // 0x48733c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487340u; }
        if (ctx->pc != 0x487340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487340u; }
        if (ctx->pc != 0x487340u) { return; }
    }
    ctx->pc = 0x487340u;
label_487340:
    // 0x487340: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x487340u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x487344: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x487344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487348: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x487348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x48734c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x48734Cu;
    SET_GPR_U32(ctx, 31, 0x487354u);
    ctx->pc = 0x487350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48734Cu;
            // 0x487350: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487354u; }
        if (ctx->pc != 0x487354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487354u; }
        if (ctx->pc != 0x487354u) { return; }
    }
    ctx->pc = 0x487354u;
label_487354:
    // 0x487354: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x487354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x487358: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x487358u;
    SET_GPR_U32(ctx, 31, 0x487360u);
    ctx->pc = 0x48735Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487358u;
            // 0x48735c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487360u; }
        if (ctx->pc != 0x487360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487360u; }
        if (ctx->pc != 0x487360u) { return; }
    }
    ctx->pc = 0x487360u;
label_487360:
    // 0x487360: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x487360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_487364:
    // 0x487364: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x487364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x487368: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x487368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x48736c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x48736cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x487370: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x487370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x487374: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x487374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x487378: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x487378u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x48737c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48737cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x487380: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x487380u;
    SET_GPR_U32(ctx, 31, 0x487388u);
    ctx->pc = 0x487384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487380u;
            // 0x487384: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487388u; }
        if (ctx->pc != 0x487388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487388u; }
        if (ctx->pc != 0x487388u) { return; }
    }
    ctx->pc = 0x487388u;
label_487388:
    // 0x487388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x487388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x48738c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x48738cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x487390: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x487390u;
    {
        const bool branch_taken_0x487390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x487394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487390u;
            // 0x487394: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487390) {
            ctx->pc = 0x487364u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_487364;
        }
    }
    ctx->pc = 0x487398u;
label_487398:
    // 0x487398: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x487398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48739c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x48739cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4873a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4873a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4873a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4873a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4873a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4873a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4873ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4873acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4873b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4873B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4873B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4873B0u;
            // 0x4873b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4873B8u;
    // 0x4873b8: 0x0  nop
    ctx->pc = 0x4873b8u;
    // NOP
    // 0x4873bc: 0x0  nop
    ctx->pc = 0x4873bcu;
    // NOP
    // 0x4873c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4873c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4873c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4873c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4873c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4873c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4873cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4873ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4873d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4873d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4873d4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4873d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x4873d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4873d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x4873dc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4873dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4873e0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x4873e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x4873e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4873e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4873e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4873e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4873ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4873ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4873f0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x4873f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x4873f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4873f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x4873f8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x4873f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x4873fc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4873fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x487400: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x487400u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x487404: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x487404u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x487408: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x487408u;
    SET_GPR_U32(ctx, 31, 0x487410u);
    ctx->pc = 0x48740Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487408u;
            // 0x48740c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487410u; }
        if (ctx->pc != 0x487410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487410u; }
        if (ctx->pc != 0x487410u) { return; }
    }
    ctx->pc = 0x487410u;
label_487410:
    // 0x487410: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x487410u;
    SET_GPR_U32(ctx, 31, 0x487418u);
    ctx->pc = 0x487414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x487410u;
            // 0x487414: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487418u; }
        if (ctx->pc != 0x487418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487418u; }
        if (ctx->pc != 0x487418u) { return; }
    }
    ctx->pc = 0x487418u;
label_487418:
    // 0x487418: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x487418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x48741c: 0x3c090064  lui         $t1, 0x64
    ctx->pc = 0x48741cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)100 << 16));
    // 0x487420: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x487420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x487424: 0x3c08006b  lui         $t0, 0x6B
    ctx->pc = 0x487424u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)107 << 16));
    // 0x487428: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x487428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x48742c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x48742cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x487430: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x487430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x487434: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x487434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x487438: 0x8c4a0788  lw          $t2, 0x788($v0)
    ctx->pc = 0x487438u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x48743c: 0x2529c560  addiu       $t1, $t1, -0x3AA0
    ctx->pc = 0x48743cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952288));
    // 0x487440: 0x2508f5e0  addiu       $t0, $t0, -0xA20
    ctx->pc = 0x487440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294964704));
    // 0x487444: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x487444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x487448: 0x24c6cfe0  addiu       $a2, $a2, -0x3020
    ctx->pc = 0x487448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954976));
    // 0x48744c: 0x24a524a0  addiu       $a1, $a1, 0x24A0
    ctx->pc = 0x48744cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9376));
    // 0x487450: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x487450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x487454: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x487454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
    // 0x487458: 0x91290000  lbu         $t1, 0x0($t1)
    ctx->pc = 0x487458u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x48745c: 0x2463f6d0  addiu       $v1, $v1, -0x930
    ctx->pc = 0x48745cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964944));
    // 0x487460: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x487460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x487464: 0xa209004d  sb          $t1, 0x4D($s0)
    ctx->pc = 0x487464u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 9));
    // 0x487468: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x487468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x48746c: 0xae070050  sw          $a3, 0x50($s0)
    ctx->pc = 0x48746cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 7));
    // 0x487470: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x487470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x487474: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x487474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x487478: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x487478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x48747c: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x48747cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
    // 0x487480: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x487480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x487484: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x487484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
    // 0x487488: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x487488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x48748c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x48748cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x487490: 0xae100068  sw          $s0, 0x68($s0)
    ctx->pc = 0x487490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 16));
    // 0x487494: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x487494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x487498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x487498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48749c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48749cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4874a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4874A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4874A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4874A0u;
            // 0x4874a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4874A8u;
    // 0x4874a8: 0x0  nop
    ctx->pc = 0x4874a8u;
    // NOP
    // 0x4874ac: 0x0  nop
    ctx->pc = 0x4874acu;
    // NOP
    // 0x4874b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4874b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4874b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4874b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4874b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4874b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4874bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4874bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4874c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4874c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4874c4: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4874C4u;
    {
        const bool branch_taken_0x4874c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4874C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4874C4u;
            // 0x4874c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4874c4) {
            ctx->pc = 0x487534u;
            goto label_487534;
        }
    }
    ctx->pc = 0x4874CCu;
    // 0x4874cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4874ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4874d0: 0x2442f6d0  addiu       $v0, $v0, -0x930
    ctx->pc = 0x4874d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964944));
    // 0x4874d4: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x4874D4u;
    SET_GPR_U32(ctx, 31, 0x4874DCu);
    ctx->pc = 0x4874D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4874D4u;
            // 0x4874d8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4874DCu; }
        if (ctx->pc != 0x4874DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4874DCu; }
        if (ctx->pc != 0x4874DCu) { return; }
    }
    ctx->pc = 0x4874DCu;
label_4874dc:
    // 0x4874dc: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4874DCu;
    {
        const bool branch_taken_0x4874dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4874dc) {
            ctx->pc = 0x4874E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4874DCu;
            // 0x4874e0: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487520u;
            goto label_487520;
        }
    }
    ctx->pc = 0x4874E4u;
    // 0x4874e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4874e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4874e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4874e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4874ec: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x4874ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x4874f0: 0xc0d37dc  jal         func_34DF70
    ctx->pc = 0x4874F0u;
    SET_GPR_U32(ctx, 31, 0x4874F8u);
    ctx->pc = 0x4874F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4874F0u;
            // 0x4874f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4874F8u; }
        if (ctx->pc != 0x4874F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4874F8u; }
        if (ctx->pc != 0x4874F8u) { return; }
    }
    ctx->pc = 0x4874F8u;
label_4874f8:
    // 0x4874f8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4874F8u;
    {
        const bool branch_taken_0x4874f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4874f8) {
            ctx->pc = 0x48751Cu;
            goto label_48751c;
        }
    }
    ctx->pc = 0x487500u;
    // 0x487500: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x487500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x487504: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x487504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
    // 0x487508: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x487508u;
    {
        const bool branch_taken_0x487508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x48750Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487508u;
            // 0x48750c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487508) {
            ctx->pc = 0x48751Cu;
            goto label_48751c;
        }
    }
    ctx->pc = 0x487510u;
    // 0x487510: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x487510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x487514: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x487514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x487518: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x487518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_48751c:
    // 0x48751c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x48751cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_487520:
    // 0x487520: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x487520u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x487524: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x487524u;
    {
        const bool branch_taken_0x487524 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x487524) {
            ctx->pc = 0x487528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x487524u;
            // 0x487528: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x487538u;
            goto label_487538;
        }
    }
    ctx->pc = 0x48752Cu;
    // 0x48752c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x48752Cu;
    SET_GPR_U32(ctx, 31, 0x487534u);
    ctx->pc = 0x487530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48752Cu;
            // 0x487530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487534u; }
        if (ctx->pc != 0x487534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x487534u; }
        if (ctx->pc != 0x487534u) { return; }
    }
    ctx->pc = 0x487534u;
label_487534:
    // 0x487534: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x487534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_487538:
    // 0x487538: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x487538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48753c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48753cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x487540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487544: 0x3e00008  jr          $ra
    ctx->pc = 0x487544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x487544u;
            // 0x487548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48754Cu;
    // 0x48754c: 0x0  nop
    ctx->pc = 0x48754cu;
    // NOP
}
