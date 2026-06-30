#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015DFC8
// Address: 0x15dfc8 - 0x15e1f8
void sub_0015DFC8_0x15dfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DFC8_0x15dfc8");
#endif

    switch (ctx->pc) {
        case 0x15dfe0u: goto label_15dfe0;
        case 0x15dfecu: goto label_15dfec;
        case 0x15dff8u: goto label_15dff8;
        case 0x15e004u: goto label_15e004;
        case 0x15e010u: goto label_15e010;
        case 0x15e01cu: goto label_15e01c;
        case 0x15e030u: goto label_15e030;
        case 0x15e048u: goto label_15e048;
        case 0x15e054u: goto label_15e054;
        case 0x15e060u: goto label_15e060;
        case 0x15e06cu: goto label_15e06c;
        case 0x15e078u: goto label_15e078;
        case 0x15e084u: goto label_15e084;
        case 0x15e098u: goto label_15e098;
        case 0x15e150u: goto label_15e150;
        default: break;
    }

    ctx->pc = 0x15dfc8u;

    // 0x15dfc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15dfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15dfcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15dfd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15dfd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15dfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dfd8: 0xc0577ea  jal         func_15DFA8
    ctx->pc = 0x15DFD8u;
    SET_GPR_U32(ctx, 31, 0x15DFE0u);
    ctx->pc = 0x15DFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFD8u;
            // 0x15dfdc: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DFA8u;
    if (runtime->hasFunction(0x15DFA8u)) {
        auto targetFn = runtime->lookupFunction(0x15DFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFE0u; }
        if (ctx->pc != 0x15DFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DFA8_0x15dfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFE0u; }
        if (ctx->pc != 0x15DFE0u) { return; }
    }
    ctx->pc = 0x15DFE0u;
label_15dfe0:
    // 0x15dfe0: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x15dfe0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x15dfe4: 0xc0577ea  jal         func_15DFA8
    ctx->pc = 0x15DFE4u;
    SET_GPR_U32(ctx, 31, 0x15DFECu);
    ctx->pc = 0x15DFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFE4u;
            // 0x15dfe8: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DFA8u;
    if (runtime->hasFunction(0x15DFA8u)) {
        auto targetFn = runtime->lookupFunction(0x15DFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFECu; }
        if (ctx->pc != 0x15DFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DFA8_0x15dfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFECu; }
        if (ctx->pc != 0x15DFECu) { return; }
    }
    ctx->pc = 0x15DFECu;
label_15dfec:
    // 0x15dfec: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x15dfecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x15dff0: 0xc0577ea  jal         func_15DFA8
    ctx->pc = 0x15DFF0u;
    SET_GPR_U32(ctx, 31, 0x15DFF8u);
    ctx->pc = 0x15DFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFF0u;
            // 0x15dff4: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DFA8u;
    if (runtime->hasFunction(0x15DFA8u)) {
        auto targetFn = runtime->lookupFunction(0x15DFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFF8u; }
        if (ctx->pc != 0x15DFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DFA8_0x15dfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DFF8u; }
        if (ctx->pc != 0x15DFF8u) { return; }
    }
    ctx->pc = 0x15DFF8u;
label_15dff8:
    // 0x15dff8: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x15dff8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x15dffc: 0xc0577ea  jal         func_15DFA8
    ctx->pc = 0x15DFFCu;
    SET_GPR_U32(ctx, 31, 0x15E004u);
    ctx->pc = 0x15E000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DFFCu;
            // 0x15e000: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DFA8u;
    if (runtime->hasFunction(0x15DFA8u)) {
        auto targetFn = runtime->lookupFunction(0x15DFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E004u; }
        if (ctx->pc != 0x15E004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DFA8_0x15dfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E004u; }
        if (ctx->pc != 0x15E004u) { return; }
    }
    ctx->pc = 0x15E004u;
label_15e004:
    // 0x15e004: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x15e004u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x15e008: 0xc0577ea  jal         func_15DFA8
    ctx->pc = 0x15E008u;
    SET_GPR_U32(ctx, 31, 0x15E010u);
    ctx->pc = 0x15E00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E008u;
            // 0x15e00c: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DFA8u;
    if (runtime->hasFunction(0x15DFA8u)) {
        auto targetFn = runtime->lookupFunction(0x15DFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E010u; }
        if (ctx->pc != 0x15E010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DFA8_0x15dfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E010u; }
        if (ctx->pc != 0x15E010u) { return; }
    }
    ctx->pc = 0x15E010u;
label_15e010:
    // 0x15e010: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x15e010u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x15e014: 0xc0577ea  jal         func_15DFA8
    ctx->pc = 0x15E014u;
    SET_GPR_U32(ctx, 31, 0x15E01Cu);
    ctx->pc = 0x15E018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E014u;
            // 0x15e018: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DFA8u;
    if (runtime->hasFunction(0x15DFA8u)) {
        auto targetFn = runtime->lookupFunction(0x15DFA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E01Cu; }
        if (ctx->pc != 0x15E01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DFA8_0x15dfa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E01Cu; }
        if (ctx->pc != 0x15E01Cu) { return; }
    }
    ctx->pc = 0x15E01Cu;
