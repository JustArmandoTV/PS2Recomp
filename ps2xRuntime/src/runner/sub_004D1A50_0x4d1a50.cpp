#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D1A50
// Address: 0x4d1a50 - 0x4d1ad0
void sub_004D1A50_0x4d1a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1A50_0x4d1a50");
#endif

    switch (ctx->pc) {
        case 0x4d1a50u: goto label_4d1a50;
        case 0x4d1a54u: goto label_4d1a54;
        case 0x4d1a58u: goto label_4d1a58;
        case 0x4d1a5cu: goto label_4d1a5c;
        case 0x4d1a60u: goto label_4d1a60;
        case 0x4d1a64u: goto label_4d1a64;
        case 0x4d1a68u: goto label_4d1a68;
        case 0x4d1a6cu: goto label_4d1a6c;
        case 0x4d1a70u: goto label_4d1a70;
        case 0x4d1a74u: goto label_4d1a74;
        case 0x4d1a78u: goto label_4d1a78;
        case 0x4d1a7cu: goto label_4d1a7c;
        case 0x4d1a80u: goto label_4d1a80;
        case 0x4d1a84u: goto label_4d1a84;
        case 0x4d1a88u: goto label_4d1a88;
        case 0x4d1a8cu: goto label_4d1a8c;
        case 0x4d1a90u: goto label_4d1a90;
        case 0x4d1a94u: goto label_4d1a94;
        case 0x4d1a98u: goto label_4d1a98;
        case 0x4d1a9cu: goto label_4d1a9c;
        case 0x4d1aa0u: goto label_4d1aa0;
        case 0x4d1aa4u: goto label_4d1aa4;
        case 0x4d1aa8u: goto label_4d1aa8;
        case 0x4d1aacu: goto label_4d1aac;
        case 0x4d1ab0u: goto label_4d1ab0;
        case 0x4d1ab4u: goto label_4d1ab4;
        case 0x4d1ab8u: goto label_4d1ab8;
        case 0x4d1abcu: goto label_4d1abc;
        case 0x4d1ac0u: goto label_4d1ac0;
        case 0x4d1ac4u: goto label_4d1ac4;
        case 0x4d1ac8u: goto label_4d1ac8;
        case 0x4d1accu: goto label_4d1acc;
        default: break;
    }

    ctx->pc = 0x4d1a50u;

label_4d1a50:
    // 0x4d1a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d1a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d1a54:
    // 0x4d1a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d1a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4d1a58:
    // 0x4d1a58: 0xc48000e4  lwc1        $f0, 0xE4($a0)
    ctx->pc = 0x4d1a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d1a5c:
    // 0x4d1a5c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x4d1a5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d1a60:
    // 0x4d1a60: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
label_4d1a64:
    if (ctx->pc == 0x4D1A64u) {
        ctx->pc = 0x4D1A64u;
            // 0x4d1a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A68u;
        goto label_4d1a68;
    }
    ctx->pc = 0x4D1A60u;
    {
        const bool branch_taken_0x4d1a60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d1a60) {
            ctx->pc = 0x4D1A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1A60u;
            // 0x4d1a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1ABCu;
            goto label_4d1abc;
        }
    }
    ctx->pc = 0x4D1A68u;
label_4d1a68:
    // 0x4d1a68: 0x8c8300ec  lw          $v1, 0xEC($a0)
    ctx->pc = 0x4d1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
label_4d1a6c:
    // 0x4d1a6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4d1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4d1a70:
    // 0x4d1a70: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_4d1a74:
    if (ctx->pc == 0x4D1A74u) {
        ctx->pc = 0x4D1A78u;
        goto label_4d1a78;
    }
    ctx->pc = 0x4D1A70u;
    {
        const bool branch_taken_0x4d1a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4d1a70) {
            ctx->pc = 0x4D1AB8u;
            goto label_4d1ab8;
        }
    }
    ctx->pc = 0x4D1A78u;
label_4d1a78:
    // 0x4d1a78: 0x54a0000a  bnel        $a1, $zero, . + 4 + (0xA << 2)
