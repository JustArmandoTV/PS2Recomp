#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029FD10
// Address: 0x29fd10 - 0x29fd80
void sub_0029FD10_0x29fd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FD10_0x29fd10");
#endif

    switch (ctx->pc) {
        case 0x29fd10u: goto label_29fd10;
        case 0x29fd14u: goto label_29fd14;
        case 0x29fd18u: goto label_29fd18;
        case 0x29fd1cu: goto label_29fd1c;
        case 0x29fd20u: goto label_29fd20;
        case 0x29fd24u: goto label_29fd24;
        case 0x29fd28u: goto label_29fd28;
        case 0x29fd2cu: goto label_29fd2c;
        case 0x29fd30u: goto label_29fd30;
        case 0x29fd34u: goto label_29fd34;
        case 0x29fd38u: goto label_29fd38;
        case 0x29fd3cu: goto label_29fd3c;
        case 0x29fd40u: goto label_29fd40;
        case 0x29fd44u: goto label_29fd44;
        case 0x29fd48u: goto label_29fd48;
        case 0x29fd4cu: goto label_29fd4c;
        case 0x29fd50u: goto label_29fd50;
        case 0x29fd54u: goto label_29fd54;
        case 0x29fd58u: goto label_29fd58;
        case 0x29fd5cu: goto label_29fd5c;
        case 0x29fd60u: goto label_29fd60;
        case 0x29fd64u: goto label_29fd64;
        case 0x29fd68u: goto label_29fd68;
        case 0x29fd6cu: goto label_29fd6c;
        case 0x29fd70u: goto label_29fd70;
        case 0x29fd74u: goto label_29fd74;
        case 0x29fd78u: goto label_29fd78;
        case 0x29fd7cu: goto label_29fd7c;
        default: break;
    }

    ctx->pc = 0x29fd10u;

label_29fd10:
    // 0x29fd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29fd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29fd14:
    // 0x29fd14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29fd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_29fd18:
    // 0x29fd18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29fd1c:
    // 0x29fd1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29fd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29fd20:
    // 0x29fd20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29fd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29fd24:
    // 0x29fd24: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_29fd28:
    if (ctx->pc == 0x29FD28u) {
        ctx->pc = 0x29FD28u;
            // 0x29fd28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FD2Cu;
        goto label_29fd2c;
    }
    ctx->pc = 0x29FD24u;
    {
        const bool branch_taken_0x29fd24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD24u;
            // 0x29fd28: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd24) {
            ctx->pc = 0x29FD54u;
            goto label_29fd54;
        }
    }
    ctx->pc = 0x29FD2Cu;
label_29fd2c:
    // 0x29fd2c: 0xc0a8440  jal         func_2A1100
label_29fd30:
    if (ctx->pc == 0x29FD30u) {
        ctx->pc = 0x29FD30u;
            // 0x29fd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FD34u;
        goto label_29fd34;
    }
    ctx->pc = 0x29FD2Cu;
    SET_GPR_U32(ctx, 31, 0x29FD34u);
    ctx->pc = 0x29FD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD2Cu;
            // 0x29fd30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1100u;
    if (runtime->hasFunction(0x2A1100u)) {
        auto targetFn = runtime->lookupFunction(0x2A1100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD34u; }
        if (ctx->pc != 0x29FD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1100_0x2a1100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD34u; }
        if (ctx->pc != 0x29FD34u) { return; }
    }
    ctx->pc = 0x29FD34u;
label_29fd34:
    // 0x29fd34: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x29fd34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29fd38:
    // 0x29fd38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29fd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fd3c:
    // 0x29fd3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29fd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29fd40:
    // 0x29fd40: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x29fd40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_29fd44:
    // 0x29fd44: 0x320f809  jalr        $t9
label_29fd48:
    if (ctx->pc == 0x29FD48u) {
        ctx->pc = 0x29FD48u;
            // 0x29fd48: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FD4Cu;
        goto label_29fd4c;
    }
    ctx->pc = 0x29FD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29FD4Cu);
        ctx->pc = 0x29FD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD44u;
            // 0x29fd48: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29FD4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29FD4Cu; }
            if (ctx->pc != 0x29FD4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29FD4Cu;
label_29fd4c:
    // 0x29fd4c: 0x10000008  b           . + 4 + (0x8 << 2)
label_29fd50:
    if (ctx->pc == 0x29FD50u) {
        ctx->pc = 0x29FD50u;
            // 0x29fd50: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x29FD54u;
        goto label_29fd54;
    }
    ctx->pc = 0x29FD4Cu;
    {
        const bool branch_taken_0x29fd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD4Cu;
            // 0x29fd50: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd4c) {
            ctx->pc = 0x29FD70u;
            goto label_29fd70;
        }
    }
    ctx->pc = 0x29FD54u;
label_29fd54:
    // 0x29fd54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29fd54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29fd58:
    // 0x29fd58: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x29fd58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_29fd5c:
    // 0x29fd5c: 0x24a5db60  addiu       $a1, $a1, -0x24A0
    ctx->pc = 0x29fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957920));
label_29fd60:
    // 0x29fd60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x29fd60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_29fd64:
    // 0x29fd64: 0x320f809  jalr        $t9
label_29fd68:
    if (ctx->pc == 0x29FD68u) {
        ctx->pc = 0x29FD68u;
            // 0x29fd68: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x29FD6Cu;
        goto label_29fd6c;
    }
    ctx->pc = 0x29FD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29FD6Cu);
        ctx->pc = 0x29FD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD64u;
            // 0x29fd68: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29FD6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29FD6Cu; }
            if (ctx->pc != 0x29FD6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29FD6Cu;
label_29fd6c:
    // 0x29fd6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29fd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29fd70:
    // 0x29fd70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29fd70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29fd74:
    // 0x29fd74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29fd74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29fd78:
    // 0x29fd78: 0x3e00008  jr          $ra
label_29fd7c:
    if (ctx->pc == 0x29FD7Cu) {
        ctx->pc = 0x29FD7Cu;
            // 0x29fd7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x29FD80u;
        goto label_fallthrough_0x29fd78;
    }
    ctx->pc = 0x29FD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD78u;
            // 0x29fd7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29fd78:
    ctx->pc = 0x29FD80u;
}
