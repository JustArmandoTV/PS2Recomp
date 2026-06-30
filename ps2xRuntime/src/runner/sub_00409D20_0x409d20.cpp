#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00409D20
// Address: 0x409d20 - 0x409da0
void sub_00409D20_0x409d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409D20_0x409d20");
#endif

    switch (ctx->pc) {
        case 0x409d20u: goto label_409d20;
        case 0x409d24u: goto label_409d24;
        case 0x409d28u: goto label_409d28;
        case 0x409d2cu: goto label_409d2c;
        case 0x409d30u: goto label_409d30;
        case 0x409d34u: goto label_409d34;
        case 0x409d38u: goto label_409d38;
        case 0x409d3cu: goto label_409d3c;
        case 0x409d40u: goto label_409d40;
        case 0x409d44u: goto label_409d44;
        case 0x409d48u: goto label_409d48;
        case 0x409d4cu: goto label_409d4c;
        case 0x409d50u: goto label_409d50;
        case 0x409d54u: goto label_409d54;
        case 0x409d58u: goto label_409d58;
        case 0x409d5cu: goto label_409d5c;
        case 0x409d60u: goto label_409d60;
        case 0x409d64u: goto label_409d64;
        case 0x409d68u: goto label_409d68;
        case 0x409d6cu: goto label_409d6c;
        case 0x409d70u: goto label_409d70;
        case 0x409d74u: goto label_409d74;
        case 0x409d78u: goto label_409d78;
        case 0x409d7cu: goto label_409d7c;
        case 0x409d80u: goto label_409d80;
        case 0x409d84u: goto label_409d84;
        case 0x409d88u: goto label_409d88;
        case 0x409d8cu: goto label_409d8c;
        case 0x409d90u: goto label_409d90;
        case 0x409d94u: goto label_409d94;
        case 0x409d98u: goto label_409d98;
        case 0x409d9cu: goto label_409d9c;
        default: break;
    }

    ctx->pc = 0x409d20u;

label_409d20:
    // 0x409d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x409d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_409d24:
    // 0x409d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x409d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_409d28:
    // 0x409d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x409d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_409d2c:
    // 0x409d2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x409d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_409d30:
    // 0x409d30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x409d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_409d34:
    // 0x409d34: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x409d34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_409d38:
    // 0x409d38: 0x320f809  jalr        $t9
label_409d3c:
    if (ctx->pc == 0x409D3Cu) {
        ctx->pc = 0x409D3Cu;
            // 0x409d3c: 0x805000da  lb          $s0, 0xDA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 218)));
        ctx->pc = 0x409D40u;
        goto label_409d40;
    }
    ctx->pc = 0x409D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x409D40u);
        ctx->pc = 0x409D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409D38u;
            // 0x409d3c: 0x805000da  lb          $s0, 0xDA($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 218)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x409D40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x409D40u; }
            if (ctx->pc != 0x409D40u) { return; }
        }
        }
    }
    ctx->pc = 0x409D40u;
label_409d40:
    // 0x409d40: 0x4420010  bltzl       $v0, . + 4 + (0x10 << 2)
label_409d44:
    if (ctx->pc == 0x409D44u) {
        ctx->pc = 0x409D44u;
            // 0x409d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409D48u;
        goto label_409d48;
    }
    ctx->pc = 0x409D40u;
    {
        const bool branch_taken_0x409d40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x409d40) {
            ctx->pc = 0x409D44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x409D40u;
            // 0x409d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x409D84u;
            goto label_409d84;
        }
    }
    ctx->pc = 0x409D48u;
label_409d48:
    // 0x409d48: 0x10863c  dsll32      $s0, $s0, 24
    ctx->pc = 0x409d48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 24));
label_409d4c:
    // 0x409d4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x409d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_409d50:
    // 0x409d50: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x409d50u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_409d54:
    // 0x409d54: 0x3c05a500  lui         $a1, 0xA500
    ctx->pc = 0x409d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42240 << 16));
label_409d58:
    // 0x409d58: 0xc07293e  jal         func_1CA4F8
label_409d5c:
    if (ctx->pc == 0x409D5Cu) {
        ctx->pc = 0x409D5Cu;
            // 0x409d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409D60u;
        goto label_409d60;
    }
    ctx->pc = 0x409D58u;
    SET_GPR_U32(ctx, 31, 0x409D60u);
    ctx->pc = 0x409D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409D58u;
            // 0x409d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409D60u; }
        if (ctx->pc != 0x409D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409D60u; }
        if (ctx->pc != 0x409D60u) { return; }
    }
    ctx->pc = 0x409D60u;
label_409d60:
    // 0x409d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_409d64:
    // 0x409d64: 0x3c05a600  lui         $a1, 0xA600
    ctx->pc = 0x409d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42496 << 16));
label_409d68:
    // 0x409d68: 0xc07293e  jal         func_1CA4F8
label_409d6c:
    if (ctx->pc == 0x409D6Cu) {
        ctx->pc = 0x409D6Cu;
            // 0x409d6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409D70u;
        goto label_409d70;
    }
    ctx->pc = 0x409D68u;
    SET_GPR_U32(ctx, 31, 0x409D70u);
    ctx->pc = 0x409D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409D68u;
            // 0x409d6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409D70u; }
        if (ctx->pc != 0x409D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409D70u; }
        if (ctx->pc != 0x409D70u) { return; }
    }
    ctx->pc = 0x409D70u;
label_409d70:
    // 0x409d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_409d74:
    // 0x409d74: 0x3c05a510  lui         $a1, 0xA510
    ctx->pc = 0x409d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42256 << 16));
label_409d78:
    // 0x409d78: 0xc07293e  jal         func_1CA4F8
label_409d7c:
    if (ctx->pc == 0x409D7Cu) {
        ctx->pc = 0x409D7Cu;
            // 0x409d7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x409D80u;
        goto label_409d80;
    }
    ctx->pc = 0x409D78u;
    SET_GPR_U32(ctx, 31, 0x409D80u);
    ctx->pc = 0x409D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x409D78u;
            // 0x409d7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409D80u; }
        if (ctx->pc != 0x409D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x409D80u; }
        if (ctx->pc != 0x409D80u) { return; }
    }
    ctx->pc = 0x409D80u;
label_409d80:
    // 0x409d80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x409d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_409d84:
    // 0x409d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x409d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_409d88:
    // 0x409d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x409d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_409d8c:
    // 0x409d8c: 0x3e00008  jr          $ra
label_409d90:
    if (ctx->pc == 0x409D90u) {
        ctx->pc = 0x409D90u;
            // 0x409d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x409D94u;
        goto label_409d94;
    }
    ctx->pc = 0x409D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x409D8Cu;
            // 0x409d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x409D94u;
label_409d94:
    // 0x409d94: 0x0  nop
    ctx->pc = 0x409d94u;
    // NOP
label_409d98:
    // 0x409d98: 0x0  nop
    ctx->pc = 0x409d98u;
    // NOP
label_409d9c:
    // 0x409d9c: 0x0  nop
    ctx->pc = 0x409d9cu;
    // NOP
}
