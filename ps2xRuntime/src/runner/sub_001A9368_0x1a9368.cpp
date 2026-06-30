#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9368
// Address: 0x1a9368 - 0x1a94e0
void sub_001A9368_0x1a9368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9368_0x1a9368");
#endif

    switch (ctx->pc) {
        case 0x1a9368u: goto label_1a9368;
        case 0x1a936cu: goto label_1a936c;
        case 0x1a9370u: goto label_1a9370;
        case 0x1a9374u: goto label_1a9374;
        case 0x1a9378u: goto label_1a9378;
        case 0x1a937cu: goto label_1a937c;
        case 0x1a9380u: goto label_1a9380;
        case 0x1a9384u: goto label_1a9384;
        case 0x1a9388u: goto label_1a9388;
        case 0x1a938cu: goto label_1a938c;
        case 0x1a9390u: goto label_1a9390;
        case 0x1a9394u: goto label_1a9394;
        case 0x1a9398u: goto label_1a9398;
        case 0x1a939cu: goto label_1a939c;
        case 0x1a93a0u: goto label_1a93a0;
        case 0x1a93a4u: goto label_1a93a4;
        case 0x1a93a8u: goto label_1a93a8;
        case 0x1a93acu: goto label_1a93ac;
        case 0x1a93b0u: goto label_1a93b0;
        case 0x1a93b4u: goto label_1a93b4;
        case 0x1a93b8u: goto label_1a93b8;
        case 0x1a93bcu: goto label_1a93bc;
        case 0x1a93c0u: goto label_1a93c0;
        case 0x1a93c4u: goto label_1a93c4;
        case 0x1a93c8u: goto label_1a93c8;
        case 0x1a93ccu: goto label_1a93cc;
        case 0x1a93d0u: goto label_1a93d0;
        case 0x1a93d4u: goto label_1a93d4;
        case 0x1a93d8u: goto label_1a93d8;
        case 0x1a93dcu: goto label_1a93dc;
        case 0x1a93e0u: goto label_1a93e0;
        case 0x1a93e4u: goto label_1a93e4;
        case 0x1a93e8u: goto label_1a93e8;
        case 0x1a93ecu: goto label_1a93ec;
        case 0x1a93f0u: goto label_1a93f0;
        case 0x1a93f4u: goto label_1a93f4;
        case 0x1a93f8u: goto label_1a93f8;
        case 0x1a93fcu: goto label_1a93fc;
        case 0x1a9400u: goto label_1a9400;
        case 0x1a9404u: goto label_1a9404;
        case 0x1a9408u: goto label_1a9408;
        case 0x1a940cu: goto label_1a940c;
        case 0x1a9410u: goto label_1a9410;
        case 0x1a9414u: goto label_1a9414;
        case 0x1a9418u: goto label_1a9418;
        case 0x1a941cu: goto label_1a941c;
        case 0x1a9420u: goto label_1a9420;
        case 0x1a9424u: goto label_1a9424;
        case 0x1a9428u: goto label_1a9428;
        case 0x1a942cu: goto label_1a942c;
        case 0x1a9430u: goto label_1a9430;
        case 0x1a9434u: goto label_1a9434;
        case 0x1a9438u: goto label_1a9438;
        case 0x1a943cu: goto label_1a943c;
        case 0x1a9440u: goto label_1a9440;
        case 0x1a9444u: goto label_1a9444;
        case 0x1a9448u: goto label_1a9448;
        case 0x1a944cu: goto label_1a944c;
        case 0x1a9450u: goto label_1a9450;
        case 0x1a9454u: goto label_1a9454;
        case 0x1a9458u: goto label_1a9458;
        case 0x1a945cu: goto label_1a945c;
        case 0x1a9460u: goto label_1a9460;
        case 0x1a9464u: goto label_1a9464;
        case 0x1a9468u: goto label_1a9468;
        case 0x1a946cu: goto label_1a946c;
        case 0x1a9470u: goto label_1a9470;
        case 0x1a9474u: goto label_1a9474;
        case 0x1a9478u: goto label_1a9478;
        case 0x1a947cu: goto label_1a947c;
        case 0x1a9480u: goto label_1a9480;
        case 0x1a9484u: goto label_1a9484;
        case 0x1a9488u: goto label_1a9488;
        case 0x1a948cu: goto label_1a948c;
        case 0x1a9490u: goto label_1a9490;
        case 0x1a9494u: goto label_1a9494;
        case 0x1a9498u: goto label_1a9498;
        case 0x1a949cu: goto label_1a949c;
        case 0x1a94a0u: goto label_1a94a0;
        case 0x1a94a4u: goto label_1a94a4;
        case 0x1a94a8u: goto label_1a94a8;
        case 0x1a94acu: goto label_1a94ac;
        case 0x1a94b0u: goto label_1a94b0;
        case 0x1a94b4u: goto label_1a94b4;
        case 0x1a94b8u: goto label_1a94b8;
        case 0x1a94bcu: goto label_1a94bc;
        case 0x1a94c0u: goto label_1a94c0;
        case 0x1a94c4u: goto label_1a94c4;
        case 0x1a94c8u: goto label_1a94c8;
        case 0x1a94ccu: goto label_1a94cc;
        case 0x1a94d0u: goto label_1a94d0;
        case 0x1a94d4u: goto label_1a94d4;
        case 0x1a94d8u: goto label_1a94d8;
        case 0x1a94dcu: goto label_1a94dc;
        default: break;
    }

    ctx->pc = 0x1a9368u;

