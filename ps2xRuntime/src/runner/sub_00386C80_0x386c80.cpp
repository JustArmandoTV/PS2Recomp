#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386C80
// Address: 0x386c80 - 0x386c90
void sub_00386C80_0x386c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386C80_0x386c80");
#endif

    ctx->pc = 0x386c80u;

    // 0x386c80: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x386c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x386c84: 0x3e00008  jr          $ra
    ctx->pc = 0x386C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386C84u;
            // 0x386c88: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386C8Cu;
    // 0x386c8c: 0x0  nop
    ctx->pc = 0x386c8cu;
    // NOP
}
