#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021DCC0
// Address: 0x21dcc0 - 0x21e120
void sub_0021DCC0_0x21dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021DCC0_0x21dcc0");
#endif

    switch (ctx->pc) {
        case 0x21dfbcu: goto label_21dfbc;
        case 0x21e028u: goto label_21e028;
        case 0x21e050u: goto label_21e050;
        case 0x21e10cu: goto label_21e10c;
        default: break;
    }

    ctx->pc = 0x21dcc0u;

    // 0x21dcc0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x21dcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dcc4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x21dcc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x21dcc8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x21dcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x21dccc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x21dcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dcd0: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x21dcd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x21dcd4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x21dcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dcd8: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x21dcd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x21dcdc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x21dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dce0: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x21dce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x21dce4: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x21dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dce8: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x21dce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dcec: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x21dcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dcf0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x21dcf0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x21dcf4: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x21dcf4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x21dcf8: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x21dcf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x21dcfc: 0x46040832  c.eq.s      $f1, $f4
    ctx->pc = 0x21dcfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21dd00: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x21DD00u;
    {
        const bool branch_taken_0x21dd00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD00u;
            // 0x21dd04: 0x248a0020  addiu       $t2, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd00) {
            ctx->pc = 0x21DD24u;
            goto label_21dd24;
        }
    }
    ctx->pc = 0x21DD08u;
    // 0x21dd08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21dd0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21dd0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dd10: 0x0  nop
    ctx->pc = 0x21dd10u;
    // NOP
    // 0x21dd14: 0x46010116  rsqrt.s     $f4, $f0, $f1
    ctx->pc = 0x21dd14u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[0]);
    // 0x21dd18: 0x0  nop
    ctx->pc = 0x21dd18u;
    // NOP
    // 0x21dd1c: 0x0  nop
    ctx->pc = 0x21dd1cu;
    // NOP
    // 0x21dd20: 0x0  nop
    ctx->pc = 0x21dd20u;
    // NOP
label_21dd24:
    // 0x21dd24: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x21dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd28: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x21dd28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21dd2c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x21dd2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21dd30: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x21dd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x21dd34: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x21dd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd38: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x21dd38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21dd3c: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x21dd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x21dd40: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x21dd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd44: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x21dd44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21dd48: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x21dd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x21dd4c: 0xc540000c  lwc1        $f0, 0xC($t2)
    ctx->pc = 0x21dd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd50: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x21dd50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21dd54: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x21dd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x21dd58: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x21dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd5c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x21dd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x21dd60: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x21dd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd64: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x21dd64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x21dd68: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x21dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd6c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x21dd6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x21dd70: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x21dd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd74: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x21dd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x21dd78: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x21dd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dd7c: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x21dd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dd80: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x21dd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd84: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x21dd84u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x21dd88: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x21dd88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x21dd8c: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x21dd8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x21dd90: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x21dd90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21dd94: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x21DD94u;
    {
        const bool branch_taken_0x21dd94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DD94u;
            // 0x21dd98: 0x24890030  addiu       $t1, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd94) {
            ctx->pc = 0x21DDB8u;
            goto label_21ddb8;
        }
    }
    ctx->pc = 0x21DD9Cu;
    // 0x21dd9c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21dda0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21dda0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21dda4: 0x0  nop
    ctx->pc = 0x21dda4u;
    // NOP
    // 0x21dda8: 0x460100d6  rsqrt.s     $f3, $f0, $f1
    ctx->pc = 0x21dda8u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
    // 0x21ddac: 0x0  nop
    ctx->pc = 0x21ddacu;
    // NOP
    // 0x21ddb0: 0x0  nop
    ctx->pc = 0x21ddb0u;
    // NOP
    // 0x21ddb4: 0x0  nop
    ctx->pc = 0x21ddb4u;
    // NOP
