#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AAE88
// Address: 0x1aae88 - 0x1aaf10
void sub_001AAE88_0x1aae88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAE88_0x1aae88");
#endif

    switch (ctx->pc) {
        case 0x1aaed0u: goto label_1aaed0;
        case 0x1aaee4u: goto label_1aaee4;
        default: break;
    }

    ctx->pc = 0x1aae88u;

    // 0x1aae88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aae88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aae8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aae8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aae90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aae94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aae98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aae98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aae9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aae9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aaea0: 0x8c832030  lw          $v1, 0x2030($a0)
    ctx->pc = 0x1aaea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1aaea4: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x1aaea4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aaea8: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AAEA8u;
    {
        const bool branch_taken_0x1aaea8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEA8u;
            // 0x1aaeac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaea8) {
            ctx->pc = 0x1AAEF4u;
            goto label_1aaef4;
        }
    }
    ctx->pc = 0x1AAEB0u;
    // 0x1aaeb0: 0x68082  srl         $s0, $a2, 2
    ctx->pc = 0x1aaeb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x1aaeb4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1aaeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1aaeb8: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x1aaeb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x1aaebc: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1aaebcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1aaec0: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AAEC0u;
    {
        const bool branch_taken_0x1aaec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEC0u;
            // 0x1aaec4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaec0) {
            ctx->pc = 0x1AAEF0u;
            goto label_1aaef0;
        }
    }
    ctx->pc = 0x1AAEC8u;
    // 0x1aaec8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aaec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaecc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1aaeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aaed0:
    // 0x1aaed0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1aaed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1aaed4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1aaed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaed8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1aaed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1aaedc: 0xc06596c  jal         func_1965B0
    ctx->pc = 0x1AAEDCu;
    SET_GPR_U32(ctx, 31, 0x1AAEE4u);
    ctx->pc = 0x1AAEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEDCu;
            // 0x1aaee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1965B0u;
    if (runtime->hasFunction(0x1965B0u)) {
        auto targetFn = runtime->lookupFunction(0x1965B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEE4u; }
        if (ctx->pc != 0x1AAEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001965B0_0x1965b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEE4u; }
        if (ctx->pc != 0x1AAEE4u) { return; }
    }
    ctx->pc = 0x1AAEE4u;
label_1aaee4:
    // 0x1aaee4: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x1aaee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1aaee8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AAEE8u;
    {
        const bool branch_taken_0x1aaee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEE8u;
            // 0x1aaeec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaee8) {
            ctx->pc = 0x1AAED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aaed0;
        }
    }
    ctx->pc = 0x1AAEF0u;
label_1aaef0:
    // 0x1aaef0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1aaef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaef4:
    // 0x1aaef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aaef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aaef8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aaef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aaefc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aaefcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaf00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aaf00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aaf04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aaf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aaf08: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAF08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF08u;
            // 0x1aaf0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAF10u;
}
