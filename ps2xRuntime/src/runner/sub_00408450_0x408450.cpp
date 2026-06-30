#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00408450
// Address: 0x408450 - 0x408520
void sub_00408450_0x408450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408450_0x408450");
#endif

    switch (ctx->pc) {
        case 0x40848cu: goto label_40848c;
        case 0x408498u: goto label_408498;
        case 0x4084fcu: goto label_4084fc;
        default: break;
    }

    ctx->pc = 0x408450u;

    // 0x408450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x408450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x408454: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x408454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x408458: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x408458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x40845c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40845cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x408460: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x408460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x408464: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x408464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x408468: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x408468u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x40846c: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x40846cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
    // 0x408470: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x408470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x408474: 0x261072b0  addiu       $s0, $s0, 0x72B0
    ctx->pc = 0x408474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 29360));
    // 0x408478: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x408478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40847c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x40847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x408480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x408480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x408484: 0x0  nop
    ctx->pc = 0x408484u;
    // NOP
    // 0x408488: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x408488u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_40848c:
    // 0x40848c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x408490: 0xc074740  jal         func_1D1D00
    ctx->pc = 0x408490u;
    SET_GPR_U32(ctx, 31, 0x408498u);
    ctx->pc = 0x408494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408490u;
            // 0x408494: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408498u; }
        if (ctx->pc != 0x408498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408498u; }
        if (ctx->pc != 0x408498u) { return; }
    }
    ctx->pc = 0x408498u;
label_408498:
    // 0x408498: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x408498u;
    {
        const bool branch_taken_0x408498 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x408498) {
            ctx->pc = 0x40849Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x408498u;
            // 0x40849c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4084ACu;
            goto label_4084ac;
        }
    }
    ctx->pc = 0x4084A0u;
    // 0x4084a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4084a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4084a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4084A4u;
    {
        const bool branch_taken_0x4084a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4084A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4084A4u;
            // 0x4084a8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4084a4) {
            ctx->pc = 0x4084C4u;
            goto label_4084c4;
        }
    }
    ctx->pc = 0x4084ACu;
label_4084ac:
    // 0x4084ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4084acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4084b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4084b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4084b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4084b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4084b8: 0x0  nop
    ctx->pc = 0x4084b8u;
    // NOP
    // 0x4084bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4084bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4084c0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4084c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4084c4:
    // 0x4084c4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x4084c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
    // 0x4084c8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x4084c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x4084cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4084ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4084d0: 0x0  nop
    ctx->pc = 0x4084d0u;
    // NOP
    // 0x4084d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4084d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4084d8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4084d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x4084dc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x4084dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4084e0: 0x1620ffea  bnez        $s1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4084E0u;
    {
        const bool branch_taken_0x4084e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4084E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4084E0u;
            // 0x4084e4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4084e0) {
            ctx->pc = 0x40848Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40848c;
        }
    }
    ctx->pc = 0x4084E8u;
    // 0x4084e8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4084e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x4084ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4084ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4084f0: 0x248472e8  addiu       $a0, $a0, 0x72E8
    ctx->pc = 0x4084f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29416));
    // 0x4084f4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x4084F4u;
    SET_GPR_U32(ctx, 31, 0x4084FCu);
    ctx->pc = 0x4084F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4084F4u;
            // 0x4084f8: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4084FCu; }
        if (ctx->pc != 0x4084FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4084FCu; }
        if (ctx->pc != 0x4084FCu) { return; }
    }
    ctx->pc = 0x4084FCu;
label_4084fc:
    // 0x4084fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4084fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x408500: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x408500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x408504: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x408504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x408508: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x408508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40850c: 0x3e00008  jr          $ra
    ctx->pc = 0x40850Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40850Cu;
            // 0x408510: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x408514u;
    // 0x408514: 0x0  nop
    ctx->pc = 0x408514u;
    // NOP
    // 0x408518: 0x0  nop
    ctx->pc = 0x408518u;
    // NOP
    // 0x40851c: 0x0  nop
    ctx->pc = 0x40851cu;
    // NOP
}
