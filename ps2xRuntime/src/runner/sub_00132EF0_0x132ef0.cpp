#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132EF0
// Address: 0x132ef0 - 0x132f60
void sub_00132EF0_0x132ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132EF0_0x132ef0");
#endif

    ctx->pc = 0x132ef0u;

    // 0x132ef0: 0xc4c80004  lwc1        $f8, 0x4($a2)
    ctx->pc = 0x132ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x132ef4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x132ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132ef8: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x132ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x132efc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x132efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132f00: 0x4608001a  mula.s      $f0, $f8
    ctx->pc = 0x132f00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x132f04: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x132f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x132f08: 0x4607081e  madda.s     $f1, $f7
    ctx->pc = 0x132f08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[7]));
    // 0x132f0c: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x132f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132f10: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x132f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132f14: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x132f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132f18: 0x4606115c  madd.s      $f5, $f2, $f6
    ctx->pc = 0x132f18u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x132f1c: 0x4608001a  mula.s      $f0, $f8
    ctx->pc = 0x132f1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x132f20: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x132f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x132f24: 0x4607181e  madda.s     $f3, $f7
    ctx->pc = 0x132f24u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x132f28: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x132f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132f2c: 0x460620dc  madd.s      $f3, $f4, $f6
    ctx->pc = 0x132f2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x132f30: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x132f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132f34: 0x4608001a  mula.s      $f0, $f8
    ctx->pc = 0x132f34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x132f38: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x132f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132f3c: 0x4607081e  madda.s     $f1, $f7
    ctx->pc = 0x132f3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[7]));
    // 0x132f40: 0x4606101c  madd.s      $f0, $f2, $f6
    ctx->pc = 0x132f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x132f44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x132f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x132f48: 0xe4850004  swc1        $f5, 0x4($a0)
    ctx->pc = 0x132f48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x132f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x132F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132F4Cu;
            // 0x132f50: 0xe4830008  swc1        $f3, 0x8($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132F54u;
    // 0x132f54: 0x0  nop
    ctx->pc = 0x132f54u;
    // NOP
    // 0x132f58: 0x0  nop
    ctx->pc = 0x132f58u;
    // NOP
    // 0x132f5c: 0x0  nop
    ctx->pc = 0x132f5cu;
    // NOP
}
