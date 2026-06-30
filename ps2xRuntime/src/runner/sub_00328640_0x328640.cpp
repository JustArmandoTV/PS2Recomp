#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00328640
// Address: 0x328640 - 0x3286c0
void sub_00328640_0x328640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328640_0x328640");
#endif

    switch (ctx->pc) {
        case 0x32867cu: goto label_32867c;
        case 0x3286a0u: goto label_3286a0;
        default: break;
    }

    ctx->pc = 0x328640u;

    // 0x328640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x328644: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x328644u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x328648: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x328648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32864c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32864cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x328650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x328654: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x328654u;
    {
        const bool branch_taken_0x328654 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x328658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x328654u;
            // 0x328658: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328654) {
            ctx->pc = 0x3286A8u;
            goto label_3286a8;
        }
    }
    ctx->pc = 0x32865Cu;
    // 0x32865c: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x32865cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x328660: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x328660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x328664: 0x8c650094  lw          $a1, 0x94($v1)
    ctx->pc = 0x328664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x328668: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x328668u;
    {
        const bool branch_taken_0x328668 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x328668) {
            ctx->pc = 0x32866Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x328668u;
            // 0x32866c: 0x2111821  addu        $v1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x328688u;
            goto label_328688;
        }
    }
    ctx->pc = 0x328670u;
    // 0x328670: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328674: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x328674u;
    SET_GPR_U32(ctx, 31, 0x32867Cu);
    ctx->pc = 0x328678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328674u;
            // 0x328678: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32867Cu; }
        if (ctx->pc != 0x32867Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32867Cu; }
        if (ctx->pc != 0x32867Cu) { return; }
    }
    ctx->pc = 0x32867Cu;
label_32867c:
    // 0x32867c: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x32867cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x328680: 0xac600094  sw          $zero, 0x94($v1)
    ctx->pc = 0x328680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 0));
    // 0x328684: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x328684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_328688:
    // 0x328688: 0x8c6500bc  lw          $a1, 0xBC($v1)
    ctx->pc = 0x328688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x32868c: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x32868Cu;
    {
        const bool branch_taken_0x32868c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x32868c) {
            ctx->pc = 0x328690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x32868Cu;
            // 0x328690: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3286ACu;
            goto label_3286ac;
        }
    }
    ctx->pc = 0x328694u;
    // 0x328694: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x328694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x328698: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x328698u;
    SET_GPR_U32(ctx, 31, 0x3286A0u);
    ctx->pc = 0x32869Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x328698u;
            // 0x32869c: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3286A0u; }
        if (ctx->pc != 0x3286A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3286A0u; }
        if (ctx->pc != 0x3286A0u) { return; }
    }
    ctx->pc = 0x3286A0u;
label_3286a0:
    // 0x3286a0: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x3286a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3286a4: 0xac6000bc  sw          $zero, 0xBC($v1)
    ctx->pc = 0x3286a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 188), GPR_U32(ctx, 0));
label_3286a8:
    // 0x3286a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3286a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3286ac:
    // 0x3286ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3286acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3286b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3286b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3286b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3286B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3286B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3286B4u;
            // 0x3286b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3286BCu;
    // 0x3286bc: 0x0  nop
    ctx->pc = 0x3286bcu;
    // NOP
}
