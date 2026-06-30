#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199F68
// Address: 0x199f68 - 0x199fb0
void sub_00199F68_0x199f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199F68_0x199f68");
#endif

    ctx->pc = 0x199f68u;

    // 0x199f68: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x199f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x199f6c: 0x24840098  addiu       $a0, $a0, 0x98
    ctx->pc = 0x199f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
    // 0x199f70: 0x8ca6003c  lw          $a2, 0x3C($a1)
    ctx->pc = 0x199f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x199f74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x199f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x199f78: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x199f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x199f7c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x199f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x199f80: 0x80a3006c  lb          $v1, 0x6C($a1)
    ctx->pc = 0x199f80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x199f84: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x199f84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x199f88: 0x80a2006d  lb          $v0, 0x6D($a1)
    ctx->pc = 0x199f88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 109)));
    // 0x199f8c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x199f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x199f90: 0x80a3006e  lb          $v1, 0x6E($a1)
    ctx->pc = 0x199f90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 110)));
    // 0x199f94: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x199f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x199f98: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x199f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x199f9c: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x199f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x199fa0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x199fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x199fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x199FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199FA4u;
            // 0x199fa8: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199FACu;
    // 0x199fac: 0x0  nop
    ctx->pc = 0x199facu;
    // NOP
}
