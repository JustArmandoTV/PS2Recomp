#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00523BE0
// Address: 0x523be0 - 0x523c50
void sub_00523BE0_0x523be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00523BE0_0x523be0");
#endif

    switch (ctx->pc) {
        case 0x523c20u: goto label_523c20;
        case 0x523c38u: goto label_523c38;
        default: break;
    }

    ctx->pc = 0x523be0u;

    // 0x523be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x523be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x523be4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x523be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x523be8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x523be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x523bec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x523becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x523bf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x523bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x523bf4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x523BF4u;
    {
        const bool branch_taken_0x523bf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x523BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523BF4u;
            // 0x523bf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523bf4) {
            ctx->pc = 0x523C38u;
            goto label_523c38;
        }
    }
    ctx->pc = 0x523BFCu;
    // 0x523bfc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x523BFCu;
    {
        const bool branch_taken_0x523bfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x523bfc) {
            ctx->pc = 0x523C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523BFCu;
            // 0x523c00: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x523C24u;
            goto label_523c24;
        }
    }
    ctx->pc = 0x523C04u;
    // 0x523c04: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x523C04u;
    {
        const bool branch_taken_0x523c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x523c04) {
            ctx->pc = 0x523C20u;
            goto label_523c20;
        }
    }
    ctx->pc = 0x523C0Cu;
    // 0x523c0c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x523c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x523c10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x523C10u;
    {
        const bool branch_taken_0x523c10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x523c10) {
            ctx->pc = 0x523C20u;
            goto label_523c20;
        }
    }
    ctx->pc = 0x523C18u;
    // 0x523c18: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x523C18u;
    SET_GPR_U32(ctx, 31, 0x523C20u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523C20u; }
        if (ctx->pc != 0x523C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523C20u; }
        if (ctx->pc != 0x523C20u) { return; }
    }
    ctx->pc = 0x523C20u;
label_523c20:
    // 0x523c20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x523c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_523c24:
    // 0x523c24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x523c24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x523c28: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x523C28u;
    {
        const bool branch_taken_0x523c28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x523c28) {
            ctx->pc = 0x523C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523C28u;
            // 0x523c2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x523C3Cu;
            goto label_523c3c;
        }
    }
    ctx->pc = 0x523C30u;
    // 0x523c30: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x523C30u;
    SET_GPR_U32(ctx, 31, 0x523C38u);
    ctx->pc = 0x523C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523C30u;
            // 0x523c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523C38u; }
        if (ctx->pc != 0x523C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523C38u; }
        if (ctx->pc != 0x523C38u) { return; }
    }
    ctx->pc = 0x523C38u;
label_523c38:
    // 0x523c38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x523c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_523c3c:
    // 0x523c3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x523c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x523c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x523c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x523c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x523c48: 0x3e00008  jr          $ra
    ctx->pc = 0x523C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523C48u;
            // 0x523c4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523C50u;
}
