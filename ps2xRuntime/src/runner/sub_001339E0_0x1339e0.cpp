#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001339E0
// Address: 0x1339e0 - 0x133a00
void sub_001339E0_0x1339e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001339E0_0x1339e0");
#endif

    ctx->pc = 0x1339e0u;

    // 0x1339e0: 0x68a80007  ldl         $t0, 0x7($a1)
    ctx->pc = 0x1339e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1339e4: 0x6ca80000  ldr         $t0, 0x0($a1)
    ctx->pc = 0x1339e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1339e8: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x1339e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1339ec: 0xfc880030  sd          $t0, 0x30($a0)
    ctx->pc = 0x1339ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 8));
    // 0x1339f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1339F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1339F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1339F0u;
            // 0x1339f4: 0xac890038  sw          $t1, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1339F8u;
    // 0x1339f8: 0x0  nop
    ctx->pc = 0x1339f8u;
    // NOP
    // 0x1339fc: 0x0  nop
    ctx->pc = 0x1339fcu;
    // NOP
}
