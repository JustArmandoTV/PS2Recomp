#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF9C8
// Address: 0x1af9c8 - 0x1afb38
void sub_001AF9C8_0x1af9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF9C8_0x1af9c8");
#endif

    switch (ctx->pc) {
        case 0x1afa00u: goto label_1afa00;
        case 0x1afa98u: goto label_1afa98;
        case 0x1afab4u: goto label_1afab4;
        case 0x1afad4u: goto label_1afad4;
        case 0x1afae4u: goto label_1afae4;
        case 0x1afb0cu: goto label_1afb0c;
        default: break;
    }

    ctx->pc = 0x1af9c8u;

    // 0x1af9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af9d4: 0x806590e  j           func_196438
    ctx->pc = 0x1AF9D4u;
    ctx->pc = 0x1AF9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9D4u;
            // 0x1af9d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196438u;
    {
        auto targetFn = runtime->lookupFunction(0x196438u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AF9DCu;
    // 0x1af9dc: 0x0  nop
    ctx->pc = 0x1af9dcu;
    // NOP
    // 0x1af9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af9e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af9e8: 0x8c832030  lw          $v1, 0x2030($a0)
    ctx->pc = 0x1af9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1af9ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af9f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF9F0u;
    {
        const bool branch_taken_0x1af9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9F0u;
            // 0x1af9f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9f0) {
            ctx->pc = 0x1AFA04u;
            goto label_1afa04;
        }
    }
    ctx->pc = 0x1AF9F8u;
    // 0x1af9f8: 0xc064fd6  jal         func_193F58
    ctx->pc = 0x1AF9F8u;
    SET_GPR_U32(ctx, 31, 0x1AFA00u);
    ctx->pc = 0x193F58u;
    if (runtime->hasFunction(0x193F58u)) {
        auto targetFn = runtime->lookupFunction(0x193F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA00u; }
        if (ctx->pc != 0x1AFA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193F58_0x193f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA00u; }
        if (ctx->pc != 0x1AFA00u) { return; }
    }
    ctx->pc = 0x1AFA00u;
label_1afa00:
    // 0x1afa00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1afa00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afa04:
    // 0x1afa04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afa08: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA08u;
            // 0x1afa0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFA10u;
    // 0x1afa10: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA10u;
            // 0x1afa14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFA18u;
    // 0x1afa18: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA18u;
            // 0x1afa1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFA20u;
    // 0x1afa20: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA20u;
            // 0x1afa24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFA28u;
    // 0x1afa28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afa2c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1afa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1afa30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1afa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afa34: 0x34a50f0d  ori         $a1, $a1, 0xF0D
    ctx->pc = 0x1afa34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3853);
    // 0x1afa38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afa3c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AFA3Cu;
    ctx->pc = 0x1AFA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA3Cu;
            // 0x1afa40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AFA44u;
    // 0x1afa44: 0x0  nop
    ctx->pc = 0x1afa44u;
    // NOP
    // 0x1afa48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afa4c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1afa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1afa50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1afa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afa54: 0x34a50f0d  ori         $a1, $a1, 0xF0D
    ctx->pc = 0x1afa54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3853);
    // 0x1afa58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afa58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afa5c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AFA5Cu;
    ctx->pc = 0x1AFA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA5Cu;
            // 0x1afa60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AFA64u;
    // 0x1afa64: 0x0  nop
    ctx->pc = 0x1afa64u;
    // NOP
    // 0x1afa68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1afa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1afa6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afa70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1afa70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1afa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1afa78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1afa78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1afa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1afa80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1afa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1afa84: 0x26130d88  addiu       $s3, $s0, 0xD88
    ctx->pc = 0x1afa84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1afa88: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1afa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1afa8c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1afa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1afa90: 0xc06c120  jal         func_1B0480
    ctx->pc = 0x1AFA90u;
    SET_GPR_U32(ctx, 31, 0x1AFA98u);
    ctx->pc = 0x1AFA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA90u;
            // 0x1afa94: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0480u;
    if (runtime->hasFunction(0x1B0480u)) {
        auto targetFn = runtime->lookupFunction(0x1B0480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA98u; }
        if (ctx->pc != 0x1AFA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0480_0x1b0480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA98u; }
        if (ctx->pc != 0x1AFA98u) { return; }
    }
    ctx->pc = 0x1AFA98u;
