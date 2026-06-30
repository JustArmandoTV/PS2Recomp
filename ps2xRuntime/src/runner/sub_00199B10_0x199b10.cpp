#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199B10
// Address: 0x199b10 - 0x199b60
void sub_00199B10_0x199b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199B10_0x199b10");
#endif

    switch (ctx->pc) {
        case 0x199b44u: goto label_199b44;
        default: break;
    }

    ctx->pc = 0x199b10u;

    // 0x199b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199b18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x199b20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x199b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x199b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x199b28: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x199b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x199b2c: 0x8e020404  lw          $v0, 0x404($s0)
    ctx->pc = 0x199b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x199b30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x199b30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199b34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x199B34u;
    {
        const bool branch_taken_0x199b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x199b34) {
            ctx->pc = 0x199B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x199B34u;
            // 0x199b38: 0xae030404  sw          $v1, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x199B4Cu;
            goto label_199b4c;
        }
    }
    ctx->pc = 0x199B3Cu;
    // 0x199b3c: 0xc067d68  jal         func_19F5A0
    ctx->pc = 0x199B3Cu;
    SET_GPR_U32(ctx, 31, 0x199B44u);
    ctx->pc = 0x19F5A0u;
    if (runtime->hasFunction(0x19F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x19F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B44u; }
        if (ctx->pc != 0x199B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F5A0_0x19f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199B44u; }
        if (ctx->pc != 0x199B44u) { return; }
    }
    ctx->pc = 0x199B44u;
label_199b44:
    // 0x199b44: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x199b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x199b48: 0xae030404  sw          $v1, 0x404($s0)
    ctx->pc = 0x199b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 3));
label_199b4c:
    // 0x199b4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199b4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199b50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x199b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199b58: 0x3e00008  jr          $ra
    ctx->pc = 0x199B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199B58u;
            // 0x199b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199B60u;
}