label_21ddb8:
    // 0x21ddb8: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x21ddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ddbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21ddbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ddc0: 0x0  nop
    ctx->pc = 0x21ddc0u;
    // NOP
    // 0x21ddc4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x21ddc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x21ddc8: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x21ddc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x21ddcc: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x21ddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ddd0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x21ddd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x21ddd4: 0xe5210004  swc1        $f1, 0x4($t1)
    ctx->pc = 0x21ddd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x21ddd8: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x21ddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dddc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x21dddcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x21dde0: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x21dde0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x21dde4: 0xc521000c  lwc1        $f1, 0xC($t1)
    ctx->pc = 0x21dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dde8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x21dde8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x21ddec: 0xe521000c  swc1        $f1, 0xC($t1)
    ctx->pc = 0x21ddecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x21ddf0: 0xc4e70008  lwc1        $f7, 0x8($a3)
    ctx->pc = 0x21ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21ddf4: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x21ddf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21ddf8: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x21ddf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21ddfc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x21ddfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21de00: 0x4607201a  mula.s      $f4, $f7
    ctx->pc = 0x21de00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x21de04: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x21de04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21de08: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x21de08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x21de0c: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x21de0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21de10: 0x4605101a  mula.s      $f2, $f5
    ctx->pc = 0x21de10u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x21de14: 0x4607309d  msub.s      $f2, $f6, $f7
    ctx->pc = 0x21de14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[7]));
    // 0x21de18: 0xe4810040  swc1        $f1, 0x40($a0)
    ctx->pc = 0x21de18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x21de1c: 0x4603301a  mula.s      $f6, $f3
    ctx->pc = 0x21de1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x21de20: 0x4605205d  msub.s      $f1, $f4, $f5
    ctx->pc = 0x21de20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x21de24: 0xe4820044  swc1        $f2, 0x44($a0)
    ctx->pc = 0x21de24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x21de28: 0xe4810048  swc1        $f1, 0x48($a0)
    ctx->pc = 0x21de28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x21de2c: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x21de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x21de30: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x21de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21de34: 0xe4810050  swc1        $f1, 0x50($a0)
    ctx->pc = 0x21de34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x21de38: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x21de38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21de3c: 0xe4810054  swc1        $f1, 0x54($a0)
    ctx->pc = 0x21de3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x21de40: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x21de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21de44: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x21de44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x21de48: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x21de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21de4c: 0xe481005c  swc1        $f1, 0x5C($a0)
    ctx->pc = 0x21de4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x21de50: 0xc4830054  lwc1        $f3, 0x54($a0)
    ctx->pc = 0x21de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21de54: 0xc4820050  lwc1        $f2, 0x50($a0)
    ctx->pc = 0x21de54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21de58: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x21de58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21de5c: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x21de5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x21de60: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x21de60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x21de64: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x21de64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x21de68: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x21de68u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21de6c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x21DE6Cu;
    {
        const bool branch_taken_0x21de6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DE6Cu;
            // 0x21de70: 0x248a0050  addiu       $t2, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de6c) {
            ctx->pc = 0x21DE90u;
            goto label_21de90;
        }
    }
    ctx->pc = 0x21DE74u;
    // 0x21de74: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21de74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21de78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21de78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21de7c: 0x0  nop
    ctx->pc = 0x21de7cu;
    // NOP
    // 0x21de80: 0x46010016  rsqrt.s     $f0, $f0, $f1
    ctx->pc = 0x21de80u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x21de84: 0x0  nop
    ctx->pc = 0x21de84u;
    // NOP
    // 0x21de88: 0x0  nop
    ctx->pc = 0x21de88u;
    // NOP
    // 0x21de8c: 0x0  nop
    ctx->pc = 0x21de8cu;
    // NOP
label_21de90:
    // 0x21de90: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x21de90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21de94: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x21de94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x21de98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21de98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21de9c: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x21de9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x21dea0: 0xc5410004  lwc1        $f1, 0x4($t2)
    ctx->pc = 0x21dea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dea4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21dea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21dea8: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x21dea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x21deac: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x21deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21deb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21deb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21deb4: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x21deb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x21deb8: 0xc541000c  lwc1        $f1, 0xC($t2)
    ctx->pc = 0x21deb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21debc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21debcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21dec0: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x21dec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x21dec4: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x21dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dec8: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x21dec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x21decc: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x21deccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ded0: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x21ded0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x21ded4: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x21ded4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ded8: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x21ded8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x21dedc: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x21dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dee0: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x21dee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x21dee4: 0xc4820064  lwc1        $f2, 0x64($a0)
    ctx->pc = 0x21dee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dee8: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x21dee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21deec: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x21deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21def0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x21def0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x21def4: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x21def4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x21def8: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x21def8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x21defc: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x21defcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21df00: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x21DF00u;
    {
        const bool branch_taken_0x21df00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF00u;
            // 0x21df04: 0x24850060  addiu       $a1, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df00) {
            ctx->pc = 0x21DF24u;
            goto label_21df24;
        }
    }
    ctx->pc = 0x21DF08u;
    // 0x21df08: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x21df08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x21df0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21df0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21df10: 0x0  nop
    ctx->pc = 0x21df10u;
    // NOP
    // 0x21df14: 0x460100d6  rsqrt.s     $f3, $f0, $f1
    ctx->pc = 0x21df14u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
    // 0x21df18: 0x0  nop
    ctx->pc = 0x21df18u;
    // NOP
    // 0x21df1c: 0x0  nop
    ctx->pc = 0x21df1cu;
    // NOP
    // 0x21df20: 0x0  nop
    ctx->pc = 0x21df20u;
    // NOP
