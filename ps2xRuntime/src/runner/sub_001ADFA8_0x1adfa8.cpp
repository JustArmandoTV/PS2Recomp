#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADFA8
// Address: 0x1adfa8 - 0x1ae090
void sub_001ADFA8_0x1adfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADFA8_0x1adfa8");
#endif

    switch (ctx->pc) {
        case 0x1adff8u: goto label_1adff8;
        case 0x1ae024u: goto label_1ae024;
        default: break;
    }

    ctx->pc = 0x1adfa8u;

    // 0x1adfa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1adfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1adfac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1adfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1adfb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1adfb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfb4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1adfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1adfb8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1adfb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfbc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1adfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1adfc0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1adfc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfc4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1adfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1adfc8: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1adfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1adfcc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1adfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1adfd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1adfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfd4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1adfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1adfd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1adfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1adfdc: 0x8e122030  lw          $s2, 0x2030($s0)
    ctx->pc = 0x1adfdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8240)));
    // 0x1adfe0: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x1adfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x1adfe4: 0x8e510074  lw          $s1, 0x74($s2)
    ctx->pc = 0x1adfe4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x1adfe8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1ADFE8u;
    {
        const bool branch_taken_0x1adfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFE8u;
            // 0x1adfec: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfe8) {
            ctx->pc = 0x1AE044u;
            goto label_1ae044;
        }
    }
    ctx->pc = 0x1ADFF0u;
    // 0x1adff0: 0xc06507a  jal         func_1941E8
    ctx->pc = 0x1ADFF0u;
    SET_GPR_U32(ctx, 31, 0x1ADFF8u);
    ctx->pc = 0x1ADFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFF0u;
            // 0x1adff4: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1941E8u;
    if (runtime->hasFunction(0x1941E8u)) {
        auto targetFn = runtime->lookupFunction(0x1941E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFF8u; }
        if (ctx->pc != 0x1ADFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001941E8_0x1941e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ADFF8u; }
        if (ctx->pc != 0x1ADFF8u) { return; }
    }
    ctx->pc = 0x1ADFF8u;
label_1adff8:
    // 0x1adff8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1adff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adffc: 0x54730004  bnel        $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADFFCu;
    {
        const bool branch_taken_0x1adffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1adffc) {
            ctx->pc = 0x1AE000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFFCu;
            // 0x1ae000: 0x8e020ea0  lw          $v0, 0xEA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3744)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE010u;
            goto label_1ae010;
        }
    }
    ctx->pc = 0x1AE004u;
    // 0x1ae004: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AE004u;
    {
        const bool branch_taken_0x1ae004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE004u;
            // 0x1ae008: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae004) {
            ctx->pc = 0x1AE044u;
            goto label_1ae044;
        }
    }
    ctx->pc = 0x1AE00Cu;
    // 0x1ae00c: 0x0  nop
    ctx->pc = 0x1ae00cu;
    // NOP
label_1ae010:
    // 0x1ae010: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE010u;
    {
        const bool branch_taken_0x1ae010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae010) {
            ctx->pc = 0x1AE014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE010u;
            // 0x1ae014: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE038u;
            goto label_1ae038;
        }
    }
    ctx->pc = 0x1AE018u;
    // 0x1ae018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae01c: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1AE01Cu;
    SET_GPR_U32(ctx, 31, 0x1AE024u);
    ctx->pc = 0x1AE020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE01Cu;
            // 0x1ae020: 0x24050049  addiu       $a1, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE024u; }
        if (ctx->pc != 0x1AE024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE024u; }
        if (ctx->pc != 0x1AE024u) { return; }
    }
    ctx->pc = 0x1AE024u;
label_1ae024:
    // 0x1ae024: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1ae024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ae028: 0x532026  xor         $a0, $v0, $s3
    ctx->pc = 0x1ae028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
    // 0x1ae02c: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x1ae02cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1ae030: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1ae030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1ae034: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1ae034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ae038:
    // 0x1ae038: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ae038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae03c: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x1ae03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
    // 0x1ae040: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1ae040u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_1ae044:
    // 0x1ae044: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae048: 0x56820007  bnel        $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE048u;
    {
        const bool branch_taken_0x1ae048 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ae048) {
            ctx->pc = 0x1AE04Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE048u;
            // 0x1ae04c: 0xae510074  sw          $s1, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE068u;
            goto label_1ae068;
        }
    }
    ctx->pc = 0x1AE050u;
    // 0x1ae050: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x1ae050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1ae054: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ae054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae058: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ae058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ae05c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ae05cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ae060: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1ae060u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1ae064: 0xae510074  sw          $s1, 0x74($s2)
    ctx->pc = 0x1ae064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 17));
label_1ae068:
    // 0x1ae068: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae06c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ae06cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae070: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ae070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae074: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ae074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ae078: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ae078u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae07c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1ae07cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae080: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ae080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae084: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE084u;
            // 0x1ae088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE08Cu;
    // 0x1ae08c: 0x0  nop
    ctx->pc = 0x1ae08cu;
    // NOP
}
