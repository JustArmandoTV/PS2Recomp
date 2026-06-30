#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DCAF0
// Address: 0x4dcaf0 - 0x4dcb60
void sub_004DCAF0_0x4dcaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DCAF0_0x4dcaf0");
#endif

    switch (ctx->pc) {
        case 0x4dcb30u: goto label_4dcb30;
        case 0x4dcb48u: goto label_4dcb48;
        default: break;
    }

    ctx->pc = 0x4dcaf0u;

    // 0x4dcaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dcaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4dcaf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4dcaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4dcaf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4dcaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4dcafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4dcafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4dcb00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4dcb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dcb04: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4DCB04u;
    {
        const bool branch_taken_0x4dcb04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DCB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCB04u;
            // 0x4dcb08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dcb04) {
            ctx->pc = 0x4DCB48u;
            goto label_4dcb48;
        }
    }
    ctx->pc = 0x4DCB0Cu;
    // 0x4dcb0c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4DCB0Cu;
    {
        const bool branch_taken_0x4dcb0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dcb0c) {
            ctx->pc = 0x4DCB10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCB0Cu;
            // 0x4dcb10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DCB34u;
            goto label_4dcb34;
        }
    }
    ctx->pc = 0x4DCB14u;
    // 0x4dcb14: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DCB14u;
    {
        const bool branch_taken_0x4dcb14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dcb14) {
            ctx->pc = 0x4DCB30u;
            goto label_4dcb30;
        }
    }
    ctx->pc = 0x4DCB1Cu;
    // 0x4dcb1c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4dcb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4dcb20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DCB20u;
    {
        const bool branch_taken_0x4dcb20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dcb20) {
            ctx->pc = 0x4DCB30u;
            goto label_4dcb30;
        }
    }
    ctx->pc = 0x4DCB28u;
    // 0x4dcb28: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DCB28u;
    SET_GPR_U32(ctx, 31, 0x4DCB30u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCB30u; }
        if (ctx->pc != 0x4DCB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCB30u; }
        if (ctx->pc != 0x4DCB30u) { return; }
    }
    ctx->pc = 0x4DCB30u;
label_4dcb30:
    // 0x4dcb30: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4dcb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4dcb34:
    // 0x4dcb34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4dcb34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4dcb38: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DCB38u;
    {
        const bool branch_taken_0x4dcb38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4dcb38) {
            ctx->pc = 0x4DCB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCB38u;
            // 0x4dcb3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DCB4Cu;
            goto label_4dcb4c;
        }
    }
    ctx->pc = 0x4DCB40u;
    // 0x4dcb40: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DCB40u;
    SET_GPR_U32(ctx, 31, 0x4DCB48u);
    ctx->pc = 0x4DCB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCB40u;
            // 0x4dcb44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCB48u; }
        if (ctx->pc != 0x4DCB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DCB48u; }
        if (ctx->pc != 0x4DCB48u) { return; }
    }
    ctx->pc = 0x4DCB48u;
label_4dcb48:
    // 0x4dcb48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4dcb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4dcb4c:
    // 0x4dcb4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4dcb4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dcb50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4dcb50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dcb54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4dcb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dcb58: 0x3e00008  jr          $ra
    ctx->pc = 0x4DCB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DCB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DCB58u;
            // 0x4dcb5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DCB60u;
}
