#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B4D60
// Address: 0x4b4d60 - 0x4b4dd0
void sub_004B4D60_0x4b4d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B4D60_0x4b4d60");
#endif

    switch (ctx->pc) {
        case 0x4b4da0u: goto label_4b4da0;
        case 0x4b4db8u: goto label_4b4db8;
        default: break;
    }

    ctx->pc = 0x4b4d60u;

    // 0x4b4d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b4d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b4d64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b4d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b4d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b4d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b4d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b4d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4b4d70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b4d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b4d74: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B4D74u;
    {
        const bool branch_taken_0x4b4d74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B4D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4D74u;
            // 0x4b4d78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b4d74) {
            ctx->pc = 0x4B4DB8u;
            goto label_4b4db8;
        }
    }
    ctx->pc = 0x4B4D7Cu;
    // 0x4b4d7c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B4D7Cu;
    {
        const bool branch_taken_0x4b4d7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4d7c) {
            ctx->pc = 0x4B4D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4D7Cu;
            // 0x4b4d80: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4DA4u;
            goto label_4b4da4;
        }
    }
    ctx->pc = 0x4B4D84u;
    // 0x4b4d84: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B4D84u;
    {
        const bool branch_taken_0x4b4d84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4d84) {
            ctx->pc = 0x4B4DA0u;
            goto label_4b4da0;
        }
    }
    ctx->pc = 0x4B4D8Cu;
    // 0x4b4d8c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4b4d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4b4d90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B4D90u;
    {
        const bool branch_taken_0x4b4d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b4d90) {
            ctx->pc = 0x4B4DA0u;
            goto label_4b4da0;
        }
    }
    ctx->pc = 0x4B4D98u;
    // 0x4b4d98: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4B4D98u;
    SET_GPR_U32(ctx, 31, 0x4B4DA0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4DA0u; }
        if (ctx->pc != 0x4B4DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4DA0u; }
        if (ctx->pc != 0x4B4DA0u) { return; }
    }
    ctx->pc = 0x4B4DA0u;
label_4b4da0:
    // 0x4b4da0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b4da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b4da4:
    // 0x4b4da4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b4da4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4b4da8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B4DA8u;
    {
        const bool branch_taken_0x4b4da8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b4da8) {
            ctx->pc = 0x4B4DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4DA8u;
            // 0x4b4dac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B4DBCu;
            goto label_4b4dbc;
        }
    }
    ctx->pc = 0x4B4DB0u;
    // 0x4b4db0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4B4DB0u;
    SET_GPR_U32(ctx, 31, 0x4B4DB8u);
    ctx->pc = 0x4B4DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4DB0u;
            // 0x4b4db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4DB8u; }
        if (ctx->pc != 0x4B4DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B4DB8u; }
        if (ctx->pc != 0x4B4DB8u) { return; }
    }
    ctx->pc = 0x4B4DB8u;
label_4b4db8:
    // 0x4b4db8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b4db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b4dbc:
    // 0x4b4dbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b4dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b4dc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b4dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b4dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b4dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b4dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B4DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B4DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B4DC8u;
            // 0x4b4dcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B4DD0u;
}