label_21df24:
    // 0x21df24: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x21df24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df28: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21df28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21df2c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x21df2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x21df30: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x21df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df34: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21df34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21df38: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x21df38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21df3c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x21df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df40: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21df40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21df44: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x21df44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x21df48: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x21df48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df4c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x21df4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21df50: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x21df50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x21df54: 0xc5060008  lwc1        $f6, 0x8($t0)
    ctx->pc = 0x21df54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21df58: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x21df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21df5c: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x21df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21df60: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x21df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21df64: 0x4606181a  mula.s      $f3, $f6
    ctx->pc = 0x21df64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x21df68: 0xc5040000  lwc1        $f4, 0x0($t0)
    ctx->pc = 0x21df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21df6c: 0x4602081d  msub.s      $f0, $f1, $f2
    ctx->pc = 0x21df6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x21df70: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x21df70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21df74: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x21df74u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x21df78: 0x4606285d  msub.s      $f1, $f5, $f6
    ctx->pc = 0x21df78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
    // 0x21df7c: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x21df7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x21df80: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x21df80u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x21df84: 0x4604181d  msub.s      $f0, $f3, $f4
    ctx->pc = 0x21df84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x21df88: 0xe4810074  swc1        $f1, 0x74($a0)
    ctx->pc = 0x21df88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x21df8c: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x21df8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x21df90: 0x3e00008  jr          $ra
    ctx->pc = 0x21DF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DF90u;
            // 0x21df94: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DF98u;
    // 0x21df98: 0x0  nop
    ctx->pc = 0x21df98u;
    // NOP
    // 0x21df9c: 0x0  nop
    ctx->pc = 0x21df9cu;
    // NOP
    // 0x21dfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21dfa4: 0x24820094  addiu       $v0, $a0, 0x94
    ctx->pc = 0x21dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 148));
    // 0x21dfa8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x21dfa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfac: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x21dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x21dfb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21dfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21dfb4: 0xc087d08  jal         func_21F420
    ctx->pc = 0x21DFB4u;
    SET_GPR_U32(ctx, 31, 0x21DFBCu);
    ctx->pc = 0x21DFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFB4u;
            // 0x21dfb8: 0x442823  subu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F420u;
    if (runtime->hasFunction(0x21F420u)) {
        auto targetFn = runtime->lookupFunction(0x21F420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DFBCu; }
        if (ctx->pc != 0x21DFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F420_0x21f420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DFBCu; }
        if (ctx->pc != 0x21DFBCu) { return; }
    }
    ctx->pc = 0x21DFBCu;
label_21dfbc:
    // 0x21dfbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21dfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x21DFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFC0u;
            // 0x21dfc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DFC8u;
    // 0x21dfc8: 0x0  nop
    ctx->pc = 0x21dfc8u;
    // NOP
    // 0x21dfcc: 0x0  nop
    ctx->pc = 0x21dfccu;
    // NOP
    // 0x21dfd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21dfd4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x21dfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x21dfd8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x21dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x21dfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x21DFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21DFDCu;
            // 0x21dfe0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21DFE4u;
    // 0x21dfe4: 0x0  nop
    ctx->pc = 0x21dfe4u;
    // NOP
    // 0x21dfe8: 0x0  nop
    ctx->pc = 0x21dfe8u;
    // NOP
    // 0x21dfec: 0x0  nop
    ctx->pc = 0x21dfecu;
    // NOP
    // 0x21dff0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21dff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21dff4: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x21dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x21dff8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21dff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x21dffc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x21dffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x21e000: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21e004: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21e004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21e008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e00c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21e00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e010: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21e010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e018: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x21e018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x21e01c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x21e01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x21e020: 0xc0a385c  jal         func_28E170
    ctx->pc = 0x21E020u;
    SET_GPR_U32(ctx, 31, 0x21E028u);
    ctx->pc = 0x21E024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E020u;
            // 0x21e024: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E170u;
    if (runtime->hasFunction(0x28E170u)) {
        auto targetFn = runtime->lookupFunction(0x28E170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E028u; }
        if (ctx->pc != 0x21E028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E170_0x28e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E028u; }
        if (ctx->pc != 0x21E028u) { return; }
    }
    ctx->pc = 0x21E028u;
