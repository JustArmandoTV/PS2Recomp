#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001883B8
// Address: 0x1883b8 - 0x188468
void sub_001883B8_0x1883b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001883B8_0x1883b8");
#endif

    switch (ctx->pc) {
        case 0x188450u: goto label_188450;
        default: break;
    }

    ctx->pc = 0x1883b8u;

    // 0x1883b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1883b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1883bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1883bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1883c0: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x1883c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1883c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1883c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1883c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1883C8u;
    {
        const bool branch_taken_0x1883c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1883CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883C8u;
            // 0x1883cc: 0x2cc30008  sltiu       $v1, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883c8) {
            ctx->pc = 0x1883E8u;
            goto label_1883e8;
        }
    }
    ctx->pc = 0x1883D0u;
    // 0x1883d0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1883d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1883d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1883d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1883d8: 0x24847fe0  addiu       $a0, $a0, 0x7FE0
    ctx->pc = 0x1883d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32736));
    // 0x1883dc: 0x8061fea  j           func_187FA8
    ctx->pc = 0x1883DCu;
    ctx->pc = 0x1883E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1883DCu;
            // 0x1883e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187FA8_0x187fa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1883E4u;
    // 0x1883e4: 0x0  nop
    ctx->pc = 0x1883e4u;
    // NOP
label_1883e8:
    // 0x1883e8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1883E8u;
    {
        const bool branch_taken_0x1883e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1883ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1883E8u;
            // 0x1883ec: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883e8) {
            ctx->pc = 0x188408u;
            goto label_188408;
        }
    }
    ctx->pc = 0x1883F0u;
    // 0x1883f0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1883f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1883f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1883f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1883f8: 0x24848000  addiu       $a0, $a0, -0x8000
    ctx->pc = 0x1883f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x1883fc: 0x8061fea  j           func_187FA8
    ctx->pc = 0x1883FCu;
    ctx->pc = 0x188400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1883FCu;
            // 0x188400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187FA8u;
    if (runtime->hasFunction(0x187FA8u)) {
        auto targetFn = runtime->lookupFunction(0x187FA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187FA8_0x187fa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x188404u;
    // 0x188404: 0x0  nop
    ctx->pc = 0x188404u;
    // NOP
label_188408:
    // 0x188408: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x188408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18840c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18840cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x188410: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x188410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x188414: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x188414u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x188418: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x188418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18841c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x18841cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x188420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188424: 0x2442fba0  addiu       $v0, $v0, -0x460
    ctx->pc = 0x188424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966176));
    // 0x188428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18842c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x18842cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188430: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x188430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x188434: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x188434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188438: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x188438u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x18843c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18843cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x188440: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x188440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x188444: 0x3e00008  jr          $ra
    ctx->pc = 0x188444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188444u;
            // 0x188448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18844Cu;
    // 0x18844c: 0x0  nop
    ctx->pc = 0x18844cu;
    // NOP
label_188450:
    // 0x188450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188454: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x188454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18845c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18845cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188460: 0x806211a  j           func_188468
    ctx->pc = 0x188460u;
    ctx->pc = 0x188464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188460u;
            // 0x188464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188468u;
    if (runtime->hasFunction(0x188468u)) {
        auto targetFn = runtime->lookupFunction(0x188468u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188468_0x188468(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x188468u;
}
