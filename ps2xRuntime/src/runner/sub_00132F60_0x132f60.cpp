#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132F60
// Address: 0x132f60 - 0x132f80
void sub_00132F60_0x132f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132F60_0x132f60");
#endif

    ctx->pc = 0x132f60u;

    // 0x132f60: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x132f60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x132f64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x132f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x132f68: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x132f68u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x132f6c: 0xe48e0008  swc1        $f14, 0x8($a0)
    ctx->pc = 0x132f6cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x132f70: 0x3e00008  jr          $ra
    ctx->pc = 0x132F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132F70u;
            // 0x132f74: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132F78u;
    // 0x132f78: 0x0  nop
    ctx->pc = 0x132f78u;
    // NOP
    // 0x132f7c: 0x0  nop
    ctx->pc = 0x132f7cu;
    // NOP
}
