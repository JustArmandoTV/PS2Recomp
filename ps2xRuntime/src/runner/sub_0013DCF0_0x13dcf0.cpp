#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013DCF0
// Address: 0x13dcf0 - 0x13dde0
void sub_0013DCF0_0x13dcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DCF0_0x13dcf0");
#endif

    ctx->pc = 0x13dcf0u;

    // 0x13dcf0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x13dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dcf4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13dcf8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x13dcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13dcfc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x13dcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd00: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x13dd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x13dd04: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x13dd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd08: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x13dd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x13dd0c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x13dd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13dd10: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x13dd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd14: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x13dd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13dd18: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x13dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13dd1c: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x13dd1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13dd20: 0xc4c50008  lwc1        $f5, 0x8($a2)
    ctx->pc = 0x13dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13dd24: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x13dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13dd28: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x13dd28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x13dd2c: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x13dd2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x13dd30: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13dd30u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x13dd34: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x13dd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x13dd38: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x13dd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd3c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x13dd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13dd40: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x13dd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd44: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x13dd44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13dd48: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x13dd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd4c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x13dd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x13dd50: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x13dd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13dd54: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x13dd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd58: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x13dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13dd5c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x13dd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13dd60: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x13dd60u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13dd64: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x13dd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13dd68: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x13dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13dd6c: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x13dd6cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x13dd70: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x13dd70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x13dd74: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13dd74u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x13dd78: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x13dd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x13dd7c: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x13dd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd80: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x13dd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13dd84: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x13dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd88: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x13dd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x13dd8c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x13dd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd90: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x13dd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x13dd94: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x13dd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13dd98: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x13dd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dd9c: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x13dd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13dda0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x13dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13dda4: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x13dda4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13dda8: 0xc5050008  lwc1        $f5, 0x8($t0)
    ctx->pc = 0x13dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13ddac: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x13ddacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ddb0: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x13ddb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x13ddb4: 0x4604281c  madd.s      $f0, $f5, $f4
    ctx->pc = 0x13ddb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x13ddb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13ddb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x13ddbc: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x13ddbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x13ddc0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x13ddc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x13ddc4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x13ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x13ddc8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x13ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x13ddcc: 0x3e00008  jr          $ra
    ctx->pc = 0x13DDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DDCCu;
            // 0x13ddd0: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DDD4u;
    // 0x13ddd4: 0x0  nop
    ctx->pc = 0x13ddd4u;
    // NOP
    // 0x13ddd8: 0x0  nop
    ctx->pc = 0x13ddd8u;
    // NOP
    // 0x13dddc: 0x0  nop
    ctx->pc = 0x13dddcu;
    // NOP
}
