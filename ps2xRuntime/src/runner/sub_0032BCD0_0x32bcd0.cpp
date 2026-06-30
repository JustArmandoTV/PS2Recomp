#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032BCD0
// Address: 0x32bcd0 - 0x32bd40
void sub_0032BCD0_0x32bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BCD0_0x32bcd0");
#endif

    switch (ctx->pc) {
        case 0x32bd10u: goto label_32bd10;
        case 0x32bd28u: goto label_32bd28;
        default: break;
    }

    ctx->pc = 0x32bcd0u;

    // 0x32bcd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32bcd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32bcd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32bcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32bcdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32bcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32bce0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32bce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bce4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32BCE4u;
    {
        const bool branch_taken_0x32bce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BCE4u;
            // 0x32bce8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bce4) {
            ctx->pc = 0x32BD28u;
            goto label_32bd28;
        }
    }
    ctx->pc = 0x32BCECu;
    // 0x32bcec: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x32BCECu;
    {
        const bool branch_taken_0x32bcec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bcec) {
            ctx->pc = 0x32BCF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32BCECu;
            // 0x32bcf0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32BD14u;
            goto label_32bd14;
        }
    }
    ctx->pc = 0x32BCF4u;
    // 0x32bcf4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32BCF4u;
    {
        const bool branch_taken_0x32bcf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bcf4) {
            ctx->pc = 0x32BD10u;
            goto label_32bd10;
        }
    }
    ctx->pc = 0x32BCFCu;
    // 0x32bcfc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x32bcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32bd00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32BD00u;
    {
        const bool branch_taken_0x32bd00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x32bd00) {
            ctx->pc = 0x32BD10u;
            goto label_32bd10;
        }
    }
    ctx->pc = 0x32BD08u;
    // 0x32bd08: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x32BD08u;
    SET_GPR_U32(ctx, 31, 0x32BD10u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BD10u; }
        if (ctx->pc != 0x32BD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BD10u; }
        if (ctx->pc != 0x32BD10u) { return; }
    }
    ctx->pc = 0x32BD10u;
label_32bd10:
    // 0x32bd10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x32bd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_32bd14:
    // 0x32bd14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x32bd14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x32bd18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32BD18u;
    {
        const bool branch_taken_0x32bd18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x32bd18) {
            ctx->pc = 0x32BD1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32BD18u;
            // 0x32bd1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x32BD2Cu;
            goto label_32bd2c;
        }
    }
    ctx->pc = 0x32BD20u;
    // 0x32bd20: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x32BD20u;
    SET_GPR_U32(ctx, 31, 0x32BD28u);
    ctx->pc = 0x32BD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32BD20u;
            // 0x32bd24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BD28u; }
        if (ctx->pc != 0x32BD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32BD28u; }
        if (ctx->pc != 0x32BD28u) { return; }
    }
    ctx->pc = 0x32BD28u;
label_32bd28:
    // 0x32bd28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32bd28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32bd2c:
    // 0x32bd2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32bd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bd30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32bd30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bd34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32bd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bd38: 0x3e00008  jr          $ra
    ctx->pc = 0x32BD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32BD38u;
            // 0x32bd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32BD40u;
}
