#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5760
// Address: 0x2c5760 - 0x2c57d0
void sub_002C5760_0x2c5760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5760_0x2c5760");
#endif

    switch (ctx->pc) {
        case 0x2c57a0u: goto label_2c57a0;
        case 0x2c57b8u: goto label_2c57b8;
        default: break;
    }

    ctx->pc = 0x2c5760u;

    // 0x2c5760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c5760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c5764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c5768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c576c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c576cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5770: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c5770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5774: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C5774u;
    {
        const bool branch_taken_0x2c5774 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5774u;
            // 0x2c5778: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5774) {
            ctx->pc = 0x2C57B8u;
            goto label_2c57b8;
        }
    }
    ctx->pc = 0x2C577Cu;
    // 0x2c577c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C577Cu;
    {
        const bool branch_taken_0x2c577c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c577c) {
            ctx->pc = 0x2C5780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C577Cu;
            // 0x2c5780: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C57A4u;
            goto label_2c57a4;
        }
    }
    ctx->pc = 0x2C5784u;
    // 0x2c5784: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C5784u;
    {
        const bool branch_taken_0x2c5784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5784) {
            ctx->pc = 0x2C57A0u;
            goto label_2c57a0;
        }
    }
    ctx->pc = 0x2C578Cu;
    // 0x2c578c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c578cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c5790: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5790u;
    {
        const bool branch_taken_0x2c5790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5790) {
            ctx->pc = 0x2C57A0u;
            goto label_2c57a0;
        }
    }
    ctx->pc = 0x2C5798u;
    // 0x2c5798: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C5798u;
    SET_GPR_U32(ctx, 31, 0x2C57A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57A0u; }
        if (ctx->pc != 0x2C57A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57A0u; }
        if (ctx->pc != 0x2C57A0u) { return; }
    }
    ctx->pc = 0x2C57A0u;
label_2c57a0:
    // 0x2c57a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c57a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c57a4:
    // 0x2c57a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c57a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c57a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C57A8u;
    {
        const bool branch_taken_0x2c57a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c57a8) {
            ctx->pc = 0x2C57ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57A8u;
            // 0x2c57ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C57BCu;
            goto label_2c57bc;
        }
    }
    ctx->pc = 0x2C57B0u;
    // 0x2c57b0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C57B0u;
    SET_GPR_U32(ctx, 31, 0x2C57B8u);
    ctx->pc = 0x2C57B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57B0u;
            // 0x2c57b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57B8u; }
        if (ctx->pc != 0x2C57B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C57B8u; }
        if (ctx->pc != 0x2C57B8u) { return; }
    }
    ctx->pc = 0x2C57B8u;
label_2c57b8:
    // 0x2c57b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c57b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c57bc:
    // 0x2c57bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c57bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c57c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c57c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c57c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c57c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c57c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C57C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C57CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C57C8u;
            // 0x2c57cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C57D0u;
}
