#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016B3B8
// Address: 0x16b3b8 - 0x16b418
void sub_0016B3B8_0x16b3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B3B8_0x16b3b8");
#endif

    switch (ctx->pc) {
        case 0x16b3ecu: goto label_16b3ec;
        case 0x16b3f8u: goto label_16b3f8;
        case 0x16b400u: goto label_16b400;
        default: break;
    }

    ctx->pc = 0x16b3b8u;

    // 0x16b3b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b3bc: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x16b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x16b3c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b3c4: 0x8c6376b0  lw          $v1, 0x76B0($v1)
    ctx->pc = 0x16b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30384)));
    // 0x16b3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3C8u;
            // 0x16b3cc: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B3D0u;
    // 0x16b3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b3d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b3d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16b3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16b3e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16b3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b3e4: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16B3E4u;
    SET_GPR_U32(ctx, 31, 0x16B3ECu);
    ctx->pc = 0x16B3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3E4u;
            // 0x16b3e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3ECu; }
        if (ctx->pc != 0x16B3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3ECu; }
        if (ctx->pc != 0x16B3ECu) { return; }
    }
    ctx->pc = 0x16B3ECu;
label_16b3ec:
    // 0x16b3ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16b3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3f0: 0xc05ad06  jal         func_16B418
    ctx->pc = 0x16B3F0u;
    SET_GPR_U32(ctx, 31, 0x16B3F8u);
    ctx->pc = 0x16B3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3F0u;
            // 0x16b3f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B418u;
    if (runtime->hasFunction(0x16B418u)) {
        auto targetFn = runtime->lookupFunction(0x16B418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3F8u; }
        if (ctx->pc != 0x16B3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B418_0x16b418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B3F8u; }
        if (ctx->pc != 0x16B3F8u) { return; }
    }
    ctx->pc = 0x16B3F8u;
label_16b3f8:
    // 0x16b3f8: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16B3F8u;
    SET_GPR_U32(ctx, 31, 0x16B400u);
    ctx->pc = 0x16B3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16B3F8u;
            // 0x16b3fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B400u; }
        if (ctx->pc != 0x16B400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B400u; }
        if (ctx->pc != 0x16B400u) { return; }
    }
    ctx->pc = 0x16B400u;
label_16b400:
    // 0x16b400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16b400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b404: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b408: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16b408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b40c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b410: 0x3e00008  jr          $ra
    ctx->pc = 0x16B410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16B410u;
            // 0x16b414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16B418u;
}
