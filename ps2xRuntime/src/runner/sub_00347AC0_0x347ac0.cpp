#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347AC0
// Address: 0x347ac0 - 0x347b30
void sub_00347AC0_0x347ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347AC0_0x347ac0");
#endif

    switch (ctx->pc) {
        case 0x347b00u: goto label_347b00;
        case 0x347b18u: goto label_347b18;
        default: break;
    }

    ctx->pc = 0x347ac0u;

    // 0x347ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x347ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x347ac4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x347ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x347ac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x347acc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x347ad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x347ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347ad4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x347AD4u;
    {
        const bool branch_taken_0x347ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x347AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347AD4u;
            // 0x347ad8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ad4) {
            ctx->pc = 0x347B18u;
            goto label_347b18;
        }
    }
    ctx->pc = 0x347ADCu;
    // 0x347adc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x347ADCu;
    {
        const bool branch_taken_0x347adc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x347adc) {
            ctx->pc = 0x347AE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347ADCu;
            // 0x347ae0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347B04u;
            goto label_347b04;
        }
    }
    ctx->pc = 0x347AE4u;
    // 0x347ae4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x347AE4u;
    {
        const bool branch_taken_0x347ae4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x347ae4) {
            ctx->pc = 0x347B00u;
            goto label_347b00;
        }
    }
    ctx->pc = 0x347AECu;
    // 0x347aec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x347aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x347af0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347AF0u;
    {
        const bool branch_taken_0x347af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x347af0) {
            ctx->pc = 0x347B00u;
            goto label_347b00;
        }
    }
    ctx->pc = 0x347AF8u;
    // 0x347af8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x347AF8u;
    SET_GPR_U32(ctx, 31, 0x347B00u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347B00u; }
        if (ctx->pc != 0x347B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347B00u; }
        if (ctx->pc != 0x347B00u) { return; }
    }
    ctx->pc = 0x347B00u;
label_347b00:
    // 0x347b00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x347b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_347b04:
    // 0x347b04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x347b04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x347b08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x347B08u;
    {
        const bool branch_taken_0x347b08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x347b08) {
            ctx->pc = 0x347B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347B08u;
            // 0x347b0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347B1Cu;
            goto label_347b1c;
        }
    }
    ctx->pc = 0x347B10u;
    // 0x347b10: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x347B10u;
    SET_GPR_U32(ctx, 31, 0x347B18u);
    ctx->pc = 0x347B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347B10u;
            // 0x347b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347B18u; }
        if (ctx->pc != 0x347B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347B18u; }
        if (ctx->pc != 0x347B18u) { return; }
    }
    ctx->pc = 0x347B18u;
label_347b18:
    // 0x347b18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x347b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_347b1c:
    // 0x347b1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x347b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347b28: 0x3e00008  jr          $ra
    ctx->pc = 0x347B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347B28u;
            // 0x347b2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347B30u;
}
