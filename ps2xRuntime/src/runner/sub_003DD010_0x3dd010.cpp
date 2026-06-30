#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DD010
// Address: 0x3dd010 - 0x3dd070
void sub_003DD010_0x3dd010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD010_0x3dd010");
#endif

    switch (ctx->pc) {
        case 0x3dd034u: goto label_3dd034;
        case 0x3dd050u: goto label_3dd050;
        default: break;
    }

    ctx->pc = 0x3dd010u;

    // 0x3dd010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dd010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dd014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dd014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dd018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3dd018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3dd01c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dd01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dd020: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x3dd020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3dd024: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DD024u;
    {
        const bool branch_taken_0x3dd024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd024) {
            ctx->pc = 0x3DD028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD024u;
            // 0x3dd028: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD038u;
            goto label_3dd038;
        }
    }
    ctx->pc = 0x3DD02Cu;
    // 0x3dd02c: 0xc04008c  jal         func_100230
    ctx->pc = 0x3DD02Cu;
    SET_GPR_U32(ctx, 31, 0x3DD034u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD034u; }
        if (ctx->pc != 0x3DD034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD034u; }
        if (ctx->pc != 0x3DD034u) { return; }
    }
    ctx->pc = 0x3DD034u;
label_3dd034:
    // 0x3dd034: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3dd034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_3dd038:
    // 0x3dd038: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3dd038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3dd03c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DD03Cu;
    {
        const bool branch_taken_0x3dd03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd03c) {
            ctx->pc = 0x3DD040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD03Cu;
            // 0x3dd040: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3DD054u;
            goto label_3dd054;
        }
    }
    ctx->pc = 0x3DD044u;
    // 0x3dd044: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x3dd044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x3dd048: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x3DD048u;
    SET_GPR_U32(ctx, 31, 0x3DD050u);
    ctx->pc = 0x3DD04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD048u;
            // 0x3dd04c: 0x24a5ede0  addiu       $a1, $a1, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD050u; }
        if (ctx->pc != 0x3DD050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3DD050u; }
        if (ctx->pc != 0x3DD050u) { return; }
    }
    ctx->pc = 0x3DD050u;
label_3dd050:
    // 0x3dd050: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3dd050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3dd054:
    // 0x3dd054: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3dd054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3dd058: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3dd058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3dd05c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3dd05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3dd060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dd060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3dd064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dd068: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD068u;
            // 0x3dd06c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3DD070u;
}