label_1a9368:
    // 0x1a9368: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a9368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a936c:
    // 0x1a936c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1a936cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_1a9370:
    // 0x1a9370: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1a9370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a9374:
    // 0x1a9374: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1a9374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1a9378:
    // 0x1a9378: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a9378u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a937c:
    // 0x1a937c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a9380:
    // 0x1a9380: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a9380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9384:
    // 0x1a9384: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1a9384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_1a9388:
    // 0x1a9388: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1a9388u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a938c:
    // 0x1a938c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a938cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1a9390:
    // 0x1a9390: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a9390u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9394:
    // 0x1a9394: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1a9394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_1a9398:
    // 0x1a9398: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1a9398u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a939c:
    // 0x1a939c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1a939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1a93a0:
    // 0x1a93a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a93a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a93a4:
    // 0x1a93a4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1a93a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1a93a8:
    // 0x1a93a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a93a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a93ac:
    // 0x1a93ac: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1a93acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1a93b0:
    // 0x1a93b0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1a93b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1a93b4:
    // 0x1a93b4: 0x8e511fec  lw          $s1, 0x1FEC($s2)
    ctx->pc = 0x1a93b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8172)));
label_1a93b8:
    // 0x1a93b8: 0xc0649e6  jal         func_192798
label_1a93bc:
    if (ctx->pc == 0x1A93BCu) {
        ctx->pc = 0x1A93BCu;
            // 0x1a93bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1A93C0u;
        goto label_1a93c0;
    }
    ctx->pc = 0x1A93B8u;
    SET_GPR_U32(ctx, 31, 0x1A93C0u);
    ctx->pc = 0x1A93BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93B8u;
            // 0x1a93bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192798u;
    if (runtime->hasFunction(0x192798u)) {
        auto targetFn = runtime->lookupFunction(0x192798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93C0u; }
        if (ctx->pc != 0x1A93C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192798_0x192798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93C0u; }
        if (ctx->pc != 0x1A93C0u) { return; }
    }
    ctx->pc = 0x1A93C0u;
label_1a93c0:
    // 0x1a93c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a93c4:
    if (ctx->pc == 0x1A93C4u) {
        ctx->pc = 0x1A93C4u;
            // 0x1a93c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A93C8u;
        goto label_1a93c8;
    }
    ctx->pc = 0x1A93C0u;
    {
        const bool branch_taken_0x1a93c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A93C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93C0u;
            // 0x1a93c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93c0) {
            ctx->pc = 0x1A93D8u;
            goto label_1a93d8;
        }
    }
    ctx->pc = 0x1A93C8u;
label_1a93c8:
    // 0x1a93c8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a93c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1a93cc:
    // 0x1a93cc: 0xc06a1ac  jal         func_1A86B0
