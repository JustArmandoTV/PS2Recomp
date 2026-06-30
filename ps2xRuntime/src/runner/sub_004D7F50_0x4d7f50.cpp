#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D7F50
// Address: 0x4d7f50 - 0x4d7fd0
void sub_004D7F50_0x4d7f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7F50_0x4d7f50");
#endif

    ctx->pc = 0x4d7f50u;

    // 0x4d7f50: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x4d7f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7f54: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4d7f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x4d7f58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4d7f58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4d7f5c: 0x0  nop
    ctx->pc = 0x4d7f5cu;
    // NOP
    // 0x4d7f60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4d7f60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4d7f64: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x4D7F64u;
    {
        const bool branch_taken_0x4d7f64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d7f64) {
            ctx->pc = 0x4D7F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7F64u;
            // 0x4d7f68: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D7F7Cu;
            goto label_4d7f7c;
        }
    }
    ctx->pc = 0x4D7F6Cu;
    // 0x4d7f6c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d7f6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d7f70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4d7f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4d7f74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4D7F74u;
    {
        const bool branch_taken_0x4d7f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d7f74) {
            ctx->pc = 0x4D7F90u;
            goto label_4d7f90;
        }
    }
    ctx->pc = 0x4D7F7Cu;
label_4d7f7c:
    // 0x4d7f7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4d7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x4d7f80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d7f80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d7f84: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4d7f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4d7f88: 0x0  nop
    ctx->pc = 0x4d7f88u;
    // NOP
    // 0x4d7f8c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4d7f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4d7f90:
    // 0x4d7f90: 0x54a3000b  bnel        $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4D7F90u;
    {
        const bool branch_taken_0x4d7f90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4d7f90) {
            ctx->pc = 0x4D7F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7F90u;
            // 0x4d7f94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D7FC0u;
            goto label_4d7fc0;
        }
    }
    ctx->pc = 0x4D7F98u;
    // 0x4d7f98: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x4d7f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x4d7f9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d7fa0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D7FA0u;
    {
        const bool branch_taken_0x4d7fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4d7fa0) {
            ctx->pc = 0x4D7FBCu;
            goto label_4d7fbc;
        }
    }
    ctx->pc = 0x4D7FA8u;
    // 0x4d7fa8: 0x8c8200f4  lw          $v0, 0xF4($a0)
    ctx->pc = 0x4d7fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x4d7fac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D7FACu;
    {
        const bool branch_taken_0x4d7fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d7fac) {
            ctx->pc = 0x4D7FBCu;
            goto label_4d7fbc;
        }
    }
    ctx->pc = 0x4D7FB4u;
    // 0x4d7fb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D7FB4u;
    {
        const bool branch_taken_0x4d7fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D7FB4u;
            // 0x4d7fb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7fb4) {
            ctx->pc = 0x4D7FC0u;
            goto label_4d7fc0;
        }
    }
    ctx->pc = 0x4D7FBCu;
label_4d7fbc:
    // 0x4d7fbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4d7fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d7fc0:
    // 0x4d7fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7FC8u;
    // 0x4d7fc8: 0x0  nop
    ctx->pc = 0x4d7fc8u;
    // NOP
    // 0x4d7fcc: 0x0  nop
    ctx->pc = 0x4d7fccu;
    // NOP
}
