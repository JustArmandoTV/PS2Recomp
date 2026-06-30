#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001386E0
// Address: 0x1386e0 - 0x138750
void sub_001386E0_0x1386e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001386E0_0x1386e0");
#endif

    switch (ctx->pc) {
        case 0x138714u: goto label_138714;
        case 0x138724u: goto label_138724;
        default: break;
    }

    ctx->pc = 0x1386e0u;

    // 0x1386e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1386e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1386e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1386e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1386e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1386e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1386ec: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1386ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1386f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1386f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1386f4: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x1386f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1386f8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1386F8u;
    {
        const bool branch_taken_0x1386f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1386FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1386F8u;
            // 0x1386fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1386f8) {
            ctx->pc = 0x13873Cu;
            goto label_13873c;
        }
    }
    ctx->pc = 0x138700u;
    // 0x138700: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x138700u;
    {
        const bool branch_taken_0x138700 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x138700) {
            ctx->pc = 0x138704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138700u;
            // 0x138704: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13871Cu;
            goto label_13871c;
        }
    }
    ctx->pc = 0x138708u;
    // 0x138708: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x138708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13870c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x13870Cu;
    SET_GPR_U32(ctx, 31, 0x138714u);
    ctx->pc = 0x138710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13870Cu;
            // 0x138710: 0x24a40040  addiu       $a0, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138714u; }
        if (ctx->pc != 0x138714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138714u; }
        if (ctx->pc != 0x138714u) { return; }
    }
    ctx->pc = 0x138714u;
label_138714:
    // 0x138714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x138714u;
    {
        const bool branch_taken_0x138714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138714u;
            // 0x138718: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138714) {
            ctx->pc = 0x138728u;
            goto label_138728;
        }
    }
    ctx->pc = 0x13871Cu;
label_13871c:
    // 0x13871c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x13871Cu;
    SET_GPR_U32(ctx, 31, 0x138724u);
    ctx->pc = 0x138720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13871Cu;
            // 0x138720: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138724u; }
        if (ctx->pc != 0x138724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138724u; }
        if (ctx->pc != 0x138724u) { return; }
    }
    ctx->pc = 0x138724u;
label_138724:
    // 0x138724: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x138724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_138728:
    // 0x138728: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x138728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x13872c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x13872cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x138730: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x138730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x138734: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x138734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x138738: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x138738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_13873c:
    // 0x13873c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13873cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x138740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138744: 0x3e00008  jr          $ra
    ctx->pc = 0x138744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138744u;
            // 0x138748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13874Cu;
    // 0x13874c: 0x0  nop
    ctx->pc = 0x13874cu;
    // NOP
}
