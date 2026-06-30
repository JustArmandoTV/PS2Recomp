#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DD640
// Address: 0x1dd640 - 0x1dd6a0
void sub_001DD640_0x1dd640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD640_0x1dd640");
#endif

    switch (ctx->pc) {
        case 0x1dd670u: goto label_1dd670;
        case 0x1dd68cu: goto label_1dd68c;
        default: break;
    }

    ctx->pc = 0x1dd640u;

    // 0x1dd640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dd644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dd648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1dd64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dd64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1dd650: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1dd650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1dd654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd658: 0x8c8202c8  lw          $v0, 0x2C8($a0)
    ctx->pc = 0x1dd658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 712)));
    // 0x1dd65c: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x1dd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1dd660: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1dd660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dd664: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1dd664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1dd668: 0xc0a545c  jal         func_295170
    ctx->pc = 0x1DD668u;
    SET_GPR_U32(ctx, 31, 0x1DD670u);
    ctx->pc = 0x1DD66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD668u;
            // 0x1dd66c: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD670u; }
        if (ctx->pc != 0x1DD670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD670u; }
        if (ctx->pc != 0x1DD670u) { return; }
    }
    ctx->pc = 0x1DD670u;
label_1dd670:
    // 0x1dd670: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x1dd670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
    // 0x1dd674: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1dd674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1dd678: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1dd678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dd67c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x1dd67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x1dd680: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1dd680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dd684: 0xc08bf20  jal         func_22FC80
    ctx->pc = 0x1DD684u;
    SET_GPR_U32(ctx, 31, 0x1DD68Cu);
    ctx->pc = 0x1DD688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD684u;
            // 0x1dd688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD68Cu; }
        if (ctx->pc != 0x1DD68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DD68Cu; }
        if (ctx->pc != 0x1DD68Cu) { return; }
    }
    ctx->pc = 0x1DD68Cu;
label_1dd68c:
    // 0x1dd68c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dd68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dd694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd698: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DD698u;
            // 0x1dd69c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DD6A0u;
}
