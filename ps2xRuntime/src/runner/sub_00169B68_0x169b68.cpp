#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169B68
// Address: 0x169b68 - 0x169bd0
void sub_00169B68_0x169b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169B68_0x169b68");
#endif

    switch (ctx->pc) {
        case 0x169b94u: goto label_169b94;
        case 0x169ba8u: goto label_169ba8;
        case 0x169bb0u: goto label_169bb0;
        default: break;
    }

    ctx->pc = 0x169b68u;

    // 0x169b68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169b78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x169b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x169b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x169b80: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x169b80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x169b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x169b88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169b8c: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x169B8Cu;
    SET_GPR_U32(ctx, 31, 0x169B94u);
    ctx->pc = 0x169B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169B8Cu;
            // 0x169b90: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B94u; }
        if (ctx->pc != 0x169B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169B94u; }
        if (ctx->pc != 0x169B94u) { return; }
    }
    ctx->pc = 0x169B94u;
label_169b94:
    // 0x169b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x169b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169b9c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x169b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ba0: 0xc05a6f4  jal         func_169BD0
    ctx->pc = 0x169BA0u;
    SET_GPR_U32(ctx, 31, 0x169BA8u);
    ctx->pc = 0x169BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169BA0u;
            // 0x169ba4: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169BD0u;
    if (runtime->hasFunction(0x169BD0u)) {
        auto targetFn = runtime->lookupFunction(0x169BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BA8u; }
        if (ctx->pc != 0x169BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169BD0_0x169bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BA8u; }
        if (ctx->pc != 0x169BA8u) { return; }
    }
    ctx->pc = 0x169BA8u;
label_169ba8:
    // 0x169ba8: 0xc05adca  jal         func_16B728
    ctx->pc = 0x169BA8u;
    SET_GPR_U32(ctx, 31, 0x169BB0u);
    ctx->pc = 0x169BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169BA8u;
            // 0x169bac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BB0u; }
        if (ctx->pc != 0x169BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169BB0u; }
        if (ctx->pc != 0x169BB0u) { return; }
    }
    ctx->pc = 0x169BB0u;
label_169bb0:
    // 0x169bb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169bb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169bb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x169bb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169bc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x169bc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x169bc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x169BC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169BC8u;
            // 0x169bcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169BD0u;
}
