#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BF6A8
// Address: 0x1bf6a8 - 0x1bf748
void sub_001BF6A8_0x1bf6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF6A8_0x1bf6a8");
#endif

    switch (ctx->pc) {
        case 0x1bf6d0u: goto label_1bf6d0;
        case 0x1bf720u: goto label_1bf720;
        default: break;
    }

    ctx->pc = 0x1bf6a8u;

    // 0x1bf6a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf6ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bf6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bf6b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bf6b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6b4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1bf6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf6b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bf6bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bf6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bf6c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bf6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bf6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bf6c8: 0xc06fee4  jal         func_1BFB90
    ctx->pc = 0x1BF6C8u;
    SET_GPR_U32(ctx, 31, 0x1BF6D0u);
    ctx->pc = 0x1BF6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6C8u;
            // 0x1bf6cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB90u;
    if (runtime->hasFunction(0x1BFB90u)) {
        auto targetFn = runtime->lookupFunction(0x1BFB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6D0u; }
        if (ctx->pc != 0x1BF6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFB90_0x1bfb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF6D0u; }
        if (ctx->pc != 0x1BF6D0u) { return; }
    }
    ctx->pc = 0x1BF6D0u;
label_1bf6d0:
    // 0x1bf6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf6d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf6d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf6dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bf6dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bf6e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf6e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf6e8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1bf6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bf6ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bf6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf6f0: 0x806fde6  j           func_1BF798
    ctx->pc = 0x1BF6F0u;
    ctx->pc = 0x1BF6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF6F0u;
            // 0x1bf6f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF798u;
    {
        auto targetFn = runtime->lookupFunction(0x1BF798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BF6F8u;
    // 0x1bf6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf6fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bf6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bf700: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bf700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf704: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1bf704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bf708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bf70c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bf70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1bf710: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1bf710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf714: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1bf714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1bf718: 0xc06fee4  jal         func_1BFB90
    ctx->pc = 0x1BF718u;
    SET_GPR_U32(ctx, 31, 0x1BF720u);
    ctx->pc = 0x1BF71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF718u;
            // 0x1bf71c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB90u;
    if (runtime->hasFunction(0x1BFB90u)) {
        auto targetFn = runtime->lookupFunction(0x1BFB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF720u; }
        if (ctx->pc != 0x1BF720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFB90_0x1bfb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BF720u; }
        if (ctx->pc != 0x1BF720u) { return; }
    }
    ctx->pc = 0x1BF720u;
label_1bf720:
    // 0x1bf720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf728: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf72c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bf72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf730: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bf730u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf738: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1bf738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1bf73c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1bf73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bf740: 0x806fde6  j           func_1BF798
    ctx->pc = 0x1BF740u;
    ctx->pc = 0x1BF744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF740u;
            // 0x1bf744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF798u;
    {
        auto targetFn = runtime->lookupFunction(0x1BF798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BF748u;
}
