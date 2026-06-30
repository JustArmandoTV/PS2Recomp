#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A4570
// Address: 0x2a4570 - 0x2a4580
void sub_002A4570_0x2a4570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4570_0x2a4570");
#endif

    ctx->pc = 0x2a4570u;

    // 0x2a4570: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4570u;
            // 0x2a4574: 0xe48c0198  swc1        $f12, 0x198($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 408), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4578u;
    // 0x2a4578: 0x0  nop
    ctx->pc = 0x2a4578u;
    // NOP
    // 0x2a457c: 0x0  nop
    ctx->pc = 0x2a457cu;
    // NOP
}