label_1a93d0:
    if (ctx->pc == 0x1A93D0u) {
        ctx->pc = 0x1A93D0u;
            // 0x1a93d0: 0x34a50d06  ori         $a1, $a1, 0xD06 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3334);
        ctx->pc = 0x1A93D4u;
        goto label_1a93d4;
    }
    ctx->pc = 0x1A93CCu;
    SET_GPR_U32(ctx, 31, 0x1A93D4u);
    ctx->pc = 0x1A93D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93CCu;
            // 0x1a93d0: 0x34a50d06  ori         $a1, $a1, 0xD06 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3334);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93D4u; }
        if (ctx->pc != 0x1A93D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93D4u; }
        if (ctx->pc != 0x1A93D4u) { return; }
    }
    ctx->pc = 0x1A93D4u;
label_1a93d4:
    // 0x1a93d4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a93d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a93d8:
    // 0x1a93d8: 0x8fb00024  lw          $s0, 0x24($sp)
    ctx->pc = 0x1a93d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1a93dc:
    // 0x1a93dc: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x1a93dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1a93e0:
    // 0x1a93e0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1a93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a93e4:
    // 0x1a93e4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1a93e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a93e8:
    // 0x1a93e8: 0x6010007  bgez        $s0, . + 4 + (0x7 << 2)
label_1a93ec:
    if (ctx->pc == 0x1A93ECu) {
        ctx->pc = 0x1A93ECu;
            // 0x1a93ec: 0xdfa80000  ld          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1A93F0u;
        goto label_1a93f0;
    }
    ctx->pc = 0x1A93E8u;
    {
        const bool branch_taken_0x1a93e8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1A93ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93E8u;
            // 0x1a93ec: 0xdfa80000  ld          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93e8) {
            ctx->pc = 0x1A9408u;
            goto label_1a9408;
        }
    }
    ctx->pc = 0x1A93F0u;
label_1a93f0:
    // 0x1a93f0: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a93f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1a93f4:
    // 0x1a93f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a93f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a93f8:
    // 0x1a93f8: 0xc06a1ac  jal         func_1A86B0
label_1a93fc:
    if (ctx->pc == 0x1A93FCu) {
        ctx->pc = 0x1A93FCu;
            // 0x1a93fc: 0x34a50d0e  ori         $a1, $a1, 0xD0E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3342);
        ctx->pc = 0x1A9400u;
        goto label_1a9400;
    }
    ctx->pc = 0x1A93F8u;
    SET_GPR_U32(ctx, 31, 0x1A9400u);
    ctx->pc = 0x1A93FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93F8u;
            // 0x1a93fc: 0x34a50d0e  ori         $a1, $a1, 0xD0E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3342);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9400u; }
        if (ctx->pc != 0x1A9400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9400u; }
        if (ctx->pc != 0x1A9400u) { return; }
    }
    ctx->pc = 0x1A9400u;
label_1a9400:
    // 0x1a9400: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1a9404:
    if (ctx->pc == 0x1A9404u) {
        ctx->pc = 0x1A9404u;
            // 0x1a9404: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1A9408u;
        goto label_1a9408;
    }
    ctx->pc = 0x1A9400u;
    {
        const bool branch_taken_0x1a9400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9400u;
            // 0x1a9404: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9400) {
            ctx->pc = 0x1A94B8u;
            goto label_1a94b8;
        }
    }
    ctx->pc = 0x1A9408u;
label_1a9408:
    // 0x1a9408: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_1a940c:
    if (ctx->pc == 0x1A940Cu) {
        ctx->pc = 0x1A940Cu;
            // 0x1a940c: 0x2b0102a  slt         $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x1A9410u;
        goto label_1a9410;
    }
    ctx->pc = 0x1A9408u;
    {
        const bool branch_taken_0x1a9408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9408) {
            ctx->pc = 0x1A940Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9408u;
            // 0x1a940c: 0x2b0102a  slt         $v0, $s5, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9428u;
            goto label_1a9428;
        }
    }
    ctx->pc = 0x1A9410u;
label_1a9410:
    // 0x1a9410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9414:
    // 0x1a9414: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x1a9414u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_1a9418:
    // 0x1a9418: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a9418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1a941c:
    // 0x1a941c: 0x10000025  b           . + 4 + (0x25 << 2)
