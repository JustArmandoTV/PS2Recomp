#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034FAC0
// Address: 0x34fac0 - 0x34fb80
void sub_0034FAC0_0x34fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FAC0_0x34fac0");
#endif

    switch (ctx->pc) {
        case 0x34fb00u: goto label_34fb00;
        case 0x34fb28u: goto label_34fb28;
        case 0x34fb50u: goto label_34fb50;
        case 0x34fb5cu: goto label_34fb5c;
        default: break;
    }

    ctx->pc = 0x34fac0u;

    // 0x34fac0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x34fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x34fac4: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x34fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x34fac8: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x34fac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x34facc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34faccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34fad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34fad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fad4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x34fad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x34fad8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x34fad8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x34fadc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34fadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fae0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34fae4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34fae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34fae8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x34fae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34faec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x34faecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34faf0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x34faf0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x34faf4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x34faf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x34faf8: 0xc04f29c  jal         func_13CA70
    ctx->pc = 0x34FAF8u;
    SET_GPR_U32(ctx, 31, 0x34FB00u);
    ctx->pc = 0x34FAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FAF8u;
            // 0x34fafc: 0x46007506  mov.s       $f20, $f14 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CA70u;
    if (runtime->hasFunction(0x13CA70u)) {
        auto targetFn = runtime->lookupFunction(0x13CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB00u; }
        if (ctx->pc != 0x34FB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CA70_0x13ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB00u; }
        if (ctx->pc != 0x34FB00u) { return; }
    }
    ctx->pc = 0x34FB00u;
label_34fb00:
    // 0x34fb00: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x34fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x34fb04: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34fb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34fb08: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x34fb08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x34fb0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34fb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fb10: 0x0  nop
    ctx->pc = 0x34fb10u;
    // NOP
    // 0x34fb14: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x34fb14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x34fb18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34fb18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34fb1c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x34fb1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x34fb20: 0xc04cdf0  jal         func_1337C0
    ctx->pc = 0x34FB20u;
    SET_GPR_U32(ctx, 31, 0x34FB28u);
    ctx->pc = 0x34FB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FB20u;
            // 0x34fb24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB28u; }
        if (ctx->pc != 0x34FB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB28u; }
        if (ctx->pc != 0x34FB28u) { return; }
    }
    ctx->pc = 0x34FB28u;
label_34fb28:
    // 0x34fb28: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x34fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x34fb2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x34fb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34fb30: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x34fb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
    // 0x34fb34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34fb34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34fb38: 0x0  nop
    ctx->pc = 0x34fb38u;
    // NOP
    // 0x34fb3c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34fb3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x34fb40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34fb40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34fb44: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x34fb44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x34fb48: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x34FB48u;
    SET_GPR_U32(ctx, 31, 0x34FB50u);
    ctx->pc = 0x34FB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FB48u;
            // 0x34fb4c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB50u; }
        if (ctx->pc != 0x34FB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB50u; }
        if (ctx->pc != 0x34FB50u) { return; }
    }
    ctx->pc = 0x34FB50u;
label_34fb50:
    // 0x34fb50: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x34fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x34fb54: 0xc04c994  jal         func_132650
    ctx->pc = 0x34FB54u;
    SET_GPR_U32(ctx, 31, 0x34FB5Cu);
    ctx->pc = 0x34FB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34FB54u;
            // 0x34fb58: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB5Cu; }
        if (ctx->pc != 0x34FB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34FB5Cu; }
        if (ctx->pc != 0x34FB5Cu) { return; }
    }
    ctx->pc = 0x34FB5Cu;
label_34fb5c:
    // 0x34fb5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34fb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34fb60: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x34fb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34fb64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x34fb64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34fb68: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x34fb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34fb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x34FB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34FB6Cu;
            // 0x34fb70: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34FB74u;
    // 0x34fb74: 0x0  nop
    ctx->pc = 0x34fb74u;
    // NOP
    // 0x34fb78: 0x0  nop
    ctx->pc = 0x34fb78u;
    // NOP
    // 0x34fb7c: 0x0  nop
    ctx->pc = 0x34fb7cu;
    // NOP
}
