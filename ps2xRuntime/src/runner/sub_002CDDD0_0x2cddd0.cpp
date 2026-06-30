#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CDDD0
// Address: 0x2cddd0 - 0x2cde40
void sub_002CDDD0_0x2cddd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CDDD0_0x2cddd0");
#endif

    switch (ctx->pc) {
        case 0x2cde10u: goto label_2cde10;
        case 0x2cde28u: goto label_2cde28;
        default: break;
    }

    ctx->pc = 0x2cddd0u;

    // 0x2cddd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cddd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cddd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cddd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cddd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cdddc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cdddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cdde0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cdde0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cdde4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CDDE4u;
    {
        const bool branch_taken_0x2cdde4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CDDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDDE4u;
            // 0x2cdde8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cdde4) {
            ctx->pc = 0x2CDE28u;
            goto label_2cde28;
        }
    }
    ctx->pc = 0x2CDDECu;
    // 0x2cddec: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CDDECu;
    {
        const bool branch_taken_0x2cddec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cddec) {
            ctx->pc = 0x2CDDF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDDECu;
            // 0x2cddf0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE14u;
            goto label_2cde14;
        }
    }
    ctx->pc = 0x2CDDF4u;
    // 0x2cddf4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CDDF4u;
    {
        const bool branch_taken_0x2cddf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cddf4) {
            ctx->pc = 0x2CDE10u;
            goto label_2cde10;
        }
    }
    ctx->pc = 0x2CDDFCu;
    // 0x2cddfc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2cddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cde00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CDE00u;
    {
        const bool branch_taken_0x2cde00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cde00) {
            ctx->pc = 0x2CDE10u;
            goto label_2cde10;
        }
    }
    ctx->pc = 0x2CDE08u;
    // 0x2cde08: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CDE08u;
    SET_GPR_U32(ctx, 31, 0x2CDE10u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDE10u; }
        if (ctx->pc != 0x2CDE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDE10u; }
        if (ctx->pc != 0x2CDE10u) { return; }
    }
    ctx->pc = 0x2CDE10u;
label_2cde10:
    // 0x2cde10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cde10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cde14:
    // 0x2cde14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cde14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cde18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CDE18u;
    {
        const bool branch_taken_0x2cde18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cde18) {
            ctx->pc = 0x2CDE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDE18u;
            // 0x2cde1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CDE2Cu;
            goto label_2cde2c;
        }
    }
    ctx->pc = 0x2CDE20u;
    // 0x2cde20: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CDE20u;
    SET_GPR_U32(ctx, 31, 0x2CDE28u);
    ctx->pc = 0x2CDE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDE20u;
            // 0x2cde24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDE28u; }
        if (ctx->pc != 0x2CDE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CDE28u; }
        if (ctx->pc != 0x2CDE28u) { return; }
    }
    ctx->pc = 0x2CDE28u;
label_2cde28:
    // 0x2cde28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cde28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cde2c:
    // 0x2cde2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cde2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cde30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cde30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cde34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cde34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cde38: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CDE38u;
            // 0x2cde3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CDE40u;
}
