#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D020
// Address: 0x15d020 - 0x15d0a0
void sub_0015D020_0x15d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D020_0x15d020");
#endif

    switch (ctx->pc) {
        case 0x15d03cu: goto label_15d03c;
        case 0x15d090u: goto label_15d090;
        default: break;
    }

    ctx->pc = 0x15d020u;

    // 0x15d020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15d024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15d028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d02c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d030: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15d030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15d034: 0xc056ce0  jal         func_15B380
    ctx->pc = 0x15D034u;
    SET_GPR_U32(ctx, 31, 0x15D03Cu);
    ctx->pc = 0x15D038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D034u;
            // 0x15d038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B380u;
    if (runtime->hasFunction(0x15B380u)) {
        auto targetFn = runtime->lookupFunction(0x15B380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D03Cu; }
        if (ctx->pc != 0x15D03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B380_0x15b380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D03Cu; }
        if (ctx->pc != 0x15D03Cu) { return; }
    }
    ctx->pc = 0x15D03Cu;
label_15d03c:
    // 0x15d03c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x15d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x15d040: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x15d040u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x15d044: 0x34640404  ori         $a0, $v1, 0x404
    ctx->pc = 0x15d044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x15d048: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x15d048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x15d04c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x15d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x15d050: 0x346301fc  ori         $v1, $v1, 0x1FC
    ctx->pc = 0x15d050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)508);
    // 0x15d054: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x15d054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15d058: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x15d058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x15d05c: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x15d05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x15d060: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x15d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15d064: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x15d064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x15d068: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x15d068u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15d06c: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x15d06cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x15d070: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x15d070u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15d074: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x15d074u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
    // 0x15d078: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x15d078u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x15d07c: 0x7c430030  sq          $v1, 0x30($v0)
    ctx->pc = 0x15d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
    // 0x15d080: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x15d080u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x15d084: 0x7c430040  sq          $v1, 0x40($v0)
    ctx->pc = 0x15d084u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 3));
    // 0x15d088: 0xc056d60  jal         func_15B580
    ctx->pc = 0x15D088u;
    SET_GPR_U32(ctx, 31, 0x15D090u);
    ctx->pc = 0x15D08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D088u;
            // 0x15d08c: 0x8f848418  lw          $a0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B580u;
    if (runtime->hasFunction(0x15B580u)) {
        auto targetFn = runtime->lookupFunction(0x15B580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D090u; }
        if (ctx->pc != 0x15D090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B580_0x15b580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D090u; }
        if (ctx->pc != 0x15D090u) { return; }
    }
    ctx->pc = 0x15D090u;
label_15d090:
    // 0x15d090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15d090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d098: 0x3e00008  jr          $ra
    ctx->pc = 0x15D098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D098u;
            // 0x15d09c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15D0A0u;
}
