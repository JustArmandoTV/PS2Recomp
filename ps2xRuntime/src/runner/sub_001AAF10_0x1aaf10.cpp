#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AAF10
// Address: 0x1aaf10 - 0x1aaf88
void sub_001AAF10_0x1aaf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAF10_0x1aaf10");
#endif

    switch (ctx->pc) {
        case 0x1aaf48u: goto label_1aaf48;
        case 0x1aaf5cu: goto label_1aaf5c;
        default: break;
    }

    ctx->pc = 0x1aaf10u;

    // 0x1aaf10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aaf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aaf14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1aaf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1aaf18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aaf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aaf1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aaf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aaf20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aaf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aaf24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1aaf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1aaf28: 0x8c822030  lw          $v0, 0x2030($a0)
    ctx->pc = 0x1aaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1aaf2c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1aaf2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aaf30: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1AAF30u;
    {
        const bool branch_taken_0x1aaf30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF30u;
            // 0x1aaf34: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf30) {
            ctx->pc = 0x1AAF68u;
            goto label_1aaf68;
        }
    }
    ctx->pc = 0x1AAF38u;
    // 0x1aaf38: 0x1a60000b  blez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1AAF38u;
    {
        const bool branch_taken_0x1aaf38 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1AAF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF38u;
            // 0x1aaf3c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf38) {
            ctx->pc = 0x1AAF68u;
            goto label_1aaf68;
        }
    }
    ctx->pc = 0x1AAF40u;
    // 0x1aaf40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aaf40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf44: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1aaf44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aaf48:
    // 0x1aaf48: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1aaf48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1aaf4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aaf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1aaf50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1aaf54: 0xc06592c  jal         func_1964B0
    ctx->pc = 0x1AAF54u;
    SET_GPR_U32(ctx, 31, 0x1AAF5Cu);
    ctx->pc = 0x1AAF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF54u;
            // 0x1aaf58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1964B0u;
    if (runtime->hasFunction(0x1964B0u)) {
        auto targetFn = runtime->lookupFunction(0x1964B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF5Cu; }
        if (ctx->pc != 0x1AAF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001964B0_0x1964b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF5Cu; }
        if (ctx->pc != 0x1AAF5Cu) { return; }
    }
    ctx->pc = 0x1AAF5Cu;
label_1aaf5c:
    // 0x1aaf5c: 0x233182a  slt         $v1, $s1, $s3
    ctx->pc = 0x1aaf5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1aaf60: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1AAF60u;
    {
        const bool branch_taken_0x1aaf60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aaf60) {
            ctx->pc = 0x1AAF64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF60u;
            // 0x1aaf64: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AAF48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aaf48;
        }
    }
    ctx->pc = 0x1AAF68u;
label_1aaf68:
    // 0x1aaf68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aaf68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aaf6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aaf6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aaf70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aaf70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaf74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1aaf74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aaf78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1aaf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aaf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF7Cu;
            // 0x1aaf80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAF84u;
    // 0x1aaf84: 0x0  nop
    ctx->pc = 0x1aaf84u;
    // NOP
}
