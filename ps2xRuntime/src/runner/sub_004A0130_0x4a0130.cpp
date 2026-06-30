#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A0130
// Address: 0x4a0130 - 0x4a01a0
void sub_004A0130_0x4a0130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0130_0x4a0130");
#endif

    switch (ctx->pc) {
        case 0x4a0170u: goto label_4a0170;
        case 0x4a0188u: goto label_4a0188;
        default: break;
    }

    ctx->pc = 0x4a0130u;

    // 0x4a0130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a0134: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a0134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a0138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a0138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a013c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a013cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4a0140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a0140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0144: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4A0144u;
    {
        const bool branch_taken_0x4a0144 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0144u;
            // 0x4a0148: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0144) {
            ctx->pc = 0x4A0188u;
            goto label_4a0188;
        }
    }
    ctx->pc = 0x4A014Cu;
    // 0x4a014c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A014Cu;
    {
        const bool branch_taken_0x4a014c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a014c) {
            ctx->pc = 0x4A0150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A014Cu;
            // 0x4a0150: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A0174u;
            goto label_4a0174;
        }
    }
    ctx->pc = 0x4A0154u;
    // 0x4a0154: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A0154u;
    {
        const bool branch_taken_0x4a0154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0154) {
            ctx->pc = 0x4A0170u;
            goto label_4a0170;
        }
    }
    ctx->pc = 0x4A015Cu;
    // 0x4a015c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4a015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4a0160: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A0160u;
    {
        const bool branch_taken_0x4a0160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0160) {
            ctx->pc = 0x4A0170u;
            goto label_4a0170;
        }
    }
    ctx->pc = 0x4A0168u;
    // 0x4a0168: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4A0168u;
    SET_GPR_U32(ctx, 31, 0x4A0170u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0170u; }
        if (ctx->pc != 0x4A0170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0170u; }
        if (ctx->pc != 0x4A0170u) { return; }
    }
    ctx->pc = 0x4A0170u;
label_4a0170:
    // 0x4a0170: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4a0170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4a0174:
    // 0x4a0174: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4a0174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4a0178: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A0178u;
    {
        const bool branch_taken_0x4a0178 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4a0178) {
            ctx->pc = 0x4A017Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0178u;
            // 0x4a017c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A018Cu;
            goto label_4a018c;
        }
    }
    ctx->pc = 0x4A0180u;
    // 0x4a0180: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4A0180u;
    SET_GPR_U32(ctx, 31, 0x4A0188u);
    ctx->pc = 0x4A0184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0180u;
            // 0x4a0184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0188u; }
        if (ctx->pc != 0x4A0188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A0188u; }
        if (ctx->pc != 0x4A0188u) { return; }
    }
    ctx->pc = 0x4A0188u;
label_4a0188:
    // 0x4a0188: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4a0188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a018c:
    // 0x4a018c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a018cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0190: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a0190u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0194: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a0194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0198: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A019Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A0198u;
            // 0x4a019c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A01A0u;
}
