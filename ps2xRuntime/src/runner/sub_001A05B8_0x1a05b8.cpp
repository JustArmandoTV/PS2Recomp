#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A05B8
// Address: 0x1a05b8 - 0x1a0640
void sub_001A05B8_0x1a05b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A05B8_0x1a05b8");
#endif

    switch (ctx->pc) {
        case 0x1a05e4u: goto label_1a05e4;
        default: break;
    }

    ctx->pc = 0x1a05b8u;

    // 0x1a05b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a05b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a05bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a05bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a05c0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a05c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a05c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a05c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a05c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a05c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a05cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a05ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a05d0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1a05d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a05d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a05d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a05d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a05d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a05dc: 0xc06756a  jal         func_19D5A8
    ctx->pc = 0x1A05DCu;
    SET_GPR_U32(ctx, 31, 0x1A05E4u);
    ctx->pc = 0x1A05E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05DCu;
            // 0x1a05e0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D5A8u;
    if (runtime->hasFunction(0x19D5A8u)) {
        auto targetFn = runtime->lookupFunction(0x19D5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05E4u; }
        if (ctx->pc != 0x1A05E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D5A8_0x19d5a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A05E4u; }
        if (ctx->pc != 0x1A05E4u) { return; }
    }
    ctx->pc = 0x1A05E4u;
label_1a05e4:
    // 0x1a05e4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a05e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a05e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a05e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a05ec: 0x2484a630  addiu       $a0, $a0, -0x59D0
    ctx->pc = 0x1a05ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944304));
    // 0x1a05f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a05f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a05f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1a05f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a05f8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1a05f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a05fc: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A05FCu;
    {
        const bool branch_taken_0x1a05fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A0600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A05FCu;
            // 0x1a0600: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a05fc) {
            ctx->pc = 0x1A0620u;
            goto label_1a0620;
        }
    }
    ctx->pc = 0x1A0604u;
    // 0x1a0604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0608: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0608u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a060c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a060cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0610: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a0610u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0614: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0618: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1A0618u;
    ctx->pc = 0x1A061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0618u;
            // 0x1a061c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0620u;
label_1a0620:
    // 0x1a0620: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x1a0620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1a0624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a0624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a0628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a062c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a062cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0630: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a0630u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a0634: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0638: 0x8060054  j           func_180150
    ctx->pc = 0x1A0638u;
    ctx->pc = 0x1A063Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0638u;
            // 0x1a063c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180150u;
    if (runtime->hasFunction(0x180150u)) {
        auto targetFn = runtime->lookupFunction(0x180150u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180150_0x180150(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A0640u;
}
