#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015CF00
// Address: 0x15cf00 - 0x15cf30
void sub_0015CF00_0x15cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CF00_0x15cf00");
#endif

    ctx->pc = 0x15cf00u;

    // 0x15cf00: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x15cf00u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15cf04: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15cf08: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x15cf08u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x15cf0c: 0x3c0344ff  lui         $v1, 0x44FF
    ctx->pc = 0x15cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17663 << 16));
    // 0x15cf10: 0xe4900008  swc1        $f16, 0x8($a0)
    ctx->pc = 0x15cf10u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x15cf14: 0xe48e0010  swc1        $f14, 0x10($a0)
    ctx->pc = 0x15cf14u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x15cf18: 0xe48f0014  swc1        $f15, 0x14($a0)
    ctx->pc = 0x15cf18u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x15cf1c: 0xe4910018  swc1        $f17, 0x18($a0)
    ctx->pc = 0x15cf1cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x15cf20: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x15cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x15cf24: 0x3e00008  jr          $ra
    ctx->pc = 0x15CF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF24u;
            // 0x15cf28: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CF2Cu;
    // 0x15cf2c: 0x0  nop
    ctx->pc = 0x15cf2cu;
    // NOP
}
