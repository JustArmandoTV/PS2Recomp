#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC3E0
// Address: 0x1dc3e0 - 0x1dc400
void sub_001DC3E0_0x1dc3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC3E0_0x1dc3e0");
#endif

    ctx->pc = 0x1dc3e0u;

    // 0x1dc3e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dc3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc3e4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1dc3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc3e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1dc3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dc3ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1dc3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1dc3f0: 0x8c46e360  lw          $a2, -0x1CA0($v0)
    ctx->pc = 0x1dc3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
    // 0x1dc3f4: 0x80529c4  j           func_14A710
    ctx->pc = 0x1DC3F4u;
    ctx->pc = 0x1DC3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC3F4u;
            // 0x1dc3f8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A710u;
    if (runtime->hasFunction(0x14A710u)) {
        auto targetFn = runtime->lookupFunction(0x14A710u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0014A710_0x14a710(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DC3FCu;
    // 0x1dc3fc: 0x0  nop
    ctx->pc = 0x1dc3fcu;
    // NOP
}
