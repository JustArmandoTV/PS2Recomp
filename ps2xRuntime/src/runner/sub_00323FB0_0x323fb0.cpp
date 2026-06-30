#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00323FB0
// Address: 0x323fb0 - 0x324030
void sub_00323FB0_0x323fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323FB0_0x323fb0");
#endif

    switch (ctx->pc) {
        case 0x323fd8u: goto label_323fd8;
        case 0x32400cu: goto label_32400c;
        default: break;
    }

    ctx->pc = 0x323fb0u;

    // 0x323fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x323fb4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x323fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x323fb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x323fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x323fbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x323fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x323fc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x323fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323fc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x323fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x323fc8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x323fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x323fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323fd0: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x323FD0u;
    SET_GPR_U32(ctx, 31, 0x323FD8u);
    ctx->pc = 0x323FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x323FD0u;
            // 0x323fd4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323FD8u; }
        if (ctx->pc != 0x323FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x323FD8u; }
        if (ctx->pc != 0x323FD8u) { return; }
    }
    ctx->pc = 0x323FD8u;
label_323fd8:
    // 0x323fd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x323fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x323fdc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x323fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x323fe0: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x323fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x323fe4: 0x2463e210  addiu       $v1, $v1, -0x1DF0
    ctx->pc = 0x323fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959632));
    // 0x323fe8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ff0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x323ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x323ff4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x323ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x323ff8: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x323ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x323ffc: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x323ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x324000: 0x8042008e  lb          $v0, 0x8E($v0)
    ctx->pc = 0x324000u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 142)));
    // 0x324004: 0xc115e98  jal         func_457A60
    ctx->pc = 0x324004u;
    SET_GPR_U32(ctx, 31, 0x32400Cu);
    ctx->pc = 0x324008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x324004u;
            // 0x324008: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x457A60u;
    if (runtime->hasFunction(0x457A60u)) {
        auto targetFn = runtime->lookupFunction(0x457A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32400Cu; }
        if (ctx->pc != 0x32400Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00457A60_0x457a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32400Cu; }
        if (ctx->pc != 0x32400Cu) { return; }
    }
    ctx->pc = 0x32400Cu;
label_32400c:
    // 0x32400c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32400cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x324010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x324018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32401c: 0x3e00008  jr          $ra
    ctx->pc = 0x32401Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32401Cu;
            // 0x324020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x324024u;
    // 0x324024: 0x0  nop
    ctx->pc = 0x324024u;
    // NOP
    // 0x324028: 0x0  nop
    ctx->pc = 0x324028u;
    // NOP
    // 0x32402c: 0x0  nop
    ctx->pc = 0x32402cu;
    // NOP
}
