#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AE520
// Address: 0x1ae520 - 0x1ae7e8
void sub_001AE520_0x1ae520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE520_0x1ae520");
#endif

    switch (ctx->pc) {
        case 0x1ae580u: goto label_1ae580;
        case 0x1ae59cu: goto label_1ae59c;
        case 0x1ae5acu: goto label_1ae5ac;
        case 0x1ae5b4u: goto label_1ae5b4;
        case 0x1ae5bcu: goto label_1ae5bc;
        case 0x1ae5d0u: goto label_1ae5d0;
        case 0x1ae5e8u: goto label_1ae5e8;
        case 0x1ae5fcu: goto label_1ae5fc;
        case 0x1ae604u: goto label_1ae604;
        case 0x1ae61cu: goto label_1ae61c;
        case 0x1ae654u: goto label_1ae654;
        case 0x1ae664u: goto label_1ae664;
        case 0x1ae674u: goto label_1ae674;
        case 0x1ae694u: goto label_1ae694;
        case 0x1ae6a0u: goto label_1ae6a0;
        case 0x1ae6b0u: goto label_1ae6b0;
        case 0x1ae6fcu: goto label_1ae6fc;
        case 0x1ae760u: goto label_1ae760;
        case 0x1ae770u: goto label_1ae770;
        case 0x1ae784u: goto label_1ae784;
        case 0x1ae798u: goto label_1ae798;
        case 0x1ae7b0u: goto label_1ae7b0;
        default: break;
    }

    ctx->pc = 0x1ae520u;

    // 0x1ae520: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1ae520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1ae524: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1ae524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1ae528: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ae528u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae52c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1ae52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1ae530: 0x269609f8  addiu       $s6, $s4, 0x9F8
    ctx->pc = 0x1ae530u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 2552));
    // 0x1ae534: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x1ae534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x1ae538: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1ae538u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae53c: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x1ae53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x1ae540: 0x26820950  addiu       $v0, $s4, 0x950
    ctx->pc = 0x1ae540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2384));
    // 0x1ae544: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1ae544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1ae548: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ae548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae54c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1ae54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1ae550: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1ae550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ae554: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1ae554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1ae558: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1ae558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1ae55c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1ae55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x1ae560: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x1ae560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x1ae564: 0x8e932030  lw          $s3, 0x2030($s4)
    ctx->pc = 0x1ae564u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8240)));
    // 0x1ae568: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1ae568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x1ae56c: 0x267e008c  addiu       $fp, $s3, 0x8C
    ctx->pc = 0x1ae56cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
    // 0x1ae570: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1ae570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ae574: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1ae574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae578: 0xc06b9fa  jal         func_1AE7E8
    ctx->pc = 0x1AE578u;
    SET_GPR_U32(ctx, 31, 0x1AE580u);
    ctx->pc = 0x1AE57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE578u;
            // 0x1ae57c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE7E8u;
    if (runtime->hasFunction(0x1AE7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1AE7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE580u; }
        if (ctx->pc != 0x1AE580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE7E8_0x1ae7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE580u; }
        if (ctx->pc != 0x1AE580u) { return; }
    }
    ctx->pc = 0x1AE580u;
label_1ae580:
    // 0x1ae580: 0x5440008c  bnel        $v0, $zero, . + 4 + (0x8C << 2)
    ctx->pc = 0x1AE580u;
    {
        const bool branch_taken_0x1ae580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae580) {
            ctx->pc = 0x1AE584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE580u;
            // 0x1ae584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE7B4u;
            goto label_1ae7b4;
        }
    }
    ctx->pc = 0x1AE588u;
    // 0x1ae588: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x1ae588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1ae58c: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x1ae58cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1ae590: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae594: 0xc06babe  jal         func_1AEAF8
    ctx->pc = 0x1AE594u;
    SET_GPR_U32(ctx, 31, 0x1AE59Cu);
    ctx->pc = 0x1AE598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE594u;
            // 0x1ae598: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEAF8u;
    if (runtime->hasFunction(0x1AEAF8u)) {
        auto targetFn = runtime->lookupFunction(0x1AEAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE59Cu; }
        if (ctx->pc != 0x1AE59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEAF8_0x1aeaf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE59Cu; }
        if (ctx->pc != 0x1AE59Cu) { return; }
    }
    ctx->pc = 0x1AE59Cu;