label_1afa98:
    // 0x1afa98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1afa98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afa9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afaa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1afaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afaa4: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AFAA4u;
    {
        const bool branch_taken_0x1afaa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAA4u;
            // 0x1afaa8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afaa4) {
            ctx->pc = 0x1AFAECu;
            goto label_1afaec;
        }
    }
    ctx->pc = 0x1AFAACu;
    // 0x1afaac: 0xc06bece  jal         func_1AFB38
    ctx->pc = 0x1AFAACu;
    SET_GPR_U32(ctx, 31, 0x1AFAB4u);
    ctx->pc = 0x1AFB38u;
    if (runtime->hasFunction(0x1AFB38u)) {
        auto targetFn = runtime->lookupFunction(0x1AFB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAB4u; }
        if (ctx->pc != 0x1AFAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFB38_0x1afb38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAB4u; }
        if (ctx->pc != 0x1AFAB4u) { return; }
    }
    ctx->pc = 0x1AFAB4u;
label_1afab4:
    // 0x1afab4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1afab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1afab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afabc: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x1afabcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1afac0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1afac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afac4: 0xae66027c  sw          $a2, 0x27C($s3)
    ctx->pc = 0x1afac4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 636), GPR_U32(ctx, 6));
    // 0x1afac8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1afac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1afacc: 0xc06df22  jal         func_1B7C88
    ctx->pc = 0x1AFACCu;
    SET_GPR_U32(ctx, 31, 0x1AFAD4u);
    ctx->pc = 0x1AFAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFACCu;
            // 0x1afad0: 0xae630280  sw          $v1, 0x280($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C88u;
    if (runtime->hasFunction(0x1B7C88u)) {
        auto targetFn = runtime->lookupFunction(0x1B7C88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAD4u; }
        if (ctx->pc != 0x1AFAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7C88_0x1b7c88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAD4u; }
        if (ctx->pc != 0x1AFAD4u) { return; }
    }
    ctx->pc = 0x1AFAD4u;
label_1afad4:
    // 0x1afad4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFAD4u;
    {
        const bool branch_taken_0x1afad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAD4u;
            // 0x1afad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afad4) {
            ctx->pc = 0x1AFAECu;
            goto label_1afaec;
        }
    }
    ctx->pc = 0x1AFADCu;
    // 0x1afadc: 0xc06e0a2  jal         func_1B8288
    ctx->pc = 0x1AFADCu;
    SET_GPR_U32(ctx, 31, 0x1AFAE4u);
    ctx->pc = 0x1B8288u;
    if (runtime->hasFunction(0x1B8288u)) {
        auto targetFn = runtime->lookupFunction(0x1B8288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAE4u; }
        if (ctx->pc != 0x1AFAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8288_0x1b8288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAE4u; }
        if (ctx->pc != 0x1AFAE4u) { return; }
    }
    ctx->pc = 0x1AFAE4u;
label_1afae4:
    // 0x1afae4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AFAE4u;
    {
        const bool branch_taken_0x1afae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAE4u;
            // 0x1afae8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afae4) {
            ctx->pc = 0x1AFAF8u;
            goto label_1afaf8;
        }
    }
    ctx->pc = 0x1AFAECu;
label_1afaec:
    // 0x1afaec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AFAECu;
    {
        const bool branch_taken_0x1afaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAECu;
            // 0x1afaf0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afaec) {
            ctx->pc = 0x1AFB18u;
            goto label_1afb18;
        }
    }
    ctx->pc = 0x1AFAF4u;
    // 0x1afaf4: 0x0  nop
    ctx->pc = 0x1afaf4u;
    // NOP
label_1afaf8:
    // 0x1afaf8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1afaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1afafc: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFAFCu;
    {
        const bool branch_taken_0x1afafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afafc) {
            ctx->pc = 0x1AFB00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAFCu;
            // 0x1afb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AFB18u;
            goto label_1afb18;
        }
    }
    ctx->pc = 0x1AFB04u;
    // 0x1afb04: 0xc06c246  jal         func_1B0918
    ctx->pc = 0x1AFB04u;
    SET_GPR_U32(ctx, 31, 0x1AFB0Cu);
    ctx->pc = 0x1AFB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB04u;
            // 0x1afb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0918u;
    if (runtime->hasFunction(0x1B0918u)) {
        auto targetFn = runtime->lookupFunction(0x1B0918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB0Cu; }
        if (ctx->pc != 0x1AFB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0918_0x1b0918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB0Cu; }
        if (ctx->pc != 0x1AFB0Cu) { return; }
    }
    ctx->pc = 0x1AFB0Cu;
label_1afb0c:
    // 0x1afb0c: 0xae420058  sw          $v0, 0x58($s2)
    ctx->pc = 0x1afb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
    // 0x1afb10: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1afb10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1afb14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1afb14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1afb18:
    // 0x1afb18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afb18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afb1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1afb1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afb20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1afb20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afb24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1afb24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1afb28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1afb28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afb2c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1afb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1afb30: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB30u;
            // 0x1afb34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AFB38u;
}
