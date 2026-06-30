#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0600
// Address: 0x1c0600 - 0x1c0628
void sub_001C0600_0x1c0600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0600_0x1c0600");
#endif

    ctx->pc = 0x1c0600u;

    // 0x1c0600: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c0600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c0604: 0xdc62a4b8  ld          $v0, -0x5B48($v1)
    ctx->pc = 0x1c0604u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294943928)));
    // 0x1c0608: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C060Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0608u;
            // 0x1c060c: 0x2c420002  sltiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0610u;
    // 0x1c0610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c061c: 0x80701e2  j           func_1C0788
    ctx->pc = 0x1C061Cu;
    ctx->pc = 0x1C0620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C061Cu;
            // 0x1c0620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0788u;
    if (runtime->hasFunction(0x1C0788u)) {
        auto targetFn = runtime->lookupFunction(0x1C0788u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C0788_0x1c0788(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C0624u;
    // 0x1c0624: 0x0  nop
    ctx->pc = 0x1c0624u;
    // NOP
}
