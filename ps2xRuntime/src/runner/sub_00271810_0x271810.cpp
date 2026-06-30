#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271810
// Address: 0x271810 - 0x271850
void sub_00271810_0x271810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271810_0x271810");
#endif

    ctx->pc = 0x271810u;

    // 0x271810: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x271810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271814: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x271814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x271818: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x271818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27181c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x27181cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x271820: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x271820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x271824: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x271824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x271828: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x271828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x27182c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x27182cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x271830: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x271830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x271834: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x271834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x271838: 0x90a30014  lbu         $v1, 0x14($a1)
    ctx->pc = 0x271838u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x27183c: 0x3e00008  jr          $ra
    ctx->pc = 0x27183Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27183Cu;
            // 0x271840: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271844u;
    // 0x271844: 0x0  nop
    ctx->pc = 0x271844u;
    // NOP
    // 0x271848: 0x0  nop
    ctx->pc = 0x271848u;
    // NOP
    // 0x27184c: 0x0  nop
    ctx->pc = 0x27184cu;
    // NOP
}
