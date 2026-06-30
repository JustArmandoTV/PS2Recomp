#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017BCA0
// Address: 0x17bca0 - 0x17bde0
void sub_0017BCA0_0x17bca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BCA0_0x17bca0");
#endif

    switch (ctx->pc) {
        case 0x17bcc8u: goto label_17bcc8;
        case 0x17bce8u: goto label_17bce8;
        case 0x17bd10u: goto label_17bd10;
        case 0x17bd24u: goto label_17bd24;
        case 0x17bd84u: goto label_17bd84;
        case 0x17bda4u: goto label_17bda4;
        default: break;
    }

    ctx->pc = 0x17bca0u;

    // 0x17bca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17bca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17bca4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17bca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17bca8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17bca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17bcac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bcb0: 0x24504420  addiu       $s0, $v0, 0x4420
    ctx->pc = 0x17bcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17440));
    // 0x17bcb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17bcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17bcb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17bcb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bcbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17bcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17bcc0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17bcc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bcc4: 0x0  nop
    ctx->pc = 0x17bcc4u;
    // NOP
label_17bcc8:
    // 0x17bcc8: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x17bcc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x17bccc: 0x54720009  bnel        $v1, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x17BCCCu;
    {
        const bool branch_taken_0x17bccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        if (branch_taken_0x17bccc) {
            ctx->pc = 0x17BCD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCCCu;
            // 0x17bcd0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BCF4u;
            goto label_17bcf4;
        }
    }
    ctx->pc = 0x17BCD4u;
    // 0x17bcd4: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x17bcd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17bcd8: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17BCD8u;
    {
        const bool branch_taken_0x17bcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17bcd8) {
            ctx->pc = 0x17BCDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCD8u;
            // 0x17bcdc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BCF4u;
            goto label_17bcf4;
        }
    }
    ctx->pc = 0x17BCE0u;
    // 0x17bce0: 0xc0431c0  jal         func_10C700
    ctx->pc = 0x17BCE0u;
    SET_GPR_U32(ctx, 31, 0x17BCE8u);
    ctx->pc = 0x17BCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCE0u;
            // 0x17bce4: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C700u;
    if (runtime->hasFunction(0x10C700u)) {
        auto targetFn = runtime->lookupFunction(0x10C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCE8u; }
        if (ctx->pc != 0x17BCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C700_0x10c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BCE8u; }
        if (ctx->pc != 0x17BCE8u) { return; }
    }
    ctx->pc = 0x17BCE8u;
label_17bce8:
    // 0x17bce8: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17BCE8u;
    {
        const bool branch_taken_0x17bce8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17bce8) {
            ctx->pc = 0x17BCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCE8u;
            // 0x17bcec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BD48u;
            goto label_17bd48;
        }
    }
    ctx->pc = 0x17BCF0u;
    // 0x17bcf0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17bcf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17bcf4:
    // 0x17bcf4: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x17bcf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17bcf8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x17BCF8u;
    {
        const bool branch_taken_0x17bcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BCF8u;
            // 0x17bcfc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bcf8) {
            ctx->pc = 0x17BCC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17bcc8;
        }
    }
    ctx->pc = 0x17BD00u;
    // 0x17bd00: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17bd04: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x17bd04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bd08: 0x24504420  addiu       $s0, $v0, 0x4420
    ctx->pc = 0x17bd08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17440));
    // 0x17bd0c: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x17bd0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_17bd10:
    // 0x17bd10: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x17bd10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17bd14: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BD14u;
    {
        const bool branch_taken_0x17bd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x17bd14) {
            ctx->pc = 0x17BD18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD14u;
            // 0x17bd18: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17BD28u;
            goto label_17bd28;
        }
    }
    ctx->pc = 0x17BD1Cu;
    // 0x17bd1c: 0xc05ee4c  jal         func_17B930
    ctx->pc = 0x17BD1Cu;
    SET_GPR_U32(ctx, 31, 0x17BD24u);
    ctx->pc = 0x17BD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD1Cu;
            // 0x17bd20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B930u;
    if (runtime->hasFunction(0x17B930u)) {
        auto targetFn = runtime->lookupFunction(0x17B930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD24u; }
        if (ctx->pc != 0x17BD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B930_0x17b930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD24u; }
        if (ctx->pc != 0x17BD24u) { return; }
    }
    ctx->pc = 0x17BD24u;
