#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001994E8
// Address: 0x1994e8 - 0x199520
void sub_001994E8_0x1994e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001994E8_0x1994e8");
#endif

    switch (ctx->pc) {
        case 0x1994e8u: goto label_1994e8;
        case 0x1994ecu: goto label_1994ec;
        case 0x1994f0u: goto label_1994f0;
        case 0x1994f4u: goto label_1994f4;
        case 0x1994f8u: goto label_1994f8;
        case 0x1994fcu: goto label_1994fc;
        case 0x199500u: goto label_199500;
        case 0x199504u: goto label_199504;
        case 0x199508u: goto label_199508;
        case 0x19950cu: goto label_19950c;
        case 0x199510u: goto label_199510;
        case 0x199514u: goto label_199514;
        case 0x199518u: goto label_199518;
        case 0x19951cu: goto label_19951c;
        default: break;
    }

    ctx->pc = 0x1994e8u;

label_1994e8:
    // 0x1994e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1994e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1994ec:
    // 0x1994ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1994ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1994f0:
    // 0x1994f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1994f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1994f4:
    // 0x1994f4: 0xc066c68  jal         func_19B1A0
label_1994f8:
    if (ctx->pc == 0x1994F8u) {
        ctx->pc = 0x1994F8u;
            // 0x1994f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1994FCu;
        goto label_1994fc;
    }
    ctx->pc = 0x1994F4u;
    SET_GPR_U32(ctx, 31, 0x1994FCu);
    ctx->pc = 0x1994F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1994F4u;
            // 0x1994f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994FCu; }
        if (ctx->pc != 0x1994FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1994FCu; }
        if (ctx->pc != 0x1994FCu) { return; }
    }
    ctx->pc = 0x1994FCu;
label_1994fc:
    // 0x1994fc: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1994fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_199500:
    // 0x199500: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x199500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_199504:
    // 0x199504: 0x40f809  jalr        $v0
label_199508:
    if (ctx->pc == 0x199508u) {
        ctx->pc = 0x199508u;
            // 0x199508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19950Cu;
        goto label_19950c;
    }
    ctx->pc = 0x199504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19950Cu);
        ctx->pc = 0x199508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199504u;
            // 0x199508: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19950Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19950Cu; }
            if (ctx->pc != 0x19950Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19950Cu;
label_19950c:
    // 0x19950c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19950cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199510:
    // 0x199510: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x199510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_199514:
    // 0x199514: 0x3e00008  jr          $ra
label_199518:
    if (ctx->pc == 0x199518u) {
        ctx->pc = 0x199518u;
            // 0x199518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x19951Cu;
        goto label_19951c;
    }
    ctx->pc = 0x199514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199514u;
            // 0x199518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19951Cu;
label_19951c:
    // 0x19951c: 0x0  nop
    ctx->pc = 0x19951cu;
    // NOP
}
