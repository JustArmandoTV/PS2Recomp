#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004752D0
// Address: 0x4752d0 - 0x475330
void sub_004752D0_0x4752d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004752D0_0x4752d0");
#endif

    switch (ctx->pc) {
        case 0x4752f4u: goto label_4752f4;
        case 0x475310u: goto label_475310;
        default: break;
    }

    ctx->pc = 0x4752d0u;

    // 0x4752d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4752d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4752d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4752d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4752d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4752d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4752dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4752dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4752e0: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x4752e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4752e4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4752E4u;
    {
        const bool branch_taken_0x4752e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4752e4) {
            ctx->pc = 0x4752E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4752E4u;
            // 0x4752e8: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4752F8u;
            goto label_4752f8;
        }
    }
    ctx->pc = 0x4752ECu;
    // 0x4752ec: 0xc04008c  jal         func_100230
    ctx->pc = 0x4752ECu;
    SET_GPR_U32(ctx, 31, 0x4752F4u);
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4752F4u; }
        if (ctx->pc != 0x4752F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4752F4u; }
        if (ctx->pc != 0x4752F4u) { return; }
    }
    ctx->pc = 0x4752F4u;
label_4752f4:
    // 0x4752f4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x4752f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_4752f8:
    // 0x4752f8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x4752f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4752fc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4752FCu;
    {
        const bool branch_taken_0x4752fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4752fc) {
            ctx->pc = 0x475300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4752FCu;
            // 0x475300: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x475314u;
            goto label_475314;
        }
    }
    ctx->pc = 0x475304u;
    // 0x475304: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x475304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x475308: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x475308u;
    SET_GPR_U32(ctx, 31, 0x475310u);
    ctx->pc = 0x47530Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x475308u;
            // 0x47530c: 0x24a55000  addiu       $a1, $a1, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475310u; }
        if (ctx->pc != 0x475310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x475310u; }
        if (ctx->pc != 0x475310u) { return; }
    }
    ctx->pc = 0x475310u;
label_475310:
    // 0x475310: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x475310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_475314:
    // 0x475314: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x475314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x475318: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x475318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x47531c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x47531cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x475320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x475320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x475324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x475324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x475328: 0x3e00008  jr          $ra
    ctx->pc = 0x475328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x475328u;
            // 0x47532c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x475330u;
}