label_15e01c:
    // 0x15e01c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15e01cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15e020: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15e020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15e024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e028: 0x3e00008  jr          $ra
    ctx->pc = 0x15E028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E028u;
            // 0x15e02c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E030u;
label_15e030:
    // 0x15e030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15e030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15e034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15e038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15e038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15e03c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15e03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e040: 0xc0577de  jal         func_15DF78
    ctx->pc = 0x15E040u;
    SET_GPR_U32(ctx, 31, 0x15E048u);
    ctx->pc = 0x15E044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E040u;
            // 0x15e044: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DF78u;
    if (runtime->hasFunction(0x15DF78u)) {
        auto targetFn = runtime->lookupFunction(0x15DF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E048u; }
        if (ctx->pc != 0x15E048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DF78_0x15df78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E048u; }
        if (ctx->pc != 0x15E048u) { return; }
    }
    ctx->pc = 0x15E048u;
label_15e048:
    // 0x15e048: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x15e048u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x15e04c: 0xc0577de  jal         func_15DF78
    ctx->pc = 0x15E04Cu;
    SET_GPR_U32(ctx, 31, 0x15E054u);
    ctx->pc = 0x15E050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E04Cu;
            // 0x15e050: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DF78u;
    if (runtime->hasFunction(0x15DF78u)) {
        auto targetFn = runtime->lookupFunction(0x15DF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E054u; }
        if (ctx->pc != 0x15E054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DF78_0x15df78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E054u; }
        if (ctx->pc != 0x15E054u) { return; }
    }
    ctx->pc = 0x15E054u;
label_15e054:
    // 0x15e054: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x15e054u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x15e058: 0xc0577de  jal         func_15DF78
    ctx->pc = 0x15E058u;
    SET_GPR_U32(ctx, 31, 0x15E060u);
    ctx->pc = 0x15E05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E058u;
            // 0x15e05c: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DF78u;
    if (runtime->hasFunction(0x15DF78u)) {
        auto targetFn = runtime->lookupFunction(0x15DF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E060u; }
        if (ctx->pc != 0x15E060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DF78_0x15df78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E060u; }
        if (ctx->pc != 0x15E060u) { return; }
    }
    ctx->pc = 0x15E060u;
label_15e060:
    // 0x15e060: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x15e060u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x15e064: 0xc0577de  jal         func_15DF78
    ctx->pc = 0x15E064u;
    SET_GPR_U32(ctx, 31, 0x15E06Cu);
    ctx->pc = 0x15E068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E064u;
            // 0x15e068: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DF78u;
    if (runtime->hasFunction(0x15DF78u)) {
        auto targetFn = runtime->lookupFunction(0x15DF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E06Cu; }
        if (ctx->pc != 0x15E06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DF78_0x15df78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E06Cu; }
        if (ctx->pc != 0x15E06Cu) { return; }
    }
    ctx->pc = 0x15E06Cu;
label_15e06c:
    // 0x15e06c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x15e06cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x15e070: 0xc0577de  jal         func_15DF78
    ctx->pc = 0x15E070u;
    SET_GPR_U32(ctx, 31, 0x15E078u);
    ctx->pc = 0x15E074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E070u;
            // 0x15e074: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DF78u;
    if (runtime->hasFunction(0x15DF78u)) {
        auto targetFn = runtime->lookupFunction(0x15DF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E078u; }
        if (ctx->pc != 0x15E078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DF78_0x15df78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E078u; }
        if (ctx->pc != 0x15E078u) { return; }
    }
    ctx->pc = 0x15E078u;
label_15e078:
    // 0x15e078: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x15e078u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x15e07c: 0xc0577de  jal         func_15DF78
    ctx->pc = 0x15E07Cu;
    SET_GPR_U32(ctx, 31, 0x15E084u);
    ctx->pc = 0x15E080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E07Cu;
            // 0x15e080: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DF78u;
    if (runtime->hasFunction(0x15DF78u)) {
        auto targetFn = runtime->lookupFunction(0x15DF78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E084u; }
        if (ctx->pc != 0x15E084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DF78_0x15df78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E084u; }
        if (ctx->pc != 0x15E084u) { return; }
    }
    ctx->pc = 0x15E084u;
label_15e084:
    // 0x15e084: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15e084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15e088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15e088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15e08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e090: 0x3e00008  jr          $ra
    ctx->pc = 0x15E090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E090u;
            // 0x15e094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E098u;
