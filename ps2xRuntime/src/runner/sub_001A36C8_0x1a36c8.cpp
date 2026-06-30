#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A36C8
// Address: 0x1a36c8 - 0x1a3750
void sub_001A36C8_0x1a36c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A36C8_0x1a36c8");
#endif

    switch (ctx->pc) {
        case 0x1a3700u: goto label_1a3700;
        case 0x1a3724u: goto label_1a3724;
        default: break;
    }

    ctx->pc = 0x1a36c8u;

    // 0x1a36c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a36c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a36cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a36ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a36d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a36d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a36d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1a36d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a36d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a36dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a36e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a36e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36e4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a36e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1a36e8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a36e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36ec: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a36ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1a36f0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1a36f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a36f4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a36f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a36f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A36F8u;
    {
        const bool branch_taken_0x1a36f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A36FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A36F8u;
            // 0x1a36fc: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a36f8) {
            ctx->pc = 0x1A3704u;
            goto label_1a3704;
        }
    }
    ctx->pc = 0x1A3700u;
label_1a3700:
    // 0x1a3700: 0x26310012  addiu       $s1, $s1, 0x12
    ctx->pc = 0x1a3700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
label_1a3704:
    // 0x1a3704: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1a3704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1a3708: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A3708u;
    {
        const bool branch_taken_0x1a3708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3708) {
            ctx->pc = 0x1A370Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3708u;
            // 0x1a370c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A3730u;
            goto label_1a3730;
        }
    }
    ctx->pc = 0x1A3710u;
    // 0x1a3710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3714: 0x26100012  addiu       $s0, $s0, 0x12
    ctx->pc = 0x1a3714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x1a3718: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1a3718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1a371c: 0xc05d686  jal         func_175A18
    ctx->pc = 0x1A371Cu;
    SET_GPR_U32(ctx, 31, 0x1A3724u);
    ctx->pc = 0x1A3720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A371Cu;
            // 0x1a3720: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175A18u;
    if (runtime->hasFunction(0x175A18u)) {
        auto targetFn = runtime->lookupFunction(0x175A18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3724u; }
        if (ctx->pc != 0x1A3724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175A18_0x175a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A3724u; }
        if (ctx->pc != 0x1A3724u) { return; }
    }
    ctx->pc = 0x1A3724u;
label_1a3724:
    // 0x1a3724: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A3724u;
    {
        const bool branch_taken_0x1a3724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3724u;
            // 0x1a3728: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3724) {
            ctx->pc = 0x1A3700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a3700;
        }
    }
    ctx->pc = 0x1A372Cu;
    // 0x1a372c: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x1a372cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
label_1a3730:
    // 0x1a3730: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a3730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3734: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a3734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a3738: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a3738u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a373c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a373cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a3740: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a3740u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3744: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a3744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a3748: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A374Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A3748u;
            // 0x1a374c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3750u;
}
