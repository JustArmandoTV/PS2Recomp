#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00545930
// Address: 0x545930 - 0x5459a0
void sub_00545930_0x545930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00545930_0x545930");
#endif

    switch (ctx->pc) {
        case 0x545970u: goto label_545970;
        case 0x545988u: goto label_545988;
        default: break;
    }

    ctx->pc = 0x545930u;

    // 0x545930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x545930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x545934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x545934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x545938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x545938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x54593c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x54593cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x545940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x545940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x545944: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x545944u;
    {
        const bool branch_taken_0x545944 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x545948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545944u;
            // 0x545948: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545944) {
            ctx->pc = 0x545988u;
            goto label_545988;
        }
    }
    ctx->pc = 0x54594Cu;
    // 0x54594c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x54594Cu;
    {
        const bool branch_taken_0x54594c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x54594c) {
            ctx->pc = 0x545950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54594Cu;
            // 0x545950: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x545974u;
            goto label_545974;
        }
    }
    ctx->pc = 0x545954u;
    // 0x545954: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x545954u;
    {
        const bool branch_taken_0x545954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x545954) {
            ctx->pc = 0x545970u;
            goto label_545970;
        }
    }
    ctx->pc = 0x54595Cu;
    // 0x54595c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x54595cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x545960: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x545960u;
    {
        const bool branch_taken_0x545960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x545960) {
            ctx->pc = 0x545970u;
            goto label_545970;
        }
    }
    ctx->pc = 0x545968u;
    // 0x545968: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x545968u;
    SET_GPR_U32(ctx, 31, 0x545970u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545970u; }
        if (ctx->pc != 0x545970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545970u; }
        if (ctx->pc != 0x545970u) { return; }
    }
    ctx->pc = 0x545970u;
label_545970:
    // 0x545970: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x545970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_545974:
    // 0x545974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x545974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x545978: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x545978u;
    {
        const bool branch_taken_0x545978 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x545978) {
            ctx->pc = 0x54597Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x545978u;
            // 0x54597c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x54598Cu;
            goto label_54598c;
        }
    }
    ctx->pc = 0x545980u;
    // 0x545980: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x545980u;
    SET_GPR_U32(ctx, 31, 0x545988u);
    ctx->pc = 0x545984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545980u;
            // 0x545984: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545988u; }
        if (ctx->pc != 0x545988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545988u; }
        if (ctx->pc != 0x545988u) { return; }
    }
    ctx->pc = 0x545988u;
label_545988:
    // 0x545988: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x545988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_54598c:
    // 0x54598c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x54598cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x545990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x545990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x545994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x545994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x545998: 0x3e00008  jr          $ra
    ctx->pc = 0x545998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x54599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545998u;
            // 0x54599c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5459A0u;
}
