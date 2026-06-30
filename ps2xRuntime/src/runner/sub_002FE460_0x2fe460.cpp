#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE460
// Address: 0x2fe460 - 0x2fe4a0
void sub_002FE460_0x2fe460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE460_0x2fe460");
#endif

    ctx->pc = 0x2fe460u;

    // 0x2fe460: 0x8c890024  lw          $t1, 0x24($a0)
    ctx->pc = 0x2fe460u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2fe464: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2fe464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe468: 0x8c880028  lw          $t0, 0x28($a0)
    ctx->pc = 0x2fe468u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2fe46c: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x2fe46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x2fe470: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x2fe470u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x2fe474: 0xac880024  sw          $t0, 0x24($a0)
    ctx->pc = 0x2fe474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x2fe478: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2fe478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2fe47c: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x2fe47cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x2fe480: 0xe48c003c  swc1        $f12, 0x3C($a0)
    ctx->pc = 0x2fe480u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2fe484: 0xac870030  sw          $a3, 0x30($a0)
    ctx->pc = 0x2fe484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 7));
    // 0x2fe488: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2fe488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2fe48c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2fe48cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2fe490: 0xa61825  or          $v1, $a1, $a2
    ctx->pc = 0x2fe490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2fe494: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x2fe494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x2fe498: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE498u;
            // 0x2fe49c: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE4A0u;
}
