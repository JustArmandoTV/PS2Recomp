#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD5F0
// Address: 0x1bd5f0 - 0x1bd620
void sub_001BD5F0_0x1bd5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD5F0_0x1bd5f0");
#endif

    ctx->pc = 0x1bd5f0u;

    // 0x1bd5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd5f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1bd5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd5fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bd5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd600: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1bd600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd604: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1bd604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd60c: 0xac480044  sw          $t0, 0x44($v0)
    ctx->pc = 0x1bd60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 8));
    // 0x1bd610: 0xac490048  sw          $t1, 0x48($v0)
    ctx->pc = 0x1bd610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 9));
    // 0x1bd614: 0x806fad8  j           func_1BEB60
    ctx->pc = 0x1BD614u;
    ctx->pc = 0x1BD618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD614u;
            // 0x1bd618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB60u;
    {
        auto targetFn = runtime->lookupFunction(0x1BEB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BD61Cu;
    // 0x1bd61c: 0x0  nop
    ctx->pc = 0x1bd61cu;
    // NOP
}
