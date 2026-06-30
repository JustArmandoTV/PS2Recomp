#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A1800
// Address: 0x4a1800 - 0x4a1830
void sub_004A1800_0x4a1800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A1800_0x4a1800");
#endif

    ctx->pc = 0x4a1800u;

    // 0x4a1800: 0xc4800140  lwc1        $f0, 0x140($a0)
    ctx->pc = 0x4a1800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4a1804: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x4a1804u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4a1808: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x4A1808u;
    {
        const bool branch_taken_0x4a1808 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a1808) {
            ctx->pc = 0x4A1828u;
            goto label_4a1828;
        }
    }
    ctx->pc = 0x4A1810u;
    // 0x4a1810: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x4a1810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x4a1814: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a1814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a1818: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A1818u;
    {
        const bool branch_taken_0x4a1818 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a1818) {
            ctx->pc = 0x4A1828u;
            goto label_4a1828;
        }
    }
    ctx->pc = 0x4A1820u;
    // 0x4a1820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a1820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a1824: 0xa0830144  sb          $v1, 0x144($a0)
    ctx->pc = 0x4a1824u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 324), (uint8_t)GPR_U32(ctx, 3));
label_4a1828:
    // 0x4a1828: 0x3e00008  jr          $ra
    ctx->pc = 0x4A1828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A1830u;
}
