#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0730
// Address: 0x1e0730 - 0x1e0750
void sub_001E0730_0x1e0730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0730_0x1e0730");
#endif

    ctx->pc = 0x1e0730u;

    // 0x1e0730: 0xe48c0e48  swc1        $f12, 0xE48($a0)
    ctx->pc = 0x1e0730u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 3656), bits); }
    // 0x1e0734: 0xac800e4c  sw          $zero, 0xE4C($a0)
    ctx->pc = 0x1e0734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3660), GPR_U32(ctx, 0));
    // 0x1e0738: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x1e0738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
    // 0x1e073c: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1e073cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
    // 0x1e0740: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0740u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0740u;
            // 0x1e0744: 0xac830da0  sw          $v1, 0xDA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E0748u;
    // 0x1e0748: 0x0  nop
    ctx->pc = 0x1e0748u;
    // NOP
    // 0x1e074c: 0x0  nop
    ctx->pc = 0x1e074cu;
    // NOP
}