label_1ae59c:
    // 0x1ae59c: 0x2665108c  addiu       $a1, $s3, 0x108C
    ctx->pc = 0x1ae59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4236));
    // 0x1ae5a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ae5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae5a4: 0xc06bc1e  jal         func_1AF078
    ctx->pc = 0x1AE5A4u;
    SET_GPR_U32(ctx, 31, 0x1AE5ACu);
    ctx->pc = 0x1AE5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5A4u;
            // 0x1ae5a8: 0x8c440054  lw          $a0, 0x54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF078u;
    if (runtime->hasFunction(0x1AF078u)) {
        auto targetFn = runtime->lookupFunction(0x1AF078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5ACu; }
        if (ctx->pc != 0x1AE5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF078_0x1af078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5ACu; }
        if (ctx->pc != 0x1AE5ACu) { return; }
    }
    ctx->pc = 0x1AE5ACu;
label_1ae5ac:
    // 0x1ae5ac: 0xc06bae0  jal         func_1AEB80
    ctx->pc = 0x1AE5ACu;
    SET_GPR_U32(ctx, 31, 0x1AE5B4u);
    ctx->pc = 0x1AE5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5ACu;
            // 0x1ae5b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEB80u;
    if (runtime->hasFunction(0x1AEB80u)) {
        auto targetFn = runtime->lookupFunction(0x1AEB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5B4u; }
        if (ctx->pc != 0x1AE5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEB80_0x1aeb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5B4u; }
        if (ctx->pc != 0x1AE5B4u) { return; }
    }
    ctx->pc = 0x1AE5B4u;
label_1ae5b4:
    // 0x1ae5b4: 0xc06e140  jal         func_1B8500
    ctx->pc = 0x1AE5B4u;
    SET_GPR_U32(ctx, 31, 0x1AE5BCu);
    ctx->pc = 0x1B8500u;
    if (runtime->hasFunction(0x1B8500u)) {
        auto targetFn = runtime->lookupFunction(0x1B8500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5BCu; }
        if (ctx->pc != 0x1AE5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8500_0x1b8500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5BCu; }
        if (ctx->pc != 0x1AE5BCu) { return; }
    }
    ctx->pc = 0x1AE5BCu;
label_1ae5bc:
    // 0x1ae5bc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ae5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae5c8: 0xc06189a  jal         func_186268
    ctx->pc = 0x1AE5C8u;
    SET_GPR_U32(ctx, 31, 0x1AE5D0u);
    ctx->pc = 0x1AE5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5C8u;
            // 0x1ae5cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186268u;
    if (runtime->hasFunction(0x186268u)) {
        auto targetFn = runtime->lookupFunction(0x186268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5D0u; }
        if (ctx->pc != 0x1AE5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186268_0x186268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5D0u; }
        if (ctx->pc != 0x1AE5D0u) { return; }
    }
    ctx->pc = 0x1AE5D0u;
label_1ae5d0:
    // 0x1ae5d0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ae5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5d4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ae5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae5d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ae5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5dc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ae5dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5e0: 0xc06c736  jal         func_1B1CD8
    ctx->pc = 0x1AE5E0u;
    SET_GPR_U32(ctx, 31, 0x1AE5E8u);
    ctx->pc = 0x1AE5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5E0u;
            // 0x1ae5e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1CD8u;
    if (runtime->hasFunction(0x1B1CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B1CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5E8u; }
        if (ctx->pc != 0x1AE5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B1CD8_0x1b1cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5E8u; }
        if (ctx->pc != 0x1AE5E8u) { return; }
    }
    ctx->pc = 0x1AE5E8u;
label_1ae5e8:
    // 0x1ae5e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ae5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae5f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5f4: 0xc06189a  jal         func_186268
    ctx->pc = 0x1AE5F4u;
    SET_GPR_U32(ctx, 31, 0x1AE5FCu);
    ctx->pc = 0x1AE5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5F4u;
            // 0x1ae5f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186268u;
    if (runtime->hasFunction(0x186268u)) {
        auto targetFn = runtime->lookupFunction(0x186268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5FCu; }
        if (ctx->pc != 0x1AE5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186268_0x186268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE5FCu; }
        if (ctx->pc != 0x1AE5FCu) { return; }
    }
    ctx->pc = 0x1AE5FCu;
