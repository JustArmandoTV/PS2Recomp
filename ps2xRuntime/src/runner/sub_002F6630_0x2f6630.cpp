#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F6630
// Address: 0x2f6630 - 0x2f6670
void sub_002F6630_0x2f6630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6630_0x2f6630");
#endif

    switch (ctx->pc) {
        case 0x2f6658u: goto label_2f6658;
        default: break;
    }

    ctx->pc = 0x2f6630u;

    // 0x2f6630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f6638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f663c: 0x908300db  lbu         $v1, 0xDB($a0)
    ctx->pc = 0x2f663cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 219)));
    // 0x2f6640: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6640u;
    {
        const bool branch_taken_0x2f6640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6640u;
            // 0x2f6644: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6640) {
            ctx->pc = 0x2F665Cu;
            goto label_2f665c;
        }
    }
    ctx->pc = 0x2F6648u;
    // 0x2f6648: 0x820400da  lb          $a0, 0xDA($s0)
    ctx->pc = 0x2f6648u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 218)));
    // 0x2f664c: 0x3c05a600  lui         $a1, 0xA600
    ctx->pc = 0x2f664cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42496 << 16));
    // 0x2f6650: 0xc07293e  jal         func_1CA4F8
    ctx->pc = 0x2F6650u;
    SET_GPR_U32(ctx, 31, 0x2F6658u);
    ctx->pc = 0x2F6654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6650u;
            // 0x2f6654: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6658u; }
        if (ctx->pc != 0x2F6658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F6658u; }
        if (ctx->pc != 0x2F6658u) { return; }
    }
    ctx->pc = 0x2F6658u;
label_2f6658:
    // 0x2f6658: 0xa20000db  sb          $zero, 0xDB($s0)
    ctx->pc = 0x2f6658u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 0));
label_2f665c:
    // 0x2f665c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f6660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6664: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F6664u;
            // 0x2f6668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F666Cu;
    // 0x2f666c: 0x0  nop
    ctx->pc = 0x2f666cu;
    // NOP
}
