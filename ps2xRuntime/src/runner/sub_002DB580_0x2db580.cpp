#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB580
// Address: 0x2db580 - 0x2db640
void sub_002DB580_0x2db580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB580_0x2db580");
#endif

    switch (ctx->pc) {
        case 0x2db5c4u: goto label_2db5c4;
        case 0x2db5d0u: goto label_2db5d0;
        case 0x2db60cu: goto label_2db60c;
        default: break;
    }

    ctx->pc = 0x2db580u;

    // 0x2db580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2db580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2db584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2db584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2db588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2db588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2db58c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2db590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db594: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DB594u;
    {
        const bool branch_taken_0x2db594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB594u;
            // 0x2db598: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db594) {
            ctx->pc = 0x2DB624u;
            goto label_2db624;
        }
    }
    ctx->pc = 0x2DB59Cu;
    // 0x2db59c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2db59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2db5a0: 0x24422e70  addiu       $v0, $v0, 0x2E70
    ctx->pc = 0x2db5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11888));
    // 0x2db5a4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2DB5A4u;
    {
        const bool branch_taken_0x2db5a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB5A4u;
            // 0x2db5a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db5a4) {
            ctx->pc = 0x2DB5D0u;
            goto label_2db5d0;
        }
    }
    ctx->pc = 0x2DB5ACu;
    // 0x2db5ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2db5acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2db5b0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2db5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2db5b4: 0x2442dfc0  addiu       $v0, $v0, -0x2040
    ctx->pc = 0x2db5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959040));
    // 0x2db5b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2db5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2db5bc: 0xc07f8cc  jal         func_1FE330
    ctx->pc = 0x2DB5BCu;
    SET_GPR_U32(ctx, 31, 0x2DB5C4u);
    ctx->pc = 0x2DB5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB5BCu;
            // 0x2db5c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE330u;
    if (runtime->hasFunction(0x1FE330u)) {
        auto targetFn = runtime->lookupFunction(0x1FE330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB5C4u; }
        if (ctx->pc != 0x2DB5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE330_0x1fe330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB5C4u; }
        if (ctx->pc != 0x2DB5C4u) { return; }
    }
    ctx->pc = 0x2DB5C4u;
label_2db5c4:
    // 0x2db5c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2db5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db5c8: 0xc0794dc  jal         func_1E5370
    ctx->pc = 0x2DB5C8u;
    SET_GPR_U32(ctx, 31, 0x2DB5D0u);
    ctx->pc = 0x2DB5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB5C8u;
            // 0x2db5cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5370u;
    if (runtime->hasFunction(0x1E5370u)) {
        auto targetFn = runtime->lookupFunction(0x1E5370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB5D0u; }
        if (ctx->pc != 0x2DB5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E5370_0x1e5370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB5D0u; }
        if (ctx->pc != 0x2DB5D0u) { return; }
    }
    ctx->pc = 0x2DB5D0u;
label_2db5d0:
    // 0x2db5d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2db5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2db5d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2db5d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2db5d8: 0x58400013  blezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DB5D8u;
    {
        const bool branch_taken_0x2db5d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2db5d8) {
            ctx->pc = 0x2DB5DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB5D8u;
            // 0x2db5dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB628u;
            goto label_2db628;
        }
    }
    ctx->pc = 0x2DB5E0u;
    // 0x2db5e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2db5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2db5e4: 0x8c50ea40  lw          $s0, -0x15C0($v0)
    ctx->pc = 0x2db5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2db5e8: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x2db5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x2db5ec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2db5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2db5f0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2db5f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2db5f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB5F4u;
    {
        const bool branch_taken_0x2db5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db5f4) {
            ctx->pc = 0x2DB5F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB5F4u;
            // 0x2db5f8: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB610u;
            goto label_2db610;
        }
    }
    ctx->pc = 0x2DB5FCu;
    // 0x2db5fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2db5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db600: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2db600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2db604: 0xc0a79ec  jal         func_29E7B0
    ctx->pc = 0x2DB604u;
    SET_GPR_U32(ctx, 31, 0x2DB60Cu);
    ctx->pc = 0x2DB608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB604u;
            // 0x2db608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB60Cu; }
        if (ctx->pc != 0x2DB60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB60Cu; }
        if (ctx->pc != 0x2DB60Cu) { return; }
    }
    ctx->pc = 0x2DB60Cu;
label_2db60c:
    // 0x2db60c: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x2db60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2db610:
    // 0x2db610: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2db610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2db614: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x2db614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
    // 0x2db618: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2db618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2db61c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2db61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2db620: 0xae110084  sw          $s1, 0x84($s0)
    ctx->pc = 0x2db620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 17));
label_2db624:
    // 0x2db624: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2db624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db628:
    // 0x2db628: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2db628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db62c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2db62cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2db630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db634: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB634u;
            // 0x2db638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DB63Cu;
    // 0x2db63c: 0x0  nop
    ctx->pc = 0x2db63cu;
    // NOP
}
