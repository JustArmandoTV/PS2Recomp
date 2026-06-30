#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131D30
// Address: 0x131d30 - 0x131dd0
void sub_00131D30_0x131d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131D30_0x131d30");
#endif

    ctx->pc = 0x131d30u;

    // 0x131d30: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x131d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131d34: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x131d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131d38: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x131d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131d3c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x131d3cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x131d40: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x131d40u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x131d44: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x131d44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x131d48: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x131d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131d4c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x131d4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x131d50: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x131d50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x131d54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x131d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x131d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x131d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131d5c: 0x0  nop
    ctx->pc = 0x131d5cu;
    // NOP
    // 0x131d60: 0x46010116  rsqrt.s     $f4, $f0, $f1
    ctx->pc = 0x131d60u;
    ctx->f[4] = 1.0f / sqrtf(ctx->f[0]);
    // 0x131d64: 0x0  nop
    ctx->pc = 0x131d64u;
    // NOP
    // 0x131d68: 0x0  nop
    ctx->pc = 0x131d68u;
    // NOP
    // 0x131d6c: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x131d6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131d70: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x131D70u;
    {
        const bool branch_taken_0x131d70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x131d70) {
            ctx->pc = 0x131D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131D70u;
            // 0x131d74: 0x46041802  mul.s       $f0, $f3, $f4 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x131D90u;
            goto label_131d90;
        }
    }
    ctx->pc = 0x131D78u;
    // 0x131d78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x131d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x131d7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x131d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131d80: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x131d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x131d84: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x131d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x131d88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x131D88u;
    {
        const bool branch_taken_0x131d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131D88u;
            // 0x131d8c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131d88) {
            ctx->pc = 0x131DBCu;
            goto label_131dbc;
        }
    }
    ctx->pc = 0x131D90u;
label_131d90:
    // 0x131d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131d94: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x131d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x131d98: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x131d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131d9c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x131d9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x131da0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x131da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x131da4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x131da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131da8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x131da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x131dac: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x131dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x131db0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x131db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131db4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x131db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x131db8: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x131db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_131dbc:
    // 0x131dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x131DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131DC4u;
    // 0x131dc4: 0x0  nop
    ctx->pc = 0x131dc4u;
    // NOP
    // 0x131dc8: 0x0  nop
    ctx->pc = 0x131dc8u;
    // NOP
    // 0x131dcc: 0x0  nop
    ctx->pc = 0x131dccu;
    // NOP
}
