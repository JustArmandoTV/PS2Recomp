#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C850
// Address: 0x15c850 - 0x15c890
void sub_0015C850_0x15c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C850_0x15c850");
#endif

    ctx->pc = 0x15c850u;

    // 0x15c850: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x15c850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15c854: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x15c854u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15c858: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15c858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15c85c: 0x2463ccf0  addiu       $v1, $v1, -0x3310
    ctx->pc = 0x15c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954224));
    // 0x15c860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c864: 0x46006007  neg.s       $f0, $f12
    ctx->pc = 0x15c864u;
    ctx->f[0] = FPU_NEG_S(ctx->f[12]);
    // 0x15c868: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x15c868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15c86c: 0x46006807  neg.s       $f0, $f13
    ctx->pc = 0x15c86cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x15c870: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x15c870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x15c874: 0x46007007  neg.s       $f0, $f14
    ctx->pc = 0x15c874u;
    ctx->f[0] = FPU_NEG_S(ctx->f[14]);
    // 0x15c878: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x15c878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x15c87c: 0x3e00008  jr          $ra
    ctx->pc = 0x15C87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C87Cu;
            // 0x15c880: 0xac60000c  sw          $zero, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C884u;
    // 0x15c884: 0x0  nop
    ctx->pc = 0x15c884u;
    // NOP
    // 0x15c888: 0x0  nop
    ctx->pc = 0x15c888u;
    // NOP
    // 0x15c88c: 0x0  nop
    ctx->pc = 0x15c88cu;
    // NOP
}
