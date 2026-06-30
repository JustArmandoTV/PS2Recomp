#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051BC70
// Address: 0x51bc70 - 0x51bd70
void sub_0051BC70_0x51bc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051BC70_0x51bc70");
#endif

    switch (ctx->pc) {
        case 0x51bcb8u: goto label_51bcb8;
        case 0x51bcc8u: goto label_51bcc8;
        case 0x51bcd4u: goto label_51bcd4;
        case 0x51bcfcu: goto label_51bcfc;
        case 0x51bd50u: goto label_51bd50;
        default: break;
    }

    ctx->pc = 0x51bc70u;

    // 0x51bc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51bc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51bc74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51bc78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51bc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51bc7c: 0x24635ac8  addiu       $v1, $v1, 0x5AC8
    ctx->pc = 0x51bc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23240));
    // 0x51bc80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51bc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51bc84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51bc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51bc88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x51bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x51bc8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51bc8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bc90: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51bc90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51bc94: 0xac500ec8  sw          $s0, 0xEC8($v0)
    ctx->pc = 0x51bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3784), GPR_U32(ctx, 16));
    // 0x51bc98: 0x24635ad8  addiu       $v1, $v1, 0x5AD8
    ctx->pc = 0x51bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23256));
    // 0x51bc9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x51bc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x51bca0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x51bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x51bca4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x51bca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x51bca8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x51bca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x51bcac: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x51bcacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x51bcb0: 0xc040180  jal         func_100600
    ctx->pc = 0x51BCB0u;
    SET_GPR_U32(ctx, 31, 0x51BCB8u);
    ctx->pc = 0x51BCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BCB0u;
            // 0x51bcb4: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BCB8u; }
        if (ctx->pc != 0x51BCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BCB8u; }
        if (ctx->pc != 0x51BCB8u) { return; }
    }
    ctx->pc = 0x51BCB8u;
label_51bcb8:
    // 0x51bcb8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x51BCB8u;
    {
        const bool branch_taken_0x51bcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51bcb8) {
            ctx->pc = 0x51BCBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51BCB8u;
            // 0x51bcbc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51BCCCu;
            goto label_51bccc;
        }
    }
    ctx->pc = 0x51BCC0u;
    // 0x51bcc0: 0xc120790  jal         func_481E40
    ctx->pc = 0x51BCC0u;
    SET_GPR_U32(ctx, 31, 0x51BCC8u);
    ctx->pc = 0x51BCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BCC0u;
            // 0x51bcc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481E40u;
    if (runtime->hasFunction(0x481E40u)) {
        auto targetFn = runtime->lookupFunction(0x481E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BCC8u; }
        if (ctx->pc != 0x51BCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481E40_0x481e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BCC8u; }
        if (ctx->pc != 0x51BCC8u) { return; }
    }
    ctx->pc = 0x51BCC8u;
label_51bcc8:
    // 0x51bcc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x51bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_51bccc:
    // 0x51bccc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x51bcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bcd0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x51bcd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51bcd4:
    // 0x51bcd4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x51bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x51bcd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x51bcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x51bcdc: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x51bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x51bce0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x51bce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x51bce4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x51bce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x51bce8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x51BCE8u;
    {
        const bool branch_taken_0x51bce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51bce8) {
            ctx->pc = 0x51BCD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51bcd4;
        }
    }
    ctx->pc = 0x51BCF0u;
    // 0x51bcf0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x51bcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x51bcf4: 0xc155a40  jal         func_556900
    ctx->pc = 0x51BCF4u;
    SET_GPR_U32(ctx, 31, 0x51BCFCu);
    ctx->pc = 0x51BCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BCF4u;
            // 0x51bcf8: 0x24847790  addiu       $a0, $a0, 0x7790 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556900u;
    if (runtime->hasFunction(0x556900u)) {
        auto targetFn = runtime->lookupFunction(0x556900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BCFCu; }
        if (ctx->pc != 0x51BCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00556900_0x556900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BCFCu; }
        if (ctx->pc != 0x51BCFCu) { return; }
    }
    ctx->pc = 0x51BCFCu;
label_51bcfc:
    // 0x51bcfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51bcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bd00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51bd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51bd04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51bd04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51bd08: 0x3e00008  jr          $ra
    ctx->pc = 0x51BD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BD08u;
            // 0x51bd0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BD10u;
    // 0x51bd10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51bd14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51bd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51bd18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51bd1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51bd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bd20: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x51BD20u;
    {
        const bool branch_taken_0x51bd20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51bd20) {
            ctx->pc = 0x51BD24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51BD20u;
            // 0x51bd24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51BD54u;
            goto label_51bd54;
        }
    }
    ctx->pc = 0x51BD28u;
    // 0x51bd28: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51bd2c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x51bd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51bd30: 0x24425ac8  addiu       $v0, $v0, 0x5AC8
    ctx->pc = 0x51bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23240));
    // 0x51bd34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x51bd34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x51bd38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51bd3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51bd40: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51BD40u;
    {
        const bool branch_taken_0x51bd40 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x51BD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BD40u;
            // 0x51bd44: 0xac400ec8  sw          $zero, 0xEC8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3784), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51bd40) {
            ctx->pc = 0x51BD50u;
            goto label_51bd50;
        }
    }
    ctx->pc = 0x51BD48u;
    // 0x51bd48: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51BD48u;
    SET_GPR_U32(ctx, 31, 0x51BD50u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BD50u; }
        if (ctx->pc != 0x51BD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BD50u; }
        if (ctx->pc != 0x51BD50u) { return; }
    }
    ctx->pc = 0x51BD50u;
label_51bd50:
    // 0x51bd50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51bd50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51bd54:
    // 0x51bd54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51bd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51bd58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51bd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51bd5c: 0x3e00008  jr          $ra
    ctx->pc = 0x51BD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BD5Cu;
            // 0x51bd60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BD64u;
    // 0x51bd64: 0x0  nop
    ctx->pc = 0x51bd64u;
    // NOP
    // 0x51bd68: 0x0  nop
    ctx->pc = 0x51bd68u;
    // NOP
    // 0x51bd6c: 0x0  nop
    ctx->pc = 0x51bd6cu;
    // NOP
}
