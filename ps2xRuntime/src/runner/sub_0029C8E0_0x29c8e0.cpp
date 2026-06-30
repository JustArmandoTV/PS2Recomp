#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029C8E0
// Address: 0x29c8e0 - 0x29c970
void sub_0029C8E0_0x29c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C8E0_0x29c8e0");
#endif

    switch (ctx->pc) {
        case 0x29c8e0u: goto label_29c8e0;
        case 0x29c8e4u: goto label_29c8e4;
        case 0x29c8e8u: goto label_29c8e8;
        case 0x29c8ecu: goto label_29c8ec;
        case 0x29c8f0u: goto label_29c8f0;
        case 0x29c8f4u: goto label_29c8f4;
        case 0x29c8f8u: goto label_29c8f8;
        case 0x29c8fcu: goto label_29c8fc;
        case 0x29c900u: goto label_29c900;
        case 0x29c904u: goto label_29c904;
        case 0x29c908u: goto label_29c908;
        case 0x29c90cu: goto label_29c90c;
        case 0x29c910u: goto label_29c910;
        case 0x29c914u: goto label_29c914;
        case 0x29c918u: goto label_29c918;
        case 0x29c91cu: goto label_29c91c;
        case 0x29c920u: goto label_29c920;
        case 0x29c924u: goto label_29c924;
        case 0x29c928u: goto label_29c928;
        case 0x29c92cu: goto label_29c92c;
        case 0x29c930u: goto label_29c930;
        case 0x29c934u: goto label_29c934;
        case 0x29c938u: goto label_29c938;
        case 0x29c93cu: goto label_29c93c;
        case 0x29c940u: goto label_29c940;
        case 0x29c944u: goto label_29c944;
        case 0x29c948u: goto label_29c948;
        case 0x29c94cu: goto label_29c94c;
        case 0x29c950u: goto label_29c950;
        case 0x29c954u: goto label_29c954;
        case 0x29c958u: goto label_29c958;
        case 0x29c95cu: goto label_29c95c;
        case 0x29c960u: goto label_29c960;
        case 0x29c964u: goto label_29c964;
        case 0x29c968u: goto label_29c968;
        case 0x29c96cu: goto label_29c96c;
        default: break;
    }

    ctx->pc = 0x29c8e0u;

label_29c8e0:
    // 0x29c8e0: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x29c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_29c8e4:
    // 0x29c8e4: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x29c8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_29c8e8:
    // 0x29c8e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29c8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29c8ec:
    // 0x29c8ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x29c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29c8f0:
    // 0x29c8f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c8f4:
    // 0x29c8f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29c8f8:
    // 0x29c8f8: 0xc0a7214  jal         func_29C850
label_29c8fc:
    if (ctx->pc == 0x29C8FCu) {
        ctx->pc = 0x29C8FCu;
            // 0x29c8fc: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x29C900u;
        goto label_29c900;
    }
    ctx->pc = 0x29C8F8u;
    SET_GPR_U32(ctx, 31, 0x29C900u);
    ctx->pc = 0x29C8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C8F8u;
            // 0x29c8fc: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (runtime->hasFunction(0x29C850u)) {
        auto targetFn = runtime->lookupFunction(0x29C850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C900u; }
        if (ctx->pc != 0x29C900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C850_0x29c850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C900u; }
        if (ctx->pc != 0x29C900u) { return; }
    }
    ctx->pc = 0x29C900u;
label_29c900:
    // 0x29c900: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29c900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29c904:
    // 0x29c904: 0xc0a7fc0  jal         func_29FF00
label_29c908:
    if (ctx->pc == 0x29C908u) {
        ctx->pc = 0x29C908u;
            // 0x29c908: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x29C90Cu;
        goto label_29c90c;
    }
    ctx->pc = 0x29C904u;
    SET_GPR_U32(ctx, 31, 0x29C90Cu);
    ctx->pc = 0x29C908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C904u;
            // 0x29c908: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FF00u;
    if (runtime->hasFunction(0x29FF00u)) {
        auto targetFn = runtime->lookupFunction(0x29FF00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C90Cu; }
        if (ctx->pc != 0x29C90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FF00_0x29ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C90Cu; }
        if (ctx->pc != 0x29C90Cu) { return; }
    }
    ctx->pc = 0x29C90Cu;