label_4d1a7c:
    if (ctx->pc == 0x4D1A7Cu) {
        ctx->pc = 0x4D1A7Cu;
            // 0x4d1a7c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D1A80u;
        goto label_4d1a80;
    }
    ctx->pc = 0x4D1A78u;
    {
        const bool branch_taken_0x4d1a78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d1a78) {
            ctx->pc = 0x4D1A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1A78u;
            // 0x4d1a7c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D1AA4u;
            goto label_4d1aa4;
        }
    }
    ctx->pc = 0x4D1A80u;
label_4d1a80:
    // 0x4d1a80: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x4d1a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d1a84:
    // 0x4d1a84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4d1a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4d1a88:
    // 0x4d1a88: 0x0  nop
    ctx->pc = 0x4d1a88u;
    // NOP
label_4d1a8c:
    // 0x4d1a8c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4d1a8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d1a90:
    // 0x4d1a90: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4d1a94:
    if (ctx->pc == 0x4D1A94u) {
        ctx->pc = 0x4D1A98u;
        goto label_4d1a98;
    }
    ctx->pc = 0x4D1A90u;
    {
        const bool branch_taken_0x4d1a90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d1a90) {
            ctx->pc = 0x4D1AA0u;
            goto label_4d1aa0;
        }
    }
    ctx->pc = 0x4D1A98u;
label_4d1a98:
    // 0x4d1a98: 0x10000008  b           . + 4 + (0x8 << 2)
label_4d1a9c:
    if (ctx->pc == 0x4D1A9Cu) {
        ctx->pc = 0x4D1A9Cu;
            // 0x4d1a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D1AA0u;
        goto label_4d1aa0;
    }
    ctx->pc = 0x4D1A98u;
    {
        const bool branch_taken_0x4d1a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1A98u;
            // 0x4d1a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a98) {
            ctx->pc = 0x4D1ABCu;
            goto label_4d1abc;
        }
    }
    ctx->pc = 0x4D1AA0u;
label_4d1aa0:
    // 0x4d1aa0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d1aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d1aa4:
    // 0x4d1aa4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4d1aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4d1aa8:
    // 0x4d1aa8: 0x320f809  jalr        $t9
label_4d1aac:
    if (ctx->pc == 0x4D1AACu) {
        ctx->pc = 0x4D1AB0u;
        goto label_4d1ab0;
    }
    ctx->pc = 0x4D1AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D1AB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D1AB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D1AB0u; }
            if (ctx->pc != 0x4D1AB0u) { return; }
        }
        }
    }
    ctx->pc = 0x4D1AB0u;
label_4d1ab0:
    // 0x4d1ab0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4d1ab4:
    if (ctx->pc == 0x4D1AB4u) {
        ctx->pc = 0x4D1AB4u;
            // 0x4d1ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D1AB8u;
        goto label_4d1ab8;
    }
    ctx->pc = 0x4D1AB0u;
    {
        const bool branch_taken_0x4d1ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1AB0u;
            // 0x4d1ab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ab0) {
            ctx->pc = 0x4D1ABCu;
            goto label_4d1abc;
        }
    }
    ctx->pc = 0x4D1AB8u;
label_4d1ab8:
    // 0x4d1ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4d1ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d1abc:
    // 0x4d1abc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d1abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d1ac0:
    // 0x4d1ac0: 0x3e00008  jr          $ra
label_4d1ac4:
    if (ctx->pc == 0x4D1AC4u) {
        ctx->pc = 0x4D1AC4u;
            // 0x4d1ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4D1AC8u;
        goto label_4d1ac8;
    }
    ctx->pc = 0x4D1AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D1AC0u;
            // 0x4d1ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D1AC8u;
label_4d1ac8:
    // 0x4d1ac8: 0x0  nop
    ctx->pc = 0x4d1ac8u;
    // NOP
label_4d1acc:
    // 0x4d1acc: 0x0  nop
    ctx->pc = 0x4d1accu;
    // NOP
}