label_1ae5fc:
    // 0x1ae5fc: 0xc06e140  jal         func_1B8500
    ctx->pc = 0x1AE5FCu;
    SET_GPR_U32(ctx, 31, 0x1AE604u);
    ctx->pc = 0x1AE600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5FCu;
            // 0x1ae600: 0x50a823  subu        $s5, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8500u;
    if (runtime->hasFunction(0x1B8500u)) {
        auto targetFn = runtime->lookupFunction(0x1B8500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE604u; }
        if (ctx->pc != 0x1AE604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8500_0x1b8500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE604u; }
        if (ctx->pc != 0x1AE604u) { return; }
    }
    ctx->pc = 0x1AE604u;
label_1ae604:
    // 0x1ae604: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x1ae604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1ae608: 0x52282f  dsubu       $a1, $v0, $s2
    ctx->pc = 0x1ae608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
    // 0x1ae60c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1ae60cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x1ae610: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x1ae610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x1ae614: 0xc06e180  jal         func_1B8600
    ctx->pc = 0x1AE614u;
    SET_GPR_U32(ctx, 31, 0x1AE61Cu);
    ctx->pc = 0x1AE618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE614u;
            // 0x1ae618: 0x24843730  addiu       $a0, $a0, 0x3730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8600u;
    if (runtime->hasFunction(0x1B8600u)) {
        auto targetFn = runtime->lookupFunction(0x1B8600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE61Cu; }
        if (ctx->pc != 0x1AE61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8600_0x1b8600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE61Cu; }
        if (ctx->pc != 0x1AE61Cu) { return; }
    }
    ctx->pc = 0x1AE61Cu;
label_1ae61c:
    // 0x1ae61c: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x1ae61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1ae620: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ae620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae624: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x1ae624u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x1ae628: 0x8fa8003c  lw          $t0, 0x3C($sp)
    ctx->pc = 0x1ae628u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1ae62c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ae62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae630: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x1ae630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1ae634: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ae634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ae638: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x1ae638u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x1ae63c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae640: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1ae640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1ae644: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ae644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae648: 0xaec30010  sw          $v1, 0x10($s6)
    ctx->pc = 0x1ae648u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 3));
    // 0x1ae64c: 0xc06b212  jal         func_1AC848
    ctx->pc = 0x1AE64Cu;
    SET_GPR_U32(ctx, 31, 0x1AE654u);
    ctx->pc = 0x1AE650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE64Cu;
            // 0x1ae650: 0x34e70f06  ori         $a3, $a3, 0xF06 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3846);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC848u;
    if (runtime->hasFunction(0x1AC848u)) {
        auto targetFn = runtime->lookupFunction(0x1AC848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE654u; }
        if (ctx->pc != 0x1AE654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC848_0x1ac848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE654u; }
        if (ctx->pc != 0x1AE654u) { return; }
    }
    ctx->pc = 0x1AE654u;
label_1ae654:
    // 0x1ae654: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae658: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae65c: 0xc06b1e8  jal         func_1AC7A0
    ctx->pc = 0x1AE65Cu;
    SET_GPR_U32(ctx, 31, 0x1AE664u);
    ctx->pc = 0x1AE660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE65Cu;
            // 0x1ae660: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7A0u;
    if (runtime->hasFunction(0x1AC7A0u)) {
        auto targetFn = runtime->lookupFunction(0x1AC7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE664u; }
        if (ctx->pc != 0x1AE664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC7A0_0x1ac7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE664u; }
        if (ctx->pc != 0x1AE664u) { return; }
    }
    ctx->pc = 0x1AE664u;
