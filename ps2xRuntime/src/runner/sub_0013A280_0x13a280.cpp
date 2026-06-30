#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A280
// Address: 0x13a280 - 0x13a2e0
void sub_0013A280_0x13a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A280_0x13a280");
#endif

    ctx->pc = 0x13a280u;

    // 0x13a280: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x13a280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a284: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x13A284u;
    {
        const bool branch_taken_0x13a284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a284) {
            ctx->pc = 0x13A2D4u;
            goto label_13a2d4;
        }
    }
    ctx->pc = 0x13A28Cu;
    // 0x13a28c: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x13a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x13a290: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a294: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13a294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13a298: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a29c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a2a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a2a4: 0xe46c000c  swc1        $f12, 0xC($v1)
    ctx->pc = 0x13a2a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x13a2a8: 0xe46d0010  swc1        $f13, 0x10($v1)
    ctx->pc = 0x13a2a8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x13a2ac: 0xe46e0014  swc1        $f14, 0x14($v1)
    ctx->pc = 0x13a2acu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x13a2b0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a2b4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x13a2b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x13a2b8: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13a2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13a2bc: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a2c0: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x13a2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x13a2c4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13a2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13a2c8: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a2cc: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x13a2ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x13a2d0: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13a2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_13a2d4:
    // 0x13a2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x13A2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A2DCu;
    // 0x13a2dc: 0x0  nop
    ctx->pc = 0x13a2dcu;
    // NOP
}
