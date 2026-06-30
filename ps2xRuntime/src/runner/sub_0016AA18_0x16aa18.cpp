#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AA18
// Address: 0x16aa18 - 0x16aad0
void sub_0016AA18_0x16aa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AA18_0x16aa18");
#endif

    switch (ctx->pc) {
        case 0x16aa38u: goto label_16aa38;
        case 0x16aa40u: goto label_16aa40;
        case 0x16aa54u: goto label_16aa54;
        case 0x16aa9cu: goto label_16aa9c;
        case 0x16aaacu: goto label_16aaac;
        case 0x16aab4u: goto label_16aab4;
        default: break;
    }

    ctx->pc = 0x16aa18u;

    // 0x16aa18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16aa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16aa1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16aa20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16aa24: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x16aa24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x16aa28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16aa2c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16aa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16aa30: 0xc0599d2  jal         func_166748
    ctx->pc = 0x16AA30u;
    SET_GPR_U32(ctx, 31, 0x16AA38u);
    ctx->pc = 0x16AA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA30u;
            // 0x16aa34: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA38u; }
        if (ctx->pc != 0x16AA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA38u; }
        if (ctx->pc != 0x16AA38u) { return; }
    }
    ctx->pc = 0x16AA38u;
label_16aa38:
    // 0x16aa38: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x16aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x16aa3c: 0x24507370  addiu       $s0, $v0, 0x7370
    ctx->pc = 0x16aa3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29552));
label_16aa40:
    // 0x16aa40: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x16aa40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16aa44: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AA44u;
    {
        const bool branch_taken_0x16aa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x16aa44) {
            ctx->pc = 0x16AA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA44u;
            // 0x16aa48: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AA58u;
            goto label_16aa58;
        }
    }
    ctx->pc = 0x16AA4Cu;
    // 0x16aa4c: 0xc05aa42  jal         func_16A908
    ctx->pc = 0x16AA4Cu;
    SET_GPR_U32(ctx, 31, 0x16AA54u);
    ctx->pc = 0x16AA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA4Cu;
            // 0x16aa50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A908u;
    if (runtime->hasFunction(0x16A908u)) {
        auto targetFn = runtime->lookupFunction(0x16A908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA54u; }
        if (ctx->pc != 0x16AA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A908_0x16a908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA54u; }
        if (ctx->pc != 0x16AA54u) { return; }
    }
    ctx->pc = 0x16AA54u;
label_16aa54:
    // 0x16aa54: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x16aa54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_16aa58:
    // 0x16aa58: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16AA58u;
    {
        const bool branch_taken_0x16aa58 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x16AA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA58u;
            // 0x16aa5c: 0x26100034  addiu       $s0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa58) {
            ctx->pc = 0x16AA40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16aa40;
        }
    }
    ctx->pc = 0x16AA60u;
    // 0x16aa60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16aa60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aa64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16aa64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16aa68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16aa68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aa6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16aa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16aa70: 0x80599d8  j           func_166760
    ctx->pc = 0x16AA70u;
    ctx->pc = 0x16AA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA70u;
            // 0x16aa74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16AA78u;
    // 0x16aa78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16aa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16aa7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16aa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16aa80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16aa80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16aa88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16aa88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16aa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16aa90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16aa94: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16AA94u;
    SET_GPR_U32(ctx, 31, 0x16AA9Cu);
    ctx->pc = 0x16AA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA94u;
            // 0x16aa98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA9Cu; }
        if (ctx->pc != 0x16AA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AA9Cu; }
        if (ctx->pc != 0x16AA9Cu) { return; }
    }
    ctx->pc = 0x16AA9Cu;
label_16aa9c:
    // 0x16aa9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aaa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16aaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aaa4: 0xc05aab4  jal         func_16AAD0
    ctx->pc = 0x16AAA4u;
    SET_GPR_U32(ctx, 31, 0x16AAACu);
    ctx->pc = 0x16AAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AAA4u;
            // 0x16aaa8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AAD0u;
    if (runtime->hasFunction(0x16AAD0u)) {
        auto targetFn = runtime->lookupFunction(0x16AAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAACu; }
        if (ctx->pc != 0x16AAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016AAD0_0x16aad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAACu; }
        if (ctx->pc != 0x16AAACu) { return; }
    }
    ctx->pc = 0x16AAACu;
label_16aaac:
    // 0x16aaac: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16AAACu;
    SET_GPR_U32(ctx, 31, 0x16AAB4u);
    ctx->pc = 0x16AAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AAACu;
            // 0x16aab0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAB4u; }
        if (ctx->pc != 0x16AAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AAB4u; }
        if (ctx->pc != 0x16AAB4u) { return; }
    }
    ctx->pc = 0x16AAB4u;
label_16aab4:
    // 0x16aab4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16aab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16aab8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16aab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aabc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16aabcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16aac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16aac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16aac4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16aac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16aac8: 0x3e00008  jr          $ra
    ctx->pc = 0x16AAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AAC8u;
            // 0x16aacc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16AAD0u;
}