label_1ae664:
    // 0x1ae664: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE664u;
    {
        const bool branch_taken_0x1ae664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae664) {
            ctx->pc = 0x1AE680u;
            goto label_1ae680;
        }
    }
    ctx->pc = 0x1AE66Cu;
    // 0x1ae66c: 0xc06c0fa  jal         func_1B03E8
    ctx->pc = 0x1AE66Cu;
    SET_GPR_U32(ctx, 31, 0x1AE674u);
    ctx->pc = 0x1AE670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE66Cu;
            // 0x1ae670: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B03E8u;
    if (runtime->hasFunction(0x1B03E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B03E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE674u; }
        if (ctx->pc != 0x1AE674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03E8_0x1b03e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE674u; }
        if (ctx->pc != 0x1AE674u) { return; }
    }
    ctx->pc = 0x1AE674u;
label_1ae674:
    // 0x1ae674: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1AE674u;
    {
        const bool branch_taken_0x1ae674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE674u;
            // 0x1ae678: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae674) {
            ctx->pc = 0x1AE7B4u;
            goto label_1ae7b4;
        }
    }
    ctx->pc = 0x1AE67Cu;
    // 0x1ae67c: 0x0  nop
    ctx->pc = 0x1ae67cu;
    // NOP
label_1ae680:
    // 0x1ae680: 0x5aa00047  blezl       $s5, . + 4 + (0x47 << 2)
    ctx->pc = 0x1AE680u;
    {
        const bool branch_taken_0x1ae680 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x1ae680) {
            ctx->pc = 0x1AE684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE680u;
            // 0x1ae684: 0x8e620168  lw          $v0, 0x168($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE7A0u;
            goto label_1ae7a0;
        }
    }
    ctx->pc = 0x1AE688u;
    // 0x1ae688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae68c: 0xc06c0ac  jal         func_1B02B0
    ctx->pc = 0x1AE68Cu;
    SET_GPR_U32(ctx, 31, 0x1AE694u);
    ctx->pc = 0x1AE690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE68Cu;
            // 0x1ae690: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B02B0u;
    if (runtime->hasFunction(0x1B02B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B02B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE694u; }
        if (ctx->pc != 0x1AE694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B02B0_0x1b02b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE694u; }
        if (ctx->pc != 0x1AE694u) { return; }
    }
    ctx->pc = 0x1AE694u;
label_1ae694:
    // 0x1ae694: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae698: 0xc06bb26  jal         func_1AEC98
    ctx->pc = 0x1AE698u;
    SET_GPR_U32(ctx, 31, 0x1AE6A0u);
    ctx->pc = 0x1AE69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE698u;
            // 0x1ae69c: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEC98u;
    if (runtime->hasFunction(0x1AEC98u)) {
        auto targetFn = runtime->lookupFunction(0x1AEC98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6A0u; }
        if (ctx->pc != 0x1AE6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEC98_0x1aec98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6A0u; }
        if (ctx->pc != 0x1AE6A0u) { return; }
    }
    ctx->pc = 0x1AE6A0u;
label_1ae6a0:
    // 0x1ae6a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6a4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1ae6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae6a8: 0xc06bb96  jal         func_1AEE58
    ctx->pc = 0x1AE6A8u;
    SET_GPR_U32(ctx, 31, 0x1AE6B0u);
    ctx->pc = 0x1AE6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6A8u;
            // 0x1ae6ac: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE58u;
    if (runtime->hasFunction(0x1AEE58u)) {
        auto targetFn = runtime->lookupFunction(0x1AEE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6B0u; }
        if (ctx->pc != 0x1AE6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AEE58_0x1aee58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6B0u; }
        if (ctx->pc != 0x1AE6B0u) { return; }
    }
    ctx->pc = 0x1AE6B0u;
