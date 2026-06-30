#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ED2E0
// Address: 0x4ed2e0 - 0x4ed390
void sub_004ED2E0_0x4ed2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED2E0_0x4ed2e0");
#endif

    switch (ctx->pc) {
        case 0x4ed30cu: goto label_4ed30c;
        case 0x4ed34cu: goto label_4ed34c;
        case 0x4ed374u: goto label_4ed374;
        default: break;
    }

    ctx->pc = 0x4ed2e0u;

    // 0x4ed2e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed2e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ed2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed2e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ed2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ed2ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed2f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ed2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ed2f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ed2f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed2f8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4ed2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ed2fc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4ED2FCu;
    {
        const bool branch_taken_0x4ed2fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED2FCu;
            // 0x4ed300: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed2fc) {
            ctx->pc = 0x4ED368u;
            goto label_4ed368;
        }
    }
    ctx->pc = 0x4ED304u;
    // 0x4ed304: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x4ed304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4ed308: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4ed308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ed30c:
    // 0x4ed30c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ed30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ed310: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4ED310u;
    {
        const bool branch_taken_0x4ed310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x4ed310) {
            ctx->pc = 0x4ED314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED310u;
            // 0x4ed314: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ED35Cu;
            goto label_4ed35c;
        }
    }
    ctx->pc = 0x4ED318u;
    // 0x4ed318: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x4ed318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4ed31c: 0xc2082b  sltu        $at, $a2, $v0
    ctx->pc = 0x4ed31cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ed320: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x4ED320u;
    {
        const bool branch_taken_0x4ed320 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ed320) {
            ctx->pc = 0x4ED324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED320u;
            // 0x4ed324: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4ED350u;
            goto label_4ed350;
        }
    }
    ctx->pc = 0x4ED328u;
    // 0x4ed328: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x4ed328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4ed32c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4ed32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4ed330: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ed330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ed334: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x4ed334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4ed338: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x4ed338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4ed33c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4ed33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4ed340: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x4ed340u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4ed344: 0xc04a508  jal         func_129420
    ctx->pc = 0x4ED344u;
    SET_GPR_U32(ctx, 31, 0x4ED34Cu);
    ctx->pc = 0x4ED348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED344u;
            // 0x4ed348: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED34Cu; }
        if (ctx->pc != 0x4ED34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED34Cu; }
        if (ctx->pc != 0x4ED34Cu) { return; }
    }
    ctx->pc = 0x4ED34Cu;
label_4ed34c:
    // 0x4ed34c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4ed34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4ed350:
    // 0x4ed350: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ed350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4ed354: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4ED354u;
    {
        const bool branch_taken_0x4ed354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED354u;
            // 0x4ed358: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed354) {
            ctx->pc = 0x4ED368u;
            goto label_4ed368;
        }
    }
    ctx->pc = 0x4ED35Cu;
label_4ed35c:
    // 0x4ed35c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x4ed35cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ed360: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x4ED360u;
    {
        const bool branch_taken_0x4ed360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ED364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED360u;
            // 0x4ed364: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed360) {
            ctx->pc = 0x4ED30Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ed30c;
        }
    }
    ctx->pc = 0x4ED368u;
label_4ed368:
    // 0x4ed368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ed368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed36c: 0xc13b58c  jal         func_4ED630
    ctx->pc = 0x4ED36Cu;
    SET_GPR_U32(ctx, 31, 0x4ED374u);
    ctx->pc = 0x4ED370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED36Cu;
            // 0x4ed370: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED630u;
    if (runtime->hasFunction(0x4ED630u)) {
        auto targetFn = runtime->lookupFunction(0x4ED630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED374u; }
        if (ctx->pc != 0x4ED374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004ED630_0x4ed630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4ED374u; }
        if (ctx->pc != 0x4ED374u) { return; }
    }
    ctx->pc = 0x4ED374u;
label_4ed374:
    // 0x4ed374: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ed374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed378: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed37c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ed37cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed380: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED380u;
            // 0x4ed384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4ED388u;
    // 0x4ed388: 0x0  nop
    ctx->pc = 0x4ed388u;
    // NOP
    // 0x4ed38c: 0x0  nop
    ctx->pc = 0x4ed38cu;
    // NOP
}