label_15e098:
    // 0x15e098: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15e098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e09c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15e09cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e0a0: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x15e0a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x15e0a4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x15e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x15e0a8: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x15e0a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x15e0ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e0b0: 0x244925f0  addiu       $t1, $v0, 0x25F0
    ctx->pc = 0x15e0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 9712));
    // 0x15e0b4: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x15e0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x15e0b8: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x15e0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x15e0bc: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x15e0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x15e0c0: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x15e0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x15e0c4: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x15e0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15e0c8: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x15e0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15e0cc: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x15e0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15e0d0: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x15e0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15e0d4: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x15e0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x15e0d8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E0D8u;
    {
        const bool branch_taken_0x15e0d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0D8u;
            // 0x15e0dc: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0d8) {
            ctx->pc = 0x15E0E8u;
            goto label_15e0e8;
        }
    }
    ctx->pc = 0x15E0E0u;
    // 0x15e0e0: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x15e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x15e0e4: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x15e0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_15e0e8:
    // 0x15e0e8: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x15e0e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x15e0ec: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x15e0ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x15e0f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x15e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15e0f4: 0x8043ffff  lb          $v1, -0x1($v0)
    ctx->pc = 0x15e0f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x15e0f8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x15e0f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x15e0fc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x15E0FCu;
    {
        const bool branch_taken_0x15e0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E0FCu;
            // 0x15e100: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e0fc) {
            ctx->pc = 0x15E144u;
            goto label_15e144;
        }
    }
    ctx->pc = 0x15E104u;
    // 0x15e104: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x15e104u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x15e108: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x15e108u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x15e10c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x15e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15e110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15e110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15e114: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x15e114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15e118: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x15E118u;
    {
        const bool branch_taken_0x15e118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x15E11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E118u;
            // 0x15e11c: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e118) {
            ctx->pc = 0x15E144u;
            goto label_15e144;
        }
    }
    ctx->pc = 0x15E120u;
    // 0x15e120: 0x90a30007  lbu         $v1, 0x7($a1)
    ctx->pc = 0x15e120u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x15e124: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x15e124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x15e128: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E128u;
    {
        const bool branch_taken_0x15e128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15E12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E128u;
            // 0x15e12c: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e128) {
            ctx->pc = 0x15E138u;
            goto label_15e138;
        }
    }
    ctx->pc = 0x15E130u;
    // 0x15e130: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15E130u;
    {
        const bool branch_taken_0x15e130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E130u;
            // 0x15e134: 0xa0a00007  sb          $zero, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e130) {
            ctx->pc = 0x15E13Cu;
            goto label_15e13c;
        }
    }
    ctx->pc = 0x15E138u;
label_15e138:
    // 0x15e138: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x15e138u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_15e13c:
    // 0x15e13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e140: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x15e140u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_15e144:
    // 0x15e144: 0x3e00008  jr          $ra
    ctx->pc = 0x15E144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E144u;
            // 0x15e148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E14Cu;
    // 0x15e14c: 0x0  nop
    ctx->pc = 0x15e14cu;
    // NOP
label_15e150:
    // 0x15e150: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15e150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e154: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15e154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15e158: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x15e158u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x15e15c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x15e15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
    // 0x15e160: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x15e160u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x15e164: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15e164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15e168: 0x244925f0  addiu       $t1, $v0, 0x25F0
    ctx->pc = 0x15e168u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 9712));
    // 0x15e16c: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x15e16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x15e170: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x15e170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x15e174: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x15e174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x15e178: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x15e178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x15e17c: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x15e17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15e180: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x15e180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15e184: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x15e184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15e188: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x15e188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15e18c: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x15e18cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x15e190: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E190u;
    {
        const bool branch_taken_0x15e190 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E190u;
            // 0x15e194: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e190) {
            ctx->pc = 0x15E1A0u;
            goto label_15e1a0;
        }
    }
    ctx->pc = 0x15E198u;
    // 0x15e198: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x15e198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x15e19c: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x15e19cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_15e1a0:
    // 0x15e1a0: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x15e1a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x15e1a4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x15E1A4u;
    {
        const bool branch_taken_0x15e1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e1a4) {
            ctx->pc = 0x15E1ECu;
            goto label_15e1ec;
        }
    }
    ctx->pc = 0x15E1ACu;
    // 0x15e1ac: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x15e1acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x15e1b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x15e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15e1b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15e1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e1b8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15E1B8u;
    {
        const bool branch_taken_0x15e1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E1B8u;
            // 0x15e1bc: 0xa0a20006  sb          $v0, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1b8) {
            ctx->pc = 0x15E1DCu;
            goto label_15e1dc;
        }
    }
    ctx->pc = 0x15E1C0u;
    // 0x15e1c0: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x15e1c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x15e1c4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E1C4u;
    {
        const bool branch_taken_0x15e1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E1C4u;
            // 0x15e1c8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1c4) {
            ctx->pc = 0x15E1D0u;
            goto label_15e1d0;
        }
    }
    ctx->pc = 0x15E1CCu;
    // 0x15e1cc: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x15e1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_15e1d0:
    // 0x15e1d0: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x15e1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x15e1d4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15e1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15e1d8: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x15e1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_15e1dc:
    // 0x15e1dc: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x15e1dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x15e1e0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x15e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15e1e4: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x15e1e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x15e1e8: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x15e1e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
label_15e1ec:
    // 0x15e1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15E1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E1ECu;
            // 0x15e1f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E1F4u;
    // 0x15e1f4: 0x0  nop
    ctx->pc = 0x15e1f4u;
    // NOP
}
