#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A80D8
// Address: 0x1a80d8 - 0x1a8150
void sub_001A80D8_0x1a80d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A80D8_0x1a80d8");
#endif

    switch (ctx->pc) {
        case 0x1a8108u: goto label_1a8108;
        case 0x1a8114u: goto label_1a8114;
        default: break;
    }

    ctx->pc = 0x1a80d8u;

    // 0x1a80d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a80d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a80dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a80dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a80e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a80e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a80e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a80e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a80e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a80e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a80ec: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1a80ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a80f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a80f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a80f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a80f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1a80f8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A80F8u;
    {
        const bool branch_taken_0x1a80f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A80FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A80F8u;
            // 0x1a80fc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a80f8) {
            ctx->pc = 0x1A8134u;
            goto label_1a8134;
        }
    }
    ctx->pc = 0x1A8100u;
    // 0x1a8100: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x1a8100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1a8104: 0x0  nop
    ctx->pc = 0x1a8104u;
    // NOP
label_1a8108:
    // 0x1a8108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a8108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a810c: 0xc06e98e  jal         func_1BA638
    ctx->pc = 0x1A810Cu;
    SET_GPR_U32(ctx, 31, 0x1A8114u);
    ctx->pc = 0x1A8110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A810Cu;
            // 0x1a8110: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA638u;
    if (runtime->hasFunction(0x1BA638u)) {
        auto targetFn = runtime->lookupFunction(0x1BA638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8114u; }
        if (ctx->pc != 0x1A8114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA638_0x1ba638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8114u; }
        if (ctx->pc != 0x1A8114u) { return; }
    }
    ctx->pc = 0x1A8114u;
label_1a8114:
    // 0x1a8114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8114u;
    {
        const bool branch_taken_0x1a8114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8114u;
            // 0x1a8118: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8114) {
            ctx->pc = 0x1A8124u;
            goto label_1a8124;
        }
    }
    ctx->pc = 0x1A811Cu;
    // 0x1a811c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A811Cu;
    {
        const bool branch_taken_0x1a811c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A811Cu;
            // 0x1a8120: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a811c) {
            ctx->pc = 0x1A8138u;
            goto label_1a8138;
        }
    }
    ctx->pc = 0x1A8124u;
label_1a8124:
    // 0x1a8124: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a8124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a8128: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x1a8128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a812c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A812Cu;
    {
        const bool branch_taken_0x1a812c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A812Cu;
            // 0x1a8130: 0x320500ff  andi        $a1, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a812c) {
            ctx->pc = 0x1A8108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a8108;
        }
    }
    ctx->pc = 0x1A8134u;
label_1a8134:
    // 0x1a8134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8138:
    // 0x1a8138: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a8138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a813c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a813cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8140: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a8140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8144: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a8144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8148: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8148u;
            // 0x1a814c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8150u;
}
