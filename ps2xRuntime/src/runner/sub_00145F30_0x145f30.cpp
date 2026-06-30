#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00145F30
// Address: 0x145f30 - 0x1460b0
void sub_00145F30_0x145f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145F30_0x145f30");
#endif

    switch (ctx->pc) {
        case 0x145f5cu: goto label_145f5c;
        case 0x145f70u: goto label_145f70;
        case 0x146088u: goto label_146088;
        case 0x146090u: goto label_146090;
        default: break;
    }

    ctx->pc = 0x145f30u;

    // 0x145f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145f34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x145f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x145f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x145f3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x145f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x145f40: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x145f40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x145f44: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x145f44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x145f48: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x145f48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x145f4c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x145f4cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x145f50: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x145f50u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x145f54: 0xc056afc  jal         func_15ABF0
    ctx->pc = 0x145F54u;
    SET_GPR_U32(ctx, 31, 0x145F5Cu);
    ctx->pc = 0x145F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145F54u;
            // 0x145f58: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABF0u;
    if (runtime->hasFunction(0x15ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F5Cu; }
        if (ctx->pc != 0x145F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABF0_0x15abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F5Cu; }
        if (ctx->pc != 0x145F5Cu) { return; }
    }
    ctx->pc = 0x145F5Cu;
label_145f5c:
    // 0x145f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f60: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x145f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x145f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f68: 0xc05750c  jal         func_15D430
    ctx->pc = 0x145F68u;
    SET_GPR_U32(ctx, 31, 0x145F70u);
    ctx->pc = 0x145F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145F68u;
            // 0x145f6c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F70u; }
        if (ctx->pc != 0x145F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F70u; }
        if (ctx->pc != 0x145F70u) { return; }
    }
    ctx->pc = 0x145F70u;
label_145f70:
    // 0x145f70: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x145f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x145f74: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x145f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x145f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145f7c: 0x0  nop
    ctx->pc = 0x145f7cu;
    // NOP
    // 0x145f80: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x145f80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x145f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145f88: 0x0  nop
    ctx->pc = 0x145f88u;
    // NOP
    // 0x145f8c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x145f8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145f90: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x145F90u;
    {
        const bool branch_taken_0x145f90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x145f90) {
            ctx->pc = 0x145F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145F90u;
            // 0x145f94: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x145FA8u;
            goto label_145fa8;
        }
    }
    ctx->pc = 0x145F98u;
    // 0x145f98: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x145f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x145f9c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x145f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x145fa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x145FA0u;
    {
        const bool branch_taken_0x145fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145FA0u;
            // 0x145fa4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fa0) {
            ctx->pc = 0x145FC0u;
            goto label_145fc0;
        }
    }
    ctx->pc = 0x145FA8u;
label_145fa8:
    // 0x145fa8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x145fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x145fac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x145facu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x145fb0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x145fb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x145fb4: 0x0  nop
    ctx->pc = 0x145fb4u;
    // NOP
    // 0x145fb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x145fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x145fbc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x145fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_145fc0:
    // 0x145fc0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x145fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x145fc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145fc8: 0x0  nop
    ctx->pc = 0x145fc8u;
    // NOP
    // 0x145fcc: 0x46150042  mul.s       $f1, $f0, $f21
    ctx->pc = 0x145fccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x145fd0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x145fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x145fd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x145fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145fd8: 0x0  nop
    ctx->pc = 0x145fd8u;
    // NOP
    // 0x145fdc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x145fdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145fe0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x145FE0u;
    {
        const bool branch_taken_0x145fe0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x145FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145FE0u;
            // 0x145fe4: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fe0) {
            ctx->pc = 0x145FF8u;
            goto label_145ff8;
        }
    }
    ctx->pc = 0x145FE8u;
    // 0x145fe8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x145fe8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x145fec: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x145fecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x145ff0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145FF0u;
    {
        const bool branch_taken_0x145ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145FF0u;
            // 0x145ff4: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ff0) {
            ctx->pc = 0x146014u;
            goto label_146014;
        }
    }
    ctx->pc = 0x145FF8u;
label_145ff8:
    // 0x145ff8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x145ff8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x145ffc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x145ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x146000: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x146000u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x146004: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x146004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x146008: 0x0  nop
    ctx->pc = 0x146008u;
    // NOP
    // 0x14600c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14600cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x146010: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x146010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_146014:
    // 0x146014: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x146014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x146018: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x146018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x14601c: 0x22238  dsll        $a0, $v0, 8
    ctx->pc = 0x14601cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 8);
    // 0x146020: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146024: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x146024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x146028: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x146028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14602c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14602cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146030: 0x0  nop
    ctx->pc = 0x146030u;
    // NOP
    // 0x146034: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x146034u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x146038: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x146038u;
    {
        const bool branch_taken_0x146038 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14603Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146038u;
            // 0x14603c: 0xa43025  or          $a2, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146038) {
            ctx->pc = 0x146050u;
            goto label_146050;
        }
    }
    ctx->pc = 0x146040u;
    // 0x146040: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x146040u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x146044: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x146044u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x146048: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x146048u;
    {
        const bool branch_taken_0x146048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14604Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146048u;
            // 0x14604c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x146048) {
            ctx->pc = 0x14606Cu;
            goto label_14606c;
        }
    }
    ctx->pc = 0x146050u;
label_146050:
    // 0x146050: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146050u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146054: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x146054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x146058: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x146058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14605c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x14605cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x146060: 0x0  nop
    ctx->pc = 0x146060u;
    // NOP
    // 0x146064: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x146064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x146068: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x146068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_14606c:
    // 0x14606c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x14606cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x146070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146074: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x146074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x146078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14607c: 0x463825  or          $a3, $v0, $a2
    ctx->pc = 0x14607cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x146080: 0xc057540  jal         func_15D500
    ctx->pc = 0x146080u;
    SET_GPR_U32(ctx, 31, 0x146088u);
    ctx->pc = 0x146084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146080u;
            // 0x146084: 0x2406003d  addiu       $a2, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146088u; }
        if (ctx->pc != 0x146088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146088u; }
        if (ctx->pc != 0x146088u) { return; }
    }
    ctx->pc = 0x146088u;
label_146088:
    // 0x146088: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x146088u;
    SET_GPR_U32(ctx, 31, 0x146090u);
    ctx->pc = 0x14608Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146088u;
            // 0x14608c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146090u; }
        if (ctx->pc != 0x146090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146090u; }
        if (ctx->pc != 0x146090u) { return; }
    }
    ctx->pc = 0x146090u;
label_146090:
    // 0x146090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x146090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146094: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x146094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x146098: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x146098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14609c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14609cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1460a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1460a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1460a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1460A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1460A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1460A4u;
            // 0x1460a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1460ACu;
    // 0x1460ac: 0x0  nop
    ctx->pc = 0x1460acu;
    // NOP
}
