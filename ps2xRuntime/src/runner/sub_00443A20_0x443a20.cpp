#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00443A20
// Address: 0x443a20 - 0x443a30
void sub_00443A20_0x443a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443A20_0x443a20");
#endif

    ctx->pc = 0x443a20u;

    // 0x443a20: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x443a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x443a24: 0x3e00008  jr          $ra
    ctx->pc = 0x443A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x443A24u;
            // 0x443a28: 0xc4400008  lwc1        $f0, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x443A2Cu;
    // 0x443a2c: 0x0  nop
    ctx->pc = 0x443a2cu;
    // NOP
}
