#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AAF88
// Address: 0x1aaf88 - 0x1ab128
void sub_001AAF88_0x1aaf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAF88_0x1aaf88");
#endif

    switch (ctx->pc) {
        case 0x1aafa8u: goto label_1aafa8;
        case 0x1aafd8u: goto label_1aafd8;
        case 0x1ab02cu: goto label_1ab02c;
        case 0x1ab078u: goto label_1ab078;
        case 0x1ab0a0u: goto label_1ab0a0;
        case 0x1ab0ccu: goto label_1ab0cc;
        default: break;
    }

    ctx->pc = 0x1aaf88u;

    // 0x1aaf88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aaf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aaf8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aaf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aaf90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aaf90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aaf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aaf98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aaf98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aaf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aafa0: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1AAFA0u;
    SET_GPR_U32(ctx, 31, 0x1AAFA8u);
    ctx->pc = 0x1AAFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFA0u;
            // 0x1aafa4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFA8u; }
        if (ctx->pc != 0x1AAFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFA8u; }
        if (ctx->pc != 0x1AAFA8u) { return; }
    }
    ctx->pc = 0x1AAFA8u;
label_1aafa8:
    // 0x1aafa8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1aafa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1aafac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AAFACu;
    {
        const bool branch_taken_0x1aafac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFACu;
            // 0x1aafb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafac) {
            ctx->pc = 0x1AAFD0u;
            goto label_1aafd0;
        }
    }
    ctx->pc = 0x1AAFB4u;
    // 0x1aafb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aafb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aafb8: 0x34a50182  ori         $a1, $a1, 0x182
    ctx->pc = 0x1aafb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)386);
    // 0x1aafbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aafbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aafc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aafc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aafc4: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AAFC4u;
    ctx->pc = 0x1AAFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFC4u;
            // 0x1aafc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AAFCCu;
    // 0x1aafcc: 0x0  nop
    ctx->pc = 0x1aafccu;
    // NOP
label_1aafd0:
    // 0x1aafd0: 0xc06c0b0  jal         func_1B02C0
    ctx->pc = 0x1AAFD0u;
    SET_GPR_U32(ctx, 31, 0x1AAFD8u);
    ctx->pc = 0x1AAFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFD0u;
            // 0x1aafd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B02C0u;
    if (runtime->hasFunction(0x1B02C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B02C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFD8u; }
        if (ctx->pc != 0x1AAFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B02C0_0x1b02c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFD8u; }
        if (ctx->pc != 0x1AAFD8u) { return; }
    }
    ctx->pc = 0x1AAFD8u;
label_1aafd8:
    // 0x1aafd8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aafd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1aafdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aafdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aafe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aafe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aafe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aafe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aafe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aafec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFECu;
            // 0x1aaff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAFF4u;
    // 0x1aaff4: 0x0  nop
    ctx->pc = 0x1aaff4u;
    // NOP
    // 0x1aaff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aaff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aaffc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aaffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab000: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ab000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab004: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab008: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ab008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab00c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ab00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ab010: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1ab010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab014: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ab014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ab018: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ab018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab01c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ab01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ab020: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1ab020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1ab024: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1AB024u;
    SET_GPR_U32(ctx, 31, 0x1AB02Cu);
    ctx->pc = 0x1AB028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB024u;
            // 0x1ab028: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB02Cu; }
        if (ctx->pc != 0x1AB02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB02Cu; }
        if (ctx->pc != 0x1AB02Cu) { return; }
    }
    ctx->pc = 0x1AB02Cu;
label_1ab02c:
    // 0x1ab02c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ab02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ab030: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ab030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab034: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ab034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab038: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1ab038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab03c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab040: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB040u;
    {
        const bool branch_taken_0x1ab040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB040u;
            // 0x1ab044: 0x34a50184  ori         $a1, $a1, 0x184 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)388);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab040) {
            ctx->pc = 0x1AB068u;
            goto label_1ab068;
        }
    }
    ctx->pc = 0x1AB048u;
    // 0x1ab048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab04c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab054: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ab054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab058: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ab058u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab05c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ab05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab060: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AB060u;
    ctx->pc = 0x1AB064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB060u;
            // 0x1ab064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AB068u;
label_1ab068:
    // 0x1ab068: 0x8e622030  lw          $v0, 0x2030($s3)
    ctx->pc = 0x1ab068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8240)));
    // 0x1ab06c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ab06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab070: 0xc06509a  jal         func_194268
    ctx->pc = 0x1AB070u;
    SET_GPR_U32(ctx, 31, 0x1AB078u);
    ctx->pc = 0x1AB074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB070u;
            // 0x1ab074: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194268u;
    if (runtime->hasFunction(0x194268u)) {
        auto targetFn = runtime->lookupFunction(0x194268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB078u; }
        if (ctx->pc != 0x1AB078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194268_0x194268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB078u; }
        if (ctx->pc != 0x1AB078u) { return; }
    }
    ctx->pc = 0x1AB078u;
label_1ab078:
    // 0x1ab078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab07c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab084: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab088: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ab088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab08c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ab08cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab090: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1ab090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ab094: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB094u;
            // 0x1ab098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB09Cu;
    // 0x1ab09c: 0x0  nop
    ctx->pc = 0x1ab09cu;
    // NOP
label_1ab0a0:
    // 0x1ab0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ab0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ab0a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab0a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ab0a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab0b0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ab0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ab0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ab0b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ab0b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ab0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ab0c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ab0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ab0c4: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1AB0C4u;
    SET_GPR_U32(ctx, 31, 0x1AB0CCu);
    ctx->pc = 0x1AB0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0C4u;
            // 0x1ab0c8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0CCu; }
        if (ctx->pc != 0x1AB0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0CCu; }
        if (ctx->pc != 0x1AB0CCu) { return; }
    }
    ctx->pc = 0x1AB0CCu;
label_1ab0cc:
    // 0x1ab0cc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1ab0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1ab0d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ab0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0d8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ab0d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB0DCu;
    {
        const bool branch_taken_0x1ab0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0DCu;
            // 0x1ab0e0: 0x34a50185  ori         $a1, $a1, 0x185 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)389);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0dc) {
            ctx->pc = 0x1AB100u;
            goto label_1ab100;
        }
    }
    ctx->pc = 0x1AB0E4u;
    // 0x1ab0e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab0e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab0e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab0ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab0ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab0f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ab0f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab0f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab0f8: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1AB0F8u;
    ctx->pc = 0x1AB0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0F8u;
            // 0x1ab0fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AB100u;
label_1ab100:
    // 0x1ab100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab104: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab108: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ab108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab10c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ab10cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab118: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ab118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab11c: 0x806ac4a  j           func_1AB128
    ctx->pc = 0x1AB11Cu;
    ctx->pc = 0x1AB120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB11Cu;
            // 0x1ab120: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB128u;
    if (runtime->hasFunction(0x1AB128u)) {
        auto targetFn = runtime->lookupFunction(0x1AB128u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AB128_0x1ab128(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AB124u;
    // 0x1ab124: 0x0  nop
    ctx->pc = 0x1ab124u;
    // NOP
}
