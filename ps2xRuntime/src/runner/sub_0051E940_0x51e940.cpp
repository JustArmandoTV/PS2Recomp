#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051E940
// Address: 0x51e940 - 0x51e980
void sub_0051E940_0x51e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051E940_0x51e940");
#endif

    ctx->pc = 0x51e940u;

    // 0x51e940: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x51e940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x51e944: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x51e944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x51e948: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x51e948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x51e94c: 0x0  nop
    ctx->pc = 0x51e94cu;
    // NOP
    // 0x51e950: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x51e950u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x51e954: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x51E954u;
    {
        const bool branch_taken_0x51e954 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x51E958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51E954u;
            // 0x51e958: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x51e954) {
            ctx->pc = 0x51E974u;
            goto label_51e974;
        }
    }
    ctx->pc = 0x51E95Cu;
    // 0x51e95c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x51e95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x51e960: 0x0  nop
    ctx->pc = 0x51e960u;
    // NOP
    // 0x51e964: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x51e964u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x51e968: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x51E968u;
    {
        const bool branch_taken_0x51e968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x51e968) {
            ctx->pc = 0x51E974u;
            goto label_51e974;
        }
    }
    ctx->pc = 0x51E970u;
    // 0x51e970: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x51e970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51e974:
    // 0x51e974: 0x3e00008  jr          $ra
    ctx->pc = 0x51E974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51E97Cu;
    // 0x51e97c: 0x0  nop
    ctx->pc = 0x51e97cu;
    // NOP
}
