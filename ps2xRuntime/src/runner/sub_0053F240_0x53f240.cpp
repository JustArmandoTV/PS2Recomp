#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053F240
// Address: 0x53f240 - 0x53f270
void sub_0053F240_0x53f240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053F240_0x53f240");
#endif

    ctx->pc = 0x53f240u;

    // 0x53f240: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x53f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x53f244: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x53f244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x53f248: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x53f248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x53f24c: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x53f24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x53f250: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x53f250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x53f254: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x53f254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x53f258: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x53f258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x53f25c: 0x3e00008  jr          $ra
    ctx->pc = 0x53F25Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F25Cu;
            // 0x53f260: 0xe480003c  swc1        $f0, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F264u;
    // 0x53f264: 0x0  nop
    ctx->pc = 0x53f264u;
    // NOP
    // 0x53f268: 0x0  nop
    ctx->pc = 0x53f268u;
    // NOP
    // 0x53f26c: 0x0  nop
    ctx->pc = 0x53f26cu;
    // NOP
}
