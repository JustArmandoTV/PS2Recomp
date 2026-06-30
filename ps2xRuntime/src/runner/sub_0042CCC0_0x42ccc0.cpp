#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042CCC0
// Address: 0x42ccc0 - 0x42cd30
void sub_0042CCC0_0x42ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CCC0_0x42ccc0");
#endif

    switch (ctx->pc) {
        case 0x42cd00u: goto label_42cd00;
        case 0x42cd18u: goto label_42cd18;
        default: break;
    }

    ctx->pc = 0x42ccc0u;

    // 0x42ccc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42ccc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42ccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42ccc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42ccc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42cccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42ccd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42ccd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ccd4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x42CCD4u;
    {
        const bool branch_taken_0x42ccd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CCD4u;
            // 0x42ccd8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ccd4) {
            ctx->pc = 0x42CD18u;
            goto label_42cd18;
        }
    }
    ctx->pc = 0x42CCDCu;
    // 0x42ccdc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x42CCDCu;
    {
        const bool branch_taken_0x42ccdc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42ccdc) {
            ctx->pc = 0x42CCE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42CCDCu;
            // 0x42cce0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42CD04u;
            goto label_42cd04;
        }
    }
    ctx->pc = 0x42CCE4u;
    // 0x42cce4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x42CCE4u;
    {
        const bool branch_taken_0x42cce4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x42cce4) {
            ctx->pc = 0x42CD00u;
            goto label_42cd00;
        }
    }
    ctx->pc = 0x42CCECu;
    // 0x42ccec: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x42ccecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x42ccf0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42CCF0u;
    {
        const bool branch_taken_0x42ccf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x42ccf0) {
            ctx->pc = 0x42CD00u;
            goto label_42cd00;
        }
    }
    ctx->pc = 0x42CCF8u;
    // 0x42ccf8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x42CCF8u;
    SET_GPR_U32(ctx, 31, 0x42CD00u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CD00u; }
        if (ctx->pc != 0x42CD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CD00u; }
        if (ctx->pc != 0x42CD00u) { return; }
    }
    ctx->pc = 0x42CD00u;
label_42cd00:
    // 0x42cd00: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x42cd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_42cd04:
    // 0x42cd04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42cd04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x42cd08: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42CD08u;
    {
        const bool branch_taken_0x42cd08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42cd08) {
            ctx->pc = 0x42CD0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42CD08u;
            // 0x42cd0c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42CD1Cu;
            goto label_42cd1c;
        }
    }
    ctx->pc = 0x42CD10u;
    // 0x42cd10: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x42CD10u;
    SET_GPR_U32(ctx, 31, 0x42CD18u);
    ctx->pc = 0x42CD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CD10u;
            // 0x42cd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CD18u; }
        if (ctx->pc != 0x42CD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CD18u; }
        if (ctx->pc != 0x42CD18u) { return; }
    }
    ctx->pc = 0x42CD18u;
label_42cd18:
    // 0x42cd18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x42cd18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42cd1c:
    // 0x42cd1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42cd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42cd20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42cd20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42cd24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42cd24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42cd28: 0x3e00008  jr          $ra
    ctx->pc = 0x42CD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CD28u;
            // 0x42cd2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42CD30u;
}
