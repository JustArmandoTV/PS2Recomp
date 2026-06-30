#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4600
// Address: 0x1a4600 - 0x1a4638
void sub_001A4600_0x1a4600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4600_0x1a4600");
#endif

    switch (ctx->pc) {
        case 0x1a4628u: goto label_1a4628;
        default: break;
    }

    ctx->pc = 0x1a4600u;

    // 0x1a4600: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a4600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1a4604: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4608: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4608u;
            // 0x1a460c: 0xac649b88  sw          $a0, -0x6478($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941576), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4610u;
    // 0x1a4610: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4610u;
            // 0x1a4614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4618u;
    // 0x1a4618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a461c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a461cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4620: 0xc0691d4  jal         func_1A4750
    ctx->pc = 0x1A4620u;
    SET_GPR_U32(ctx, 31, 0x1A4628u);
    ctx->pc = 0x1A4624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4620u;
            // 0x1a4624: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4750u;
    if (runtime->hasFunction(0x1A4750u)) {
        auto targetFn = runtime->lookupFunction(0x1A4750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4628u; }
        if (ctx->pc != 0x1A4628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4750_0x1a4750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4628u; }
        if (ctx->pc != 0x1A4628u) { return; }
    }
    ctx->pc = 0x1A4628u;
label_1a4628:
    // 0x1a4628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a462c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a462cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4630: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4630u;
            // 0x1a4634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4638u;
}
