#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D488
// Address: 0x19d488 - 0x19d4b0
void sub_0019D488_0x19d488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D488_0x19d488");
#endif

    ctx->pc = 0x19d488u;

    // 0x19d488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d48c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19d48cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d490: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19D490u;
    {
        const bool branch_taken_0x19d490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D490u;
            // 0x19d494: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d490) {
            ctx->pc = 0x19D49Cu;
            goto label_19d49c;
        }
    }
    ctx->pc = 0x19D498u;
    // 0x19d498: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x19d498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_19d49c:
    // 0x19d49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d4a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4a4: 0x806d75a  j           func_1B5D68
    ctx->pc = 0x19D4A4u;
    ctx->pc = 0x19D4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D4A4u;
            // 0x19d4a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19D4ACu;
    // 0x19d4ac: 0x0  nop
    ctx->pc = 0x19d4acu;
    // NOP
}
