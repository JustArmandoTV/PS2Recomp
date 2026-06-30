#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A22D0
// Address: 0x1a22d0 - 0x1a2310
void sub_001A22D0_0x1a22d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A22D0_0x1a22d0");
#endif

    switch (ctx->pc) {
        case 0x1a22e0u: goto label_1a22e0;
        case 0x1a22f0u: goto label_1a22f0;
        case 0x1a2300u: goto label_1a2300;
        default: break;
    }

    ctx->pc = 0x1a22d0u;

    // 0x1a22d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a22d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a22d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a22d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a22d8: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1A22D8u;
    SET_GPR_U32(ctx, 31, 0x1A22E0u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22E0u; }
        if (ctx->pc != 0x1A22E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A22E0u; }
        if (ctx->pc != 0x1A22E0u) { return; }
    }
    ctx->pc = 0x1A22E0u;
label_1a22e0:
    // 0x1a22e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1a22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a22e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a22e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a22e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A22E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A22ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A22E8u;
            // 0x1a22ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A22F0u;
label_1a22f0:
    // 0x1a22f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a22f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a22f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a22f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a22f8: 0xc0688c4  jal         func_1A2310
    ctx->pc = 0x1A22F8u;
    SET_GPR_U32(ctx, 31, 0x1A2300u);
    ctx->pc = 0x1A2310u;
    if (runtime->hasFunction(0x1A2310u)) {
        auto targetFn = runtime->lookupFunction(0x1A2310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2300u; }
        if (ctx->pc != 0x1A2300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2310_0x1a2310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2300u; }
        if (ctx->pc != 0x1A2300u) { return; }
    }
    ctx->pc = 0x1A2300u;
label_1a2300:
    // 0x1a2300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2308: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A230Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2308u;
            // 0x1a230c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2310u;
}
