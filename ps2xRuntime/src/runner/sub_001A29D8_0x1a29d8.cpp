#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A29D8
// Address: 0x1a29d8 - 0x1a2a00
void sub_001A29D8_0x1a29d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A29D8_0x1a29d8");
#endif

    switch (ctx->pc) {
        case 0x1a29ecu: goto label_1a29ec;
        default: break;
    }

    ctx->pc = 0x1a29d8u;

    // 0x1a29d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a29d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a29dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a29dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a29e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a29e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a29e4: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1A29E4u;
    SET_GPR_U32(ctx, 31, 0x1A29ECu);
    ctx->pc = 0x1A29E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A29E4u;
            // 0x1a29e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29ECu; }
        if (ctx->pc != 0x1A29ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29ECu; }
        if (ctx->pc != 0x1A29ECu) { return; }
    }
    ctx->pc = 0x1A29ECu;
label_1a29ec:
    // 0x1a29ec: 0xac502d0c  sw          $s0, 0x2D0C($v0)
    ctx->pc = 0x1a29ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11532), GPR_U32(ctx, 16));
    // 0x1a29f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a29f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a29f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a29f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a29f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A29F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A29FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A29F8u;
            // 0x1a29fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2A00u;
}
