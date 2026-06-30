#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00303370
// Address: 0x303370 - 0x303390
void sub_00303370_0x303370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303370_0x303370");
#endif

    ctx->pc = 0x303370u;

    // 0x303370: 0xc4810534  lwc1        $f1, 0x534($a0)
    ctx->pc = 0x303370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303374: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x303374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x303378: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30337c: 0x0  nop
    ctx->pc = 0x30337cu;
    // NOP
    // 0x303380: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x303380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x303384: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x303384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x303388: 0x3e00008  jr          $ra
    ctx->pc = 0x303388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30338Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x303388u;
            // 0x30338c: 0xe480118c  swc1        $f0, 0x118C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4492), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303390u;
}
