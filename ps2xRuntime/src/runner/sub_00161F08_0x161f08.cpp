#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161F08
// Address: 0x161f08 - 0x162000
void sub_00161F08_0x161f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161F08_0x161f08");
#endif

    switch (ctx->pc) {
        case 0x161f08u: goto label_161f08;
        case 0x161f0cu: goto label_161f0c;
        case 0x161f10u: goto label_161f10;
        case 0x161f14u: goto label_161f14;
        case 0x161f18u: goto label_161f18;
        case 0x161f1cu: goto label_161f1c;
        case 0x161f20u: goto label_161f20;
        case 0x161f24u: goto label_161f24;
        case 0x161f28u: goto label_161f28;
        case 0x161f2cu: goto label_161f2c;
        case 0x161f30u: goto label_161f30;
        case 0x161f34u: goto label_161f34;
        case 0x161f38u: goto label_161f38;
        case 0x161f3cu: goto label_161f3c;
        case 0x161f40u: goto label_161f40;
        case 0x161f44u: goto label_161f44;
        case 0x161f48u: goto label_161f48;
        case 0x161f4cu: goto label_161f4c;
        case 0x161f50u: goto label_161f50;
        case 0x161f54u: goto label_161f54;
        case 0x161f58u: goto label_161f58;
        case 0x161f5cu: goto label_161f5c;
        case 0x161f60u: goto label_161f60;
        case 0x161f64u: goto label_161f64;
        case 0x161f68u: goto label_161f68;
        case 0x161f6cu: goto label_161f6c;
        case 0x161f70u: goto label_161f70;
        case 0x161f74u: goto label_161f74;
        case 0x161f78u: goto label_161f78;
        case 0x161f7cu: goto label_161f7c;
        case 0x161f80u: goto label_161f80;
        case 0x161f84u: goto label_161f84;
        case 0x161f88u: goto label_161f88;
        case 0x161f8cu: goto label_161f8c;
        case 0x161f90u: goto label_161f90;
        case 0x161f94u: goto label_161f94;
        case 0x161f98u: goto label_161f98;
        case 0x161f9cu: goto label_161f9c;
        case 0x161fa0u: goto label_161fa0;
        case 0x161fa4u: goto label_161fa4;
        case 0x161fa8u: goto label_161fa8;
        case 0x161facu: goto label_161fac;
        case 0x161fb0u: goto label_161fb0;
        case 0x161fb4u: goto label_161fb4;
        case 0x161fb8u: goto label_161fb8;
        case 0x161fbcu: goto label_161fbc;
        case 0x161fc0u: goto label_161fc0;
        case 0x161fc4u: goto label_161fc4;
        case 0x161fc8u: goto label_161fc8;
        case 0x161fccu: goto label_161fcc;
        case 0x161fd0u: goto label_161fd0;
        case 0x161fd4u: goto label_161fd4;
        case 0x161fd8u: goto label_161fd8;
        case 0x161fdcu: goto label_161fdc;
        case 0x161fe0u: goto label_161fe0;
        case 0x161fe4u: goto label_161fe4;
        case 0x161fe8u: goto label_161fe8;
        case 0x161fecu: goto label_161fec;
        case 0x161ff0u: goto label_161ff0;
        case 0x161ff4u: goto label_161ff4;
        case 0x161ff8u: goto label_161ff8;
        case 0x161ffcu: goto label_161ffc;
        default: break;
    }

    ctx->pc = 0x161f08u;

label_161f08:
    // 0x161f08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_161f0c:
    // 0x161f0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161f10:
    // 0x161f10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x161f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_161f14:
    // 0x161f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_161f18:
    // 0x161f18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x161f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_161f1c:
    // 0x161f1c: 0x24111800  addiu       $s1, $zero, 0x1800
    ctx->pc = 0x161f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
label_161f20:
    // 0x161f20: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x161f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_161f24:
    // 0x161f24: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x161f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161f28:
    // 0x161f28: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x161f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_161f2c:
    // 0x161f2c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x161f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_161f30:
    // 0x161f30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161f34:
    // 0x161f34: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x161f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_161f38:
    // 0x161f38: 0x40f809  jalr        $v0