label_1ae6b0:
    // 0x1ae6b0: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x1ae6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x1ae6b4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1ae6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae6b8: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x1ae6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1ae6bc: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x1ae6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
    // 0x1ae6c0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1ae6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ae6c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ae6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae6c8: 0x8e640174  lw          $a0, 0x174($s3)
    ctx->pc = 0x1ae6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
    // 0x1ae6cc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ae6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ae6d0: 0x8e660168  lw          $a2, 0x168($s3)
    ctx->pc = 0x1ae6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x1ae6d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ae6d8: 0x97a50040  lhu         $a1, 0x40($sp)
    ctx->pc = 0x1ae6d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae6dc: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1ae6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1ae6e0: 0xa46500e8  sh          $a1, 0xE8($v1)
    ctx->pc = 0x1ae6e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 232), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ae6e4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1ae6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1ae6e8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ae6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ae6ec: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE6ECu;
    {
        const bool branch_taken_0x1ae6ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6ECu;
            // 0x1ae6f0: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6ec) {
            ctx->pc = 0x1AE700u;
            goto label_1ae700;
        }
    }
    ctx->pc = 0x1AE6F4u;
    // 0x1ae6f4: 0xc06b824  jal         func_1AE090
    ctx->pc = 0x1AE6F4u;
    SET_GPR_U32(ctx, 31, 0x1AE6FCu);
    ctx->pc = 0x1AE6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6F4u;
            // 0x1ae6f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE090u;
    if (runtime->hasFunction(0x1AE090u)) {
        auto targetFn = runtime->lookupFunction(0x1AE090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6FCu; }
        if (ctx->pc != 0x1AE6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE090_0x1ae090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6FCu; }
        if (ctx->pc != 0x1AE6FCu) { return; }
    }
    ctx->pc = 0x1AE6FCu;
label_1ae6fc:
    // 0x1ae6fc: 0xae620074  sw          $v0, 0x74($s3)
    ctx->pc = 0x1ae6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 2));
label_1ae700:
    // 0x1ae700: 0x8fc30038  lw          $v1, 0x38($fp)
    ctx->pc = 0x1ae700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 56)));
    // 0x1ae704: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae708: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE708u;
    {
        const bool branch_taken_0x1ae708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ae708) {
            ctx->pc = 0x1AE70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE708u;
            // 0x1ae70c: 0xae600168  sw          $zero, 0x168($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE724u;
            goto label_1ae724;
        }
    }
    ctx->pc = 0x1AE710u;
    // 0x1ae710: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x1ae710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x1ae714: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE714u;
    {
        const bool branch_taken_0x1ae714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae714) {
            ctx->pc = 0x1AE718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE714u;
            // 0x1ae718: 0xae600168  sw          $zero, 0x168($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE724u;
            goto label_1ae724;
        }
    }
    ctx->pc = 0x1AE71Cu;
    // 0x1ae71c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1ae71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae720: 0xae620168  sw          $v0, 0x168($s3)
    ctx->pc = 0x1ae720u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 360), GPR_U32(ctx, 2));
label_1ae724:
    // 0x1ae724: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x1ae724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
    // 0x1ae728: 0xae60016c  sw          $zero, 0x16C($s3)
    ctx->pc = 0x1ae728u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 364), GPR_U32(ctx, 0));
    // 0x1ae72c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AE72Cu;
    {
        const bool branch_taken_0x1ae72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE72Cu;
            // 0x1ae730: 0xae600170  sw          $zero, 0x170($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae72c) {
            ctx->pc = 0x1AE788u;
            goto label_1ae788;
        }
    }
    ctx->pc = 0x1AE734u;
    // 0x1ae734: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x1ae734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1ae738: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae73c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE73Cu;
    {
        const bool branch_taken_0x1ae73c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ae73c) {
            ctx->pc = 0x1AE768u;
            goto label_1ae768;
        }
    }
    ctx->pc = 0x1AE744u;
    // 0x1ae744: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x1ae744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1ae748: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ae74c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ae74cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ae750: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AE750u;
    {
        const bool branch_taken_0x1ae750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae750) {
            ctx->pc = 0x1AE768u;
            goto label_1ae768;
        }
    }
    ctx->pc = 0x1AE758u;
    // 0x1ae758: 0xc06c104  jal         func_1B0410
    ctx->pc = 0x1AE758u;
    SET_GPR_U32(ctx, 31, 0x1AE760u);
    ctx->pc = 0x1AE75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE758u;
            // 0x1ae75c: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0410u;
    if (runtime->hasFunction(0x1B0410u)) {
        auto targetFn = runtime->lookupFunction(0x1B0410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE760u; }
        if (ctx->pc != 0x1AE760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0410_0x1b0410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE760u; }
        if (ctx->pc != 0x1AE760u) { return; }
    }
    ctx->pc = 0x1AE760u;
