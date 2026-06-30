#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E02B0
// Address: 0x1e02b0 - 0x1e0320
void sub_001E02B0_0x1e02b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E02B0_0x1e02b0");
#endif

    switch (ctx->pc) {
        case 0x1e02b0u: goto label_1e02b0;
        case 0x1e02b4u: goto label_1e02b4;
        case 0x1e02b8u: goto label_1e02b8;
        case 0x1e02bcu: goto label_1e02bc;
        case 0x1e02c0u: goto label_1e02c0;
        case 0x1e02c4u: goto label_1e02c4;
        case 0x1e02c8u: goto label_1e02c8;
        case 0x1e02ccu: goto label_1e02cc;
        case 0x1e02d0u: goto label_1e02d0;
        case 0x1e02d4u: goto label_1e02d4;
        case 0x1e02d8u: goto label_1e02d8;
        case 0x1e02dcu: goto label_1e02dc;
        case 0x1e02e0u: goto label_1e02e0;
        case 0x1e02e4u: goto label_1e02e4;
        case 0x1e02e8u: goto label_1e02e8;
        case 0x1e02ecu: goto label_1e02ec;
        case 0x1e02f0u: goto label_1e02f0;
        case 0x1e02f4u: goto label_1e02f4;
        case 0x1e02f8u: goto label_1e02f8;
        case 0x1e02fcu: goto label_1e02fc;
        case 0x1e0300u: goto label_1e0300;
        case 0x1e0304u: goto label_1e0304;
        case 0x1e0308u: goto label_1e0308;
        case 0x1e030cu: goto label_1e030c;
        case 0x1e0310u: goto label_1e0310;
        case 0x1e0314u: goto label_1e0314;
        case 0x1e0318u: goto label_1e0318;
        case 0x1e031cu: goto label_1e031c;
        default: break;
    }

    ctx->pc = 0x1e02b0u;

label_1e02b0:
    // 0x1e02b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e02b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e02b4:
    // 0x1e02b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e02b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e02b8:
    // 0x1e02b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e02b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e02bc:
    // 0x1e02bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e02bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e02c0:
    // 0x1e02c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e02c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e02c4:
    // 0x1e02c4: 0xc077fd4  jal         func_1DFF50
label_1e02c8:
    if (ctx->pc == 0x1E02C8u) {
        ctx->pc = 0x1E02C8u;
            // 0x1e02c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E02CCu;
        goto label_1e02cc;
    }
    ctx->pc = 0x1E02C4u;
    SET_GPR_U32(ctx, 31, 0x1E02CCu);
    ctx->pc = 0x1E02C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E02C4u;
            // 0x1e02c8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFF50u;
    if (runtime->hasFunction(0x1DFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02CCu; }
        if (ctx->pc != 0x1E02CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF50_0x1dff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02CCu; }
        if (ctx->pc != 0x1E02CCu) { return; }
    }
    ctx->pc = 0x1E02CCu;
label_1e02cc:
    // 0x1e02cc: 0x8e040da0  lw          $a0, 0xDA0($s0)
    ctx->pc = 0x1e02ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_1e02d0:
    // 0x1e02d0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1e02d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1e02d4:
    // 0x1e02d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e02d8:
    // 0x1e02d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e02d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e02dc:
    // 0x1e02dc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e02dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1e02e0:
    // 0x1e02e0: 0xae030da0  sw          $v1, 0xDA0($s0)
    ctx->pc = 0x1e02e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 3));
label_1e02e4:
    // 0x1e02e4: 0x8c44e3f8  lw          $a0, -0x1C08($v0)
    ctx->pc = 0x1e02e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960120)));
label_1e02e8:
    // 0x1e02e8: 0xc157250  jal         func_55C940
label_1e02ec:
    if (ctx->pc == 0x1E02ECu) {
        ctx->pc = 0x1E02ECu;
            // 0x1e02ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1E02F0u;
        goto label_1e02f0;
    }
    ctx->pc = 0x1E02E8u;
    SET_GPR_U32(ctx, 31, 0x1E02F0u);
    ctx->pc = 0x1E02ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E02E8u;
            // 0x1e02ec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x55C940u;
    if (runtime->hasFunction(0x55C940u)) {
        auto targetFn = runtime->lookupFunction(0x55C940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02F0u; }
        if (ctx->pc != 0x1E02F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055C940_0x55c940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E02F0u; }
        if (ctx->pc != 0x1E02F0u) { return; }
    }
    ctx->pc = 0x1E02F0u;
label_1e02f0:
    // 0x1e02f0: 0x8e040d60  lw          $a0, 0xD60($s0)
    ctx->pc = 0x1e02f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_1e02f4:
    // 0x1e02f4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1e02f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
label_1e02f8:
    // 0x1e02f8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x1e02f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_1e02fc:
    // 0x1e02fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1e02fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1e0300:
    // 0x1e0300: 0x320f809  jalr        $t9
label_1e0304:
    if (ctx->pc == 0x1E0304u) {
        ctx->pc = 0x1E0304u;
            // 0x1e0304: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1E0308u;
        goto label_1e0308;
    }
    ctx->pc = 0x1E0300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0308u);
        ctx->pc = 0x1E0304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0300u;
            // 0x1e0304: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0308u; }
            if (ctx->pc != 0x1E0308u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0308u;
label_1e0308:
    // 0x1e0308: 0xa20011ac  sb          $zero, 0x11AC($s0)
    ctx->pc = 0x1e0308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4524), (uint8_t)GPR_U32(ctx, 0));
label_1e030c:
    // 0x1e030c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e030cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e0310:
    // 0x1e0310: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e0310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e0314:
    // 0x1e0314: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0318:
    // 0x1e0318: 0x3e00008  jr          $ra
label_1e031c:
    if (ctx->pc == 0x1E031Cu) {
        ctx->pc = 0x1E031Cu;
            // 0x1e031c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E0320u;
        goto label_fallthrough_0x1e0318;
    }
    ctx->pc = 0x1E0318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E031Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0318u;
            // 0x1e031c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e0318:
    ctx->pc = 0x1E0320u;
}