label_29c90c:
    // 0x29c90c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29c910:
    // 0x29c910: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x29c910u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_29c914:
    // 0x29c914: 0x8c44ea18  lw          $a0, -0x15E8($v0)
    ctx->pc = 0x29c914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961688)));
label_29c918:
    // 0x29c918: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29c918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29c91c:
    // 0x29c91c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x29c91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29c920:
    // 0x29c920: 0x2508d9e8  addiu       $t0, $t0, -0x2618
    ctx->pc = 0x29c920u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957544));
label_29c924:
    // 0x29c924: 0x24090025  addiu       $t1, $zero, 0x25
    ctx->pc = 0x29c924u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_29c928:
    // 0x29c928: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29c928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29c92c:
    // 0x29c92c: 0x3c022636  lui         $v0, 0x2636
    ctx->pc = 0x29c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9782 << 16));
label_29c930:
    // 0x29c930: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x29c930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_29c934:
    // 0x29c934: 0x320f809  jalr        $t9
label_29c938:
    if (ctx->pc == 0x29C938u) {
        ctx->pc = 0x29C938u;
            // 0x29c938: 0x3446fe25  ori         $a2, $v0, 0xFE25 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65061);
        ctx->pc = 0x29C93Cu;
        goto label_29c93c;
    }
    ctx->pc = 0x29C934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29C93Cu);
        ctx->pc = 0x29C938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C934u;
            // 0x29c938: 0x3446fe25  ori         $a2, $v0, 0xFE25 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65061);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29C93Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29C93Cu; }
            if (ctx->pc != 0x29C93Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29C93Cu;
label_29c93c:
    // 0x29c93c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29c940:
    // 0x29c940: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x29c940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_29c944:
    // 0x29c944: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x29c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_29c948:
    // 0x29c948: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29c948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c94c:
    // 0x29c94c: 0xc0a7f78  jal         func_29FDE0
label_29c950:
    if (ctx->pc == 0x29C950u) {
        ctx->pc = 0x29C950u;
            // 0x29c950: 0xafa20220  sw          $v0, 0x220($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
        ctx->pc = 0x29C954u;
        goto label_29c954;
    }
    ctx->pc = 0x29C94Cu;
    SET_GPR_U32(ctx, 31, 0x29C954u);
    ctx->pc = 0x29C950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29C94Cu;
            // 0x29c950: 0xafa20220  sw          $v0, 0x220($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FDE0u;
    if (runtime->hasFunction(0x29FDE0u)) {
        auto targetFn = runtime->lookupFunction(0x29FDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C954u; }
        if (ctx->pc != 0x29C954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FDE0_0x29fde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29C954u; }
        if (ctx->pc != 0x29C954u) { return; }
    }
    ctx->pc = 0x29C954u;
label_29c954:
    // 0x29c954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29c954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29c958:
    // 0x29c958: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c95c:
    // 0x29c95c: 0x3e00008  jr          $ra
label_29c960:
    if (ctx->pc == 0x29C960u) {
        ctx->pc = 0x29C960u;
            // 0x29c960: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x29C964u;
        goto label_29c964;
    }
    ctx->pc = 0x29C95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29C95Cu;
            // 0x29c960: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29C964u;
label_29c964:
    // 0x29c964: 0x0  nop
    ctx->pc = 0x29c964u;
    // NOP
label_29c968:
    // 0x29c968: 0x0  nop
    ctx->pc = 0x29c968u;
    // NOP
label_29c96c:
    // 0x29c96c: 0x0  nop
    ctx->pc = 0x29c96cu;
    // NOP
}
