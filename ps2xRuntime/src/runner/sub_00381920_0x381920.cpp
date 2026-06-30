#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00381920
// Address: 0x381920 - 0x381990
void sub_00381920_0x381920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381920_0x381920");
#endif

    switch (ctx->pc) {
        case 0x381960u: goto label_381960;
        case 0x381978u: goto label_381978;
        default: break;
    }

    ctx->pc = 0x381920u;

    // 0x381920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x381920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x381924: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x381924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x381928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38192c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x381930: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x381930u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381934: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x381934u;
    {
        const bool branch_taken_0x381934 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x381938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381934u;
            // 0x381938: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381934) {
            ctx->pc = 0x381978u;
            goto label_381978;
        }
    }
    ctx->pc = 0x38193Cu;
    // 0x38193c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x38193Cu;
    {
        const bool branch_taken_0x38193c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38193c) {
            ctx->pc = 0x381940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38193Cu;
            // 0x381940: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x381964u;
            goto label_381964;
        }
    }
    ctx->pc = 0x381944u;
    // 0x381944: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x381944u;
    {
        const bool branch_taken_0x381944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x381944) {
            ctx->pc = 0x381960u;
            goto label_381960;
        }
    }
    ctx->pc = 0x38194Cu;
    // 0x38194c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x38194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x381950: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x381950u;
    {
        const bool branch_taken_0x381950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x381950) {
            ctx->pc = 0x381960u;
            goto label_381960;
        }
    }
    ctx->pc = 0x381958u;
    // 0x381958: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x381958u;
    SET_GPR_U32(ctx, 31, 0x381960u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381960u; }
        if (ctx->pc != 0x381960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381960u; }
        if (ctx->pc != 0x381960u) { return; }
    }
    ctx->pc = 0x381960u;
label_381960:
    // 0x381960: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x381960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_381964:
    // 0x381964: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x381964u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x381968: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381968u;
    {
        const bool branch_taken_0x381968 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x381968) {
            ctx->pc = 0x38196Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x381968u;
            // 0x38196c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38197Cu;
            goto label_38197c;
        }
    }
    ctx->pc = 0x381970u;
    // 0x381970: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x381970u;
    SET_GPR_U32(ctx, 31, 0x381978u);
    ctx->pc = 0x381974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x381970u;
            // 0x381974: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381978u; }
        if (ctx->pc != 0x381978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x381978u; }
        if (ctx->pc != 0x381978u) { return; }
    }
    ctx->pc = 0x381978u;
label_381978:
    // 0x381978: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x381978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38197c:
    // 0x38197c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38197cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x381984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381988: 0x3e00008  jr          $ra
    ctx->pc = 0x381988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x381988u;
            // 0x38198c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x381990u;
}
