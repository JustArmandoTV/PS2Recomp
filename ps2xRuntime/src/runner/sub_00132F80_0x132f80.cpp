#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132F80
// Address: 0x132f80 - 0x132fc0
void sub_00132F80_0x132f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132F80_0x132f80");
#endif

    ctx->pc = 0x132f80u;

    // 0x132f80: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x132f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132f84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x132f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x132f88: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x132f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132f8c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x132f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132f90: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x132f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132f94: 0x46001100  add.s       $f4, $f2, $f0
    ctx->pc = 0x132f94u;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x132f98: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x132f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132f9c: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x132f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132fa0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x132fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x132fa4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x132fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x132fa8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x132fa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x132fac: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x132facu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x132fb0: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x132fb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x132fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x132FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132FB4u;
            // 0x132fb8: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132FBCu;
    // 0x132fbc: 0x0  nop
    ctx->pc = 0x132fbcu;
    // NOP
}
