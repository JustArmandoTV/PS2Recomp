#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016BDE0
// Address: 0x16bde0 - 0x16be60
void sub_0016BDE0_0x16bde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BDE0_0x16bde0");
#endif

    switch (ctx->pc) {
        case 0x16be2cu: goto label_16be2c;
        case 0x16be40u: goto label_16be40;
        default: break;
    }

    ctx->pc = 0x16bde0u;

    // 0x16bde0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bde4: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x16bde4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x16bde8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bdec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16bdecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bdf0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x16bdf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x16bdf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bdf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bdf8: 0x805af98  j           func_16BE60
    ctx->pc = 0x16BDF8u;
    ctx->pc = 0x16BDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BDF8u;
            // 0x16bdfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BE60u;
    if (runtime->hasFunction(0x16BE60u)) {
        auto targetFn = runtime->lookupFunction(0x16BE60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0016BE60_0x16be60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16BE00u;
    // 0x16be00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16be04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16be04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16be08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16be08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16be0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16be10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16be10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16be14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16be18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x16be18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16be1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16be20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16be20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16be24: 0xc0599de  jal         func_166778
    ctx->pc = 0x16BE24u;
    SET_GPR_U32(ctx, 31, 0x16BE2Cu);
    ctx->pc = 0x16BE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE24u;
            // 0x16be28: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE2Cu; }
        if (ctx->pc != 0x16BE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE2Cu; }
        if (ctx->pc != 0x16BE2Cu) { return; }
    }
    ctx->pc = 0x16BE2Cu;
label_16be2c:
    // 0x16be2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16be2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16be30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be34: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x16be34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be38: 0xc05af98  jal         func_16BE60
    ctx->pc = 0x16BE38u;
    SET_GPR_U32(ctx, 31, 0x16BE40u);
    ctx->pc = 0x16BE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE38u;
            // 0x16be3c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BE60u;
    if (runtime->hasFunction(0x16BE60u)) {
        auto targetFn = runtime->lookupFunction(0x16BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE40u; }
        if (ctx->pc != 0x16BE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016BE60_0x16be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BE40u; }
        if (ctx->pc != 0x16BE40u) { return; }
    }
    ctx->pc = 0x16BE40u;
label_16be40:
    // 0x16be40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16be40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16be44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16be44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16be48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16be48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16be4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16be4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16be50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16be50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16be54: 0x80599e0  j           func_166780
    ctx->pc = 0x16BE54u;
    ctx->pc = 0x16BE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16BE54u;
            // 0x16be58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166780_0x166780(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16BE5Cu;
    // 0x16be5c: 0x0  nop
    ctx->pc = 0x16be5cu;
    // NOP
}
