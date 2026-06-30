#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00273190
// Address: 0x273190 - 0x2731d0
void sub_00273190_0x273190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273190_0x273190");
#endif

    ctx->pc = 0x273190u;

    // 0x273190: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x273190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x273194: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x273194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x273198: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x273198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27319c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x27319cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2731a0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2731a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2731a4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2731a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2731a8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2731a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2731ac: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2731acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2731b0: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x2731b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2731b4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2731b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2731b8: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x2731b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2731bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2731BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2731C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2731BCu;
            // 0x2731c0: 0xe480001c  swc1        $f0, 0x1C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2731C4u;
    // 0x2731c4: 0x0  nop
    ctx->pc = 0x2731c4u;
    // NOP
    // 0x2731c8: 0x0  nop
    ctx->pc = 0x2731c8u;
    // NOP
    // 0x2731cc: 0x0  nop
    ctx->pc = 0x2731ccu;
    // NOP
}