label_17bd24:
    // 0x17bd24: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17bd24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_17bd28:
    // 0x17bd28: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BD28u;
    {
        const bool branch_taken_0x17bd28 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x17BD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD28u;
            // 0x17bd2c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd28) {
            ctx->pc = 0x17BD10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17bd10;
        }
    }
    ctx->pc = 0x17BD30u;
    // 0x17bd30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17bd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bd34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17bd34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bd38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17bd38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bd3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17bd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bd40: 0x805f21e  j           func_17C878
    ctx->pc = 0x17BD40u;
    ctx->pc = 0x17BD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD40u;
            // 0x17bd44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C878u;
    if (runtime->hasFunction(0x17C878u)) {
        auto targetFn = runtime->lookupFunction(0x17C878u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017C878_0x17c878(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17BD48u;
label_17bd48:
    // 0x17bd48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17bd48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bd4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17bd4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bd50: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17bd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bd54: 0x3e00008  jr          $ra
    ctx->pc = 0x17BD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD54u;
            // 0x17bd58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BD5Cu;
    // 0x17bd5c: 0x0  nop
    ctx->pc = 0x17bd5cu;
    // NOP
    // 0x17bd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bd64: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17bd68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bd6c: 0x2450441c  addiu       $s0, $v0, 0x441C
    ctx->pc = 0x17bd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17436));
    // 0x17bd70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17bd74: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17bd78: 0x24845c88  addiu       $a0, $a0, 0x5C88
    ctx->pc = 0x17bd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23688));
    // 0x17bd7c: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17BD7Cu;
    SET_GPR_U32(ctx, 31, 0x17BD84u);
    ctx->pc = 0x17BD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD7Cu;
            // 0x17bd80: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD84u; }
        if (ctx->pc != 0x17BD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BD84u; }
        if (ctx->pc != 0x17BD84u) { return; }
    }
    ctx->pc = 0x17BD84u;
label_17bd84:
    // 0x17bd84: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x17bd84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x17bd88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17bd8c: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x17bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x17bd90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17bd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bd94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BD94u;
    {
        const bool branch_taken_0x17bd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BD94u;
            // 0x17bd98: 0x24060800  addiu       $a2, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bd94) {
            ctx->pc = 0x17BDA8u;
            goto label_17bda8;
        }
    }
    ctx->pc = 0x17BD9Cu;
    // 0x17bd9c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17BD9Cu;
    SET_GPR_U32(ctx, 31, 0x17BDA4u);
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDA4u; }
        if (ctx->pc != 0x17BDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BDA4u; }
        if (ctx->pc != 0x17BDA4u) { return; }
    }
    ctx->pc = 0x17BDA4u;
label_17bda4:
    // 0x17bda4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x17bda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17bda8:
    // 0x17bda8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17bdac: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17bdacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17bdb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17bdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17bdb4: 0x24845ca0  addiu       $a0, $a0, 0x5CA0
    ctx->pc = 0x17bdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23712));
    // 0x17bdb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17bdb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bdbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17bdbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bdc0: 0x805b99c  j           func_16E670
    ctx->pc = 0x17BDC0u;
    ctx->pc = 0x17BDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BDC0u;
            // 0x17bdc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016E670_0x16e670(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17BDC8u;
    // 0x17bdc8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17bdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17bdcc: 0x2463441c  addiu       $v1, $v1, 0x441C
    ctx->pc = 0x17bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17436));
    // 0x17bdd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17bdd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17bdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17BDD8u;
            // 0x17bddc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BDE0u;
}
