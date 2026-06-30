#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001690F0
// Address: 0x1690f0 - 0x169158
void sub_001690F0_0x1690f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001690F0_0x1690f0");
#endif

    switch (ctx->pc) {
        case 0x16910cu: goto label_16910c;
        case 0x169140u: goto label_169140;
        case 0x169148u: goto label_169148;
        default: break;
    }

    ctx->pc = 0x1690f0u;

    // 0x1690f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1690f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1690f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1690f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1690f8: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x1690f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x1690fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1690fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x169100: 0x26107be0  addiu       $s0, $s0, 0x7BE0
    ctx->pc = 0x169100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31712));
    // 0x169104: 0xc05a810  jal         func_16A040
    ctx->pc = 0x169104u;
    SET_GPR_U32(ctx, 31, 0x16910Cu);
    ctx->pc = 0x169108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169104u;
            // 0x169108: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A040u;
    if (runtime->hasFunction(0x16A040u)) {
        auto targetFn = runtime->lookupFunction(0x16A040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16910Cu; }
        if (ctx->pc != 0x16910Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A040_0x16a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16910Cu; }
        if (ctx->pc != 0x16910Cu) { return; }
    }
    ctx->pc = 0x16910Cu;
label_16910c:
    // 0x16910c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x16910cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x169110: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x169110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169114: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x169114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x169118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16911c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x16911cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x169120: 0xac407bdc  sw          $zero, 0x7BDC($v0)
    ctx->pc = 0x169120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31708), GPR_U32(ctx, 0));
    // 0x169124: 0xac607bf4  sw          $zero, 0x7BF4($v1)
    ctx->pc = 0x169124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31732), GPR_U32(ctx, 0));
    // 0x169128: 0x3e00008  jr          $ra
    ctx->pc = 0x169128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16912Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169128u;
            // 0x16912c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169130u;
    // 0x169130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x169138: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x169138u;
    SET_GPR_U32(ctx, 31, 0x169140u);
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169140u; }
        if (ctx->pc != 0x169140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169140u; }
        if (ctx->pc != 0x169140u) { return; }
    }
    ctx->pc = 0x169140u;
label_169140:
    // 0x169140: 0xc05a456  jal         func_169158
    ctx->pc = 0x169140u;
    SET_GPR_U32(ctx, 31, 0x169148u);
    ctx->pc = 0x169158u;
    if (runtime->hasFunction(0x169158u)) {
        auto targetFn = runtime->lookupFunction(0x169158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169148u; }
        if (ctx->pc != 0x169148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169158_0x169158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169148u; }
        if (ctx->pc != 0x169148u) { return; }
    }
    ctx->pc = 0x169148u;
label_169148:
    // 0x169148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16914c: 0x805adca  j           func_16B728
    ctx->pc = 0x16914Cu;
    ctx->pc = 0x169150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16914Cu;
            // 0x169150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016B728_0x16b728(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x169154u;
    // 0x169154: 0x0  nop
    ctx->pc = 0x169154u;
    // NOP
}