label_161f3c:
    if (ctx->pc == 0x161F3Cu) {
        ctx->pc = 0x161F3Cu;
            // 0x161f3c: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->pc = 0x161F40u;
        goto label_161f40;
    }
    ctx->pc = 0x161F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161F40u);
        ctx->pc = 0x161F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161F38u;
            // 0x161f3c: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161F40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161F40u; }
            if (ctx->pc != 0x161F40u) { return; }
        }
        }
    }
    ctx->pc = 0x161F40u;
label_161f40:
    // 0x161f40: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x161f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_161f44:
    // 0x161f44: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x161f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_161f48:
    // 0x161f48: 0xc04a508  jal         func_129420
label_161f4c:
    if (ctx->pc == 0x161F4Cu) {
        ctx->pc = 0x161F4Cu;
            // 0x161f4c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x161F50u;
        goto label_161f50;
    }
    ctx->pc = 0x161F48u;
    SET_GPR_U32(ctx, 31, 0x161F50u);
    ctx->pc = 0x161F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161F48u;
            // 0x161f4c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F50u; }
        if (ctx->pc != 0x161F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161F50u; }
        if (ctx->pc != 0x161F50u) { return; }
    }
    ctx->pc = 0x161F50u;
label_161f50:
    // 0x161f50: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x161f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_161f54:
    // 0x161f54: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x161f54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_161f58:
    // 0x161f58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161f5c:
    // 0x161f5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161f60:
    // 0x161f60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x161f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161f64:
    // 0x161f64: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_161f68:
    // 0x161f68: 0x40f809  jalr        $v0
label_161f6c:
    if (ctx->pc == 0x161F6Cu) {
        ctx->pc = 0x161F6Cu;
            // 0x161f6c: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->pc = 0x161F70u;
        goto label_161f70;
    }
    ctx->pc = 0x161F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161F70u);
        ctx->pc = 0x161F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161F68u;
            // 0x161f6c: 0x2328823  subu        $s1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161F70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161F70u; }
            if (ctx->pc != 0x161F70u) { return; }
        }
        }
    }
    ctx->pc = 0x161F70u;
label_161f70:
    // 0x161f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161f74:
    // 0x161f74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_161f78:
    // 0x161f78: 0x1a200013  blez        $s1, . + 4 + (0x13 << 2)
label_161f7c:
    if (ctx->pc == 0x161F7Cu) {
        ctx->pc = 0x161F7Cu;
            // 0x161f7c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161F80u;
        goto label_161f80;
    }
    ctx->pc = 0x161F78u;
    {
        const bool branch_taken_0x161f78 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x161F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161F78u;
            // 0x161f7c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f78) {
            ctx->pc = 0x161FC8u;
            goto label_161fc8;
        }
    }
    ctx->pc = 0x161F80u;
label_161f80:
    // 0x161f80: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x161f80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_161f84:
    // 0x161f84: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x161f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_161f88:
    // 0x161f88: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x161f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_161f8c:
    // 0x161f8c: 0x60f809  jalr        $v1
label_161f90:
    if (ctx->pc == 0x161F90u) {
        ctx->pc = 0x161F90u;
            // 0x161f90: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x161F94u;
        goto label_161f94;
    }
    ctx->pc = 0x161F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x161F94u);
        ctx->pc = 0x161F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161F8Cu;
            // 0x161f90: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161F94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161F94u; }
            if (ctx->pc != 0x161F94u) { return; }
        }
        }
    }
    ctx->pc = 0x161F94u;
label_161f94:
    // 0x161f94: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x161f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_161f98:
    // 0x161f98: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x161f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_161f9c:
    // 0x161f9c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x161f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_161fa0:
    // 0x161fa0: 0xc04a508  jal         func_129420
