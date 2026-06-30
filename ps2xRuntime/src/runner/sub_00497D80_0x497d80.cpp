#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00497D80
// Address: 0x497d80 - 0x497df0
void sub_00497D80_0x497d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497D80_0x497d80");
#endif

    switch (ctx->pc) {
        case 0x497da4u: goto label_497da4;
        case 0x497db8u: goto label_497db8;
        case 0x497dd0u: goto label_497dd0;
        default: break;
    }

    ctx->pc = 0x497d80u;

    // 0x497d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x497d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x497d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x497d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x497d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x497d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x497d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x497d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x497d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x497d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497d94: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x497D94u;
    {
        const bool branch_taken_0x497d94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x497D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497D94u;
            // 0x497d98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497d94) {
            ctx->pc = 0x497DD0u;
            goto label_497dd0;
        }
    }
    ctx->pc = 0x497D9Cu;
    // 0x497d9c: 0xc12600c  jal         func_498030
    ctx->pc = 0x497D9Cu;
    SET_GPR_U32(ctx, 31, 0x497DA4u);
    ctx->pc = 0x498030u;
    if (runtime->hasFunction(0x498030u)) {
        auto targetFn = runtime->lookupFunction(0x498030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497DA4u; }
        if (ctx->pc != 0x497DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00498030_0x498030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497DA4u; }
        if (ctx->pc != 0x497DA4u) { return; }
    }
    ctx->pc = 0x497DA4u;
label_497da4:
    // 0x497da4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x497da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x497da8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x497DA8u;
    {
        const bool branch_taken_0x497da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x497da8) {
            ctx->pc = 0x497DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497DA8u;
            // 0x497dac: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497DBCu;
            goto label_497dbc;
        }
    }
    ctx->pc = 0x497DB0u;
    // 0x497db0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x497DB0u;
    SET_GPR_U32(ctx, 31, 0x497DB8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497DB8u; }
        if (ctx->pc != 0x497DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497DB8u; }
        if (ctx->pc != 0x497DB8u) { return; }
    }
    ctx->pc = 0x497DB8u;
label_497db8:
    // 0x497db8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x497db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_497dbc:
    // 0x497dbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x497dbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x497dc0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x497DC0u;
    {
        const bool branch_taken_0x497dc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x497dc0) {
            ctx->pc = 0x497DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x497DC0u;
            // 0x497dc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x497DD4u;
            goto label_497dd4;
        }
    }
    ctx->pc = 0x497DC8u;
    // 0x497dc8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x497DC8u;
    SET_GPR_U32(ctx, 31, 0x497DD0u);
    ctx->pc = 0x497DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x497DC8u;
            // 0x497dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497DD0u; }
        if (ctx->pc != 0x497DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x497DD0u; }
        if (ctx->pc != 0x497DD0u) { return; }
    }
    ctx->pc = 0x497DD0u;
label_497dd0:
    // 0x497dd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x497dd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_497dd4:
    // 0x497dd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x497dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x497dd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x497dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x497ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x497ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497de0: 0x3e00008  jr          $ra
    ctx->pc = 0x497DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x497DE0u;
            // 0x497de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x497DE8u;
    // 0x497de8: 0x0  nop
    ctx->pc = 0x497de8u;
    // NOP
    // 0x497dec: 0x0  nop
    ctx->pc = 0x497decu;
    // NOP
}
