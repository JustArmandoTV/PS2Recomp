#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00452EB0
// Address: 0x452eb0 - 0x452ec0
void sub_00452EB0_0x452eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452EB0_0x452eb0");
#endif

    ctx->pc = 0x452eb0u;

    // 0x452eb0: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x452eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x452eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x452EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x452EB4u;
            // 0x452eb8: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x452EBCu;
    // 0x452ebc: 0x0  nop
    ctx->pc = 0x452ebcu;
    // NOP
}