label_161fa4:
    if (ctx->pc == 0x161FA4u) {
        ctx->pc = 0x161FA4u;
            // 0x161fa4: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->pc = 0x161FA8u;
        goto label_161fa8;
    }
    ctx->pc = 0x161FA0u;
    SET_GPR_U32(ctx, 31, 0x161FA8u);
    ctx->pc = 0x161FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161FA0u;
            // 0x161fa4: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FA8u; }
        if (ctx->pc != 0x161FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FA8u; }
        if (ctx->pc != 0x161FA8u) { return; }
    }
    ctx->pc = 0x161FA8u;
label_161fa8:
    // 0x161fa8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x161fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_161fac:
    // 0x161fac: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x161facu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_161fb0:
    // 0x161fb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161fb4:
    // 0x161fb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161fb8:
    // 0x161fb8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x161fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_161fbc:
    // 0x161fbc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_161fc0:
    // 0x161fc0: 0x40f809  jalr        $v0
label_161fc4:
    if (ctx->pc == 0x161FC4u) {
        ctx->pc = 0x161FC4u;
            // 0x161fc4: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->pc = 0x161FC8u;
        goto label_161fc8;
    }
    ctx->pc = 0x161FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161FC8u);
        ctx->pc = 0x161FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161FC0u;
            // 0x161fc4: 0x2278823  subu        $s1, $s1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161FC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161FC8u; }
            if (ctx->pc != 0x161FC8u) { return; }
        }
        }
    }
    ctx->pc = 0x161FC8u;
label_161fc8:
    // 0x161fc8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_161fcc:
    if (ctx->pc == 0x161FCCu) {
        ctx->pc = 0x161FCCu;
            // 0x161fcc: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x161FD0u;
        goto label_161fd0;
    }
    ctx->pc = 0x161FC8u;
    {
        const bool branch_taken_0x161fc8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161FC8u;
            // 0x161fcc: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fc8) {
            ctx->pc = 0x161FE0u;
            goto label_161fe0;
        }
    }
    ctx->pc = 0x161FD0u;
label_161fd0:
    // 0x161fd0: 0xc05856c  jal         func_1615B0
label_161fd4:
    if (ctx->pc == 0x161FD4u) {
        ctx->pc = 0x161FD4u;
            // 0x161fd4: 0x24842878  addiu       $a0, $a0, 0x2878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10360));
        ctx->pc = 0x161FD8u;
        goto label_161fd8;
    }
    ctx->pc = 0x161FD0u;
    SET_GPR_U32(ctx, 31, 0x161FD8u);
    ctx->pc = 0x161FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161FD0u;
            // 0x161fd4: 0x24842878  addiu       $a0, $a0, 0x2878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FD8u; }
        if (ctx->pc != 0x161FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001615B0_0x1615b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FD8u; }
        if (ctx->pc != 0x161FD8u) { return; }
    }
    ctx->pc = 0x161FD8u;
label_161fd8:
    // 0x161fd8: 0x10000002  b           . + 4 + (0x2 << 2)
label_161fdc:
    if (ctx->pc == 0x161FDCu) {
        ctx->pc = 0x161FDCu;
            // 0x161fdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x161FE0u;
        goto label_161fe0;
    }
    ctx->pc = 0x161FD8u;
    {
        const bool branch_taken_0x161fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161FD8u;
            // 0x161fdc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161fd8) {
            ctx->pc = 0x161FE4u;
            goto label_161fe4;
        }
    }
    ctx->pc = 0x161FE0u;
label_161fe0:
    // 0x161fe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x161fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161fe4:
    // 0x161fe4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x161fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_161fe8:
    // 0x161fe8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x161fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_161fec:
    // 0x161fec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x161fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_161ff0:
    // 0x161ff0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x161ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_161ff4:
    // 0x161ff4: 0x3e00008  jr          $ra
label_161ff8:
    if (ctx->pc == 0x161FF8u) {
        ctx->pc = 0x161FF8u;
            // 0x161ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x161FFCu;
        goto label_161ffc;
    }
    ctx->pc = 0x161FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161FF4u;
            // 0x161ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161FFCu;
label_161ffc:
    // 0x161ffc: 0x0  nop
    ctx->pc = 0x161ffcu;
    // NOP
}
