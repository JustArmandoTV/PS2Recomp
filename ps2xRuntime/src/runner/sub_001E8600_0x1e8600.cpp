#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8600
// Address: 0x1e8600 - 0x1e8630
void sub_001E8600_0x1e8600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8600_0x1e8600");
#endif

    switch (ctx->pc) {
        case 0x1e861cu: goto label_1e861c;
        default: break;
    }

    ctx->pc = 0x1e8600u;

    // 0x1e8600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8604: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e8604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8608: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e8608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e860c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e860cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8610: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1e8610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8614: 0xc07a18c  jal         func_1E8630
    ctx->pc = 0x1E8614u;
    SET_GPR_U32(ctx, 31, 0x1E861Cu);
    ctx->pc = 0x1E8618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8614u;
            // 0x1e8618: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8630u;
    if (runtime->hasFunction(0x1E8630u)) {
        auto targetFn = runtime->lookupFunction(0x1E8630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E861Cu; }
        if (ctx->pc != 0x1E861Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8630_0x1e8630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E861Cu; }
        if (ctx->pc != 0x1E861Cu) { return; }
    }
    ctx->pc = 0x1E861Cu;
label_1e861c:
    // 0x1e861c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e861cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8620: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8620u;
            // 0x1e8624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8628u;
    // 0x1e8628: 0x0  nop
    ctx->pc = 0x1e8628u;
    // NOP
    // 0x1e862c: 0x0  nop
    ctx->pc = 0x1e862cu;
    // NOP
}