label_1a9420:
    if (ctx->pc == 0x1A9420u) {
        ctx->pc = 0x1A9420u;
            // 0x1a9420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9424u;
        goto label_1a9424;
    }
    ctx->pc = 0x1A941Cu;
    {
        const bool branch_taken_0x1a941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A941Cu;
            // 0x1a9420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a941c) {
            ctx->pc = 0x1A94B4u;
            goto label_1a94b4;
        }
    }
    ctx->pc = 0x1A9424u;
label_1a9424:
    // 0x1a9424: 0x0  nop
    ctx->pc = 0x1a9424u;
    // NOP
label_1a9428:
    // 0x1a9428: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1a942c:
    if (ctx->pc == 0x1A942Cu) {
        ctx->pc = 0x1A942Cu;
            // 0x1a942c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->pc = 0x1A9430u;
        goto label_1a9430;
    }
    ctx->pc = 0x1A9428u;
    {
        const bool branch_taken_0x1a9428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9428) {
            ctx->pc = 0x1A942Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9428u;
            // 0x1a942c: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9448u;
            goto label_1a9448;
        }
    }
    ctx->pc = 0x1A9430u;
label_1a9430:
    // 0x1a9430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9434:
    // 0x1a9434: 0xc06a804  jal         func_1AA010
label_1a9438:
    if (ctx->pc == 0x1A9438u) {
        ctx->pc = 0x1A9438u;
            // 0x1a9438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A943Cu;
        goto label_1a943c;
    }
    ctx->pc = 0x1A9434u;
    SET_GPR_U32(ctx, 31, 0x1A943Cu);
    ctx->pc = 0x1A9438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9434u;
            // 0x1a9438: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA010u;
    if (runtime->hasFunction(0x1AA010u)) {
        auto targetFn = runtime->lookupFunction(0x1AA010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A943Cu; }
        if (ctx->pc != 0x1A943Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA010_0x1aa010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A943Cu; }
        if (ctx->pc != 0x1A943Cu) { return; }
    }
    ctx->pc = 0x1A943Cu;
label_1a943c:
    // 0x1a943c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1a9440:
    if (ctx->pc == 0x1A9440u) {
        ctx->pc = 0x1A9440u;
            // 0x1a9440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9444u;
        goto label_1a9444;
    }
    ctx->pc = 0x1A943Cu;
    {
        const bool branch_taken_0x1a943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A943Cu;
            // 0x1a9440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a943c) {
            ctx->pc = 0x1A94B4u;
            goto label_1a94b4;
        }
    }
    ctx->pc = 0x1A9444u;
label_1a9444:
    // 0x1a9444: 0x0  nop
    ctx->pc = 0x1a9444u;
    // NOP
label_1a9448:
    // 0x1a9448: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a9448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a944c:
    // 0x1a944c: 0x8c44fd50  lw          $a0, -0x2B0($v0)
    ctx->pc = 0x1a944cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966608)));
label_1a9450:
    // 0x1a9450: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_1a9454:
    if (ctx->pc == 0x1A9454u) {
        ctx->pc = 0x1A9454u;
            // 0x1a9454: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x1A9458u;
        goto label_1a9458;
    }
    ctx->pc = 0x1A9450u;
    {
        const bool branch_taken_0x1a9450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9450) {
            ctx->pc = 0x1A9454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9450u;
            // 0x1a9454: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9478u;
            goto label_1a9478;
        }
    }
    ctx->pc = 0x1A9458u;
label_1a9458:
    // 0x1a9458: 0x8e260154  lw          $a2, 0x154($s1)
    ctx->pc = 0x1a9458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
label_1a945c:
    // 0x1a945c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1a945cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a9460:
    // 0x1a9460: 0x8e250150  lw          $a1, 0x150($s1)
    ctx->pc = 0x1a9460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_1a9464:
    // 0x1a9464: 0xc06a538  jal         func_1A94E0
label_1a9468:
    if (ctx->pc == 0x1A9468u) {
        ctx->pc = 0x1A9468u;
            // 0x1a9468: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A946Cu;
        goto label_1a946c;
    }
    ctx->pc = 0x1A9464u;
    SET_GPR_U32(ctx, 31, 0x1A946Cu);
    ctx->pc = 0x1A9468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9464u;
            // 0x1a9468: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A94E0u;
    if (runtime->hasFunction(0x1A94E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A94E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A946Cu; }
        if (ctx->pc != 0x1A946Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A94E0_0x1a94e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A946Cu; }
        if (ctx->pc != 0x1A946Cu) { return; }
    }
    ctx->pc = 0x1A946Cu;
