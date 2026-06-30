#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B5F60
// Address: 0x3b5f60 - 0x3b5fa0
void sub_003B5F60_0x3b5f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5F60_0x3b5f60");
#endif

    ctx->pc = 0x3b5f60u;

    // 0x3b5f60: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3b5f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b5f64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b5f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5f68: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3b5f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b5f6c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3b5f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b5f70: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x3b5f70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3b5f74: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3b5f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3b5f78: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3b5f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3b5f7c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3b5f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3b5f80: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x3b5f80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x3b5f84: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x3b5f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b5f88: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x3b5f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b5f8c: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x3b5f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3b5f90: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5F90u;
            // 0x3b5f94: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B5F98u;
    // 0x3b5f98: 0x0  nop
    ctx->pc = 0x3b5f98u;
    // NOP
    // 0x3b5f9c: 0x0  nop
    ctx->pc = 0x3b5f9cu;
    // NOP
}
