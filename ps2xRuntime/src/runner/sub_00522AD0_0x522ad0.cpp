#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00522AD0
// Address: 0x522ad0 - 0x522b40
void sub_00522AD0_0x522ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00522AD0_0x522ad0");
#endif

    switch (ctx->pc) {
        case 0x522b10u: goto label_522b10;
        case 0x522b28u: goto label_522b28;
        default: break;
    }

    ctx->pc = 0x522ad0u;

    // 0x522ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x522ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x522ad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x522ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x522ad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x522ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x522adc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x522adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x522ae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x522ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x522ae4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x522AE4u;
    {
        const bool branch_taken_0x522ae4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x522AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522AE4u;
            // 0x522ae8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x522ae4) {
            ctx->pc = 0x522B28u;
            goto label_522b28;
        }
    }
    ctx->pc = 0x522AECu;
    // 0x522aec: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x522AECu;
    {
        const bool branch_taken_0x522aec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x522aec) {
            ctx->pc = 0x522AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x522AECu;
            // 0x522af0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x522B14u;
            goto label_522b14;
        }
    }
    ctx->pc = 0x522AF4u;
    // 0x522af4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x522AF4u;
    {
        const bool branch_taken_0x522af4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x522af4) {
            ctx->pc = 0x522B10u;
            goto label_522b10;
        }
    }
    ctx->pc = 0x522AFCu;
    // 0x522afc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x522afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x522b00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x522B00u;
    {
        const bool branch_taken_0x522b00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x522b00) {
            ctx->pc = 0x522B10u;
            goto label_522b10;
        }
    }
    ctx->pc = 0x522B08u;
    // 0x522b08: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x522B08u;
    SET_GPR_U32(ctx, 31, 0x522B10u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522B10u; }
        if (ctx->pc != 0x522B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522B10u; }
        if (ctx->pc != 0x522B10u) { return; }
    }
    ctx->pc = 0x522B10u;
label_522b10:
    // 0x522b10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x522b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_522b14:
    // 0x522b14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x522b14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x522b18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x522B18u;
    {
        const bool branch_taken_0x522b18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x522b18) {
            ctx->pc = 0x522B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x522B18u;
            // 0x522b1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x522B2Cu;
            goto label_522b2c;
        }
    }
    ctx->pc = 0x522B20u;
    // 0x522b20: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x522B20u;
    SET_GPR_U32(ctx, 31, 0x522B28u);
    ctx->pc = 0x522B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522B20u;
            // 0x522b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522B28u; }
        if (ctx->pc != 0x522B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522B28u; }
        if (ctx->pc != 0x522B28u) { return; }
    }
    ctx->pc = 0x522B28u;
label_522b28:
    // 0x522b28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x522b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_522b2c:
    // 0x522b2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x522b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x522b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x522b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x522b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x522b38: 0x3e00008  jr          $ra
    ctx->pc = 0x522B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x522B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522B38u;
            // 0x522b3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522B40u;
}
