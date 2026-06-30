#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053F200
// Address: 0x53f200 - 0x53f240
void sub_0053F200_0x53f200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053F200_0x53f200");
#endif

    switch (ctx->pc) {
        case 0x53f224u: goto label_53f224;
        default: break;
    }

    ctx->pc = 0x53f200u;

    // 0x53f200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53f200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x53f204: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53f204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x53f208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53f208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x53f20c: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x53f20cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x53f210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53f210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53f214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53f214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x53f218: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x53f218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x53f21c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x53F21Cu;
    SET_GPR_U32(ctx, 31, 0x53F224u);
    ctx->pc = 0x53F220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53F21Cu;
            // 0x53f220: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F224u; }
        if (ctx->pc != 0x53F224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53F224u; }
        if (ctx->pc != 0x53F224u) { return; }
    }
    ctx->pc = 0x53F224u;
label_53f224:
    // 0x53f224: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x53f224u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
    // 0x53f228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53f228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x53f22c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53f22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53f230: 0x3e00008  jr          $ra
    ctx->pc = 0x53F230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53F234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53F230u;
            // 0x53f234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53F238u;
    // 0x53f238: 0x0  nop
    ctx->pc = 0x53f238u;
    // NOP
    // 0x53f23c: 0x0  nop
    ctx->pc = 0x53f23cu;
    // NOP
}
