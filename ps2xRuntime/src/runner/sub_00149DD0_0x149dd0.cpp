#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149DD0
// Address: 0x149dd0 - 0x149df0
void sub_00149DD0_0x149dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149DD0_0x149dd0");
#endif

    ctx->pc = 0x149dd0u;

    // 0x149dd0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149dd4: 0xe46c55d4  swc1        $f12, 0x55D4($v1)
    ctx->pc = 0x149dd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 21972), bits); }
    // 0x149dd8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x149dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x149ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x149DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149DDCu;
            // 0x149de0: 0xe46d55d0  swc1        $f13, 0x55D0($v1) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 21968), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149DE4u;
    // 0x149de4: 0x0  nop
    ctx->pc = 0x149de4u;
    // NOP
    // 0x149de8: 0x0  nop
    ctx->pc = 0x149de8u;
    // NOP
    // 0x149dec: 0x0  nop
    ctx->pc = 0x149decu;
    // NOP
}
