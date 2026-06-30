#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BAAA0
// Address: 0x2baaa0 - 0x2bab00
void sub_002BAAA0_0x2baaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAAA0_0x2baaa0");
#endif

    switch (ctx->pc) {
        case 0x2baaecu: goto label_2baaec;
        default: break;
    }

    ctx->pc = 0x2baaa0u;

    // 0x2baaa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2baaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2baaa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2baaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2baaa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2baaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2baaac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2baaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baab0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2BAAB0u;
    {
        const bool branch_taken_0x2baab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2baab0) {
            ctx->pc = 0x2BAAB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAAB0u;
            // 0x2baab4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BAAF0u;
            goto label_2baaf0;
        }
    }
    ctx->pc = 0x2BAAB8u;
    // 0x2baab8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2baab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2baabc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2baabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
    // 0x2baac0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAAC0u;
    {
        const bool branch_taken_0x2baac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAAC0u;
            // 0x2baac4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baac0) {
            ctx->pc = 0x2BAAD4u;
            goto label_2baad4;
        }
    }
    ctx->pc = 0x2BAAC8u;
    // 0x2baac8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2baac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2baacc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2baaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2baad0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2baad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2baad4:
    // 0x2baad4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2baad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2baad8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2baad8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2baadc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BAADCu;
    {
        const bool branch_taken_0x2baadc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2baadc) {
            ctx->pc = 0x2BAAECu;
            goto label_2baaec;
        }
    }
    ctx->pc = 0x2BAAE4u;
    // 0x2baae4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BAAE4u;
    SET_GPR_U32(ctx, 31, 0x2BAAECu);
    ctx->pc = 0x2BAAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAAE4u;
            // 0x2baae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAAECu; }
        if (ctx->pc != 0x2BAAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BAAECu; }
        if (ctx->pc != 0x2BAAECu) { return; }
    }
    ctx->pc = 0x2BAAECu;
label_2baaec:
    // 0x2baaec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2baaecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2baaf0:
    // 0x2baaf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2baaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2baaf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2baaf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2baaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BAAF8u;
            // 0x2baafc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BAB00u;
}
