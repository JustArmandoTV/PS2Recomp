#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014B050
// Address: 0x14b050 - 0x14b100
void sub_0014B050_0x14b050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B050_0x14b050");
#endif

    switch (ctx->pc) {
        case 0x14b098u: goto label_14b098;
        case 0x14b0c0u: goto label_14b0c0;
        case 0x14b0c8u: goto label_14b0c8;
        case 0x14b0e0u: goto label_14b0e0;
        default: break;
    }

    ctx->pc = 0x14b050u;

    // 0x14b050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14b050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14b054: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14b054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14b058: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14b058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14b05c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14b05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14b060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14b060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b064: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14b064u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14b068: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14b068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b06c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14b06cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14b070: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x14b070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14b074: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x14b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b078: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x14b078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b07c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x14b07cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x14b080: 0x46010b1c  madd.s      $f12, $f1, $f1
    ctx->pc = 0x14b080u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x14b084: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14b084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14b088: 0x0  nop
    ctx->pc = 0x14b088u;
    // NOP
    // 0x14b08c: 0x460c0818  adda.s      $f1, $f12
    ctx->pc = 0x14b08cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x14b090: 0xc04c710  jal         func_131C40
    ctx->pc = 0x14B090u;
    SET_GPR_U32(ctx, 31, 0x14B098u);
    ctx->pc = 0x14B094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B090u;
            // 0x14b094: 0x4600055c  madd.s      $f21, $f0, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B098u; }
        if (ctx->pc != 0x14B098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B098u; }
        if (ctx->pc != 0x14B098u) { return; }
    }
    ctx->pc = 0x14B098u;
label_14b098:
    // 0x14b098: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x14b098u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x14b09c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14b0a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14b0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b0a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0a8: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x14b0a8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[20];
    // 0x14b0ac: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x14b0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b0b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x14b0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14b0b4: 0x46020b02  mul.s       $f12, $f1, $f2
    ctx->pc = 0x14b0b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14b0b8: 0xc052cb0  jal         func_14B2C0
    ctx->pc = 0x14B0B8u;
    SET_GPR_U32(ctx, 31, 0x14B0C0u);
    ctx->pc = 0x14B0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0B8u;
            // 0x14b0bc: 0x46020342  mul.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0C0u; }
        if (ctx->pc != 0x14B0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B2C0_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0C0u; }
        if (ctx->pc != 0x14B0C0u) { return; }
    }
    ctx->pc = 0x14B0C0u;
label_14b0c0:
    // 0x14b0c0: 0xc04c718  jal         func_131C60
    ctx->pc = 0x14B0C0u;
    SET_GPR_U32(ctx, 31, 0x14B0C8u);
    ctx->pc = 0x14B0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0C0u;
            // 0x14b0c4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C60u;
    if (runtime->hasFunction(0x131C60u)) {
        auto targetFn = runtime->lookupFunction(0x131C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0C8u; }
        if (ctx->pc != 0x14B0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C60_0x131c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0C8u; }
        if (ctx->pc != 0x14B0C8u) { return; }
    }
    ctx->pc = 0x14B0C8u;
label_14b0c8:
    // 0x14b0c8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x14b0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14b0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14b0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b0d0: 0x4600a342  mul.s       $f13, $f20, $f0
    ctx->pc = 0x14b0d0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x14b0d4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14b0d4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14b0d8: 0xc052c94  jal         func_14B250
    ctx->pc = 0x14B0D8u;
    SET_GPR_U32(ctx, 31, 0x14B0E0u);
    ctx->pc = 0x14B0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0D8u;
            // 0x14b0dc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B250u;
    if (runtime->hasFunction(0x14B250u)) {
        auto targetFn = runtime->lookupFunction(0x14B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0E0u; }
        if (ctx->pc != 0x14B0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014B250_0x14b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B0E0u; }
        if (ctx->pc != 0x14B0E0u) { return; }
    }
    ctx->pc = 0x14B0E0u;
label_14b0e0:
    // 0x14b0e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14b0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b0e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14b0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14b0e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14b0e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b0ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14b0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14b0f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14b0f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B0F4u;
            // 0x14b0f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B0FCu;
    // 0x14b0fc: 0x0  nop
    ctx->pc = 0x14b0fcu;
    // NOP
}
