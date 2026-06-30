#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB850
// Address: 0x2db850 - 0x2db880
void sub_002DB850_0x2db850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB850_0x2db850");
#endif

    ctx->pc = 0x2db850u;

    // 0x2db850: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2db850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db854: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2db854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db858: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2db858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2db85c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2db85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db860: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2db860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2db864: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2db864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db868: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2db868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2db86c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2db86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db870: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB870u;
            // 0x2db874: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB878u;
    // 0x2db878: 0x0  nop
    ctx->pc = 0x2db878u;
    // NOP
    // 0x2db87c: 0x0  nop
    ctx->pc = 0x2db87cu;
    // NOP
}