label_1a946c:
    // 0x1a946c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a9470:
    if (ctx->pc == 0x1A9470u) {
        ctx->pc = 0x1A9470u;
            // 0x1a9470: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1A9474u;
        goto label_1a9474;
    }
    ctx->pc = 0x1A946Cu;
    {
        const bool branch_taken_0x1a946c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A946Cu;
            // 0x1a9470: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a946c) {
            ctx->pc = 0x1A9498u;
            goto label_1a9498;
        }
    }
    ctx->pc = 0x1A9474u;
label_1a9474:
    // 0x1a9474: 0x0  nop
    ctx->pc = 0x1a9474u;
    // NOP
label_1a9478:
    // 0x1a9478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a947c:
    // 0x1a947c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1a947cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1a9480:
    // 0x1a9480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9484:
    // 0x1a9484: 0x8c42aba0  lw          $v0, -0x5460($v0)
    ctx->pc = 0x1a9484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945696)));
label_1a9488:
    // 0x1a9488: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1a9488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a948c:
    // 0x1a948c: 0x40f809  jalr        $v0
label_1a9490:
    if (ctx->pc == 0x1A9490u) {
        ctx->pc = 0x1A9490u;
            // 0x1a9490: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9494u;
        goto label_1a9494;
    }
    ctx->pc = 0x1A948Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9494u);
        ctx->pc = 0x1A9490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A948Cu;
            // 0x1a9490: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9494u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9494u; }
            if (ctx->pc != 0x1A9494u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9494u;
label_1a9494:
    // 0x1a9494: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1a9494u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1a9498:
    // 0x1a9498: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x1a9498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a949c:
    // 0x1a949c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_1a94a0:
    if (ctx->pc == 0x1A94A0u) {
        ctx->pc = 0x1A94A0u;
            // 0x1a94a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A94A4u;
        goto label_1a94a4;
    }
    ctx->pc = 0x1A949Cu;
    {
        const bool branch_taken_0x1a949c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A94A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A949Cu;
            // 0x1a94a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a949c) {
            ctx->pc = 0x1A94B0u;
            goto label_1a94b0;
        }
    }
    ctx->pc = 0x1A94A4u;
label_1a94a4:
    // 0x1a94a4: 0x55020002  bnel        $t0, $v0, . + 4 + (0x2 << 2)
label_1a94a8:
    if (ctx->pc == 0x1A94A8u) {
        ctx->pc = 0x1A94A8u;
            // 0x1a94a8: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A94ACu;
        goto label_1a94ac;
    }
    ctx->pc = 0x1A94A4u;
    {
        const bool branch_taken_0x1a94a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a94a4) {
            ctx->pc = 0x1A94A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94A4u;
            // 0x1a94a8: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A94B0u;
            goto label_1a94b0;
        }
    }
    ctx->pc = 0x1A94ACu;
label_1a94ac:
    // 0x1a94ac: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x1a94acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_1a94b0:
    // 0x1a94b0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x1a94b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a94b4:
    // 0x1a94b4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1a94b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a94b8:
    // 0x1a94b8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1a94b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a94bc:
    // 0x1a94bc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a94bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a94c0:
    // 0x1a94c0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1a94c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1a94c4:
    // 0x1a94c4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1a94c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a94c8:
    // 0x1a94c8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1a94c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1a94cc:
    // 0x1a94cc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a94ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a94d0:
    // 0x1a94d0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1a94d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1a94d4:
    // 0x1a94d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a94d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a94d8:
    // 0x1a94d8: 0x3e00008  jr          $ra
label_1a94dc:
    if (ctx->pc == 0x1A94DCu) {
        ctx->pc = 0x1A94DCu;
            // 0x1a94dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1A94E0u;
        goto label_fallthrough_0x1a94d8;
    }
    ctx->pc = 0x1A94D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A94DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94D8u;
            // 0x1a94dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a94d8:
    ctx->pc = 0x1A94E0u;
}
