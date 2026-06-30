#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0024A580
// Address: 0x24a580 - 0x24a630
void sub_0024A580_0x24a580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A580_0x24a580");
#endif

    switch (ctx->pc) {
        case 0x24a5c0u: goto label_24a5c0;
        case 0x24a5d4u: goto label_24a5d4;
        default: break;
    }

    ctx->pc = 0x24a580u;

    // 0x24a580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24a584: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24a588: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24a588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24a58c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24a590: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24a590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24a594: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24a594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a598: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24a59c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24a59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a5a0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x24a5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24a5a4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x24a5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24a5a8: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x24a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x24a5ac: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A5ACu;
    {
        const bool branch_taken_0x24a5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A5ACu;
            // 0x24a5b0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5ac) {
            ctx->pc = 0x24A5C8u;
            goto label_24a5c8;
        }
    }
    ctx->pc = 0x24A5B4u;
    // 0x24a5b4: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x24a5b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24a5b8: 0xc09978c  jal         func_265E30
    ctx->pc = 0x24A5B8u;
    SET_GPR_U32(ctx, 31, 0x24A5C0u);
    ctx->pc = 0x24A5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A5B8u;
            // 0x24a5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x265E30u;
    if (runtime->hasFunction(0x265E30u)) {
        auto targetFn = runtime->lookupFunction(0x265E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5C0u; }
        if (ctx->pc != 0x24A5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00265E30_0x265e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5C0u; }
        if (ctx->pc != 0x24A5C0u) { return; }
    }
    ctx->pc = 0x24A5C0u;
label_24a5c0:
    // 0x24a5c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24A5C0u;
    {
        const bool branch_taken_0x24a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a5c0) {
            ctx->pc = 0x24A5D8u;
            goto label_24a5d8;
        }
    }
    ctx->pc = 0x24A5C8u;
label_24a5c8:
    // 0x24a5c8: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x24a5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x24a5cc: 0xc099878  jal         func_2661E0
    ctx->pc = 0x24A5CCu;
    SET_GPR_U32(ctx, 31, 0x24A5D4u);
    ctx->pc = 0x24A5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A5CCu;
            // 0x24a5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2661E0u;
    if (runtime->hasFunction(0x2661E0u)) {
        auto targetFn = runtime->lookupFunction(0x2661E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5D4u; }
        if (ctx->pc != 0x24A5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002661E0_0x2661e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A5D4u; }
        if (ctx->pc != 0x24A5D4u) { return; }
    }
    ctx->pc = 0x24A5D4u;
label_24a5d4:
    // 0x24a5d4: 0x0  nop
    ctx->pc = 0x24a5d4u;
    // NOP
label_24a5d8:
    // 0x24a5d8: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x24a5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a5dc: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x24a5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a5e0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x24a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x24a5e4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x24a5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x24a5e8: 0x9205000e  lbu         $a1, 0xE($s0)
    ctx->pc = 0x24a5e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x24a5ec: 0x9204000c  lbu         $a0, 0xC($s0)
    ctx->pc = 0x24a5ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24a5f0: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x24a5f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x24a5f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24a5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a5f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24a5f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24a5fc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x24a5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x24a600: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x24a600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x24a604: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x24a604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24a608: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x24a608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x24a60c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x24a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x24a610: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x24a610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x24a614: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x24a614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x24a618: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x24a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24a61c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24a620: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24a624: 0x3e00008  jr          $ra
    ctx->pc = 0x24A624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A624u;
            // 0x24a628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A62Cu;
    // 0x24a62c: 0x0  nop
    ctx->pc = 0x24a62cu;
    // NOP
}
