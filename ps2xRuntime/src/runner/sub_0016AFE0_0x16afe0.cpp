#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AFE0
// Address: 0x16afe0 - 0x16b0d0
void sub_0016AFE0_0x16afe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AFE0_0x16afe0");
#endif

    switch (ctx->pc) {
        case 0x16b048u: goto label_16b048;
        case 0x16b08cu: goto label_16b08c;
        case 0x16b0a4u: goto label_16b0a4;
        case 0x16b0acu: goto label_16b0ac;
        default: break;
    }

    ctx->pc = 0x16afe0u;

    // 0x16afe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16afe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16afe4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16afe8: 0x2c840100  sltiu       $a0, $a0, 0x100
    ctx->pc = 0x16afe8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x16afec: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AFECu;
    {
        const bool branch_taken_0x16afec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFECu;
            // 0x16aff0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afec) {
            ctx->pc = 0x16B000u;
            goto label_16b000;
        }
    }
    ctx->pc = 0x16AFF4u;
    // 0x16aff4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16aff8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16AFF8u;
    {
        const bool branch_taken_0x16aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AFF8u;
            // 0x16affc: 0x24843ae8  addiu       $a0, $a0, 0x3AE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aff8) {
            ctx->pc = 0x16B040u;
            goto label_16b040;
        }
    }
    ctx->pc = 0x16B000u;
label_16b000:
    // 0x16b000: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x16b000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x16b004: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16b004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16b008: 0x8c8476b0  lw          $a0, 0x76B0($a0)
    ctx->pc = 0x16b008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30384)));
    // 0x16b00c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B00Cu;
    {
        const bool branch_taken_0x16b00c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b00c) {
            ctx->pc = 0x16B020u;
            goto label_16b020;
        }
    }
    ctx->pc = 0x16B014u;
    // 0x16b014: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16b014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16b018: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16B018u;
    {
        const bool branch_taken_0x16b018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B018u;
            // 0x16b01c: 0x24843ae8  addiu       $a0, $a0, 0x3AE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b018) {
            ctx->pc = 0x16B040u;
            goto label_16b040;
        }
    }
    ctx->pc = 0x16B020u;
label_16b020:
    // 0x16b020: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B020u;
    {
        const bool branch_taken_0x16b020 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x16b020) {
            ctx->pc = 0x16B024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16B020u;
            // 0x16b024: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16B03Cu;
            goto label_16b03c;
        }
    }
    ctx->pc = 0x16B028u;
    // 0x16b028: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16b028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16b02c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x16b02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16b030: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B030u;
    {
        const bool branch_taken_0x16b030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B030u;
            // 0x16b034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b030) {
            ctx->pc = 0x16B04Cu;
            goto label_16b04c;
        }
    }
    ctx->pc = 0x16B038u;
    // 0x16b038: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16b038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_16b03c:
    // 0x16b03c: 0x24843b10  addiu       $a0, $a0, 0x3B10
    ctx->pc = 0x16b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15120));
label_16b040:
    // 0x16b040: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16B040u;
    SET_GPR_U32(ctx, 31, 0x16B048u);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B048u; }
        if (ctx->pc != 0x16B048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B048u; }
        if (ctx->pc != 0x16B048u) { return; }
    }
    ctx->pc = 0x16B048u;
label_16b048:
    // 0x16b048: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x16b048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_16b04c:
    // 0x16b04c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b050: 0x3e00008  jr          $ra
    ctx->pc = 0x16B050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B050u;
            // 0x16b054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B058u;
    // 0x16b058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16b05c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b064: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16b064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b068: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16b068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b06c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16b06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16b070: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16b070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b074: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16b074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16b078: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x16b078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b07c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16b07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16b080: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16b080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16b084: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16B084u;
    SET_GPR_U32(ctx, 31, 0x16B08Cu);
    ctx->pc = 0x16B088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B084u;
            // 0x16b088: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B08Cu; }
        if (ctx->pc != 0x16B08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B08Cu; }
        if (ctx->pc != 0x16B08Cu) { return; }
    }
    ctx->pc = 0x16B08Cu;
label_16b08c:
    // 0x16b08c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b090: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16b090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b094: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16b094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b098: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16b098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b09c: 0xc05ac34  jal         func_16B0D0
    ctx->pc = 0x16B09Cu;
    SET_GPR_U32(ctx, 31, 0x16B0A4u);
    ctx->pc = 0x16B0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B09Cu;
            // 0x16b0a0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B0D0u;
    if (runtime->hasFunction(0x16B0D0u)) {
        auto targetFn = runtime->lookupFunction(0x16B0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B0A4u; }
        if (ctx->pc != 0x16B0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B0D0_0x16b0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B0A4u; }
        if (ctx->pc != 0x16B0A4u) { return; }
    }
    ctx->pc = 0x16B0A4u;
label_16b0a4:
    // 0x16b0a4: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16B0A4u;
    SET_GPR_U32(ctx, 31, 0x16B0ACu);
    ctx->pc = 0x16B0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0A4u;
            // 0x16b0a8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B0ACu; }
        if (ctx->pc != 0x16B0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B0ACu; }
        if (ctx->pc != 0x16B0ACu) { return; }
    }
    ctx->pc = 0x16B0ACu;
label_16b0ac:
    // 0x16b0ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b0acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b0b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16b0b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b0bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16b0bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b0c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16b0c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b0c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16b0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16b0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B0C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B0C8u;
            // 0x16b0cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B0D0u;
}
