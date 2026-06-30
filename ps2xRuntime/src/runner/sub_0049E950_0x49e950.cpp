#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049E950
// Address: 0x49e950 - 0x49e9c0
void sub_0049E950_0x49e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E950_0x49e950");
#endif

    switch (ctx->pc) {
        case 0x49e990u: goto label_49e990;
        case 0x49e9a8u: goto label_49e9a8;
        default: break;
    }

    ctx->pc = 0x49e950u;

    // 0x49e950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49e950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49e954: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49e954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x49e958: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49e95c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49e95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x49e960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49e960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49e964: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x49E964u;
    {
        const bool branch_taken_0x49e964 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E964u;
            // 0x49e968: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e964) {
            ctx->pc = 0x49E9A8u;
            goto label_49e9a8;
        }
    }
    ctx->pc = 0x49E96Cu;
    // 0x49e96c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x49E96Cu;
    {
        const bool branch_taken_0x49e96c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e96c) {
            ctx->pc = 0x49E970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E96Cu;
            // 0x49e970: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E994u;
            goto label_49e994;
        }
    }
    ctx->pc = 0x49E974u;
    // 0x49e974: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x49E974u;
    {
        const bool branch_taken_0x49e974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e974) {
            ctx->pc = 0x49E990u;
            goto label_49e990;
        }
    }
    ctx->pc = 0x49E97Cu;
    // 0x49e97c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x49e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x49e980: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49E980u;
    {
        const bool branch_taken_0x49e980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x49e980) {
            ctx->pc = 0x49E990u;
            goto label_49e990;
        }
    }
    ctx->pc = 0x49E988u;
    // 0x49e988: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49E988u;
    SET_GPR_U32(ctx, 31, 0x49E990u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E990u; }
        if (ctx->pc != 0x49E990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E990u; }
        if (ctx->pc != 0x49E990u) { return; }
    }
    ctx->pc = 0x49E990u;
label_49e990:
    // 0x49e990: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x49e990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_49e994:
    // 0x49e994: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49e994u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x49e998: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49E998u;
    {
        const bool branch_taken_0x49e998 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49e998) {
            ctx->pc = 0x49E99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49E998u;
            // 0x49e99c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49E9ACu;
            goto label_49e9ac;
        }
    }
    ctx->pc = 0x49E9A0u;
    // 0x49e9a0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x49E9A0u;
    SET_GPR_U32(ctx, 31, 0x49E9A8u);
    ctx->pc = 0x49E9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49E9A0u;
            // 0x49e9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E9A8u; }
        if (ctx->pc != 0x49E9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49E9A8u; }
        if (ctx->pc != 0x49E9A8u) { return; }
    }
    ctx->pc = 0x49E9A8u;
label_49e9a8:
    // 0x49e9a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x49e9a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_49e9ac:
    // 0x49e9ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49e9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49e9b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49e9b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49e9b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49e9b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x49E9B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E9B8u;
            // 0x49e9bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E9C0u;
}
