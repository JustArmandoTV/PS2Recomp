#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB618
// Address: 0x1ab618 - 0x1ab680
void sub_001AB618_0x1ab618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB618_0x1ab618");
#endif

    switch (ctx->pc) {
        case 0x1ab648u: goto label_1ab648;
        default: break;
    }

    ctx->pc = 0x1ab618u;

    // 0x1ab618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab61c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ab62c: 0x8e300a68  lw          $s0, 0xA68($s1)
    ctx->pc = 0x1ab62cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2664)));
    // 0x1ab630: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1ab630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ab634: 0x101827  nor         $v1, $zero, $s0
    ctx->pc = 0x1ab634u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x1ab638: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1ab638u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x1ab63c: 0x50282a  slt         $a1, $v0, $s0
    ctx->pc = 0x1ab63cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1ab640: 0xc06c0b0  jal         func_1B02C0
    ctx->pc = 0x1AB640u;
    SET_GPR_U32(ctx, 31, 0x1AB648u);
    ctx->pc = 0x1AB644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB640u;
            // 0x1ab644: 0x45800b  movn        $s0, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B02C0u;
    if (runtime->hasFunction(0x1B02C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B02C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB648u; }
        if (ctx->pc != 0x1AB648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B02C0_0x1b02c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB648u; }
        if (ctx->pc != 0x1AB648u) { return; }
    }
    ctx->pc = 0x1AB648u;
label_1ab648:
    // 0x1ab648: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x1ab648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1ab64c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab650: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ab650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ab654: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB654u;
    {
        const bool branch_taken_0x1ab654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AB658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB654u;
            // 0x1ab658: 0xb0102a  slt         $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab654) {
            ctx->pc = 0x1AB668u;
            goto label_1ab668;
        }
    }
    ctx->pc = 0x1AB65Cu;
    // 0x1ab65c: 0x8e220968  lw          $v0, 0x968($s1)
    ctx->pc = 0x1ab65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
    // 0x1ab660: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ab660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ab664: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1ab664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1ab668:
    // 0x1ab668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab66c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab66cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab670: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ab674: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab678: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB678u;
            // 0x1ab67c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB680u;
}
