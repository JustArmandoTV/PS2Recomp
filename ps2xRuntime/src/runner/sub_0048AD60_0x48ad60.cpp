#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048AD60
// Address: 0x48ad60 - 0x48add0
void sub_0048AD60_0x48ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048AD60_0x48ad60");
#endif

    switch (ctx->pc) {
        case 0x48ad90u: goto label_48ad90;
        case 0x48ad9cu: goto label_48ad9c;
        case 0x48adb4u: goto label_48adb4;
        default: break;
    }

    ctx->pc = 0x48ad60u;

    // 0x48ad60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48ad64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x48ad64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48ad68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x48ad68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x48ad6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48ad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x48ad70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x48ad70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x48ad74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x48ad74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48ad78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x48ad78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x48ad7c: 0x26300030  addiu       $s0, $s1, 0x30
    ctx->pc = 0x48ad7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x48ad80: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x48ad80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x48ad84: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x48ad84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x48ad88: 0xc0d8aac  jal         func_362AB0
    ctx->pc = 0x48AD88u;
    SET_GPR_U32(ctx, 31, 0x48AD90u);
    ctx->pc = 0x48AD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AD88u;
            // 0x48ad8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AD90u; }
        if (ctx->pc != 0x48AD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AD90u; }
        if (ctx->pc != 0x48AD90u) { return; }
    }
    ctx->pc = 0x48AD90u;
label_48ad90:
    // 0x48ad90: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x48ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x48ad94: 0xc04cc04  jal         func_133010
    ctx->pc = 0x48AD94u;
    SET_GPR_U32(ctx, 31, 0x48AD9Cu);
    ctx->pc = 0x48AD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48AD94u;
            // 0x48ad98: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AD9Cu; }
        if (ctx->pc != 0x48AD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48AD9Cu; }
        if (ctx->pc != 0x48AD9Cu) { return; }
    }
    ctx->pc = 0x48AD9Cu;
label_48ad9c:
    // 0x48ad9c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x48ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x48ada0: 0x26050134  addiu       $a1, $s0, 0x134
    ctx->pc = 0x48ada0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
    // 0x48ada4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x48ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x48ada8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x48ada8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x48adac: 0xc04c720  jal         func_131C80
    ctx->pc = 0x48ADACu;
    SET_GPR_U32(ctx, 31, 0x48ADB4u);
    ctx->pc = 0x48ADB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48ADACu;
            // 0x48adb0: 0xe6200014  swc1        $f0, 0x14($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48ADB4u; }
        if (ctx->pc != 0x48ADB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48ADB4u; }
        if (ctx->pc != 0x48ADB4u) { return; }
    }
    ctx->pc = 0x48ADB4u;
label_48adb4:
    // 0x48adb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48adb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48adb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x48adb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x48adbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x48adbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48adc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x48adc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48adc4: 0x3e00008  jr          $ra
    ctx->pc = 0x48ADC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48ADC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48ADC4u;
            // 0x48adc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48ADCCu;
    // 0x48adcc: 0x0  nop
    ctx->pc = 0x48adccu;
    // NOP
}
