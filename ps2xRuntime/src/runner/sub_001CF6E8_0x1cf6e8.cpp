#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CF6E8
// Address: 0x1cf6e8 - 0x1cf780
void sub_001CF6E8_0x1cf6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF6E8_0x1cf6e8");
#endif

    switch (ctx->pc) {
        case 0x1cf71cu: goto label_1cf71c;
        case 0x1cf738u: goto label_1cf738;
        case 0x1cf754u: goto label_1cf754;
        default: break;
    }

    ctx->pc = 0x1cf6e8u;

    // 0x1cf6e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cf6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1cf6ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cf6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1cf6f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cf6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cf6f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cf6f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf6f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf6fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cf6fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf700: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1cf700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1cf704: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1cf704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf708: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1cf708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1cf70c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1cf70cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf710: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1cf710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1cf714: 0xc073d78  jal         func_1CF5E0
    ctx->pc = 0x1CF714u;
    SET_GPR_U32(ctx, 31, 0x1CF71Cu);
    ctx->pc = 0x1CF718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF714u;
            // 0x1cf718: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5E0u;
    if (runtime->hasFunction(0x1CF5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF71Cu; }
        if (ctx->pc != 0x1CF71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF5E0_0x1cf5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF71Cu; }
        if (ctx->pc != 0x1CF71Cu) { return; }
    }
    ctx->pc = 0x1CF71Cu;
label_1cf71c:
    // 0x1cf71c: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF71Cu;
    {
        const bool branch_taken_0x1cf71c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf71c) {
            ctx->pc = 0x1CF720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF71Cu;
            // 0x1cf720: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF744u;
            goto label_1cf744;
        }
    }
    ctx->pc = 0x1CF724u;
    // 0x1cf724: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cf724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf72c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cf72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf730: 0xc073d70  jal         func_1CF5C0
    ctx->pc = 0x1CF730u;
    SET_GPR_U32(ctx, 31, 0x1CF738u);
    ctx->pc = 0x1CF734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF730u;
            // 0x1cf734: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF5C0u;
    if (runtime->hasFunction(0x1CF5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF738u; }
        if (ctx->pc != 0x1CF738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF5C0_0x1cf5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF738u; }
        if (ctx->pc != 0x1CF738u) { return; }
    }
    ctx->pc = 0x1CF738u;
label_1cf738:
    // 0x1cf738: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CF738u;
    {
        const bool branch_taken_0x1cf738 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CF73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF738u;
            // 0x1cf73c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf738) {
            ctx->pc = 0x1CF764u;
            goto label_1cf764;
        }
    }
    ctx->pc = 0x1CF740u;
    // 0x1cf740: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1cf740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf744:
    // 0x1cf744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf748: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cf748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf74c: 0xc073db0  jal         func_1CF6C0
    ctx->pc = 0x1CF74Cu;
    SET_GPR_U32(ctx, 31, 0x1CF754u);
    ctx->pc = 0x1CF750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF74Cu;
            // 0x1cf750: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CF6C0u;
    if (runtime->hasFunction(0x1CF6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1CF6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF754u; }
        if (ctx->pc != 0x1CF754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CF6C0_0x1cf6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF754u; }
        if (ctx->pc != 0x1CF754u) { return; }
    }
    ctx->pc = 0x1CF754u;
label_1cf754:
    // 0x1cf754: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cf754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf758: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1cf758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cf75c: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1cf75cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1cf760: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1cf760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1cf764:
    // 0x1cf764: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1cf764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf768: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1cf768u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf76c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cf76cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf770: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cf770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf778: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF778u;
            // 0x1cf77c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF780u;
}