label_21e028:
    // 0x21e028: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x21e028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x21e02c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x21e02cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e030: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x21E030u;
    {
        const bool branch_taken_0x21e030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e030) {
            ctx->pc = 0x21E034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E030u;
            // 0x21e034: 0xa2500000  sb          $s0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E068u;
            goto label_21e068;
        }
    }
    ctx->pc = 0x21E038u;
    // 0x21e038: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x21e038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x21e03c: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x21e03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x21e040: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x21e040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x21e044: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21e044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21e048: 0xc0a385c  jal         func_28E170
    ctx->pc = 0x21E048u;
    SET_GPR_U32(ctx, 31, 0x21E050u);
    ctx->pc = 0x21E04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E048u;
            // 0x21e04c: 0x27a40048  addiu       $a0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E170u;
    if (runtime->hasFunction(0x28E170u)) {
        auto targetFn = runtime->lookupFunction(0x28E170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E050u; }
        if (ctx->pc != 0x21E050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E170_0x28e170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E050u; }
        if (ctx->pc != 0x21E050u) { return; }
    }
    ctx->pc = 0x21E050u;
label_21e050:
    // 0x21e050: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x21e050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x21e054: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x21e054u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e058: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E058u;
    {
        const bool branch_taken_0x21e058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e058) {
            ctx->pc = 0x21E064u;
            goto label_21e064;
        }
    }
    ctx->pc = 0x21E060u;
    // 0x21e060: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x21e060u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_21e064:
    // 0x21e064: 0xa2500000  sb          $s0, 0x0($s2)
    ctx->pc = 0x21e064u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 16));
label_21e068:
    // 0x21e068: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21e068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21e06c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21e06cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21e070: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21e070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e078: 0x3e00008  jr          $ra
    ctx->pc = 0x21E078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E078u;
            // 0x21e07c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E080u;
    // 0x21e080: 0x3e00008  jr          $ra
    ctx->pc = 0x21E080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E080u;
            // 0x21e084: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E088u;
    // 0x21e088: 0x0  nop
    ctx->pc = 0x21e088u;
    // NOP
    // 0x21e08c: 0x0  nop
    ctx->pc = 0x21e08cu;
    // NOP
    // 0x21e090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e094: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21e094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21e098: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21e09c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0a0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x21E0A0u;
    {
        const bool branch_taken_0x21e0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e0a0) {
            ctx->pc = 0x21E0A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0A0u;
            // 0x21e0a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21E110u;
            goto label_21e110;
        }
    }
    ctx->pc = 0x21E0A8u;
    // 0x21e0a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21e0ac: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x21e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x21e0b0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x21E0B0u;
    {
        const bool branch_taken_0x21e0b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0B0u;
            // 0x21e0b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0b0) {
            ctx->pc = 0x21E0E4u;
            goto label_21e0e4;
        }
    }
    ctx->pc = 0x21E0B8u;
    // 0x21e0b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21e0bc: 0x2442e950  addiu       $v0, $v0, -0x16B0
    ctx->pc = 0x21e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961488));
    // 0x21e0c0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E0C0u;
    {
        const bool branch_taken_0x21e0c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0C0u;
            // 0x21e0c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0c0) {
            ctx->pc = 0x21E0E4u;
            goto label_21e0e4;
        }
    }
    ctx->pc = 0x21E0C8u;
    // 0x21e0c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21e0cc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x21e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x21e0d0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E0D0u;
    {
        const bool branch_taken_0x21e0d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E0D0u;
            // 0x21e0d4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0d0) {
            ctx->pc = 0x21E0E4u;
            goto label_21e0e4;
        }
    }
    ctx->pc = 0x21E0D8u;
    // 0x21e0d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x21e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x21e0dc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x21e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x21e0e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x21e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_21e0e4:
    // 0x21e0e4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x21e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x21e0e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21e0e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21e0ec: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E0ECu;
    {
        const bool branch_taken_0x21e0ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21e0ec) {
            ctx->pc = 0x21E10Cu;
            goto label_21e10c;
        }
    }
    ctx->pc = 0x21E0F4u;
    // 0x21e0f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21e0f8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x21e0f8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21e0fc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21e0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21e100: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21e100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e104: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x21E104u;
    SET_GPR_U32(ctx, 31, 0x21E10Cu);
    ctx->pc = 0x21E108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E104u;
            // 0x21e108: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E10Cu; }
        if (ctx->pc != 0x21E10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E10Cu; }
        if (ctx->pc != 0x21E10Cu) { return; }
    }
    ctx->pc = 0x21E10Cu;
label_21e10c:
    // 0x21e10c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21e10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e110:
    // 0x21e110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21e110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21e114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e118: 0x3e00008  jr          $ra
    ctx->pc = 0x21E118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E118u;
            // 0x21e11c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21E120u;
}
