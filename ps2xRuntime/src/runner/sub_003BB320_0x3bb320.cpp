#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BB320
// Address: 0x3bb320 - 0x3bb3a0
void sub_003BB320_0x3bb320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB320_0x3bb320");
#endif

    switch (ctx->pc) {
        case 0x3bb374u: goto label_3bb374;
        case 0x3bb384u: goto label_3bb384;
        default: break;
    }

    ctx->pc = 0x3bb320u;

    // 0x3bb320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bb320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bb324: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3bb324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
    // 0x3bb328: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bb328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bb32c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3bb32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x3bb330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bb330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bb334: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3bb334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3bb338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bb338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bb33c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bb33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb340: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x3bb340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3bb344: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bb344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb348: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x3bb348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3bb34c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3bb34cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb350: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3bb350u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3bb354: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3bb354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3bb358: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3bb358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3bb35c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb35cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3bb360: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3bb360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3bb364: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3bb364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3bb368: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3bb368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3bb36c: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x3BB36Cu;
    SET_GPR_U32(ctx, 31, 0x3BB374u);
    ctx->pc = 0x3BB370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB36Cu;
            // 0x3bb370: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB374u; }
        if (ctx->pc != 0x3BB374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB374u; }
        if (ctx->pc != 0x3BB374u) { return; }
    }
    ctx->pc = 0x3BB374u;
label_3bb374:
    // 0x3bb374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bb374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bb378: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x3bb378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x3bb37c: 0xc04c72c  jal         func_131CB0
    ctx->pc = 0x3BB37Cu;
    SET_GPR_U32(ctx, 31, 0x3BB384u);
    ctx->pc = 0x3BB380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB37Cu;
            // 0x3bb380: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB384u; }
        if (ctx->pc != 0x3BB384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BB384u; }
        if (ctx->pc != 0x3BB384u) { return; }
    }
    ctx->pc = 0x3BB384u;
label_3bb384:
    // 0x3bb384: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bb384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bb388: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bb388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb38c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bb38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb390: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BB390u;
            // 0x3bb394: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BB398u;
    // 0x3bb398: 0x0  nop
    ctx->pc = 0x3bb398u;
    // NOP
    // 0x3bb39c: 0x0  nop
    ctx->pc = 0x3bb39cu;
    // NOP
}
