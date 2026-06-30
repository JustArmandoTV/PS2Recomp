#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D46F0
// Address: 0x4d46f0 - 0x4d4760
void sub_004D46F0_0x4d46f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D46F0_0x4d46f0");
#endif

    switch (ctx->pc) {
        case 0x4d4730u: goto label_4d4730;
        case 0x4d4748u: goto label_4d4748;
        default: break;
    }

    ctx->pc = 0x4d46f0u;

    // 0x4d46f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d46f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d46f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d46f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4d46f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4d46fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d46fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4d4700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d4700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d4704: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4D4704u;
    {
        const bool branch_taken_0x4d4704 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4704u;
            // 0x4d4708: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4704) {
            ctx->pc = 0x4D4748u;
            goto label_4d4748;
        }
    }
    ctx->pc = 0x4D470Cu;
    // 0x4d470c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D470Cu;
    {
        const bool branch_taken_0x4d470c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d470c) {
            ctx->pc = 0x4D4710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D470Cu;
            // 0x4d4710: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D4734u;
            goto label_4d4734;
        }
    }
    ctx->pc = 0x4D4714u;
    // 0x4d4714: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D4714u;
    {
        const bool branch_taken_0x4d4714 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4714) {
            ctx->pc = 0x4D4730u;
            goto label_4d4730;
        }
    }
    ctx->pc = 0x4D471Cu;
    // 0x4d471c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4d471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4d4720: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D4720u;
    {
        const bool branch_taken_0x4d4720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d4720) {
            ctx->pc = 0x4D4730u;
            goto label_4d4730;
        }
    }
    ctx->pc = 0x4D4728u;
    // 0x4d4728: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D4728u;
    SET_GPR_U32(ctx, 31, 0x4D4730u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4730u; }
        if (ctx->pc != 0x4D4730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4730u; }
        if (ctx->pc != 0x4D4730u) { return; }
    }
    ctx->pc = 0x4D4730u;
label_4d4730:
    // 0x4d4730: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4d4730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4d4734:
    // 0x4d4734: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d4734u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4d4738: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D4738u;
    {
        const bool branch_taken_0x4d4738 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d4738) {
            ctx->pc = 0x4D473Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4738u;
            // 0x4d473c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D474Cu;
            goto label_4d474c;
        }
    }
    ctx->pc = 0x4D4740u;
    // 0x4d4740: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4D4740u;
    SET_GPR_U32(ctx, 31, 0x4D4748u);
    ctx->pc = 0x4D4744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4740u;
            // 0x4d4744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4748u; }
        if (ctx->pc != 0x4D4748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4748u; }
        if (ctx->pc != 0x4D4748u) { return; }
    }
    ctx->pc = 0x4D4748u;
label_4d4748:
    // 0x4d4748: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4d4748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d474c:
    // 0x4d474c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d474cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d4750: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d4750u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d4754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d4754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d4758: 0x3e00008  jr          $ra
    ctx->pc = 0x4D4758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D475Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4758u;
            // 0x4d475c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D4760u;
}