label_1ae760:
    // 0x1ae760: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE760u;
    {
        const bool branch_taken_0x1ae760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE760u;
            // 0x1ae764: 0x8fa2005c  lw          $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae760) {
            ctx->pc = 0x1AE774u;
            goto label_1ae774;
        }
    }
    ctx->pc = 0x1AE768u;
label_1ae768:
    // 0x1ae768: 0xc06c0fe  jal         func_1B03F8
    ctx->pc = 0x1AE768u;
    SET_GPR_U32(ctx, 31, 0x1AE770u);
    ctx->pc = 0x1AE76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE768u;
            // 0x1ae76c: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B03F8u;
    if (runtime->hasFunction(0x1B03F8u)) {
        auto targetFn = runtime->lookupFunction(0x1B03F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE770u; }
        if (ctx->pc != 0x1AE770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03F8_0x1b03f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE770u; }
        if (ctx->pc != 0x1AE770u) { return; }
    }
    ctx->pc = 0x1AE770u;
label_1ae770:
    // 0x1ae770: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1ae770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1ae774:
    // 0x1ae774: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ae774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae778: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x1ae778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x1ae77c: 0xc065908  jal         func_196420
    ctx->pc = 0x1AE77Cu;
    SET_GPR_U32(ctx, 31, 0x1AE784u);
    ctx->pc = 0x1AE780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE77Cu;
            // 0x1ae780: 0x24450008  addiu       $a1, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196420u;
    if (runtime->hasFunction(0x196420u)) {
        auto targetFn = runtime->lookupFunction(0x196420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE784u; }
        if (ctx->pc != 0x1AE784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196420_0x196420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE784u; }
        if (ctx->pc != 0x1AE784u) { return; }
    }
    ctx->pc = 0x1AE784u;
label_1ae784:
    // 0x1ae784: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x1ae784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_1ae788:
    // 0x1ae788: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x1ae788u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x1ae78c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1ae78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae790: 0xc06ceb6  jal         func_1B3AD8
    ctx->pc = 0x1AE790u;
    SET_GPR_U32(ctx, 31, 0x1AE798u);
    ctx->pc = 0x1AE794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE790u;
            // 0x1ae794: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3AD8u;
    if (runtime->hasFunction(0x1B3AD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B3AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE798u; }
        if (ctx->pc != 0x1AE798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3AD8_0x1b3ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE798u; }
        if (ctx->pc != 0x1AE798u) { return; }
    }
    ctx->pc = 0x1AE798u;
label_1ae798:
    // 0x1ae798: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE798u;
    {
        const bool branch_taken_0x1ae798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE798u;
            // 0x1ae79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae798) {
            ctx->pc = 0x1AE7B4u;
            goto label_1ae7b4;
        }
    }
    ctx->pc = 0x1AE7A0u;
label_1ae7a0:
    // 0x1ae7a0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE7A0u;
    {
        const bool branch_taken_0x1ae7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7a0) {
            ctx->pc = 0x1AE7A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7A0u;
            // 0x1ae7a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE7B4u;
            goto label_1ae7b4;
        }
    }
    ctx->pc = 0x1AE7A8u;
    // 0x1ae7a8: 0xc06c0fa  jal         func_1B03E8
    ctx->pc = 0x1AE7A8u;
    SET_GPR_U32(ctx, 31, 0x1AE7B0u);
    ctx->pc = 0x1AE7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7A8u;
            // 0x1ae7ac: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B03E8u;
    if (runtime->hasFunction(0x1B03E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B03E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7B0u; }
        if (ctx->pc != 0x1AE7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03E8_0x1b03e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7B0u; }
        if (ctx->pc != 0x1AE7B0u) { return; }
    }
    ctx->pc = 0x1AE7B0u;
label_1ae7b0:
    // 0x1ae7b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ae7b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae7b4:
    // 0x1ae7b4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1ae7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae7b8: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1ae7b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ae7bc: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1ae7bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae7c0: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1ae7c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ae7c4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1ae7c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ae7c8: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1ae7c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1ae7cc: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1ae7ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ae7d0: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x1ae7d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1ae7d4: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x1ae7d4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ae7d8: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x1ae7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1ae7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7DCu;
            // 0x1ae7e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE7E4u;
    // 0x1ae7e4: 0x0  nop
    ctx->pc = 0x1ae7e4u;
    // NOP
}
