#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BF640
// Address: 0x3bf640 - 0x3bf690
void sub_003BF640_0x3bf640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF640_0x3bf640");
#endif

    switch (ctx->pc) {
        case 0x3bf67cu: goto label_3bf67c;
        default: break;
    }

    ctx->pc = 0x3bf640u;

    // 0x3bf640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bf640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bf644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bf644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bf648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bf648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bf64c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bf64cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf650: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x3bf650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x3bf654: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3BF654u;
    {
        const bool branch_taken_0x3bf654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bf654) {
            ctx->pc = 0x3BF658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF654u;
            // 0x3bf658: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BF684u;
            goto label_3bf684;
        }
    }
    ctx->pc = 0x3BF65Cu;
    // 0x3bf65c: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3bf65cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x3bf660: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3bf660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3bf664: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x3bf664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
    // 0x3bf668: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x3bf668u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
    // 0x3bf66c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3bf66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x3bf670: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x3bf670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x3bf674: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x3BF674u;
    SET_GPR_U32(ctx, 31, 0x3BF67Cu);
    ctx->pc = 0x3BF678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF674u;
            // 0x3bf678: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF67Cu; }
        if (ctx->pc != 0x3BF67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BF67Cu; }
        if (ctx->pc != 0x3BF67Cu) { return; }
    }
    ctx->pc = 0x3BF67Cu;
label_3bf67c:
    // 0x3bf67c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x3bf67cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x3bf680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bf680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3bf684:
    // 0x3bf684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bf684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bf688: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BF688u;
            // 0x3bf68c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BF690u;
}
