#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271850
// Address: 0x271850 - 0x271890
void sub_00271850_0x271850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271850_0x271850");
#endif

    ctx->pc = 0x271850u;

    // 0x271850: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x271850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271854: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x271854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x271858: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x271858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27185c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x27185cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x271860: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x271860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271864: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x271864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x271868: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x271868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27186c: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x27186cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x271870: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x271870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271874: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x271874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x271878: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x271878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27187c: 0x3e00008  jr          $ra
    ctx->pc = 0x27187Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27187Cu;
            // 0x271880: 0xe4800034  swc1        $f0, 0x34($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x271884u;
    // 0x271884: 0x0  nop
    ctx->pc = 0x271884u;
    // NOP
    // 0x271888: 0x0  nop
    ctx->pc = 0x271888u;
    // NOP
    // 0x27188c: 0x0  nop
    ctx->pc = 0x27188cu;
    // NOP
}
