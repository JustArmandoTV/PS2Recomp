#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BFF30
// Address: 0x2bff30 - 0x2bffa0
void sub_002BFF30_0x2bff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFF30_0x2bff30");
#endif

    switch (ctx->pc) {
        case 0x2bff70u: goto label_2bff70;
        case 0x2bff88u: goto label_2bff88;
        default: break;
    }

    ctx->pc = 0x2bff30u;

    // 0x2bff30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bff34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bff38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bff3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bff40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bff40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff44: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BFF44u;
    {
        const bool branch_taken_0x2bff44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF44u;
            // 0x2bff48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bff44) {
            ctx->pc = 0x2BFF88u;
            goto label_2bff88;
        }
    }
    ctx->pc = 0x2BFF4Cu;
    // 0x2bff4c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BFF4Cu;
    {
        const bool branch_taken_0x2bff4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bff4c) {
            ctx->pc = 0x2BFF50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF4Cu;
            // 0x2bff50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFF74u;
            goto label_2bff74;
        }
    }
    ctx->pc = 0x2BFF54u;
    // 0x2bff54: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFF54u;
    {
        const bool branch_taken_0x2bff54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bff54) {
            ctx->pc = 0x2BFF70u;
            goto label_2bff70;
        }
    }
    ctx->pc = 0x2BFF5Cu;
    // 0x2bff5c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2bff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2bff60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BFF60u;
    {
        const bool branch_taken_0x2bff60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bff60) {
            ctx->pc = 0x2BFF70u;
            goto label_2bff70;
        }
    }
    ctx->pc = 0x2BFF68u;
    // 0x2bff68: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BFF68u;
    SET_GPR_U32(ctx, 31, 0x2BFF70u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF70u; }
        if (ctx->pc != 0x2BFF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF70u; }
        if (ctx->pc != 0x2BFF70u) { return; }
    }
    ctx->pc = 0x2BFF70u;
label_2bff70:
    // 0x2bff70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bff70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bff74:
    // 0x2bff74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bff74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bff78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BFF78u;
    {
        const bool branch_taken_0x2bff78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bff78) {
            ctx->pc = 0x2BFF7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF78u;
            // 0x2bff7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BFF8Cu;
            goto label_2bff8c;
        }
    }
    ctx->pc = 0x2BFF80u;
    // 0x2bff80: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BFF80u;
    SET_GPR_U32(ctx, 31, 0x2BFF88u);
    ctx->pc = 0x2BFF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF80u;
            // 0x2bff84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF88u; }
        if (ctx->pc != 0x2BFF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BFF88u; }
        if (ctx->pc != 0x2BFF88u) { return; }
    }
    ctx->pc = 0x2BFF88u;
label_2bff88:
    // 0x2bff88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bff88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bff8c:
    // 0x2bff8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bff8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bff90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bff90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bff94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bff94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bff98: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFF98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BFF98u;
            // 0x2bff9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BFFA0u;
}
