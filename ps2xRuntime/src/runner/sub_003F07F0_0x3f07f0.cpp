#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F07F0
// Address: 0x3f07f0 - 0x3f0810
void sub_003F07F0_0x3f07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F07F0_0x3f07f0");
#endif

    ctx->pc = 0x3f07f0u;

    // 0x3f07f0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3f07f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3f07f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3f07f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f07f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x3f07f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x3f07fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F07FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F07FCu;
            // 0x3f0800: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F0804u;
    // 0x3f0804: 0x0  nop
    ctx->pc = 0x3f0804u;
    // NOP
    // 0x3f0808: 0x0  nop
    ctx->pc = 0x3f0808u;
    // NOP
    // 0x3f080c: 0x0  nop
    ctx->pc = 0x3f080cu;
    // NOP
}
