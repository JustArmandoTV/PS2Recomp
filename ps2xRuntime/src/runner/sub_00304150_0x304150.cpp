#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304150
// Address: 0x304150 - 0x304220
void sub_00304150_0x304150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304150_0x304150");
#endif

    switch (ctx->pc) {
        case 0x304190u: goto label_304190;
        case 0x3041f0u: goto label_3041f0;
        case 0x304208u: goto label_304208;
        default: break;
    }

    ctx->pc = 0x304150u;

    // 0x304150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x304150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x304154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x304154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x304158: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x304158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30415c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30415cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x304160: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x304160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x304164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304168: 0x8c830d60  lw          $v1, 0xD60($a0)
    ctx->pc = 0x304168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x30416c: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x30416cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x304170: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x304170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x304174: 0x0  nop
    ctx->pc = 0x304174u;
    // NOP
    // 0x304178: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x304178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30417c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x30417cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x304180: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x304180u;
    {
        const bool branch_taken_0x304180 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x304184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304180u;
            // 0x304184: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x304180) {
            ctx->pc = 0x304208u;
            goto label_304208;
        }
    }
    ctx->pc = 0x304188u;
    // 0x304188: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x304188u;
    SET_GPR_U32(ctx, 31, 0x304190u);
    ctx->pc = 0x30418Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304188u;
            // 0x30418c: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304190u; }
        if (ctx->pc != 0x304190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304190u; }
        if (ctx->pc != 0x304190u) { return; }
    }
    ctx->pc = 0x304190u;
label_304190:
    // 0x304190: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x304190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x304194: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x304194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x304198: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x304198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
    // 0x30419c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x30419cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3041a0: 0xc6020dbc  lwc1        $f2, 0xDBC($s0)
    ctx->pc = 0x3041a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3041a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3041a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3041a8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3041a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3041ac: 0xc6000930  lwc1        $f0, 0x930($s0)
    ctx->pc = 0x3041acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3041b0: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x3041b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3041b4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3041b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3041b8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3041b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3041bc: 0x2604092c  addiu       $a0, $s0, 0x92C
    ctx->pc = 0x3041bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2348));
    // 0x3041c0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3041c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3041c4: 0x31023  negu        $v0, $v1
    ctx->pc = 0x3041c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3041c8: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x3041c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3041cc: 0x0  nop
    ctx->pc = 0x3041ccu;
    // NOP
    // 0x3041d0: 0x468028a0  cvt.s.w     $f2, $f5
    ctx->pc = 0x3041d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3041d4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3041d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3041d8: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x3041d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x3041dc: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x3041dcu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x3041e0: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x3041e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3041e4: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x3041e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3041e8: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x3041E8u;
    SET_GPR_U32(ctx, 31, 0x3041F0u);
    ctx->pc = 0x3041ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3041E8u;
            // 0x3041ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3041F0u; }
        if (ctx->pc != 0x3041F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3041F0u; }
        if (ctx->pc != 0x3041F0u) { return; }
    }
    ctx->pc = 0x3041F0u;
label_3041f0:
    // 0x3041f0: 0xc6000880  lwc1        $f0, 0x880($s0)
    ctx->pc = 0x3041f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3041f4: 0x2604087c  addiu       $a0, $s0, 0x87C
    ctx->pc = 0x3041f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2172));
    // 0x3041f8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3041f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3041fc: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x3041fcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x304200: 0xc0c753c  jal         func_31D4F0
    ctx->pc = 0x304200u;
    SET_GPR_U32(ctx, 31, 0x304208u);
    ctx->pc = 0x304204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304200u;
            // 0x304204: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304208u; }
        if (ctx->pc != 0x304208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304208u; }
        if (ctx->pc != 0x304208u) { return; }
    }
    ctx->pc = 0x304208u;
label_304208:
    // 0x304208: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x304208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30420c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x30420cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x304210: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x304210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304214: 0x3e00008  jr          $ra
    ctx->pc = 0x304214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304214u;
            // 0x304218: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30421Cu;
    // 0x30421c: 0x0  nop
    ctx->pc = 0x30421cu;
    // NOP
}
