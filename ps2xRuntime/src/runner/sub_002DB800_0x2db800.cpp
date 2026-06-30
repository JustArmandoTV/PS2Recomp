#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB800
// Address: 0x2db800 - 0x2db850
void sub_002DB800_0x2db800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB800_0x2db800");
#endif

    ctx->pc = 0x2db800u;

    // 0x2db800: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2db800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db804: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2db804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db808: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2db808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2db80c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2db80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2db810: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2db810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db814: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2db814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db818: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2db818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2db81c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2db81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2db820: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2db820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db824: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2db824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db828: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2db828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2db82c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2db82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2db830: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2db830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2db834: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2db834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2db838: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2db838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2db83c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB83Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB83Cu;
            // 0x2db840: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB844u;
    // 0x2db844: 0x0  nop
    ctx->pc = 0x2db844u;
    // NOP
    // 0x2db848: 0x0  nop
    ctx->pc = 0x2db848u;
    // NOP
    // 0x2db84c: 0x0  nop
    ctx->pc = 0x2db84cu;
    // NOP
}
